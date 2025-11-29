#!/bin/bash

# Function to process each file
doit() {
   realName=$(basename "$1")  # Extract the file name from the full path
   echo "Processing file: $realName"  # Print the current file being processed

   # Ensure we use the correct path to the 'pathfinder-cli' executable
   cmake_build_release_dir="cmake-buld-release"  # Path to the build directory
   requests_dir="requests"  # Path to the requests directory
   results_dir="results"  # Path to the results directory

   # Call pathfinder-cli with full paths
   "$cmake_build_release_dir/cli/pathfinder-cli" "$requests_dir/$realName" "$results_dir/$realName.pfres"
}

export -f doit  # Export the function for use with parallel

# Run the tasks in parallel, retry on failure, and limit to 8 jobs at a time
parallel --joblog calc.log --retry-failed -j8 doit ::: requests/*.pfreq