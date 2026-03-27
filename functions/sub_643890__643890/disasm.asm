0x643890: push    esi
0x643891: mov     esi, [esp+4+arg_0]
0x643895: test    esi, esi
0x643897: push    edi
0x643898: mov     edi, ecx
0x64389A: jz      short loc_6438A5
0x64389C: push    1
0x64389E: mov     ecx, esi
0x6438A0: call    Actor__SetCompressedFlag
0x6438A5: mov     [edi+2Ch], esi
0x6438A8: pop     edi
0x6438A9: pop     esi
0x6438AA: retn    4
