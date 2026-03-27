0x91C470: push    ebx
0x91C471: push    esi
0x91C472: mov     esi, ecx
0x91C474: test    esi, esi
0x91C476: push    edi
0x91C477: jz      short loc_91C47E
0x91C479: lea     eax, [esi+28h]
0x91C47C: jmp     short loc_91C480
0x91C47E: xor     eax, eax
0x91C480: mov     edi, [esp+0Ch+arg_0]
0x91C484: push    eax
0x91C485: mov     eax, [esi+30h]
0x91C488: mov     ecx, [eax+edi*4]
0x91C48B: mov     ecx, [ecx]
0x91C48D: call    sub_8989E0
0x91C492: mov     eax, [esi+30h]
0x91C495: mov     ecx, [eax+edi*4]
0x91C498: mov     ecx, [ecx]
0x91C49A: lea     edx, [esi+2Ch]
0x91C49D: push    edx
0x91C49E: call    sub_898A80
0x91C4A3: push    edi
0x91C4A4: mov     ecx, esi
0x91C4A6: call    sub_91BEF0
0x91C4AB: mov     edx, [esi+30h]
0x91C4AE: mov     ebx, [edx+edi*4]
0x91C4B1: test    ebx, ebx
0x91C4B3: jz      short loc_91C500
0x91C4B5: mov     eax, [ebx+0Ch]
0x91C4B8: test    eax, eax
0x91C4BA: js      short loc_91C4F0
0x91C4BC: mov     ecx, ds:0BA9DE4h
0x91C4C2: mov     edx, large fs:2Ch
0x91C4C9: mov     ecx, [edx+ecx*4]
0x91C4CC: mov     ecx, [ecx+19Ch]
0x91C4D2: test    ecx, ecx
0x91C4D4: jnz     short loc_91C4DC
0x91C4D6: mov     ecx, ds:0BA7D9Ch
0x91C4DC: mov     edx, [ebx+4]
0x91C4DF: and     eax, 3FFFFFFFh
0x91C4E4: push    14h
0x91C4E6: shl     eax, 2
0x91C4E9: push    eax
0x91C4EA: push    edx
0x91C4EB: call    sub_8A75D0
0x91C4F0: mov     ecx, ds:0BA7D98h
0x91C4F6: mov     eax, [ecx]
0x91C4F8: push    32h ; '2'
0x91C4FA: push    10h
0x91C4FC: push    ebx
0x91C4FD: call    dword ptr [eax+14h]
0x91C500: mov     eax, [esi+34h]
0x91C503: dec     eax
0x91C504: mov     [esi+34h], eax
0x91C507: mov     esi, [esi+30h]
0x91C50A: mov     ecx, [esi+eax*4]
0x91C50D: mov     [esi+edi*4], ecx
0x91C510: pop     edi
0x91C511: pop     esi
0x91C512: pop     ebx
0x91C513: retn    4
