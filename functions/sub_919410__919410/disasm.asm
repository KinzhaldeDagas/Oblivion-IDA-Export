0x919410: mov     ecx, ds:0BA7D98h
0x919416: mov     eax, [ecx]
0x919418: push    32h ; '2'
0x91941A: push    48h ; 'H'
0x91941C: call    dword ptr [eax+10h]
0x91941F: mov     ecx, [esp+arg_0]
0x919423: push    ecx
0x919424: mov     ecx, eax
0x919426: mov     word ptr [eax+4], 48h ; 'H'
0x91942C: call    sub_9191D0
0x919431: test    eax, eax
0x919433: jz      short loc_919439
0x919435: add     eax, 8
0x919438: retn
0x919439: xor     eax, eax
0x91943B: retn
