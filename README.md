# SENG330_Assign2
Assignment 2 for SENG 330, writing Prototype Design Pattern example in C++ and creating framework


Purpose:
	This project is to experiment with utilizing code support tools such as Doxygen for documentation, Google Testing Framework for testing and Protocol Buffers for serializing data, and Git for version control. The code that is build around this is a simple implementation of the Prototype design pattern using C++. The scenario of a exercise gym has continued over from Assignment 1, providing the context for the code in this assignment.

What has been accomplished:
	-A C++ implementation of the Prototype design pattern has been written and compiles.
	-The implementation has been documented with Doxygen supported comments and the corresponding documentation has been produced
	-This has all been controlled through a Github repository, with commits for significant milestones in the project process
	-Introduction material and installation/compilation instructions for a Windows OS are contained in this file

What has not been accomplished:
	-Neither Google Protocol Buffers nor the Google Testing Frameworks have been employed for this project
	-Installation and set up issues of the two tools pushed the other components forward in priority and time did not allow for either to be employed

Installation Instructions:
	The first step is to either clone or download the Github repository to your computer, you may download all files packaged together as a in .zip format directly from the repository page or you can clone the repository to a Github desktop application.
		-Github Desktop can be found here with its own set of instructions included: https://desktop.github.com/ 

	A build of the code has already been included inside the Github repository
	
	If you want to rebuild the code you may follow these instructions:
		-Ensure you have Microsoft's Visual Studio 2015 installed, and along with it the Visual Studio ++ package.
			-Visual Studio 2015 can be found here: https://www.visualstudio.com/en-us/products/vs-2015-product-editions.aspx

		-With Visual Studio set up you may begin building the project
		-Open the SENG330_Assign2 Visual Studio Project
		-This will launch Visual Studio and open the project
		-Next click on the Build option on the top tool bar
		-Then select build solution

		-This will create a Debug folder wherever you had the folder containing the project files
		-Inside the Debug folder you will find the SENG330_Assign2 application executable
		-Simply launch that executable and the application will run