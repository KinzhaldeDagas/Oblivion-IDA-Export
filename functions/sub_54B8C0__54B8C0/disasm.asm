0x54B8C0: sub     esp, 0Ch
0x54B8C3: fld     dword ptr ds:0B39B10h
0x54B8C9: fld     qword ptr ds:0A31C78h
0x54B8CF: fmul    st(1), st
0x54B8D1: fxch    st(1)
0x54B8D3: fstp    [esp+0Ch+var_C]
0x54B8D6: fldz
0x54B8D8: fld     [esp+0Ch+var_C]
0x54B8DB: fcom    st(1)
0x54B8DD: fnstsw  ax
0x54B8DF: test    ah, 5
0x54B8E2: jp      short loc_54B8EC
0x54B8E4: fstp    st
0x54B8E6: fst     [esp+0Ch+var_C]
0x54B8E9: fld     [esp+0Ch+var_C]
0x54B8EC: fld     qword ptr ds:0A641E0h
0x54B8F2: fcom    st(1)
0x54B8F4: fnstsw  ax
0x54B8F6: fld     dword ptr ds:0A3F3E0h
0x54B8FC: test    ah, 5
0x54B8FF: jp      short loc_54B90F
0x54B901: fstp    st(2)
0x54B903: fxch    st(1)
0x54B905: fst     [esp+0Ch+var_C]
0x54B908: fld     [esp+0Ch+var_C]
0x54B90B: fxch    st(2)
0x54B90D: fxch    st(1)
0x54B90F: fld     st(2)
0x54B911: fld     qword ptr ds:0A3D360h
0x54B917: fmul    st(1), st
0x54B919: fxch    st(1)
0x54B91B: fstp    [esp+0Ch+var_8]
0x54B91F: fld     dword ptr ds:0B39B18h
0x54B925: fmulp   st(6), st
0x54B927: fxch    st(5)
0x54B929: fstp    [esp+0Ch+var_C]
0x54B92C: fld     [esp+0Ch+var_C]
0x54B92F: fcom    st(4)
0x54B931: fnstsw  ax
0x54B933: test    ah, 5
0x54B936: jp      short loc_54B948
0x54B938: fstp    st
0x54B93A: fxch    st(3)
0x54B93C: fst     [esp+0Ch+var_C]
0x54B93F: fld     [esp+0Ch+var_C]
0x54B942: fxch    st(1)
0x54B944: fxch    st(4)
0x54B946: fxch    st(1)
0x54B948: fcom    st(2)
0x54B94A: fnstsw  ax
0x54B94C: fstp    st(2)
0x54B94E: test    ah, 41h
0x54B951: jnz     short loc_54B95D
0x54B953: fstp    st(1)
0x54B955: fstp    [esp+0Ch+var_C]
0x54B958: fld     [esp+0Ch+var_C]
0x54B95B: jmp     short loc_54B95F
0x54B95D: fstp    st
0x54B95F: fld     st
0x54B961: fmulp   st(4), st
0x54B963: fxch    st(3)
0x54B965: fstp    [esp+0Ch+var_4]
0x54B969: fld     [esp+0Ch+arg_0]
0x54B96D: fcom    st(1)
0x54B96F: fnstsw  ax
0x54B971: fld     [esp+0Ch+var_8]
0x54B975: test    ah, 41h
0x54B978: jnz     short loc_54B988
0x54B97A: fstp    st(1)
0x54B97C: fstp    st
0x54B97E: fst     [esp+0Ch+arg_0]
0x54B982: fld     [esp+0Ch+arg_0]
0x54B986: jmp     short loc_54B99F
0x54B988: fcom    st(1)
0x54B98A: fnstsw  ax
0x54B98C: test    ah, 41h
0x54B98F: jnz     short loc_54B99D
0x54B991: fstp    st(1)
0x54B993: fstp    [esp+0Ch+arg_0]
0x54B997: fld     [esp+0Ch+arg_0]
0x54B99B: jmp     short loc_54B99F
0x54B99D: fstp    st
0x54B99F: fld     [esp+0Ch+arg_4]
0x54B9A3: fcom    st(4)
0x54B9A5: fnstsw  ax
0x54B9A7: fld     [esp+0Ch+var_4]
0x54B9AB: test    ah, 41h
0x54B9AE: jnz     short loc_54B9BC
0x54B9B0: fstp    st(1)
0x54B9B2: fstp    st
0x54B9B4: fxch    st(3)
0x54B9B6: fstp    [esp+0Ch+arg_4]
0x54B9BA: jmp     short loc_54B9D1
0x54B9BC: fstp    st(5)
0x54B9BE: fcomp   st(4)
0x54B9C0: fnstsw  ax
0x54B9C2: test    ah, 5
0x54B9C5: jp      short loc_54B9CF
0x54B9C7: fxch    st(3)
0x54B9C9: fstp    [esp+0Ch+arg_4]
0x54B9CD: jmp     short loc_54B9D1
0x54B9CF: fstp    st(3)
0x54B9D1: fxch    st(2)
0x54B9D3: push    esi
0x54B9D4: fcom    st(1)
0x54B9D6: lea     esi, [ecx+0A4h]
0x54B9DC: push    ecx
0x54B9DD: mov     ecx, esi
0x54B9DF: fnstsw  ax
0x54B9E1: test    ah, 1
0x54B9E4: mov     eax, [esi]
0x54B9E6: mov     edx, [eax+4Ch]
0x54B9E9: jnz     short loc_54BA02
0x54B9EB: fstp    st(1)
0x54B9ED: fdivrp  st(1), st
0x54B9EF: fstp    [esp+14h+arg_0]
0x54B9F3: fld     [esp+14h+arg_0]
0x54B9F7: fstp    [esp+14h+var_14]
0x54B9FA: push    0Ah
0x54B9FC: call    edx
0x54B9FE: fldz
0x54BA00: jmp     short loc_54BA1D
0x54BA02: fstp    st(2)
0x54BA04: fstp    st(1)
0x54BA06: fstp    [esp+14h+var_14]
0x54BA09: push    0Ah
0x54BA0B: call    edx
0x54BA0D: fld     [esp+0Ch+arg_4]
0x54BA11: fdiv    [esp+0Ch+var_4]
0x54BA15: fstp    [esp+0Ch+arg_4]
0x54BA19: fld     [esp+0Ch+arg_4]
0x54BA1D: mov     eax, [esi]
0x54BA1F: mov     edx, [eax+4Ch]
0x54BA22: push    ecx
0x54BA23: fstp    [esp+10h+var_10]
0x54BA26: push    9
0x54BA28: mov     ecx, esi
0x54BA2A: call    edx
0x54BA2C: fldz
0x54BA2E: fld     [esp+8+arg_C]
0x54BA32: push    ecx
0x54BA33: fcom    st(1)
0x54BA35: mov     ecx, esi
0x54BA37: fnstsw  ax
0x54BA39: test    ah, 1
0x54BA3C: mov     eax, [esi]
0x54BA3E: mov     edx, [eax+4Ch]
0x54BA41: jnz     short loc_54BA5C
0x54BA43: fstp    st(1)
0x54BA45: fdiv    [esp+0Ch+var_4]
0x54BA49: fstp    [esp+0Ch+arg_8]
0x54BA4D: fld     [esp+0Ch+arg_8]
0x54BA51: fstp    [esp+0Ch+var_C]
0x54BA54: push    0Bh
0x54BA56: call    edx
0x54BA58: fldz
0x54BA5A: jmp     short loc_54BA75
0x54BA5C: fstp    st
0x54BA5E: fstp    [esp+0Ch+var_C]
0x54BA61: push    0Bh
0x54BA63: call    edx
0x54BA65: fld     [esp+0Ch+arg_8]
0x54BA69: fdiv    dword ptr [esp+0Ch]
0x54BA6D: fstp    [esp+0Ch+arg_4]
0x54BA71: fld     [esp+0Ch+arg_4]
0x54BA75: mov     eax, [esi]
0x54BA77: mov     edx, [eax+4Ch]
0x54BA7A: push    ecx
0x54BA7B: fstp    [esp+10h+var_10]
0x54BA7E: push    8
0x54BA80: mov     ecx, esi
0x54BA82: call    edx
0x54BA84: pop     esi
0x54BA85: add     esp, 0Ch
0x54BA88: retn    8
