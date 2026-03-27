0x77FC00: mov     edx, [esp+arg_0]
0x77FC04: mov     dl, [edx+18h]
0x77FC07: mov     eax, [ecx]
0x77FC09: mov     eax, [eax+64h]
0x77FC0C: and     dl, 1
0x77FC0F: neg     dl
0x77FC11: push    0
0x77FC13: sbb     edx, edx
0x77FC15: neg     edx
0x77FC17: add     edx, 1
0x77FC1A: push    edx
0x77FC1B: push    9
0x77FC1D: call    eax
0x77FC1F: retn    4
