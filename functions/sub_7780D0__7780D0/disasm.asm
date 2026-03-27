0x7780D0: push    esi
0x7780D1: mov     esi, ecx
0x7780D3: mov     eax, [esi+0Ch]
0x7780D6: push    edi
0x7780D7: mov     edi, [esp+8+arg_0]
0x7780DB: cmp     edi, eax
0x7780DD: jz      short loc_7780FA
0x7780DF: test    eax, eax
0x7780E1: jz      short loc_7780EB
0x7780E3: mov     ecx, [eax]
0x7780E5: mov     edx, [ecx+8]
0x7780E8: push    eax
0x7780E9: call    edx
0x7780EB: test    edi, edi
0x7780ED: mov     [esi+0Ch], edi
0x7780F0: jz      short loc_7780FA
0x7780F2: mov     eax, [edi]
0x7780F4: mov     ecx, [eax+4]
0x7780F7: push    edi
0x7780F8: call    ecx
0x7780FA: pop     edi
0x7780FB: mov     dword ptr [esi+8], 0
0x778102: pop     esi
0x778103: retn    4
