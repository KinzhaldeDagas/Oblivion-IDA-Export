0x88EBD0: mov     eax, [esp+arg_0]
0x88EBD4: push    esi
0x88EBD5: push    eax
0x88EBD6: mov     esi, ecx
0x88EBD8: call    sub_897640
0x88EBDD: fldz
0x88EBDF: mov     dword ptr [esi], offset ??_7bhkBlendCollisionObject@@6B@; const bhkBlendCollisionObject::`vftable'
0x88EBE5: add     dword ptr ds:0BA7A1Ch, 1
0x88EBEC: fstp    dword ptr [esi+14h]
0x88EBEF: fld1
0x88EBF1: and     word ptr [esi+0Ch], 0FEFFh
0x88EBF7: xor     eax, eax
0x88EBF9: fstp    dword ptr [esi+18h]
0x88EBFC: mov     [esi+20h], eax
0x88EBFF: mov     [esi+24h], eax
0x88EC02: mov     dword ptr [esi+1Ch], 8
0x88EC09: mov     eax, esi
0x88EC0B: pop     esi
0x88EC0C: retn    4
