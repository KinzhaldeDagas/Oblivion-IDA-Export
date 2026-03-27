0x751D10: push    esi
0x751D11: push    34h ; '4'; Size
0x751D13: call    FormHeapAlloc
0x751D18: mov     esi, eax
0x751D1A: add     esp, 4
0x751D1D: test    esi, esi
0x751D1F: jz      short loc_751D56
0x751D21: mov     ecx, esi
0x751D23: call    sub_752BF0
0x751D28: fld1
0x751D2A: fstp    dword ptr [esi+1Ch]
0x751D2D: mov     eax, 1
0x751D32: fldz
0x751D34: mov     [esi+18h], ax
0x751D38: fst     dword ptr [esi+24h]
0x751D3B: mov     [esi+20h], ax
0x751D3F: fst     dword ptr [esi+28h]
0x751D42: mov     [esi+22h], ax
0x751D46: fst     dword ptr [esi+2Ch]
0x751D49: mov     dword ptr [esi], offset ??_7NiPSysSpawnModifier@@6B@; const NiPSysSpawnModifier::`vftable'
0x751D4F: fstp    dword ptr [esi+30h]
0x751D52: mov     eax, esi
0x751D54: pop     esi
0x751D55: retn
0x751D56: xor     eax, eax
0x751D58: pop     esi
0x751D59: retn
