0x69DDA0: mov     edx, [ecx+4]
0x69DDA3: sub     esp, 0Ch
0x69DDA6: test    edx, edx
0x69DDA8: jz      loc_69DEC3
0x69DDAE: fldz
0x69DDB0: fcom    dword ptr [ecx+14h]
0x69DDB3: fnstsw  ax
0x69DDB5: test    ah, 5
0x69DDB8: jp      loc_69DEB3
0x69DDBE: fld     [esp+0Ch+arg_0]
0x69DDC2: fadd    dword ptr [ecx+10h]
0x69DDC5: fstp    [esp+0Ch+arg_0]
0x69DDC9: fld     [esp+0Ch+arg_0]
0x69DDCD: fst     dword ptr [ecx+10h]
0x69DDD0: mov     eax, [edx+78h]
0x69DDD3: movzx   edx, al
0x69DDD6: mov     [esp+0Ch+arg_0], edx
0x69DDDA: movzx   edx, ah
0x69DDDD: fild    [esp+0Ch+arg_0]
0x69DDE1: shr     eax, 10h
0x69DDE4: cmp     byte ptr [ecx+18h], 0
0x69DDE8: fstp    [esp+0Ch+var_C]
0x69DDEB: mov     [esp+0Ch+arg_0], edx
0x69DDEF: movzx   eax, al
0x69DDF2: fild    [esp+0Ch+arg_0]
0x69DDF6: mov     [esp+0Ch+arg_0], eax
0x69DDFA: fstp    [esp+0Ch+var_8]
0x69DDFE: fild    [esp+0Ch+arg_0]
0x69DE02: fstp    [esp+0Ch+var_4]
0x69DE06: fdiv    dword ptr [ecx+14h]
0x69DE09: jnz     short loc_69DE0F
0x69DE0B: fld1
0x69DE0D: fsubrp  st(1), st
0x69DE0F: fstp    [esp+0Ch+arg_0]
0x69DE13: fld1
0x69DE15: fld     [esp+0Ch+arg_0]
0x69DE19: fcom    st(1)
0x69DE1B: fnstsw  ax
0x69DE1D: test    ah, 41h
0x69DE20: jnz     short loc_69DE2F
0x69DE22: fstp    st
0x69DE24: fxch    st(1)
0x69DE26: fstp    dword ptr [ecx+14h]
0x69DE29: fstp    [esp+0Ch+arg_0]
0x69DE2D: jmp     short loc_69DE45
0x69DE2F: fstp    st(1)
0x69DE31: fcomp   st(1)
0x69DE33: fnstsw  ax
0x69DE35: test    ah, 5
0x69DE38: jp      short loc_69DE43
0x69DE3A: fst     dword ptr [ecx+14h]
0x69DE3D: fstp    [esp+0Ch+arg_0]
0x69DE41: jmp     short loc_69DE45
0x69DE43: fstp    st
0x69DE45: fld     [esp+0Ch+arg_0]
0x69DE49: mov     eax, [ecx+8]
0x69DE4C: fdiv    qword ptr ds:0A3DDD8h
0x69DE52: add     dword ptr [eax+0B8h], 1
0x69DE59: push    0
0x69DE5B: fstp    [esp+10h+arg_0]
0x69DE5F: fld     [esp+10h+var_C]
0x69DE63: fld     [esp+10h+arg_0]
0x69DE67: fld     st
0x69DE69: fmulp   st(2), st
0x69DE6B: fxch    st(1)
0x69DE6D: fstp    [esp+10h+var_C]
0x69DE71: mov     edx, [esp+10h+var_C]
0x69DE75: mov     [eax+0ECh], edx
0x69DE7B: fld     st
0x69DE7D: fmul    [esp+10h+var_8]
0x69DE81: fstp    [esp+10h+var_8]
0x69DE85: mov     edx, [esp+10h+var_8]
0x69DE89: mov     [eax+0F0h], edx
0x69DE8F: fmul    [esp+10h+var_4]
0x69DE93: fstp    [esp+10h+var_4]
0x69DE97: mov     edx, [esp+10h+var_4]
0x69DE9B: mov     [eax+0F4h], edx
0x69DEA1: lea     eax, [ecx+8]
0x69DEA4: mov     ecx, [ecx+4]
0x69DEA7: push    eax
0x69DEA8: call    sub_4B22E0
0x69DEAD: add     esp, 0Ch
0x69DEB0: retn    4
0x69DEB3: lea     eax, [ecx+8]
0x69DEB6: fstp    st
0x69DEB8: mov     ecx, [ecx+4]
0x69DEBB: push    0
0x69DEBD: push    eax
0x69DEBE: call    sub_4B22E0
0x69DEC3: add     esp, 0Ch
0x69DEC6: retn    4
