0x67ECC0: mov     al, [ecx+10h]; Verified returns stateFlags bit 0x01; graph searches use it to avoid inserting a node into the open list more than once.
0x67ECC3: and     al, 1
0x67ECC5: retn
