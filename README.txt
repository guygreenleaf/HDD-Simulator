HDD Simulator


A project that simulates 5 HDDs. Fully simulates requests and services to each disk. Tracks time (in ms) at multiple intervals and outputs summary files for each disk as well as an overall summary.

Output files are generated and the program has been tested with multiple types of request input files. Nothing is written to std::out.

Can be compiled and ran in the following way:


Use this command:

g++ -std=c++17 main.cpp SimulationFiles/Disk.cpp EventDriver/EventQueue.cpp EventDriver/EventNode.cpp EventDriver/DiskDoneEvent.cpp EventDriver/TimerEvent.hpp CommonFiles/Request.cpp FCFS_Queue/FCFSQueue.cpp FCFS_Queue/FCFSQueueNode.cpp ST_Queue/STQueue.cpp ST_Queue/STQueueNode.cpp LookUp_Queue/LookUpQueue.cpp LookUp_Queue/LookUpQueueNode.cpp CLookUp_Queue/CLookUpQueue.cpp CLookUp_Queue/CLookUpQueueNode.cpp PickUp_Queue/PickUpQueueNode.cpp PickUp_Queue/PickUpQueue.cpp EventDriver/QueueReport.cpp

to generate an a.out file.

You can then run this program by passing an input file. An input file contains 3 numbers representing time into the system, track, and sector of each request. An example has been provided in this repo:

./a.out sim.txt

Reports are generated in the DiskSim directory.




