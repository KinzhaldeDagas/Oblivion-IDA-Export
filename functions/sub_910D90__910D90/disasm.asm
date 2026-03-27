0x910D90: mov     al, [esp+arg_0]
0x910D94: test    al, al
0x910D96: mov     eax, [esp+arg_4]
0x910D9A: jz      short loc_910DAC
0x910D9C: mov     dword ptr [eax+4], 1
0x910DA3: mov     dword ptr [eax], 8
0x910DA9: retn    8
0x910DAC: mov     dword ptr [eax+4], 0
0x910DB3: mov     dword ptr [eax], 0
0x910DB9: retn    8
