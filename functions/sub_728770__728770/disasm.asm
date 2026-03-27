0x728770: push    esi
0x728771: mov     esi, ecx
0x728773: call    NiObject_constr
0x728778: xor     eax, eax
0x72877A: mov     [esi+2Eh], ax
0x72877E: mov     [esi+8], ax
0x728782: mov     [esi+1Ch], eax
0x728785: mov     [esi+20h], eax
0x728788: mov     [esi+24h], eax
0x72878B: mov     [esi+28h], eax
0x72878E: mov     [esi+2Ch], ax
0x728792: mov     [esi+30h], al
0x728795: mov     [esi+31h], al
0x728798: mov     dword ptr [esi], offset ??_7NiGeometryData@@6B@; const NiGeometryData::`vftable'
0x72879E: mov     [esi+34h], eax
0x7287A1: and     word ptr [esi+2Eh], 0FFFh
0x7287A7: mov     [esi+3Ch], al
0x7287AA: mov     [esi+3Dh], al
0x7287AD: mov     [esi+38h], eax
0x7287B0: mov     eax, esi
0x7287B2: pop     esi
0x7287B3: retn
