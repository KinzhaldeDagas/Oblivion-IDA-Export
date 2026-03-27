0x8FAA00: mov     ecx, ds:0BA7D98h
0x8FAA06: mov     eax, [ecx]
0x8FAA08: push    1Ch
0x8FAA0A: push    10h
0x8FAA0C: call    dword ptr [eax+10h]
0x8FAA0F: mov     ecx, [esp+arg_C]
0x8FAA13: mov     word ptr [eax+4], 10h
0x8FAA19: mov     word ptr [eax+6], 1
0x8FAA1F: mov     [eax+8], ecx
0x8FAA22: mov     word ptr [eax+0Ch], 0FFFFh
0x8FAA28: mov     dword ptr [eax], offset off_A9B7F8
0x8FAA2E: retn
