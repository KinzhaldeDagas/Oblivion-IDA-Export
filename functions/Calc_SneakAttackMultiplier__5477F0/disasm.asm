0x5477F0: push    ecx
0x5477F1: fld1
0x5477F3: mov     ecx, [esp+4+arg_4]
0x5477F7: cmp     ecx, 0FFFFFFFFh
0x5477FA: fst     [esp+4+var_4]
0x5477FD: jz      short Calc_SneakAttackMultiplier___SetMelee
0x5477FF: test    ecx, ecx
0x547801: jz      short Calc_SneakAttackMultiplier___SetMelee
0x547803: cmp     ecx, 2
0x547806: jz      short Calc_SneakAttackMultiplier___SetMelee
0x547808: xor     al, al
0x54780A: cmp     ecx, 5
0x54780D: jnz     Calc_SneakAttackMultiplier___Done
0x547813: mov     ecx, [esp+4+arg_0]
0x547817: fstp    st
0x547819: cmp     ecx, 4; switch 5 cases
0x54781C: ja      Calc_SneakAttackMultiplier___Retn
0x547822: jmp     ds:jpt_547822[ecx*4]; switch jump
