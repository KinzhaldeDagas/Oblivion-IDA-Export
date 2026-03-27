0x91F6B0: mov     ecx, ds:0BA7D98h
0x91F6B6: mov     eax, [ecx]
0x91F6B8: push    15h
0x91F6BA: push    1Ch
0x91F6BC: call    dword ptr [eax+10h]
0x91F6BF: xor     ecx, ecx
0x91F6C1: mov     word ptr [eax+4], 1Ch
0x91F6C7: mov     word ptr [eax+6], 1
0x91F6CD: mov     dword ptr [eax], offset off_A9DD5C
0x91F6D3: mov     [eax+10h], ecx
0x91F6D6: mov     [eax+14h], ecx
0x91F6D9: mov     dword ptr [eax+18h], 80000000h
0x91F6E0: mov     [eax+8], ecx
0x91F6E3: mov     [eax+0Ch], ecx
0x91F6E6: retn
