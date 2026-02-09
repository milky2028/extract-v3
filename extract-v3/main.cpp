#include <archive.h>
#include <archive_entry.h>
#include <stdio.h>
#include <iostream>
#include <string>

const char* bool_to_string(bool b) {
  return b ? "true" : "false";
}

bool extract_book(std::string file_path) {
  auto return_code = ARCHIVE_OK;
  auto working_archive = archive_read_new();

  //  archive_read_support_filter_all(working_archive);
  //
  //  archive_read_support_format_rar5(working_archive);
  //  archive_read_support_format_rar(working_archive);
  //  archive_read_support_format_zip(working_archive);
  //  archive_read_support_format_zip_seekable(working_archive);
  //  archive_read_support_format_zip_streamable(working_archive);
  //
  //  return_code = archive_read_open_filename(working_archive, file_path.c_str(), 10240);
  //  if (return_code != ARCHIVE_OK) {
  //    return false;
  //  }
  //
  //  archive_read_free(working_archive);
  //  return_code = remove(file_path.c_str());
  //  if (return_code != ARCHIVE_OK) {
  //    return false;
  //  }

  return true;
}

int main(int argc, const char* argv[]) {
  // setup
  mkdir("/Users/tgross/Documents/GitHub/extract-v3/tmp", 0777);

  auto res = extract_book("/Users/tgross/Documents/GitHub/extract-v3/test/Uncanny X-Men Omnibus v01.cbz");
  printf("extraction success: %s\n", bool_to_string(res));
}
