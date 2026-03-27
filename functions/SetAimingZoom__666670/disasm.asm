0x666670: sub     esp, 18h
0x666673: cmp     byte ptr ds:0B14F48h, 0
0x66667A: push    esi
0x66667B: mov     esi, ecx
0x66667D: jz      loc_666812
0x666683: cmp     byte ptr [esi+588h], 0
0x66668A: fld     dword ptr ds:0B0313Ch
0x666690: mov     eax, ds:0B33398h
0x666695: fstp    [esp+1Ch+var_18]
0x666699: fld     dword ptr ds:0B370A0h
0x66669F: push    edi
0x6666A0: mov     edi, [eax+20h]
0x6666A3: fstp    [esp+20h+var_10]
0x6666A7: fld     dword ptr ds:0B370A8h
0x6666AD: fstp    [esp+20h+var_14]
0x6666B1: fld     dword ptr ds:0B370B0h
0x6666B7: fstp    [esp+20h+var_C]
0x6666BB: jnz     loc_6667E7
0x6666C1: cmp     byte ptr ds:0B3BB04h, 0
0x6666C8: jnz     loc_6667E7
0x6666CE: mov     ecx, [esi+58h]
0x6666D1: mov     edx, [ecx]
0x6666D3: mov     eax, [edx+2D0h]
0x6666D9: call    eax
0x6666DB: cmp     eax, 5
0x6666DE: push    0; a3
0x6666E0: mov     ecx, edi; this
0x6666E2: push    6; a2
0x6666E4: jnz     loc_66678F
0x6666EA: call    InputGlobals__QueryControlState
0x6666EF: test    eax, eax
0x6666F1: jz      loc_6667A1
0x6666F7: cmp     byte ptr ds:0B3BAEAh, 0
0x6666FE: jz      loc_666811
0x666704: push    1Ch
0x666706: mov     ecx, esi
0x666708: call    Actor_GetSkillMasteryLevel
0x66670D: cmp     eax, 2
0x666710: jl      loc_666811
0x666716: fld     dword ptr ds:0B3BAFCh
0x66671C: fld     [esp+20h+var_C]
0x666720: fcompp
0x666722: fnstsw  ax
0x666724: test    ah, 41h
0x666727: jp      loc_666811
0x66672D: fld     dword ptr [esi+598h]
0x666733: mov     ecx, offset flt_B370A0
0x666738: fstp    [esp+20h+var_8]
0x66673C: call    GameSetting_GetSafeFloatPointer
0x666741: fld     dword ptr [eax]
0x666743: fcomp   [esp+20h+var_8]
0x666747: fnstsw  ax
0x666749: test    ah, 5
0x66674C: jp      loc_666811
0x666752: fld     dword ptr ds:0B3BAFCh
0x666758: fsub    [esp+20h+var_C]
0x66675C: fdiv    [esp+20h+var_14]
0x666760: fld     [esp+20h+var_10]
0x666764: fld     st
0x666766: fld     [esp+20h+var_18]
0x66676A: fld     st
0x66676C: fsubp   st(2), st
0x66676E: fxch    st(3)
0x666770: fmulp   st(1), st
0x666772: faddp   st(2), st
0x666774: fxch    st(1)
0x666776: fstp    [esp+20h+a2]
0x66677A: fld     [esp+20h+a2]
0x66677E: fcomp   st(1)
0x666780: fnstsw  ax
0x666782: test    ah, 5
0x666785: jnp     short loc_6667DD
0x666787: fstp    st
0x666789: fld     [esp+20h+a2]
0x66678D: jmp     short loc_666804
0x66678F: call    InputGlobals__QueryControlState
0x666794: test    eax, eax
0x666796: jz      short loc_6667A1
0x666798: cmp     byte ptr ds:0B3BAEAh, 0
0x66679F: jnz     short loc_666811
0x6667A1: fld     dword ptr [esi+598h]
0x6667A7: fld     [esp+20h+var_18]
0x6667AB: fcom    st(1)
0x6667AD: fnstsw  ax
0x6667AF: fstp    st(1)
0x6667B1: test    ah, 41h
0x6667B4: jnz     short loc_66680F
0x6667B6: fld     [esp+20h+a2]
0x6667BA: fdiv    [esp+20h+var_14]
0x6667BE: fld     st(1)
0x6667C0: fsub    [esp+20h+var_10]
0x6667C4: fmulp   st(1), st
0x6667C6: fadd    dword ptr [esi+598h]
0x6667CC: fstp    [esp+20h+a2]
0x6667D0: fld     [esp+20h+a2]
0x6667D4: fcomp   st(1)
0x6667D6: fnstsw  ax
0x6667D8: test    ah, 41h
0x6667DB: jnz     short loc_666787
0x6667DD: fstp    [esp+20h+a2]
0x6667E1: fld     [esp+20h+a2]
0x6667E5: jmp     short loc_666804
0x6667E7: mov     ecx, ds:0B333CCh
0x6667ED: fld     dword ptr [ecx+0ECh]
0x6667F3: fld     [esp+20h+var_18]
0x6667F7: fld     st
0x6667F9: fucomp  st(2)
0x6667FB: fnstsw  ax
0x6667FD: fstp    st(1)
0x6667FF: test    ah, 44h
0x666802: jnp     short loc_66680F
0x666804: push    ecx
0x666805: mov     ecx, esi
0x666807: fstp    [esp+24h+var_24]; float
0x66680A: call    SetCameraFOV
0x66680F: fstp    st
0x666811: pop     edi
0x666812: pop     esi
0x666813: add     esp, 18h
0x666816: retn    4
