0x88FF20: push    ebp
0x88FF21: mov     ebp, esp
0x88FF23: and     esp, 0FFFFFFF0h
0x88FF26: sub     esp, 4Ch
0x88FF29: mov     eax, ds:0B30AACh
0x88FF2E: xor     eax, esp
0x88FF30: mov     [esp+4Ch+var_4], eax
0x88FF34: mov     eax, [ebp+arg_4]
0x88FF37: fldz
0x88FF39: movaps  xmm1, xmmword ptr [eax]
0x88FF3C: push    esi
0x88FF3D: mov     esi, ecx
0x88FF3F: mov     ecx, [ebp+arg_0]
0x88FF42: lea     eax, [esp+50h+var_30]
0x88FF46: mov     edx, eax
0x88FF48: sub     ecx, edx
0x88FF4A: mov     edx, 2
0x88FF4F: movaps  xmm0, xmmword ptr [ecx+eax]
0x88FF53: movaps  xmm2, xmm1
0x88FF56: subps   xmm2, xmm0
0x88FF59: movaps  xmmword ptr [eax], xmm2
0x88FF5C: fst     dword ptr [eax+8]
0x88FF5F: add     eax, 10h
0x88FF62: sub     edx, 1
0x88FF65: jnz     short loc_88FF4F
0x88FF67: movaps  xmm0, [esp+50h+var_30]
0x88FF6C: fstp    st
0x88FF6E: mulps   xmm0, xmm0
0x88FF71: movaps  xmm2, xmm0
0x88FF74: shufps  xmm2, xmm0, 55h ; 'U'
0x88FF78: addss   xmm2, xmm0
0x88FF7C: movaps  xmm3, xmm0
0x88FF7F: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x88FF83: movaps  xmm0, [esp+50h+var_20]
0x88FF88: addss   xmm3, xmm2
0x88FF8C: mulps   xmm0, xmm0
0x88FF8F: movss   [esp+50h+var_40], xmm3
0x88FF95: fld     [esp+50h+var_40]
0x88FF99: movaps  xmm2, xmm0
0x88FF9C: shufps  xmm2, xmm0, 55h ; 'U'
0x88FFA0: movaps  xmm3, xmm0
0x88FFA3: addss   xmm2, xmm0
0x88FFA7: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x88FFAB: addss   xmm3, xmm2
0x88FFAF: movss   dword ptr [esp+50h+var_30], xmm3
0x88FFB5: fld     dword ptr [esp+50h+var_30]
0x88FFB9: fcompp
0x88FFBB: fnstsw  ax
0x88FFBD: test    ah, 41h
0x88FFC0: jnz     short loc_88FFC6
0x88FFC2: xor     ecx, ecx
0x88FFC4: jmp     short loc_88FFCB
0x88FFC6: mov     ecx, 1
0x88FFCB: fld     dword ptr ds:0A96588h
0x88FFD1: shufps  xmm1, xmm1, 0AAh ; 'ª'
0x88FFD5: fcomp   dword ptr [esi+ecx*4+50h]
0x88FFD9: movss   [esp+50h+var_40], xmm1
0x88FFDF: fnstsw  ax
0x88FFE1: test    ah, 44h
0x88FFE4: jp      short loc_88FFEC
0x88FFE6: fld     [esp+50h+var_40]
0x88FFEA: jmp     short loc_890002
0x88FFEC: fld     [esp+50h+var_40]
0x88FFF0: fadd    dword ptr [esi+ecx*4+50h]
0x88FFF4: fstp    [esp+50h+var_44]
0x88FFF8: fld     [esp+50h+var_44]
0x88FFFC: fmul    qword ptr ds:0A2FAA0h
0x890002: fstp    dword ptr [esi+ecx*4+50h]
0x890006: mov     ecx, [esp+50h+var_4]
0x89000A: pop     esi
0x89000B: xor     ecx, esp
0x89000D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x890012: mov     esp, ebp
0x890014: pop     ebp
0x890015: retn    8
