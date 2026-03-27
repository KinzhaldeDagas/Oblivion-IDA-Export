0x700200: push    ebx
0x700201: mov     ebx, [esp+4+a2]
0x700205: push    edi
0x700206: push    ebx; a2
0x700207: mov     edi, ecx
0x700209: call    sub_700670
0x70020E: test    al, al
0x700210: jnz     short loc_700219
0x700212: pop     edi
0x700213: xor     al, al
0x700215: pop     ebx
0x700216: retn    4
0x700219: mov     eax, [edi+8]
0x70021C: test    eax, eax
0x70021E: jz      short loc_70022A
0x700220: cmp     dword ptr [ebx+8], 0
0x700224: jz      short loc_700212
0x700226: test    eax, eax
0x700228: jnz     short loc_700234
0x70022A: cmp     dword ptr [ebx+8], 0
0x70022E: jnz     short loc_700212
0x700230: test    eax, eax
0x700232: jz      short loc_700260
0x700234: mov     ecx, [ebx+8]
0x700237: mov     dl, [eax]
0x700239: cmp     dl, [ecx]
0x70023B: jnz     short loc_700257
0x70023D: test    dl, dl
0x70023F: jz      short loc_700253
0x700241: mov     dl, [eax+1]
0x700244: cmp     dl, [ecx+1]
0x700247: jnz     short loc_700257
0x700249: add     eax, 2
0x70024C: add     ecx, 2
0x70024F: test    dl, dl
0x700251: jnz     short loc_700237
0x700253: xor     eax, eax
0x700255: jmp     short loc_70025C
0x700257: sbb     eax, eax
0x700259: sbb     eax, 0FFFFFFFFh
0x70025C: test    eax, eax
0x70025E: jnz     short loc_700212
0x700260: movzx   eax, word ptr [edi+14h]
0x700264: cmp     ax, [ebx+14h]
0x700268: jnz     short loc_700212
0x70026A: push    esi
0x70026B: xor     esi, esi
0x70026D: test    ax, ax
0x700270: jbe     short loc_70029A
0x700272: mov     ecx, [edi+10h]
0x700275: mov     edx, [ebx+10h]
0x700278: movzx   eax, si
0x70027B: add     eax, eax
0x70027D: add     eax, eax
0x70027F: mov     ecx, [eax+ecx]
0x700282: mov     eax, [eax+edx]
0x700285: mov     edx, [ecx]
0x700287: push    eax
0x700288: mov     eax, [edx+2Ch]
0x70028B: call    eax
0x70028D: test    al, al
0x70028F: jz      short loc_7002EC
0x700291: add     esi, 1
0x700294: cmp     si, [edi+14h]
0x700298: jb      short loc_700272
0x70029A: mov     esi, [edi+0Ch]
0x70029D: test    esi, esi
0x70029F: mov     edi, [ebx+0Ch]
0x7002A2: jz      short loc_7002AF
0x7002A4: mov     ecx, esi
0x7002A6: call    sub_715B20
0x7002AB: mov     ebx, eax
0x7002AD: jmp     short loc_7002B1
0x7002AF: xor     ebx, ebx
0x7002B1: test    edi, edi
0x7002B3: jz      short loc_7002BE
0x7002B5: mov     ecx, edi
0x7002B7: call    sub_715B20
0x7002BC: jmp     short loc_7002C0
0x7002BE: xor     eax, eax
0x7002C0: cmp     ebx, eax
0x7002C2: jnz     short loc_7002EC
0x7002C4: test    esi, esi
0x7002C6: jz      short loc_7002E4
0x7002C8: test    edi, edi
0x7002CA: jz      short loc_7002E4
0x7002CC: mov     edx, [esi]
0x7002CE: mov     eax, [edx+2Ch]
0x7002D1: push    edi
0x7002D2: mov     ecx, esi
0x7002D4: call    eax
0x7002D6: test    al, al
0x7002D8: jz      short loc_7002EC
0x7002DA: mov     esi, [esi+34h]
0x7002DD: test    esi, esi
0x7002DF: mov     edi, [edi+34h]
0x7002E2: jnz     short loc_7002C8
0x7002E4: pop     esi
0x7002E5: pop     edi
0x7002E6: mov     al, 1
0x7002E8: pop     ebx
0x7002E9: retn    4
0x7002EC: pop     esi
0x7002ED: pop     edi
0x7002EE: xor     al, al
0x7002F0: pop     ebx
0x7002F1: retn    4
