0x990C52: fstp    tbyte ptr [ebp-9Eh]
0x990C58: fld     tbyte ptr [ebp-9Eh]
0x990C5E: test    byte ptr [ebp-97h], 40h
0x990C65: jz      short _tossnan1
0x990C67: mov     byte ptr [ebp-90h], 7
0x990C6E: retn
0x990C6F: mov     byte ptr [ebp-90h], 1
0x990C76: fadd    dbl_B319C4
0x990C7C: retn
