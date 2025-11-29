file(REMOVE_RECURSE
  "libNbtTestData.a"
  "libNbtTestData.pdb"
  "testfiles/bigtest.nbt.obj"
  "testfiles/bigtest.zlib.obj"
  "testfiles/bigtest_corrupt.nbt.obj"
  "testfiles/bigtest_eof.nbt.obj"
  "testfiles/bigtest_uncompr.obj"
  "testfiles/errortest_eof1.obj"
  "testfiles/errortest_eof2.obj"
  "testfiles/errortest_neg_length.obj"
  "testfiles/errortest_noend.obj"
  "testfiles/littletest_uncompr.obj"
  "testfiles/toplevel_string.obj"
  "testfiles/trailing_data.zlib.obj"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/NbtTestData.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
