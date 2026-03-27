0x9138A0: mov     al, [esp+arg_0]
0x9138A4: test    al, al
0x9138A6: mov     eax, [esp+arg_4]
0x9138AA: jz      short loc_9138BC
0x9138AC: mov     dword ptr [eax+4], 5
0x9138B3: mov     dword ptr [eax], 28h ; '('
0x9138B9: retn    8
0x9138BC: mov     dword ptr [eax+4], 0
0x9138C3: mov     dword ptr [eax], 0
0x9138C9: retn    8
