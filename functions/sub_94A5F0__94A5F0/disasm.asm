0x94A5F0: mov     ecx, ds:0BA7D98h
0x94A5F6: mov     eax, [ecx]
0x94A5F8: push    15h
0x94A5FA: push    14h
0x94A5FC: call    dword ptr [eax+10h]
0x94A5FF: mov     word ptr [eax+4], 14h
0x94A605: mov     word ptr [eax+6], 1
0x94A60B: mov     dword ptr [eax], offset off_AA2BD0
0x94A611: xor     ecx, ecx
0x94A613: mov     [eax+8], ecx
0x94A616: mov     [eax+0Ch], ecx
0x94A619: mov     dword ptr [eax+10h], 80000000h
0x94A620: retn
