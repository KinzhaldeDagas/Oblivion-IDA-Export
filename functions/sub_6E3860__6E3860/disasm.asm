0x6E3860: push    esi
0x6E3861: mov     esi, ecx
0x6E3863: call    sub_6EC220
0x6E3868: mov     dword ptr [esi], offset ??_7NiColorInterpolator@@6B@; const NiColorInterpolator::`vftable'
0x6E386E: mov     eax, ds:0B24FD4h
0x6E3873: mov     [esi+0Ch], eax
0x6E3876: mov     ecx, ds:0B24FD8h
0x6E387C: mov     [esi+10h], ecx
0x6E387F: mov     edx, ds:0B24FDCh
0x6E3885: mov     [esi+14h], edx
0x6E3888: mov     eax, ds:0B24FE0h
0x6E388D: mov     [esi+18h], eax
0x6E3890: mov     eax, [esp+4+arg_0]
0x6E3894: test    eax, eax
0x6E3896: mov     [esi+1Ch], eax
0x6E3899: jz      short loc_6E38A5
0x6E389B: add     eax, 4
0x6E389E: push    eax; lpAddend
0x6E389F: call    dword ptr ds:0A28078h
0x6E38A5: mov     eax, esi
0x6E38A7: mov     dword ptr [esi+20h], 0
0x6E38AE: pop     esi
0x6E38AF: retn    4
