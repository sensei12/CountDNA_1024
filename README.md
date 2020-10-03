# CountDNA accelerator
Frequency count for DNA nucleotides

This repository contains the IP to count the number of adenine (A), cytosine(C), guanine(G) and thymine(T) nucleotides in the DNA reference string of length 1024. 

The python notebook contains both software implementation and hardware (IP driver) implementation. 

Result shows that hardware implementation is at least 30x faster than the software implementation.

Below is the Vivado block design diagram.  Note that *counting* is a hierarchical block.

![system design](/images/CDNAsys.png "CountDNA vivado design")

The *counting* hierarchical block contains the CountDNA IP and the DMA IP as shown below.
![IP block](/images/CDNAIP.png "IP block vivado design")

# Quick Start

Open a terminal on your PYNQ board and run:

    sudo pip3 install --upgrade git+https://github.com/sensei12/CountDNA_1024.git
    or
    sudo pip3 install --upgrade .


Currently this repository is compatible with [PYNQ image v2.5](https://http://www.pynq.io/board.html).

# Note

Only PYNQ-Z2 is supported by now. Migration to other boards is welcomed.
