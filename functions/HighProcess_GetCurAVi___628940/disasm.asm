0x628940: mov     eax, [esp+arg_4]
0x628944: cmp     eax, 0Bh
0x628947: push    esi
0x628948: mov     esi, ecx
0x62894A: jnz     short loc_6289A1
0x62894C: fldz
0x62894E: fcomp   dword ptr [esi+294h]
0x628954: fnstsw  ax
0x628956: test    ah, 41h
0x628959: jnz     short loc_62897C
0x62895B: mov     eax, [esp+4+arg_8]
0x62895F: mov     ecx, [esp+4+arg_0]
0x628963: push    eax
0x628964: push    0Bh
0x628966: push    ecx
0x628967: mov     ecx, esi
0x628969: call    MiddleProcess_GetAViCur
0x62896E: mov     [esp+4+arg_8], eax
0x628972: fild    [esp+4+arg_8]
0x628976: fstp    dword ptr [esi+294h]
0x62897C: fld     dword ptr [esi+294h]
0x628982: sub     esp, 8
0x628985: fstp    [esp+0Ch+var_C]; double
0x628988: call    _floor
0x62898D: fstp    [esp+0Ch+arg_8]
0x628991: add     esp, 8
0x628994: fld     [esp+4+arg_8]
0x628998: call    Double_To_SInt32
0x62899D: pop     esi
0x62899E: retn    0Ch
0x6289A1: cmp     eax, 30h ; '0'
0x6289A4: jnz     short loc_6289CF
0x6289A6: cmp     dword ptr [esi+298h], 0
0x6289AD: jge     short loc_6289C5
0x6289AF: mov     edx, [esp+4+arg_8]
0x6289B3: push    edx
0x6289B4: push    eax
0x6289B5: mov     eax, [esp+0Ch+arg_0]
0x6289B9: push    eax
0x6289BA: call    MiddleProcess_GetAViCur
0x6289BF: mov     [esi+298h], eax
0x6289C5: mov     eax, [esi+298h]
0x6289CB: pop     esi
0x6289CC: retn    0Ch
0x6289CF: mov     ecx, [esp+4+arg_8]
0x6289D3: mov     edx, [esp+4+arg_0]
0x6289D7: push    ecx
0x6289D8: push    eax
0x6289D9: push    edx
0x6289DA: mov     ecx, esi
0x6289DC: call    MiddleProcess_GetAViCur
0x6289E1: pop     esi
0x6289E2: retn    0Ch
