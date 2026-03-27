0x8B9CA0: push    ebp
0x8B9CA1: mov     ebp, esp
0x8B9CA3: and     esp, 0FFFFFFF0h
0x8B9CA6: sub     esp, 2Ch
0x8B9CA9: mov     eax, ds:0B30AACh
0x8B9CAE: xor     eax, esp
0x8B9CB0: mov     [esp+2Ch+var_4], eax
0x8B9CB4: mov     eax, [ebp+arg_0]
0x8B9CB7: push    esi
0x8B9CB8: push    eax
0x8B9CB9: mov     esi, ecx
0x8B9CBB: call    sub_8ACB10
0x8B9CC0: fldz
0x8B9CC2: mov     ecx, [esp+30h+var_4]
0x8B9CC6: fst     dword ptr [esp+30h+var_20]
0x8B9CCA: fst     dword ptr [esp+30h+var_20+4]
0x8B9CCE: mov     dword ptr [esi], offset ??_7ahkCharacterProxy@@6BahkCharacterProxy@@@; const ahkCharacterProxy::`vftable'{for `ahkCharacterProxy'}
0x8B9CD4: fld1
0x8B9CD6: mov     dword ptr [esi+8], offset ??_7ahkCharacterProxy@@6BhkEntityListener@@@; const ahkCharacterProxy::`vftable'{for `hkEntityListener'}
0x8B9CDD: fstp    dword ptr [esp+30h+var_20+8]
0x8B9CE1: mov     dword ptr [esi+0Ch], offset ??_7ahkCharacterProxy@@6BhkPhantomListener@@@; const ahkCharacterProxy::`vftable'{for `hkPhantomListener'}
0x8B9CE8: mov     dword ptr [esi+0B0h], 0
0x8B9CF2: mov     eax, esi
0x8B9CF4: fstp    dword ptr [esp+30h+var_20+0Ch]
0x8B9CF8: movaps  xmm0, [esp+30h+var_20]
0x8B9CFD: movaps  xmmword ptr [esi+40h], xmm0
0x8B9D01: pop     esi
0x8B9D02: xor     ecx, esp
0x8B9D04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B9D09: mov     esp, ebp
0x8B9D0B: pop     ebp
0x8B9D0C: retn    4
