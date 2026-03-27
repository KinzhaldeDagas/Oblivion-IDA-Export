0x8939B0: push    ebp
0x8939B1: mov     ebp, esp
0x8939B3: and     esp, 0FFFFFFF0h
0x8939B6: sub     esp, 7Ch
0x8939B9: mov     eax, ds:0B30AACh
0x8939BE: xor     eax, esp
0x8939C0: mov     [esp+7Ch+var_4], eax
0x8939C4: push    esi
0x8939C5: mov     esi, ecx
0x8939C7: test    byte ptr [esi+1F4h], 1
0x8939CE: jz      loc_893B7F
0x8939D4: mov     eax, [esi+1F4h]
0x8939DA: shr     eax, 12h
0x8939DD: test    al, 1
0x8939DF: jnz     loc_893B7F
0x8939E5: fldz
0x8939E7: fcomp   dword ptr [esi+30Ch]
0x8939ED: fnstsw  ax
0x8939EF: test    ah, 5
0x8939F2: jp      loc_893B7F
0x8939F8: lea     ecx, [esp+80h+var_50]
0x8939FC: push    ecx
0x8939FD: mov     ecx, [esi+364h]
0x893A03: call    sub_6848D0
0x893A08: fld     dword ptr [esi+240h]
0x893A0E: fstp    [esp+80h+var_78]
0x893A12: fld     dword ptr [esi+244h]
0x893A18: fstp    [esp+80h+var_74]
0x893A1C: fld     dword ptr ds:0A96588h
0x893A22: fcomp   [esp+80h+var_78]
0x893A26: fnstsw  ax
0x893A28: test    ah, 44h
0x893A2B: jp      short loc_893A52
0x893A2D: lea     edx, [esp+80h+var_60]
0x893A31: push    edx
0x893A32: push    0
0x893A34: mov     ecx, esi
0x893A36: call    sub_8915F0
0x893A3B: movaps  xmm0, [esp+80h+var_60]
0x893A40: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x893A44: movss   [esp+80h+var_70], xmm0
0x893A4A: fld     [esp+80h+var_70]
0x893A4E: fstp    [esp+80h+var_78]
0x893A52: fld     dword ptr ds:0A96588h
0x893A58: fcomp   [esp+80h+var_74]
0x893A5C: fnstsw  ax
0x893A5E: test    ah, 44h
0x893A61: jp      short loc_893A88
0x893A63: lea     eax, [esp+80h+var_60]
0x893A67: push    eax
0x893A68: push    1
0x893A6A: mov     ecx, esi
0x893A6C: call    sub_8915F0
0x893A71: movaps  xmm0, [esp+80h+var_60]
0x893A76: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x893A7A: movss   [esp+80h+var_70], xmm0
0x893A80: fld     [esp+80h+var_70]
0x893A84: fstp    [esp+80h+var_74]
0x893A88: fld     [esp+80h+var_74]
0x893A8C: fsub    [esp+80h+var_78]
0x893A90: fstp    [esp+80h+var_78]
0x893A94: fldz
0x893A96: fld     st
0x893A98: fld     [esp+80h+var_78]
0x893A9C: fucom   st(1)
0x893A9E: fnstsw  ax
0x893AA0: fstp    st(1)
0x893AA2: test    ah, 44h
0x893AA5: jnp     short loc_893B1B
0x893AA7: fstp    st(1)
0x893AA9: fdiv    dword ptr [esi+3A4h]
0x893AAF: fstp    [esp+80h+var_78]
0x893AB3: fld     [esp+80h+var_78]
0x893AB7: call    __CIatan
0x893ABC: fstp    [esp+80h+var_78]
0x893AC0: fld     [esp+80h+var_78]
0x893AC4: fstp    [esp+80h+var_74]
0x893AC8: fldz
0x893ACA: fld     [esp+80h+var_74]
0x893ACE: fcom    st(1)
0x893AD0: fnstsw  ax
0x893AD2: fld     dword ptr ds:0B2E77Ch
0x893AD8: test    ah, 41h
0x893ADB: jnz     short loc_893AFC
0x893ADD: fmul    qword ptr ds:0A968B0h
0x893AE3: fstp    [esp+80h+var_78]
0x893AE7: fld     [esp+80h+var_78]
0x893AEB: fcom    st(1)
0x893AED: fnstsw  ax
0x893AEF: fstp    st(1)
0x893AF1: test    ah, 5
0x893AF4: jp      short loc_893B23
0x893AF6: fstp    [esp+80h+var_74]
0x893AFA: jmp     short loc_893B25
0x893AFC: fmul    qword ptr ds:0A968A8h
0x893B02: fstp    [esp+80h+var_78]
0x893B06: fld     [esp+80h+var_78]
0x893B0A: fcom    st(1)
0x893B0C: fnstsw  ax
0x893B0E: fstp    st(1)
0x893B10: test    ah, 41h
0x893B13: jnz     short loc_893B23
0x893B15: fstp    [esp+80h+var_74]
0x893B19: jmp     short loc_893B25
0x893B1B: fstp    st
0x893B1D: fst     [esp+80h+var_74]
0x893B21: jmp     short loc_893B25
0x893B23: fstp    st
0x893B25: fld     [esp+80h+var_74]
0x893B29: fsub    dword ptr [esi+32Ch]
0x893B2F: fstp    [esp+80h+var_78]
0x893B33: fld     [esp+80h+var_78]
0x893B37: fucom   st(1)
0x893B39: fnstsw  ax
0x893B3B: fstp    st(1)
0x893B3D: test    ah, 44h
0x893B40: jnp     short loc_893B7D
0x893B42: fld1
0x893B44: fcom    dword ptr [esi+330h]
0x893B4A: fnstsw  ax
0x893B4C: test    ah, 5
0x893B4F: jp      short loc_893B59
0x893B51: fstp    dword ptr [esi+330h]
0x893B57: jmp     short loc_893B5B
0x893B59: fstp    st
0x893B5B: fmul    dword ptr [esi+330h]
0x893B61: fadd    dword ptr [esi+32Ch]
0x893B67: fstp    dword ptr [esi+32Ch]
0x893B6D: pop     esi
0x893B6E: mov     ecx, [esp+7Ch+var_4]
0x893B72: xor     ecx, esp
0x893B74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x893B79: mov     esp, ebp
0x893B7B: pop     ebp
0x893B7C: retn
0x893B7D: fstp    st
0x893B7F: mov     ecx, [esp+80h+var_4]
0x893B83: pop     esi
0x893B84: xor     ecx, esp
0x893B86: call    @__security_check_cookie@4; __security_check_cookie(x)
0x893B8B: mov     esp, ebp
0x893B8D: pop     ebp
0x893B8E: retn
