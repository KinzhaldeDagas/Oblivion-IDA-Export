0x8907A0: push    ebp
0x8907A1: mov     ebp, esp
0x8907A3: and     esp, 0FFFFFFF0h
0x8907A6: sub     esp, 40h
0x8907A9: mov     eax, ds:0B30AACh
0x8907AE: xor     eax, esp
0x8907B0: mov     [esp+40h+var_4], eax
0x8907B4: mov     eax, [ebp+arg_0]
0x8907B7: fld     dword ptr [eax]
0x8907B9: xorps   xmm1, xmm1
0x8907BC: fld     qword ptr ds:0A39088h
0x8907C2: fmul    st(1), st
0x8907C4: fxch    st(1)
0x8907C6: fstp    dword ptr [esp+40h+var_20]
0x8907CA: fld     dword ptr [eax+4]
0x8907CD: fmul    st, st(1)
0x8907CF: fstp    dword ptr [esp+40h+var_20+4]
0x8907D3: fmul    dword ptr [eax+8]
0x8907D6: fstp    dword ptr [esp+40h+var_20+8]
0x8907DA: fld     [ebp+arg_4]
0x8907DD: fld     st
0x8907DF: fld1
0x8907E1: fdivrp  st(1), st
0x8907E3: fstp    [esp+40h+var_34]
0x8907E7: movss   xmm0, [esp+40h+var_34]
0x8907ED: movss   xmm1, xmm0
0x8907F1: movaps  xmm0, [esp+40h+var_20]
0x8907F6: shufps  xmm1, xmm1, 0
0x8907FA: mulps   xmm1, xmm0
0x8907FD: movaps  xmm0, xmm1
0x890800: mulps   xmm0, xmm1
0x890803: movaps  xmm2, xmm0
0x890806: shufps  xmm2, xmm0, 55h ; 'U'
0x89080A: addss   xmm2, xmm0
0x89080E: movaps  xmm3, xmm0
0x890811: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x890815: movaps  xmm0, xmmword ptr [ecx+2F0h]
0x89081C: addss   xmm3, xmm2
0x890820: mulps   xmm0, xmm0
0x890823: movss   dword ptr [esp+40h+var_20], xmm3
0x890829: fld     dword ptr [esp+40h+var_20]
0x89082D: movaps  xmm2, xmm0
0x890830: shufps  xmm2, xmm0, 55h ; 'U'
0x890834: movaps  xmm3, xmm0
0x890837: addss   xmm2, xmm0
0x89083B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x89083F: addss   xmm3, xmm2
0x890843: movss   [esp+40h+var_30], xmm3
0x890849: fld     [esp+40h+var_30]
0x89084D: fcompp
0x89084F: fnstsw  ax
0x890851: test    ah, 5
0x890854: jp      short loc_890874
0x890856: fstp    dword ptr [ecx+300h]
0x89085C: movaps  xmmword ptr [ecx+2F0h], xmm1
0x890863: mov     ecx, [esp+40h+var_4]
0x890867: xor     ecx, esp
0x890869: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89086E: mov     esp, ebp
0x890870: pop     ebp
0x890871: retn    8
0x890874: mov     ecx, [esp+40h+var_4]
0x890878: fstp    st
0x89087A: xor     ecx, esp
0x89087C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x890881: mov     esp, ebp
0x890883: pop     ebp
0x890884: retn    8
