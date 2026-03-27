0x497270: push    esi
0x497271: mov     esi, [esp+4+arg_0]
0x497275: test    esi, esi
0x497277: jnz     short loc_49727F
0x497279: mov     al, 1
0x49727B: pop     esi
0x49727C: retn    4
0x49727F: mov     al, [ecx]
0x497281: cmp     al, [esi]
0x497283: jnz     short loc_497279
0x497285: test    al, al
0x497287: jz      loc_497330
0x49728D: mov     ecx, [ecx+4]
0x497290: movzx   edx, al
0x497293: lea     eax, ds:0[edx*8]
0x49729A: sub     eax, edx
0x49729C: mov     edx, [esi+4]
0x49729F: add     eax, eax
0x4972A1: add     eax, eax
0x4972A3: cmp     eax, 4
0x4972A6: push    edi
0x4972A7: jb      short loc_4972C4
0x4972A9: lea     esp, [esp+0]
0x4972B0: mov     esi, [ecx]
0x4972B2: cmp     esi, [edx]
0x4972B4: jnz     short loc_4972C8
0x4972B6: sub     eax, 4
0x4972B9: add     edx, 4
0x4972BC: add     ecx, 4
0x4972BF: cmp     eax, 4
0x4972C2: jnb     short loc_4972B0
0x4972C4: test    eax, eax
0x4972C6: jz      short loc_497325
0x4972C8: movzx   esi, byte ptr [ecx]
0x4972CB: movzx   edi, byte ptr [edx]
0x4972CE: sub     esi, edi
0x4972D0: jnz     short loc_497317
0x4972D2: sub     eax, 1
0x4972D5: add     edx, 1
0x4972D8: add     ecx, 1
0x4972DB: test    eax, eax
0x4972DD: jz      short loc_497325
0x4972DF: movzx   esi, byte ptr [ecx]
0x4972E2: movzx   edi, byte ptr [edx]
0x4972E5: sub     esi, edi
0x4972E7: jnz     short loc_497317
0x4972E9: sub     eax, 1
0x4972EC: add     edx, 1
0x4972EF: add     ecx, 1
0x4972F2: test    eax, eax
0x4972F4: jz      short loc_497325
0x4972F6: movzx   esi, byte ptr [ecx]
0x4972F9: movzx   edi, byte ptr [edx]
0x4972FC: sub     esi, edi
0x4972FE: jnz     short loc_497317
0x497300: sub     eax, 1
0x497303: add     edx, 1
0x497306: add     ecx, 1
0x497309: test    eax, eax
0x49730B: jz      short loc_497325
0x49730D: movzx   esi, byte ptr [ecx]
0x497310: movzx   eax, byte ptr [edx]
0x497313: sub     esi, eax
0x497315: jz      short loc_497325
0x497317: test    esi, esi
0x497319: mov     eax, 1
0x49731E: jg      short loc_497327
0x497320: or      eax, 0FFFFFFFFh
0x497323: jmp     short loc_497327
0x497325: xor     eax, eax
0x497327: test    eax, eax
0x497329: pop     edi
0x49732A: jnz     loc_497279
0x497330: xor     al, al
0x497332: pop     esi
0x497333: retn    4
