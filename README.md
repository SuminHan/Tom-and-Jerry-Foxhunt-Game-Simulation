# Tom-and-Jerry Game
Implementation of virtual gears required for the sport called the Foxhunt game where ‘hounds’ hunt down ‘a fox’ by observing the virtual signal calculated from a signal simulation using real GPS and Map data using mobile smartphones and multi-core processing server.

## Introduction
![alt tag](introduction.jpg)

## Documents
* [2017/03/20] - [Idea pitching]([2017.3.20]_idea_pitching.pdf)

## Installation
### OSM crawling

Install [BeautifulSoup](https://www.crummy.com/software/BeautifulSoup/bs4/doc/#installing-beautiful-soup).

    $ pip install beautifulsoup4

Export [OpenStreetMap](http://www.openstreetmap.org/export) data that will be used.

Then you can get the results: (e.g.)

	N1
	2325103531 36.3743666 127.3651685
	2325103532 36.3740834 127.3651743
	2325103536 36.3740856 127.3653625
	2325103535 36.3740132 127.3653624
	2325103534 36.3740139 127.3662224
	2325103533 36.3743676 127.3662207
	4627616337 36.3743663 127.3656028
	2325103531 36.3743666 127.3651685

### [Open MPI](https://www.open-mpi.org/)
We are using OpenCL which is a open source parallel computing environment.
	
### [Unity 3D](https://unity3d.com/)
In this project, we are using [reinterpret](https://github.com/reinterpretcat/utymap/)'s demo code. Make sure to install correctly. You can also run this demo code on Android.

### OpenCL
OpenCL should be based on your graphics processing unit (GPU). (e.g. AMD, NVIDIA)