0x890020: push    ebp
0x890021: mov     ebp, esp
0x890023: and     esp, 0FFFFFFF0h
0x890026: sub     esp, 38h
0x890029: mov     eax, ds:0B30AACh
0x89002E: xor     eax, esp
0x890030: mov     [esp+38h+var_4], eax
0x890034: mov     ecx, [ebp+arg_0]
0x890037: push    esi
0x890038: mov     esi, [ebp+arg_4]
0x89003B: push    edi
0x89003C: mov     edi, [ebp+arg_8]
0x89003F: call    sub_8AC0A0
0x890044: movaps  xmm1, xmmword ptr [eax]
0x890047: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x89004E: movaps  [esp+40h+var_20], xmm1
0x890053: subps   xmm1, xmm0
0x890056: movaps  xmm0, xmmword ptr ds:0A372D0h
0x89005D: andps   xmm1, xmm0
0x890060: movss   xmm0, dword ptr ds:0A34BA0h
0x890068: shufps  xmm0, xmm0, 0
0x89006C: cmpltps xmm0, xmm1
0x890070: movmskps eax, xmm0
0x890073: test    al, 7
0x890075: jz      loc_890119
0x89007B: movaps  xmm0, xmmword ptr [edi+10h]
0x89007F: fldz
0x890081: movss   xmm4, dword ptr ds:0A46C30h
0x890089: movaps  [esp+40h+var_30], xmm0
0x89008E: fst     dword ptr [esp+40h+var_30+8]
0x890092: movaps  xmm2, [esp+40h+var_30]
0x890097: fstp    dword ptr [esp+40h+var_20+8]
0x89009B: movaps  xmm0, xmm2
0x89009E: mulps   xmm0, xmm2
0x8900A1: movaps  xmm1, xmm0
0x8900A4: shufps  xmm1, xmm0, 55h ; 'U'
0x8900A8: addss   xmm1, xmm0
0x8900AC: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8900B0: addss   xmm0, xmm1
0x8900B4: movaps  xmm1, xmm0
0x8900B7: rsqrtss xmm1, xmm1
0x8900BB: mulss   xmm0, xmm1
0x8900BF: mulss   xmm0, xmm1
0x8900C3: xorps   xmm3, xmm3
0x8900C6: movss   xmm3, xmm4
0x8900CA: movss   xmm4, dword ptr ds:0A3D65Ch
0x8900D2: subss   xmm3, xmm0
0x8900D6: xorps   xmm0, xmm0
0x8900D9: movss   xmm0, xmm4
0x8900DD: mulss   xmm0, xmm1
0x8900E1: movaps  xmm1, [esp+40h+var_20]
0x8900E6: mulss   xmm0, xmm3
0x8900EA: shufps  xmm0, xmm0, 0
0x8900EE: mulps   xmm0, xmm2
0x8900F1: mulps   xmm0, xmm1
0x8900F4: mov     ecx, esi
0x8900F6: movaps  [esp+40h+var_30], xmm0
0x8900FB: call    sub_8AC0A0
0x890100: movaps  xmm0, xmmword ptr [eax]
0x890103: addps   xmm0, [esp+40h+var_30]
0x890108: lea     ecx, [esp+40h+var_20]
0x89010C: push    ecx; a2
0x89010D: mov     ecx, esi; this
0x89010F: movaps  [esp+44h+var_20], xmm0
0x890114: call    sub_8AC0B0
0x890119: mov     ecx, [esp+40h+var_4]
0x89011D: pop     edi
0x89011E: pop     esi
0x89011F: xor     ecx, esp
0x890121: call    @__security_check_cookie@4; __security_check_cookie(x)
0x890126: mov     esp, ebp
0x890128: pop     ebp
0x890129: retn    0Ch
