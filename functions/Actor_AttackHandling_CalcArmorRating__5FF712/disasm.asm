0x5FF712: mov     bl, [esp+arg_1A]
0x5FF716: test    bl, bl
0x5FF718: jz      short loc_5FF71E
0x5FF71A: fldz
0x5FF71C: jmp     short loc_5FF759
0x5FF71E: mov     edx, [esi]
0x5FF720: mov     eax, [edx+348h]
0x5FF726: mov     ecx, esi
0x5FF728: call    eax
0x5FF72A: fcomp   qword ptr ds:0A309F0h
0x5FF730: fnstsw  ax
0x5FF732: test    ah, 5
0x5FF735: jp      short loc_5FF745
0x5FF737: mov     edx, [esi]
0x5FF739: mov     eax, [edx+348h]
0x5FF73F: mov     ecx, esi
0x5FF741: call    eax
0x5FF743: jmp     short loc_5FF74B
0x5FF745: fld     dword ptr ds:0A2FE7Ch
0x5FF74B: fstp    [esp+arg_1C]; int
0x5FF74F: fld     [esp+arg_1C]
0x5FF753: fdiv    qword ptr ds:0A309F0h
0x5FF759: fstp    [esp+arg_34]
0x5FF75D: fld     [esp+arg_34]
0x5FF761: fld     dword ptr ds:0B36EA0h
0x5FF767: fcom    st(1)
0x5FF769: fnstsw  ax
0x5FF76B: fstp    st(1)
0x5FF76D: test    ah, 5
0x5FF770: jp      short loc_5FF778
0x5FF772: fstp    [esp+arg_34]; float
0x5FF776: jmp     short Actor_AttackHandling___CalcDamageToArmor
0x5FF778: fstp    st
