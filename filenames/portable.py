#!/usr/bin/env python
import os
thefile = open(os.path.join("Data","TheFile.abc"))

for line in thefile:
	print(line)
