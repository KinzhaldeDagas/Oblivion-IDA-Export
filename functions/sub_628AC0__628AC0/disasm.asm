0x628AC0: fld     [esp+arg_8]
0x628AC4: push    esi
0x628AC5: push    edi
0x628AC6: mov     edi, [esp+8+arg_4]
0x628ACA: cmp     edi, 0Bh
0x628ACD: mov     esi, ecx
0x628ACF: jnz     short loc_628AD9
0x628AD1: fst     dword ptr [esi+294h]
0x628AD7: jmp     short loc_628B03
0x628AD9: cmp     edi, 30h ; '0'
0x628ADC: jnz     short loc_628B03
0x628ADE: sub     esp, 8
0x628AE1: fstp    [esp+10h+var_10]; double
0x628AE4: call    _floor
0x628AE9: fstp    [esp+10h+arg_4]
0x628AED: add     esp, 8
0x628AF0: fld     [esp+8+arg_4]
0x628AF4: call    Double_To_SInt32
0x628AF9: fld     [esp+8+arg_8]
0x628AFD: mov     [esi+298h], eax
0x628B03: mov     eax, [esp+8+arg_0]
0x628B07: push    ecx
0x628B08: fstp    dword ptr [esp+0Ch+var_10+4]; float
0x628B0B: push    edi; int
0x628B0C: push    eax; int
0x628B0D: mov     ecx, esi
0x628B0F: call    sub_6434A0
0x628B14: pop     edi
0x628B15: pop     esi
0x628B16: retn    0Ch
