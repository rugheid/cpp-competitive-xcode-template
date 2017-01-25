# C++ Competitive Programming Xcode Template
This repository implements a custom Xcode C++ template for competitive programming. It makes it easy to define input and expected output if you want to.

# Options
This template provides the option to add additional targets to read from an input file or write to an output file. The options are:

## None
This does not include any targets to handle input or output files. It just provides a starting point for your program.

## Input
This defines two targets. The normal target is the target without input and output file handling. A second target redirects the standard input to use an input file (`input.txt`). These two targets make it easy for you to choose between testing with manual input and input from an input file.

## Input and Output
This third option defines an additional target, next to the two targets from the input option. This third target redirects the standard output to a file called `output.txt`. In the end it runs the `diff` command on the `expected_output.txt` file and the generated `output.txt` file and leaves the output of the diff command in a file called `diff.txt`. To find the `diff.txt` file, you'll have to go the build directory of the target. You can do this by right-clicking on any of the products (in the Products group) and selecting `Show in Finder`.

## Adding your own files
If you want to drag a file into the Xcode project, instead of copying the contents to the `input.txt` file, you will have to add the file the `Copy Files` build phase. The file needs to be copied to the build directory in which the compiled program is ran.

# Google Code Jam Template
This template behaves as the `Input` type template, but it adds some code that's always used for Google Code Jam. It adds some common includes and the loop for the different cases.

# Google Hash Code Template
This template behaves as the `Input` type template, but it adds several input files to easily switch between inputs. Like discussed in `Adding you own files`, you have to include input files that you drag into the project in the `Copy Files` build phase. You can also copy the contents to the included input files.

# Installation
To install the template(s), simply move the encolsing directory to `~/Library/Developer/Xcode/Templates/Project Templates/Competitive/`. If it does not exist yet, you'll have to create it. The easiest way to keep the templates up to date is to clone this repository in that directory (so that the contents reside in the `Competitive` directory).
