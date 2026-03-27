0x8B0280: push    esi
0x8B0281: push    edi
0x8B0282: mov     edi, [esp+8+arg_0]
0x8B0286: push    edi
0x8B0287: mov     esi, ecx
0x8B0289: call    sub_8A2690
0x8B028E: test    esi, esi
0x8B0290: jz      short loc_8B02A4
0x8B0292: mov     esi, [esi+8]
0x8B0295: test    esi, esi
0x8B0297: jz      short loc_8B02A4
0x8B0299: mov     esi, [esi+0Ch]
0x8B029C: mov     [edi+4], esi
0x8B029F: pop     edi
0x8B02A0: pop     esi
0x8B02A1: retn    4
0x8B02A4: xor     eax, eax
0x8B02A6: mov     [edi+4], eax
0x8B02A9: pop     edi
0x8B02AA: pop     esi
0x8B02AB: retn    4
