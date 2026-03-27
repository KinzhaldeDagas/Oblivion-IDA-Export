0x7630E0: cmp     dword ptr [ecx+8ACh], 0
0x7630E7: jz      short loc_7630FA
0x7630E9: mov     ecx, [ecx+8ACh]
0x7630EF: mov     eax, [ecx]
0x7630F1: mov     edx, [eax+78h]
0x7630F4: push    0
0x7630F6: push    0
0x7630F8: call    edx
0x7630FA: push    esi
0x7630FB: mov     esi, [esp+4+arg_0]
0x7630FF: mov     eax, [esi]
0x763101: mov     edx, [eax+38h]
0x763104: mov     ecx, esi
0x763106: call    edx
0x763108: test    eax, eax
0x76310A: jz      short loc_763114
0x76310C: mov     ecx, [eax]
0x76310E: mov     edx, [ecx+8]
0x763111: push    eax
0x763112: call    edx
0x763114: mov     eax, [esi]
0x763116: mov     edx, [eax+3Ch]
0x763119: push    0
0x76311B: mov     ecx, esi
0x76311D: call    edx
0x76311F: pop     esi
0x763120: retn    4
