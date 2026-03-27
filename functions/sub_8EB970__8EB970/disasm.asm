0x8EB970: push    ebp
0x8EB971: mov     ebp, esp
0x8EB973: and     esp, 0FFFFFFF0h
0x8EB976: sub     esp, 20h
0x8EB979: mov     eax, [ecx+20h]
0x8EB97C: movaps  xmm4, xmmword ptr [ecx+10h]
0x8EB980: movaps  xmm2, xmmword ptr [ecx]
0x8EB983: mov     edx, [ecx+2Ch]
0x8EB986: mov     [esp+20h+var_18], eax
0x8EB98A: mov     eax, [ebp+arg_4]
0x8EB98D: movaps  xmm0, xmmword ptr [eax]
0x8EB990: subps   xmm0, xmm4
0x8EB993: movaps  xmm1, xmm0
0x8EB996: mulps   xmm1, xmm2
0x8EB999: movaps  xmm3, xmm1
0x8EB99C: shufps  xmm3, xmm1, 55h ; 'U'
0x8EB9A0: addss   xmm3, xmm1
0x8EB9A4: movaps  xmm5, xmm1
0x8EB9A7: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8EB9AB: addss   xmm5, xmm3
0x8EB9AF: mov     [esp+20h+var_8], edx
0x8EB9B3: lea     edx, [esp+20h+var_10]
0x8EB9B7: movss   dword ptr [edx], xmm5
0x8EB9BB: fld     [esp+20h+var_10]
0x8EB9BF: mov     edx, [ebp+arg_0]
0x8EB9C2: fchs
0x8EB9C4: mov     edx, [edx+38h]
0x8EB9C7: fstp    [esp+20h+var_4]
0x8EB9CB: fld     [esp+20h+var_10]
0x8EB9CF: movaps  xmm1, xmm0
0x8EB9D2: fmul    [esp+20h+var_10]
0x8EB9D6: mulps   xmm1, xmm0
0x8EB9D9: movaps  xmm3, xmm1
0x8EB9DC: shufps  xmm3, xmm1, 55h ; 'U'
0x8EB9E0: addss   xmm3, xmm1
0x8EB9E4: fstp    [esp+20h+var_10]
0x8EB9E8: movaps  xmm5, xmm1
0x8EB9EB: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8EB9EF: movss   xmm1, [esp+20h+var_4]
0x8EB9F5: addss   xmm5, xmm3
0x8EB9F9: movaps  xmm3, xmm1
0x8EB9FC: shufps  xmm3, xmm1, 0
0x8EBA00: mulps   xmm3, xmm2
0x8EBA03: addps   xmm0, xmm3
0x8EBA06: movaps  xmm3, xmmword ptr [edx+30h]
0x8EBA0A: lea     eax, [esp+20h+var_C]
0x8EBA0E: movss   dword ptr [eax], xmm5
0x8EBA12: movaps  xmm1, xmm0
0x8EBA15: mulps   xmm1, xmm3
0x8EBA18: movaps  xmm3, xmm1
0x8EBA1B: shufps  xmm3, xmm1, 55h ; 'U'
0x8EBA1F: movaps  xmm5, xmm1
0x8EBA22: lea     eax, [esp+20h+var_4]
0x8EBA26: addss   xmm3, xmm1
0x8EBA2A: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8EBA2E: addss   xmm5, xmm3
0x8EBA32: movss   dword ptr [eax], xmm5
0x8EBA36: fld     [esp+20h+var_4]
0x8EBA3A: fcomp   dword ptr ds:0A2FAA8h
0x8EBA40: fnstsw  ax
0x8EBA42: test    ah, 41h
0x8EBA45: jnz     short loc_8EBA4C
0x8EBA47: fld     dword ptr [ecx+24h]
0x8EBA4A: jmp     short loc_8EBA4F
0x8EBA4C: fld     dword ptr [ecx+28h]
0x8EBA4F: fst     [esp+20h+var_4]
0x8EBA53: fcomp   dword ptr ds:0A2FAA8h
0x8EBA59: fnstsw  ax
0x8EBA5B: test    ah, 41h
0x8EBA5E: jnz     loc_8EBBBB
0x8EBA64: movaps  xmm1, xmmword ptr [edx+30h]
0x8EBA68: fld     dword ptr ds:0A2FAA8h
0x8EBA6E: movaps  xmm5, xmm1
0x8EBA71: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8EBA75: movaps  xmm6, xmm1
0x8EBA78: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8EBA7C: movaps  xmm3, xmm2
0x8EBA7F: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8EBA83: mulps   xmm5, xmm3
0x8EBA86: movaps  xmm1, xmm6
0x8EBA89: movaps  xmm3, xmm2
0x8EBA8C: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8EBA90: mulps   xmm1, xmm3
0x8EBA93: subps   xmm1, xmm5
0x8EBA96: movaps  xmm3, xmm1
0x8EBA99: mulps   xmm3, xmm1
0x8EBA9C: movaps  xmm5, xmm3
0x8EBA9F: shufps  xmm5, xmm3, 55h ; 'U'
0x8EBAA3: movaps  xmm6, xmm3
0x8EBAA6: addss   xmm5, xmm3
0x8EBAAA: shufps  xmm6, xmm3, 0AAh ; 'ª'
0x8EBAAE: lea     ecx, [esp+20h+var_14]
0x8EBAB2: addss   xmm6, xmm5
0x8EBAB6: movss   dword ptr [ecx], xmm6
0x8EBABA: fld     [esp+20h+var_14]
0x8EBABE: fcomp   dword ptr ds:0A9AFD8h
0x8EBAC4: fnstsw  ax
0x8EBAC6: test    ah, 41h
0x8EBAC9: jnz     loc_8EBB61
0x8EBACF: fstp    st
0x8EBAD1: lea     edx, [esp+20h+var_14]
0x8EBAD5: fld     [esp+20h+var_14]
0x8EBAD9: fsqrt
0x8EBADB: fdivr   dword ptr ds:0A2F948h
0x8EBAE1: fstp    [esp+20h+var_14]
0x8EBAE5: movss   xmm3, [esp+20h+var_14]
0x8EBAEB: movaps  xmm5, xmm3
0x8EBAEE: shufps  xmm5, xmm3, 0
0x8EBAF2: movaps  xmm3, xmm5
0x8EBAF5: mulps   xmm3, xmm1
0x8EBAF8: movaps  xmm1, xmm3
0x8EBAFB: movaps  xmm3, xmm0
0x8EBAFE: mulps   xmm3, xmm1
0x8EBB01: movaps  xmm5, xmm3
0x8EBB04: shufps  xmm5, xmm3, 55h ; 'U'
0x8EBB08: movaps  xmm6, xmm3
0x8EBB0B: addss   xmm5, xmm3
0x8EBB0F: shufps  xmm6, xmm3, 0AAh ; 'ª'
0x8EBB13: addss   xmm6, xmm5
0x8EBB17: movss   dword ptr [edx], xmm6
0x8EBB1B: fld     [esp+20h+var_14]
0x8EBB1F: fld     [esp+20h+var_18]
0x8EBB23: fmul    [esp+20h+var_18]
0x8EBB27: fmul    [esp+20h+var_10]
0x8EBB2B: fld     [esp+20h+var_14]
0x8EBB2F: fmul    [esp+20h+var_14]
0x8EBB33: fcompp
0x8EBB35: fnstsw  ax
0x8EBB37: test    ah, 41h
0x8EBB3A: jp      short loc_8EBB61
0x8EBB3C: fstp    st
0x8EBB3E: fld     [esp+20h+var_14]
0x8EBB42: fchs
0x8EBB44: fstp    [esp+20h+var_14]
0x8EBB48: movss   xmm3, [esp+20h+var_14]
0x8EBB4E: fld     dword ptr ds:0A2FAA8h
0x8EBB54: movaps  xmm5, xmm3
0x8EBB57: shufps  xmm5, xmm3, 0
0x8EBB5B: mulps   xmm5, xmm1
0x8EBB5E: addps   xmm0, xmm5
0x8EBB61: fld     [esp+20h+var_4]
0x8EBB65: fadd    [esp+20h+var_18]
0x8EBB69: fld     st
0x8EBB6B: fmul    st, st(1)
0x8EBB6D: fmul    [esp+20h+var_10]
0x8EBB71: fld     st(2)
0x8EBB73: fmul    st, st(3)
0x8EBB75: fsubr   [esp+20h+var_C]
0x8EBB79: fsub    [esp+20h+var_10]
0x8EBB7D: fcompp
0x8EBB7F: fnstsw  ax
0x8EBB81: fstp    st
0x8EBB83: test    ah, 41h
0x8EBB86: jp      short loc_8EBBDF
0x8EBB88: fld     dword ptr ds:0A2FAA8h
0x8EBB8E: fld     st(1)
0x8EBB90: fucompp
0x8EBB92: fnstsw  ax
0x8EBB94: test    ah, 44h
0x8EBB97: jp      short loc_8EBBA2
0x8EBB99: fstp    st
0x8EBB9B: movaps  xmmword ptr [esi], xmm4
0x8EBB9E: mov     esp, ebp
0x8EBBA0: pop     ebp
0x8EBBA1: retn
0x8EBBA2: fstp    [esp+20h+var_4]
0x8EBBA6: movss   xmm0, [esp+20h+var_4]
0x8EBBAC: movaps  xmm3, xmm0
0x8EBBAF: shufps  xmm3, xmm0, 0
0x8EBBB3: movaps  xmm0, xmm3
0x8EBBB6: mulps   xmm0, xmm1
0x8EBBB9: jmp     short loc_8EBBE1
0x8EBBBB: fld     [esp+20h+var_18]
0x8EBBBF: fmul    [esp+20h+var_18]
0x8EBBC3: fadd    dword ptr ds:0A2F948h
0x8EBBC9: fmul    [esp+20h+var_10]
0x8EBBCD: fcomp   [esp+20h+var_C]
0x8EBBD1: fnstsw  ax
0x8EBBD3: test    ah, 1
0x8EBBD6: jnz     short loc_8EBBE1
0x8EBBD8: movaps  xmmword ptr [esi], xmm4
0x8EBBDB: mov     esp, ebp
0x8EBBDD: pop     ebp
0x8EBBDE: retn
0x8EBBDF: fstp    st
0x8EBBE1: fld     [esp+20h+var_8]
0x8EBBE5: fcomp   dword ptr ds:0A2F948h
0x8EBBEB: fnstsw  ax
0x8EBBED: test    ah, 5
0x8EBBF0: jp      loc_8EBCB9
0x8EBBF6: movaps  xmm1, xmm0
0x8EBBF9: mulps   xmm1, xmm0
0x8EBBFC: movaps  xmm3, xmm1
0x8EBBFF: shufps  xmm3, xmm1, 55h ; 'U'
0x8EBC03: movaps  xmm5, xmm1
0x8EBC06: lea     eax, [esp+20h+var_10]
0x8EBC0A: addss   xmm3, xmm1
0x8EBC0E: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x8EBC12: addss   xmm5, xmm3
0x8EBC16: movss   dword ptr [eax], xmm5
0x8EBC1A: fld     [esp+20h+var_10]
0x8EBC1E: fcomp   dword ptr ds:0A9AFD8h
0x8EBC24: fnstsw  ax
0x8EBC26: test    ah, 1
0x8EBC29: jnz     loc_8EBCB9
0x8EBC2F: fld     [esp+20h+var_C]
0x8EBC33: fmul    dword ptr ds:0A37080h
0x8EBC39: fcomp   [esp+20h+var_10]
0x8EBC3D: fnstsw  ax
0x8EBC3F: test    ah, 5
0x8EBC42: jp      short loc_8EBCB9
0x8EBC44: fld     [esp+20h+var_C]
0x8EBC48: lea     ecx, [esp+20h+var_4]
0x8EBC4C: fdiv    [esp+20h+var_10]
0x8EBC50: fsqrt
0x8EBC52: fld     dword ptr ds:0A2F948h
0x8EBC58: fsub    [esp+20h+var_8]
0x8EBC5C: fmulp   st(1), st
0x8EBC5E: fadd    [esp+20h+var_8]
0x8EBC62: fstp    [esp+20h+var_4]
0x8EBC66: movss   xmm1, [esp+20h+var_4]
0x8EBC6C: movaps  xmm3, xmm1
0x8EBC6F: shufps  xmm3, xmm1, 0
0x8EBC73: movaps  xmm1, xmm3
0x8EBC76: mulps   xmm1, xmm0
0x8EBC79: movaps  xmm0, xmm2
0x8EBC7C: mulps   xmm0, xmm1
0x8EBC7F: movaps  xmm3, xmm0
0x8EBC82: shufps  xmm3, xmm0, 55h ; 'U'
0x8EBC86: addss   xmm3, xmm0
0x8EBC8A: movaps  xmm5, xmm0
0x8EBC8D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8EBC91: addss   xmm5, xmm3
0x8EBC95: movss   dword ptr [ecx], xmm5
0x8EBC99: fld     [esp+20h+var_4]
0x8EBC9D: fchs
0x8EBC9F: fstp    [esp+20h+var_4]
0x8EBCA3: movss   xmm0, [esp+20h+var_4]
0x8EBCA9: movaps  xmm3, xmm0
0x8EBCAC: shufps  xmm3, xmm0, 0
0x8EBCB0: mulps   xmm3, xmm2
0x8EBCB3: addps   xmm1, xmm3
0x8EBCB6: movaps  xmm0, xmm1
0x8EBCB9: addps   xmm0, xmm4
0x8EBCBC: movaps  xmmword ptr [esi], xmm0
0x8EBCBF: mov     esp, ebp
0x8EBCC1: pop     ebp
0x8EBCC2: retn
