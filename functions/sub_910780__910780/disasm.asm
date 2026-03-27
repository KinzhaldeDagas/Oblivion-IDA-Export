0x910780: mov     al, [esp+arg_0]
0x910784: test    al, al
0x910786: mov     eax, [esp+arg_4]
0x91078A: jz      short loc_91079C
0x91078C: mov     dword ptr [eax+4], 6
0x910793: mov     dword ptr [eax], 30h ; '0'
0x910799: retn    8
0x91079C: mov     dword ptr [eax+4], 0
0x9107A3: mov     dword ptr [eax], 0
0x9107A9: retn    8
