0x8BD670: cmp     [esp+arg_0], 0
0x8BD675: push    esi
0x8BD676: mov     esi, ecx
0x8BD678: jz      short loc_8BD68F
0x8BD67A: mov     ecx, [esi+0Ch]
0x8BD67D: test    ecx, ecx
0x8BD67F: jz      short loc_8BD688
0x8BD681: push    1
0x8BD683: call    sub_8BD600
0x8BD688: mov     dword ptr [esi+0Ch], 0
0x8BD68F: pop     esi
0x8BD690: retn    4
