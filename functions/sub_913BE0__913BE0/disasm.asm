0x913BE0: mov     al, [esp+arg_0]
0x913BE4: test    al, al
0x913BE6: mov     eax, [esp+arg_4]
0x913BEA: jz      short loc_913BFC
0x913BEC: mov     dword ptr [eax+4], 3
0x913BF3: mov     dword ptr [eax], 18h
0x913BF9: retn    8
0x913BFC: mov     dword ptr [eax+4], 0
0x913C03: mov     dword ptr [eax], 0
0x913C09: retn    8
