0x5FF351: fldz
0x5FF353: mov     edx, [edi]
0x5FF355: mov     eax, [edx+164h]
0x5FF35B: fst     [esp+arg_14]; float
0x5FF35F: fstp    [esp+arg_38]; float
0x5FF363: push    3
0x5FF365: fld1
0x5FF367: mov     ecx, edi
0x5FF369: fstp    [esp+4+arg_30]; int
0x5FF36D: mov     [esp+4+arg_60], 48h ; 'H'; int
0x5FF375: call    eax
0x5FF377: mov     ecx, eax
0x5FF379: call    ActorAnimData_GetAnimGroupFromField8Value
0x5FF37E: movzx   eax, ax
0x5FF381: push    eax
0x5FF382: call    sub_51AA00
0x5FF387: add     esp, 4
0x5FF38A: cmp     [esp+arg_2C], 0
0x5FF38F: mov     ebp, eax
0x5FF391: mov     [esp+arg_4C], ebp; int
0x5FF395: jnz     Actor_AttackHandling___WeaponDamage
0x5FF39B: cmp     [esp+arg_20], 0
0x5FF3A0: jnz     Actor_AttackHandling___WeaponDamage_
0x5FF3A6: mov     ecx, edi; this
0x5FF3A8: call    Actor_IsNPC
0x5FF3AD: test    al, al
0x5FF3AF: jnz     short Actor_AttackHandling___HandToHandDamage
