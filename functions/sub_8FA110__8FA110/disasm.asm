0x8FA110: mov     ecx, ds:0BA7D98h
0x8FA116: mov     eax, [ecx]
0x8FA118: push    1Ch
0x8FA11A: push    14h
0x8FA11C: call    dword ptr [eax+10h]
0x8FA11F: mov     ecx, [esp+arg_C]
0x8FA123: mov     [eax+8], ecx
0x8FA126: mov     ecx, 0FFFFh
0x8FA12B: mov     word ptr [eax+4], 14h
0x8FA131: mov     word ptr [eax+6], 1
0x8FA137: mov     dword ptr [eax], offset off_A9B77C
0x8FA13D: mov     [eax+0Ch], cx
0x8FA141: mov     [eax+0Eh], cx
0x8FA145: mov     [eax+10h], cx
0x8FA149: retn
