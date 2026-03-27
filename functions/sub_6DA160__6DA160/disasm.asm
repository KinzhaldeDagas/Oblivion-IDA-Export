0x6DA160: push    esi
0x6DA161: mov     esi, ecx
0x6DA163: call    sub_6EC220
0x6DA168: mov     dword ptr [esi], offset ??_7NiPoint3Interpolator@@6B@; const NiPoint3Interpolator::`vftable'
0x6DA16E: mov     eax, ds:0B24FC8h
0x6DA173: mov     [esi+0Ch], eax
0x6DA176: mov     ecx, ds:0B24FCCh
0x6DA17C: mov     eax, [esp+4+arg_0]
0x6DA180: test    eax, eax
0x6DA182: mov     [esi+10h], ecx
0x6DA185: mov     edx, ds:0B24FD0h
0x6DA18B: mov     [esi+14h], edx
0x6DA18E: mov     [esi+18h], eax
0x6DA191: jz      short loc_6DA19D
0x6DA193: add     eax, 4
0x6DA196: push    eax; lpAddend
0x6DA197: call    dword ptr ds:0A28078h
0x6DA19D: mov     eax, esi
0x6DA19F: mov     dword ptr [esi+1Ch], 0
0x6DA1A6: pop     esi
0x6DA1A7: retn    4
