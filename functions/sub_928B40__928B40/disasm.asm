0x928B40: push    ebp
0x928B41: mov     ebp, esp
0x928B43: and     esp, 0FFFFFFF0h
0x928B46: sub     esp, 44h
0x928B49: fld     [ebp+arg_0]
0x928B4C: push    ebx
0x928B4D: fcomp   dword ptr ds:0A2FAA8h
0x928B53: push    esi
0x928B54: push    edi
0x928B55: mov     edi, ecx
0x928B57: mov     [esp+50h+var_3C], edi
0x928B5B: fnstsw  ax
0x928B5D: test    ah, 5
0x928B60: jp      short loc_928B69
0x928B62: mov     [ebp+arg_0], 0
0x928B69: mov     eax, [ebp+arg_0]
0x928B6C: push    eax
0x928B6D: call    sub_8ECB30
0x928B72: mov     esi, eax
0x928B74: mov     eax, [edi+24h]
0x928B77: lea     edx, [esi+1]
0x928B7A: add     esp, 4
0x928B7D: cmp     edx, eax
0x928B7F: mov     [esp+50h+var_44], esi
0x928B83: mov     [esp+50h+var_28], eax
0x928B87: jl      short loc_928B93
0x928B89: lea     edx, [eax-1]
0x928B8C: lea     esi, [edx-1]
0x928B8F: mov     [esp+50h+var_44], esi
0x928B93: mov     ecx, [edi+20h]
0x928B96: mov     eax, [ebp+arg_4]
0x928B99: movaps  xmm3, xmmword ptr [eax]
0x928B9C: mov     edi, ecx
0x928B9E: mov     eax, esi
0x928BA0: mov     [esp+50h+var_30], edi
0x928BA4: shl     eax, 4
0x928BA7: add     edi, eax
0x928BA9: mov     [esp+50h+var_40], ecx
0x928BAD: mov     [esp+50h+var_44], edi
0x928BB1: mov     edi, [esp+50h+var_40]
0x928BB5: mov     ecx, edx
0x928BB7: shl     ecx, 4
0x928BBA: lea     ebx, [edx+1]
0x928BBD: add     edi, eax
0x928BBF: nop
0x928BC0: mov     eax, [esp+50h+var_40]
0x928BC4: movaps  xmm2, xmmword ptr [ecx+eax]
0x928BC8: movaps  xmm0, xmmword ptr [edi]
0x928BCB: mov     eax, [esp+50h+var_44]
0x928BCF: subps   xmm2, xmm0
0x928BD2: movaps  xmm0, xmmword ptr [eax]
0x928BD5: movaps  xmm1, xmm3
0x928BD8: subps   xmm1, xmm0
0x928BDB: movaps  xmm0, xmm2
0x928BDE: mulps   xmm0, xmm1
0x928BE1: movaps  xmm1, xmm0
0x928BE4: shufps  xmm1, xmm0, 55h ; 'U'
0x928BE8: addss   xmm1, xmm0
0x928BEC: movaps  xmm4, xmm0
0x928BEF: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x928BF3: addss   xmm4, xmm1
0x928BF7: lea     eax, [esp+50h+var_38]
0x928BFB: movss   dword ptr [eax], xmm4
0x928BFF: fld     [esp+50h+var_38]
0x928C03: movaps  xmm0, xmm2
0x928C06: mulps   xmm0, xmm2
0x928C09: movaps  xmm1, xmm0
0x928C0C: shufps  xmm1, xmm0, 55h ; 'U'
0x928C10: movaps  xmm4, xmm0
0x928C13: lea     eax, [esp+50h+var_34]
0x928C17: addss   xmm1, xmm0
0x928C1B: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x928C1F: addss   xmm4, xmm1
0x928C23: movss   dword ptr [eax], xmm4
0x928C27: fdiv    [esp+50h+var_34]
0x928C2B: fcom    dword ptr ds:0A2FAA8h
0x928C31: fnstsw  ax
0x928C33: test    ah, 5
0x928C36: jp      short loc_928C5B
0x928C38: test    esi, esi
0x928C3A: jz      loc_928E4A
0x928C40: mov     eax, [esp+50h+var_44]
0x928C44: fstp    st
0x928C46: sub     eax, 10h
0x928C49: dec     esi
0x928C4A: sub     edi, 10h
0x928C4D: dec     edx
0x928C4E: dec     ebx
0x928C4F: mov     [esp+50h+var_44], eax
0x928C53: sub     ecx, 10h
0x928C56: jmp     loc_928BC0
0x928C5B: mov     eax, [esp+50h+var_30]
0x928C5F: movaps  xmm0, xmmword ptr [ecx+eax]
0x928C63: movaps  xmm1, xmm3
0x928C66: subps   xmm1, xmm0
0x928C69: movaps  xmm0, xmm2
0x928C6C: mulps   xmm0, xmm1
0x928C6F: movaps  xmm4, xmm0
0x928C72: shufps  xmm4, xmm0, 55h ; 'U'
0x928C76: movaps  xmm5, xmm0
0x928C79: lea     eax, [esp+50h+var_2C]
0x928C7D: addss   xmm4, xmm0
0x928C81: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x928C85: addss   xmm5, xmm4
0x928C89: movss   dword ptr [eax], xmm5
0x928C8D: fld     [esp+50h+var_2C]
0x928C91: fcomp   dword ptr ds:0A2FAA8h
0x928C97: fnstsw  ax
0x928C99: test    ah, 41h
0x928C9C: jnp     loc_928E4A
0x928CA2: cmp     ebx, [esp+50h+var_28]
0x928CA6: jge     loc_928E4A
0x928CAC: mov     eax, [esp+50h+var_3C]
0x928CB0: fstp    st
0x928CB2: mov     eax, [eax+20h]
0x928CB5: movaps  xmm0, xmmword ptr [ecx+eax]
0x928CB9: movaps  xmm6, xmmword ptr [ecx+eax+10h]
0x928CBE: subps   xmm6, xmm0
0x928CC1: movaps  xmm0, xmm6
0x928CC4: mulps   xmm0, xmm1
0x928CC7: movaps  xmm4, xmm0
0x928CCA: shufps  xmm4, xmm0, 55h ; 'U'
0x928CCE: movaps  xmm5, xmm0
0x928CD1: lea     eax, [esp+50h+var_24]
0x928CD5: addss   xmm4, xmm0
0x928CD9: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x928CDD: addss   xmm5, xmm4
0x928CE1: movss   dword ptr [eax], xmm5
0x928CE5: fld     [esp+50h+var_24]
0x928CE9: fcomp   dword ptr ds:0A2FAA8h
0x928CEF: movaps  [esp+50h+var_10], xmm6
0x928CF4: fnstsw  ax
0x928CF6: test    ah, 41h
0x928CF9: jnz     short loc_928D14
0x928CFB: mov     eax, [esp+50h+var_44]
0x928CFF: add     eax, 10h
0x928D02: inc     esi
0x928D03: add     edi, 10h
0x928D06: inc     edx
0x928D07: inc     ebx
0x928D08: mov     [esp+50h+var_44], eax
0x928D0C: add     ecx, 10h
0x928D0F: jmp     loc_928BC0
0x928D14: movaps  xmm0, xmm2
0x928D17: mulps   xmm0, xmm2
0x928D1A: movaps  xmm3, xmm0
0x928D1D: shufps  xmm3, xmm0, 55h ; 'U'
0x928D21: addss   xmm3, xmm0
0x928D25: movaps  xmm4, xmm0
0x928D28: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x928D2C: movaps  xmm0, xmm4
0x928D2F: addss   xmm0, xmm3
0x928D33: movaps  [esp+50h+var_20], xmm0
0x928D38: rsqrtss xmm3, xmm0
0x928D3C: movss   dword ptr [esp+50h+var_20], xmm3
0x928D42: movaps  xmm5, [esp+50h+var_20]
0x928D47: mulss   xmm0, xmm5
0x928D4B: mulss   xmm0, xmm5
0x928D4F: mov     [esp+50h+var_24], 40400000h
0x928D57: movss   xmm3, [esp+50h+var_24]
0x928D5D: movaps  xmm7, xmm3
0x928D60: subss   xmm7, xmm0
0x928D64: mov     [esp+50h+var_24], 3F000000h
0x928D6C: movss   xmm4, [esp+50h+var_24]
0x928D72: movaps  xmm0, xmm4
0x928D75: mulss   xmm0, xmm5
0x928D79: movaps  xmm5, xmm0
0x928D7C: movaps  xmm0, xmm6
0x928D7F: mulps   xmm0, xmm6
0x928D82: movaps  xmm6, xmm0
0x928D85: shufps  xmm6, xmm0, 55h ; 'U'
0x928D89: addss   xmm6, xmm0
0x928D8D: mulss   xmm5, xmm7
0x928D91: movaps  xmm7, xmm0
0x928D94: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x928D98: movaps  xmm0, xmm7
0x928D9B: addss   xmm0, xmm6
0x928D9F: movaps  [esp+50h+var_20], xmm0
0x928DA4: rsqrtss xmm6, xmm0
0x928DA8: movss   dword ptr [esp+50h+var_20], xmm6
0x928DAE: movaps  xmm6, [esp+50h+var_20]
0x928DB3: mulss   xmm0, xmm6
0x928DB7: mulss   xmm0, xmm6
0x928DBB: subss   xmm3, xmm0
0x928DBF: movaps  xmm0, xmm5
0x928DC2: shufps  xmm0, xmm5, 0
0x928DC6: mulps   xmm0, xmm2
0x928DC9: movaps  xmm2, xmm0
0x928DCC: movaps  xmm0, xmm1
0x928DCF: mulps   xmm0, xmm2
0x928DD2: movaps  xmm2, xmm0
0x928DD5: shufps  xmm2, xmm0, 55h ; 'U'
0x928DD9: addss   xmm2, xmm0
0x928DDD: mulss   xmm4, xmm6
0x928DE1: mulss   xmm4, xmm3
0x928DE5: movaps  xmm3, xmm0
0x928DE8: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x928DEC: movaps  xmm0, xmm4
0x928DEF: shufps  xmm0, xmm4, 0
0x928DF3: mulps   xmm0, [esp+50h+var_10]
0x928DF8: mulps   xmm1, xmm0
0x928DFB: addss   xmm3, xmm2
0x928DFF: movaps  xmm0, xmm1
0x928E02: shufps  xmm0, xmm1, 55h ; 'U'
0x928E06: movaps  xmm2, xmm1
0x928E09: lea     eax, [esp+50h+var_24]
0x928E0D: addss   xmm0, xmm1
0x928E11: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x928E15: addss   xmm2, xmm0
0x928E19: movss   dword ptr [eax], xmm2
0x928E1D: fld     [esp+50h+var_24]
0x928E21: lea     ecx, [esp+50h+var_28]
0x928E25: fchs
0x928E27: movss   dword ptr [ecx], xmm3
0x928E2B: fcomp   [esp+50h+var_28]
0x928E2F: mov     [esp+50h+var_44], esi
0x928E33: fnstsw  ax
0x928E35: test    ah, 41h
0x928E38: jnz     short loc_928E42
0x928E3A: fld     dword ptr ds:0A65520h
0x928E40: jmp     short loc_928E4E
0x928E42: fld     dword ptr ds:0A34BA0h
0x928E48: inc     esi
0x928E49: inc     edx
0x928E4A: mov     [esp+50h+var_44], esi
0x928E4E: fild    [esp+50h+var_44]
0x928E52: mov     ecx, [esp+50h+var_3C]
0x928E56: mov     eax, [ecx+20h]
0x928E59: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x928E60: fadd    st, st(1)
0x928E62: shl     edx, 4
0x928E65: movaps  xmm1, xmmword ptr [edx+eax]
0x928E69: mov     edx, [ebp+arg_8]
0x928E6C: fstp    [esp+50h+var_44]
0x928E70: shl     esi, 4
0x928E73: fstp    [esp+50h+var_24]
0x928E77: movss   xmm0, [esp+50h+var_24]
0x928E7D: shufps  xmm0, xmm0, 0
0x928E81: movaps  xmm2, xmm0
0x928E84: mulps   xmm2, xmm1
0x928E87: movaps  xmm1, xmmword ptr [esi+eax]
0x928E8B: subps   xmm3, xmm0
0x928E8E: mulps   xmm3, xmm1
0x928E91: addps   xmm3, xmm2
0x928E94: movaps  xmmword ptr [edx], xmm3
0x928E97: mov     al, [ecx+0Ch]
0x928E9A: test    al, al
0x928E9C: jz      short loc_928F16
0x928E9E: mov     eax, [ecx+24h]
0x928EA1: dec     eax
0x928EA2: mov     [esp+50h+var_24], eax
0x928EA6: fild    [esp+50h+var_24]
0x928EAA: fld     [esp+50h+var_44]
0x928EAE: fcomp   dword ptr ds:0A41304h
0x928EB4: fnstsw  ax
0x928EB6: test    ah, 5
0x928EB9: jp      short loc_928EE0
0x928EBB: fld     dword ptr ds:0A2F948h
0x928EC1: mov     eax, [ecx]
0x928EC3: fsub    [esp+50h+var_44]
0x928EC7: push    edx
0x928EC8: mov     edx, [ebp+arg_4]
0x928ECB: push    edx
0x928ECC: fsubr   st, st(1)
0x928ECE: push    ecx
0x928ECF: fstp    [esp+5Ch+var_5C]
0x928ED2: fstp    st
0x928ED4: call    dword ptr [eax+0Ch]
0x928ED7: pop     edi
0x928ED8: pop     esi
0x928ED9: pop     ebx
0x928EDA: mov     esp, ebp
0x928EDC: pop     ebp
0x928EDD: retn    0Ch
0x928EE0: fld     dword ptr ds:0A41304h
0x928EE6: fsubr   st, st(1)
0x928EE8: fcomp   [esp+50h+var_44]
0x928EEC: fnstsw  ax
0x928EEE: test    ah, 5
0x928EF1: jp      short loc_928F14
0x928EF3: fsub    [esp+50h+var_44]
0x928EF7: mov     eax, [ecx]
0x928EF9: push    edx
0x928EFA: mov     edx, [ebp+arg_4]
0x928EFD: fsubr   dword ptr ds:0A2F948h
0x928F03: push    edx
0x928F04: push    ecx
0x928F05: fstp    [esp+5Ch+var_5C]
0x928F08: call    dword ptr [eax+0Ch]
0x928F0B: pop     edi
0x928F0C: pop     esi
0x928F0D: pop     ebx
0x928F0E: mov     esp, ebp
0x928F10: pop     ebp
0x928F11: retn    0Ch
0x928F14: fstp    st
0x928F16: fld     [esp+50h+var_44]
0x928F1A: pop     edi
0x928F1B: pop     esi
0x928F1C: pop     ebx
0x928F1D: mov     esp, ebp
0x928F1F: pop     ebp
0x928F20: retn    0Ch
