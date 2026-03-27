0x7733D0: push    ebp
0x7733D1: push    esi
0x7733D2: mov     esi, [esp+8+arg_0]
0x7733D6: push    edi
0x7733D7: xor     edi, edi
0x7733D9: cmp     esi, edi
0x7733DB: mov     ebp, ecx
0x7733DD: mov     [ebp+4], esi
0x7733E0: mov     [ebp+8], edi
0x7733E3: jbe     short loc_773426
0x7733E5: xor     ecx, ecx
0x7733E7: mov     eax, esi
0x7733E9: mov     edx, 0B8h ; '¸'
0x7733EE: mul     edx
0x7733F0: seto    cl
0x7733F3: neg     ecx
0x7733F5: or      ecx, eax
0x7733F7: xor     eax, eax
0x7733F9: add     ecx, 4
0x7733FC: setb    al
0x7733FF: neg     eax
0x773401: or      eax, ecx
0x773403: push    eax; Size
0x773404: call    FormHeapAlloc
0x773409: add     esp, 4
0x77340C: cmp     eax, edi
0x77340E: jz      short loc_773426
0x773410: push    offset sub_772F30
0x773415: push    esi
0x773416: lea     edi, [eax+4]
0x773419: push    0B8h ; '¸'
0x77341E: push    edi
0x77341F: mov     [eax], esi
0x773421: call    sub_401080
0x773426: mov     [ebp+0], edi
0x773429: pop     edi
0x77342A: pop     esi
0x77342B: mov     eax, ebp
0x77342D: pop     ebp
0x77342E: retn    4
