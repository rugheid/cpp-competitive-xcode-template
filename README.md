# C++ Competitive Programming Xcode Template
This repository implements a custom Xcode C++ template for competitive programming. It makes it easy to define input and expected output if you want to.

# Templates

## Simple Template
The simple template defines two targets. The normal target just runs as a normal command line tool. A second target redirects the standard input to use an input file (`input.txt`). These two targets make it easy for you to choose between testing with manual input and input from an input file.

## Expected Output Template
__You can find this template in the `output-version` branch.__
The second template defines an additional target, next to the two targets from the simple template. This third target redirects the standard output to a file called `output.txt`. In the end it runs the `diff` command on the expected_output.txt file and the generated `output.txt` file.

# Installation
To install the template(s), simply move the encolsing directory to `~/Library/Developer/Xcode/Templates/Custom/`. If it does not exist yet, you'll have to create it. The easiest way to keep the templates up to date is to clone this repository in that directory.

# Possible Improvements
- I plan to merge the two templates into one template. I didn't do this in the first place because the preprocessor statements make the files less readable. It is possible to use options however. In the Apple templates for example you can choose the programming language to use.
- I also plan to write a little script to make the installation easier.
