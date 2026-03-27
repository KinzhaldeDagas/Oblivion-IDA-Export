0x8FA9D0: mov     ecx, ds:0BA7D98h
0x8FA9D6: mov     eax, [ecx]
0x8FA9D8: push    1Ch
0x8FA9DA: push    10h
0x8FA9DC: call    dword ptr [eax+10h]
0x8FA9DF: mov     ecx, [esp+arg_C]
0x8FA9E3: mov     word ptr [eax+4], 10h
0x8FA9E9: mov     word ptr [eax+6], 1
0x8FA9EF: mov     [eax+8], ecx
0x8FA9F2: mov     dword ptr [eax], offset off_A9B7C4
0x8FA9F8: mov     word ptr [eax+0Ch], 0FFFFh
0x8FA9FE: retn
