0x5477F0: push    ecx; Returns the Oblivion sneak-attack damage multiplier. Weapon types -1, 0, and 2 use the melee mastery settings; type 5 uses Marksman mastery settings; unsupported types remain 1.0. Mastery indices 0..4 select Novice through Master game settings.
0x5477F1: fld1
0x5477F3: mov     ecx, [esp+4+weaponType]
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
0x547813: mov     ecx, [esp+4+masteryLevel]
0x547817: fstp    st
0x547819: cmp     ecx, 4; switch 5 cases
0x54781C: ja      Calc_SneakAttackMultiplier___Retn
0x547822: jmp     ds:jpt_547822[ecx*4]; switch jump
0x54782D: test    al, al; jumptable 00547822 case 0
0x54782F: jz      short loc_547845
0x547831: mov     ecx, (offset flt_B37328+10h)
0x547836: call    GameSetting_GetSafeFloatPointer
0x54783B: fld     dword ptr [eax]
0x54783D: fstp    [esp+4+var_4]
0x547840: fld     [esp+4+var_4]
0x547843: pop     ecx
0x547844: retn
0x547845: mov     ecx, (offset flt_B37328+18h)
0x54784A: call    GameSetting_GetSafeFloatPointer
0x54784F: fld     dword ptr [eax]
0x547851: fstp    [esp+4+var_4]
0x547854: fld     [esp+4+var_4]
0x547857: pop     ecx
0x547858: retn
0x547859: test    al, al; jumptable 00547822 case 1
0x54785B: jz      short loc_547871
0x54785D: mov     ecx, (offset flt_B37328+20h)
0x547862: call    GameSetting_GetSafeFloatPointer
0x547867: fld     dword ptr [eax]
0x547869: fstp    [esp+4+var_4]
0x54786C: fld     [esp+4+var_4]
0x54786F: pop     ecx
0x547870: retn
0x547871: mov     ecx, (offset flt_B37328+28h)
0x547876: call    GameSetting_GetSafeFloatPointer
0x54787B: fld     dword ptr [eax]
0x54787D: fstp    [esp+4+var_4]
0x547880: fld     [esp+4+var_4]
0x547883: pop     ecx
0x547884: retn
0x547885: test    al, al; jumptable 00547822 case 2
0x547887: jz      short loc_54789D
0x547889: mov     ecx, (offset flt_B37328+30h)
0x54788E: call    GameSetting_GetSafeFloatPointer
0x547893: fld     dword ptr [eax]
0x547895: fstp    [esp+4+var_4]
0x547898: fld     [esp+4+var_4]
0x54789B: pop     ecx
0x54789C: retn
0x54789D: mov     ecx, (offset flt_B37328+38h)
0x5478A2: call    GameSetting_GetSafeFloatPointer
0x5478A7: fld     dword ptr [eax]
0x5478A9: fstp    [esp+4+var_4]
0x5478AC: fld     [esp+4+var_4]
0x5478AF: pop     ecx
0x5478B0: retn
0x5478B1: test    al, al; jumptable 00547822 case 3
0x5478B3: jz      short loc_5478C9
0x5478B5: mov     ecx, (offset flt_B37328+40h)
0x5478BA: call    GameSetting_GetSafeFloatPointer
0x5478BF: fld     dword ptr [eax]
0x5478C1: fstp    [esp+4+var_4]
0x5478C4: fld     [esp+4+var_4]
0x5478C7: pop     ecx
0x5478C8: retn
0x5478C9: mov     ecx, (offset flt_B37328+48h)
0x5478CE: call    GameSetting_GetSafeFloatPointer
0x5478D3: fld     dword ptr [eax]
0x5478D5: fstp    [esp+4+var_4]
0x5478D8: fld     [esp+4+var_4]
0x5478DB: pop     ecx
0x5478DC: retn
0x5478DD: test    al, al; jumptable 00547822 case 4
0x5478DF: mov     ecx, (offset flt_B37328+50h)
0x5478E4: jnz     short loc_5478EB
0x5478E6: mov     ecx, (offset flt_B37328+58h)
0x5478EB: call    GameSetting_GetSafeFloatPointer
0x5478F0: fld     dword ptr [eax]
0x5478F2: fstp    [esp+4+var_4]
