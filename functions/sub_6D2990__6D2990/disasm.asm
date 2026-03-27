0x6D2990: push    esi
0x6D2991: mov     esi, ecx
0x6D2993: call    sub_6EC220
0x6D2998: mov     eax, [esp+4+arg_0]
0x6D299C: test    eax, eax
0x6D299E: mov     dword ptr [esi], offset ??_7NiFloatInterpolator@@6B@; const NiFloatInterpolator::`vftable'
0x6D29A4: fld     dword ptr ds:0A7C6B0h
0x6D29AA: fstp    dword ptr [esi+0Ch]
0x6D29AD: mov     [esi+10h], eax
0x6D29B0: jz      short loc_6D29BC
0x6D29B2: add     eax, 4
0x6D29B5: push    eax; lpAddend
0x6D29B6: call    dword ptr ds:0A28078h
0x6D29BC: mov     eax, esi
0x6D29BE: mov     dword ptr [esi+14h], 0
0x6D29C5: pop     esi
0x6D29C6: retn    4
