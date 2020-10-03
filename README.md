# CountDNA_1024
Count DNA nucleotides
---
This repository contains the IP to count the number of adenine (A), cytosine(C), guanine(G) and thymine(T) nucleotides in the DNA reference string of length 1024. 

The python notebook contains both software implementation and hardware (IP driver) implementation. 

Result shows that hardware implementation is at least 30x faster than the software implementation.

#Quick Start

Open a terminal on your PYNQ board and run:

>sudo pip3 install --upgrade git+https://github.com/sensei12/CountNDA_1024/pynq_x_filter.git

>or

>sudo pip3 install --upgrade .


Currently this repository is compatible with PYNQ image v2.5.

# Note

Only PYNQ-Z2 is supported by now. Migration to other boards is welcomed.
