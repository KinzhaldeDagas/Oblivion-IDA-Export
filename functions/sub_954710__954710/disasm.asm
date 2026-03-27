0x954710: mov     edx, [esp+arg_0]
0x954714: mov     eax, [edx+28h]
0x954717: push    esi
0x954718: sub     eax, [edx+24h]
0x95471B: mov     [ecx+38h], eax
0x95471E: mov     eax, [edx+2Ch]
0x954721: mov     [ecx+3Ch], eax
0x954724: mov     eax, [edx+2Ch]
0x954727: xor     esi, esi
0x954729: test    eax, eax
0x95472B: jle     short loc_95474F
0x95472D: add     ecx, 44h ; 'D'
0x954730: lea     eax, [edx+30h]
0x954733: push    edi
0x954734: mov     edi, [eax]
0x954736: mov     [ecx-4], edi
0x954739: mov     edi, [eax+4]
0x95473C: sub     edi, [eax]
0x95473E: mov     [ecx], edi
0x954740: mov     edi, [edx+2Ch]
0x954743: inc     esi
0x954744: add     eax, 4
0x954747: add     ecx, 4
0x95474A: cmp     esi, edi
0x95474C: jl      short loc_954734
0x95474E: pop     edi
0x95474F: pop     esi
0x954750: retn    4
