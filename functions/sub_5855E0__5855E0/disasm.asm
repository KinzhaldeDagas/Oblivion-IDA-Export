0x5855E0: mov     eax, [ecx+2Ch]
0x5855E3: add     eax, [esp+arg_0]
0x5855E7: mov     edx, [ecx+10h]
0x5855EA: cmp     eax, edx
0x5855EC: jle     short loc_5855F0
0x5855EE: mov     eax, edx
0x5855F0: push    esi
0x5855F1: mov     esi, ds:0B1398Ch
0x5855F7: push    edi
0x5855F8: mov     edi, eax
0x5855FA: sub     edi, esi
0x5855FC: test    edi, edi
0x5855FE: jg      short loc_585602
0x585600: mov     eax, esi
0x585602: cmp     eax, edx
0x585604: pop     edi
0x585605: pop     esi
0x585606: jle     short loc_58560E
0x585608: mov     [ecx+2Ch], edx
0x58560B: retn    4
0x58560E: mov     [ecx+2Ch], eax
0x585611: retn    4
