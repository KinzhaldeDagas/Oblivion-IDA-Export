0x6E7F50: push    esi
0x6E7F51: mov     esi, ecx
0x6E7F53: call    sub_6EC220
0x6E7F58: mov     dword ptr [esi], offset ??_7NiBoolInterpolator@@6B@; const NiBoolInterpolator::`vftable'
0x6E7F5E: mov     al, ds:0A7C6ACh
0x6E7F63: mov     [esi+0Ch], al
0x6E7F66: mov     eax, [esp+4+arg_0]
0x6E7F6A: test    eax, eax
0x6E7F6C: mov     [esi+10h], eax
0x6E7F6F: jz      short loc_6E7F7B
0x6E7F71: add     eax, 4
0x6E7F74: push    eax; lpAddend
0x6E7F75: call    dword ptr ds:0A28078h
0x6E7F7B: mov     eax, esi
0x6E7F7D: mov     dword ptr [esi+14h], 0
0x6E7F84: pop     esi
0x6E7F85: retn    4
