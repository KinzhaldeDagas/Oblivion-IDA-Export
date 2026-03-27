0x5FF55E: test    bl, bl
0x5FF560: jz      short Actor_AttackHandling___ApplyWeaponDamage_Check_
0x5FF562: mov     eax, [esp+arg_1C]
0x5FF566: add     eax, 0FFFFFFFFh
0x5FF569: cmp     eax, 62h ; 'b'
0x5FF56C: ja      short Actor_AttackHandling___ApplyWeaponDamage_Check_
0x5FF56E: mov     ebx, [esp+arg_2C]
0x5FF572: test    ebx, ebx
0x5FF574: jnz     short loc_5FF57C
0x5FF576: cmp     [esp+arg_20], ebx
0x5FF57A: jz      short Actor_AttackHandling___ApplyWeaponDamage_Check
0x5FF57C: fild    [esp+arg_1C]
0x5FF580: fdiv    qword ptr ds:0A309F0h
0x5FF586: fld1
0x5FF588: fsubrp  st(1), st
0x5FF58A: fmul    [esp+arg_14]
0x5FF58E: fstp    [esp+arg_14]; float
0x5FF592: jmp     short Actor_AttackHandling___ApplyWeaponDamage_Check
