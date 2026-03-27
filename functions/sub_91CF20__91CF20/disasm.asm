0x91CF20: mov     ecx, ds:0BA7D98h
0x91CF26: mov     eax, [ecx]
0x91CF28: push    15h
0x91CF2A: push    14h
0x91CF2C: call    dword ptr [eax+10h]
0x91CF2F: mov     word ptr [eax+4], 14h
0x91CF35: mov     word ptr [eax+6], 1
0x91CF3B: mov     dword ptr [eax], offset off_A9D6C0
0x91CF41: xor     ecx, ecx
0x91CF43: mov     [eax+8], ecx
0x91CF46: mov     [eax+0Ch], ecx
0x91CF49: mov     dword ptr [eax+10h], 80000000h
0x91CF50: retn
