0x8A04D0: test    ecx, ecx
0x8A04D2: jz      short locret_8A04FD
0x8A04D4: push    esi
0x8A04D5: mov     esi, [ecx+8]
0x8A04D8: test    esi, esi
0x8A04DA: jz      short loc_8A04FC
0x8A04DC: push    edi
0x8A04DD: mov     edi, [esp+8+arg_0]
0x8A04E1: test    edi, edi
0x8A04E3: jz      short loc_8A04EC
0x8A04E5: mov     ecx, edi
0x8A04E7: call    sub_8BC720
0x8A04EC: mov     ecx, [esi+10h]
0x8A04EF: test    ecx, ecx
0x8A04F1: jz      short loc_8A04F8
0x8A04F3: call    sub_8BC730
0x8A04F8: mov     [esi+10h], edi
0x8A04FB: pop     edi
0x8A04FC: pop     esi
0x8A04FD: retn    4
