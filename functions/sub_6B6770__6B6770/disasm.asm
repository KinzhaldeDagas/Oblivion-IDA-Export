0x6B6770: push    esi
0x6B6771: mov     esi, ecx
0x6B6773: mov     eax, [esi+4Ch]
0x6B6776: test    eax, eax
0x6B6778: push    edi
0x6B6779: jz      short loc_6B6784
0x6B677B: push    eax
0x6B677C: call    FormHeapFree
0x6B6781: add     esp, 4
0x6B6784: mov     edi, [esp+8+arg_0]
0x6B6788: mov     eax, edi
0x6B678A: lea     edx, [eax+1]
0x6B678D: lea     ecx, [ecx+0]
0x6B6790: mov     cl, [eax]
0x6B6792: add     eax, 1
0x6B6795: test    cl, cl
0x6B6797: jnz     short loc_6B6790
0x6B6799: sub     eax, edx
0x6B679B: add     eax, 1
0x6B679E: push    eax; Size
0x6B679F: call    FormHeapAlloc
0x6B67A4: add     esp, 4
0x6B67A7: mov     ecx, edi
0x6B67A9: pop     edi
0x6B67AA: mov     [esi+4Ch], eax
0x6B67AD: mov     edx, eax
0x6B67AF: pop     esi
0x6B67B0: mov     al, [ecx]
0x6B67B2: mov     [edx], al
0x6B67B4: add     ecx, 1
0x6B67B7: add     edx, 1
0x6B67BA: test    al, al
0x6B67BC: jnz     short loc_6B67B0
0x6B67BE: retn    4
