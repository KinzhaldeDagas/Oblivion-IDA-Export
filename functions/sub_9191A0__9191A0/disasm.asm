0x9191A0: lea     eax, [ecx-20h]
0x9191A3: test    eax, eax
0x9191A5: jz      short loc_9191B7
0x9191A7: lea     eax, [ecx+8]
0x9191AA: mov     ecx, [esp+arg_0]
0x9191AE: push    eax
0x9191AF: call    sub_898A80
0x9191B4: retn    4
0x9191B7: mov     ecx, [esp+arg_0]
0x9191BB: xor     eax, eax
0x9191BD: push    eax
0x9191BE: call    sub_898A80
0x9191C3: retn    4
