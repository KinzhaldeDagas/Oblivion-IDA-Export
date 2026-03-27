0x75B260: push    esi
0x75B261: push    38h ; '8'; Size
0x75B263: call    FormHeapAlloc
0x75B268: mov     esi, eax
0x75B26A: add     esp, 4
0x75B26D: test    esi, esi
0x75B26F: jz      short loc_75B2B9
0x75B271: mov     ecx, esi
0x75B273: call    sub_752BF0
0x75B278: fldz
0x75B27A: mov     dword ptr [esi], offset ??_7NiPSysBombModifier@@6B@; const NiPSysBombModifier::`vftable'
0x75B280: mov     dword ptr [esi+18h], 0
0x75B287: mov     eax, ds:0B258D0h
0x75B28C: mov     [esi+1Ch], eax
0x75B28F: mov     ecx, ds:0B258D4h
0x75B295: mov     [esi+20h], ecx
0x75B298: mov     edx, ds:0B258D8h
0x75B29E: fst     dword ptr [esi+28h]
0x75B2A1: fstp    dword ptr [esi+2Ch]
0x75B2A4: mov     [esi+24h], edx
0x75B2A7: mov     dword ptr [esi+30h], 0
0x75B2AE: mov     dword ptr [esi+34h], 0
0x75B2B5: mov     eax, esi
0x75B2B7: pop     esi
0x75B2B8: retn
0x75B2B9: xor     eax, eax
0x75B2BB: pop     esi
0x75B2BC: retn
