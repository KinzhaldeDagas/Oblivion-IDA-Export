0x67EDA0: fldz; Verified resets graph-node scratch state: clears F/G/H at +0/+4/+8, predecessor at +0x0C, and masks flags at +0x10 with 0x68, preserving bits 0x08/0x20/0x40 while clearing the other transient bits.
0x67EDA2: and     byte ptr [ecx+10h], 68h
0x67EDA6: fst     dword ptr [ecx]
0x67EDA8: mov     dword ptr [ecx+0Ch], 0
0x67EDAF: fst     dword ptr [ecx+4]
0x67EDB2: fstp    dword ptr [ecx+8]
0x67EDB5: retn
