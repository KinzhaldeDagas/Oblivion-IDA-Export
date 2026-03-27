0x70E260: push    esi
0x70E261: mov     esi, [esp+4+arg_0]
0x70E265: mov     eax, [esi+4]
0x70E268: cmp     eax, [ecx+4]
0x70E26B: jnz     short loc_70E297
0x70E26D: mov     dl, [esi]
0x70E26F: cmp     dl, [ecx]
0x70E271: jnz     short loc_70E297
0x70E273: mov     eax, [esi+8]
0x70E276: cmp     eax, [ecx+8]
0x70E279: jnz     short loc_70E297
0x70E27B: mov     dl, [esi+1]
0x70E27E: cmp     dl, [ecx+1]
0x70E281: jnz     short loc_70E297
0x70E283: mov     edx, [esi+0Ch]
0x70E286: mov     eax, [ecx+0Ch]
0x70E289: cmp     edx, eax
0x70E28B: jz      short loc_70E29D
0x70E28D: cmp     eax, 0FFFFFFFFh
0x70E290: jz      short loc_70E29D
0x70E292: cmp     edx, 0FFFFFFFFh
0x70E295: jz      short loc_70E29D
0x70E297: mov     al, 1
0x70E299: pop     esi
0x70E29A: retn    4
0x70E29D: push    edi
0x70E29E: xor     edi, edi
0x70E2A0: lea     edx, [esi+1Ch]
0x70E2A3: lea     eax, [ecx+14h]
0x70E2A6: sub     esi, ecx
0x70E2A8: mov     ecx, [esi+eax]
0x70E2AB: cmp     ecx, [eax]
0x70E2AD: jnz     short loc_70E2DB
0x70E2AF: mov     ecx, [edx-4]
0x70E2B2: cmp     ecx, [eax+4]
0x70E2B5: jnz     short loc_70E2DB
0x70E2B7: mov     cl, [edx]
0x70E2B9: cmp     cl, [eax+8]
0x70E2BC: jnz     short loc_70E2DB
0x70E2BE: mov     cl, [edx+1]
0x70E2C1: cmp     cl, [eax+9]
0x70E2C4: jnz     short loc_70E2DB
0x70E2C6: add     edi, 1
0x70E2C9: add     edx, 0Ch
0x70E2CC: add     eax, 0Ch
0x70E2CF: cmp     edi, 4
0x70E2D2: jl      short loc_70E2A8
0x70E2D4: pop     edi
0x70E2D5: xor     al, al
0x70E2D7: pop     esi
0x70E2D8: retn    4
0x70E2DB: pop     edi
0x70E2DC: mov     al, 1
0x70E2DE: pop     esi
0x70E2DF: retn    4
