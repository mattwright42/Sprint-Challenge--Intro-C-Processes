#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line

  // Open directory
  DIR *dir;
  dir = opendir();

  if (!dir)
  {
    printf("Error: Could not open directory.");
    exit(1);
  }

  // Repeatly read and print entries
  readdir();

  // Close directory
  closedir(dir);

  return 0;
}