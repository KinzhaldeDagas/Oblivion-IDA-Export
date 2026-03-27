0x8B4020: push    ebp
0x8B4021: mov     ebp, esp
0x8B4023: and     esp, 0FFFFFFF0h
0x8B4026: sub     esp, 64h
0x8B4029: xor     edx, edx
0x8B402B: push    ebx
0x8B402C: mov     ebx, [ebp+arg_0]
0x8B402F: mov     eax, [ebx+10h]
0x8B4032: cmp     eax, edx
0x8B4034: push    esi
0x8B4035: push    edi
0x8B4036: mov     [ecx+88h], edx
0x8B403C: mov     [ecx+84h], edx
0x8B4042: mov     [ecx+80h], edx
0x8B4048: mov     [ecx+7Ch], edx
0x8B404B: mov     [ecx+78h], edx
0x8B404E: mov     [ecx+74h], edx
0x8B4051: mov     [ecx+70h], edx
0x8B4054: mov     [ecx+6Ch], edx
0x8B4057: mov     [ecx+68h], edx
0x8B405A: mov     [ecx+64h], edx
0x8B405D: jle     loc_8B42C4
0x8B4063: mov     [esp+70h+var_64], edx
0x8B4067: mov     [esp+70h+var_54], eax
0x8B406B: jmp     short loc_8B4070
0x8B406D: align 10h
0x8B4070: mov     edx, [esp+70h+var_64]
0x8B4074: mov     eax, [ebx+0Ch]
0x8B4077: mov     edi, [ebp+arg_4]
0x8B407A: movaps  xmm3, xmmword ptr [edi]
0x8B407D: mov     edi, [ebx]
0x8B407F: add     eax, edx
0x8B4081: mov     esi, eax
0x8B4083: mov     eax, [esi]
0x8B4085: mov     edx, [esi+4]
0x8B4088: mov     esi, [esi+8]
0x8B408B: shl     edx, 4
0x8B408E: movaps  xmm0, xmmword ptr [edx+edi]
0x8B4092: addps   xmm0, xmm3
0x8B4095: movaps  [esp+70h+var_20], xmm0
0x8B409A: shl     eax, 4
0x8B409D: movaps  xmm2, xmmword ptr [eax+edi]
0x8B40A1: addps   xmm2, xmm3
0x8B40A4: subps   xmm0, xmm2
0x8B40A7: movaps  [esp+70h+var_30], xmm2
0x8B40AC: shl     esi, 4
0x8B40AF: movaps  xmm1, xmmword ptr [esi+edi]
0x8B40B3: addps   xmm1, xmm3
0x8B40B6: movaps  [esp+70h+var_10], xmm1
0x8B40BB: subps   xmm1, xmm2
0x8B40BE: movaps  xmm3, xmm0
0x8B40C1: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8B40C5: movaps  xmm2, xmm1
0x8B40C8: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8B40CC: mulps   xmm3, xmm2
0x8B40CF: movaps  xmm2, xmm1
0x8B40D2: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8B40D6: movaps  xmm1, xmm0
0x8B40D9: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8B40DD: mulps   xmm1, xmm2
0x8B40E0: subps   xmm1, xmm3
0x8B40E3: movaps  xmm0, xmm1
0x8B40E6: mulps   xmm0, xmm1
0x8B40E9: movaps  xmm2, xmm0
0x8B40EC: shufps  xmm2, xmm0, 55h ; 'U'
0x8B40F0: movaps  xmm3, xmm0
0x8B40F3: addss   xmm2, xmm0
0x8B40F7: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8B40FB: movaps  xmm0, xmm3
0x8B40FE: addss   xmm0, xmm2
0x8B4102: movaps  [esp+70h+var_40], xmm0
0x8B4107: sqrtss  xmm0, xmm0
0x8B410B: movss   dword ptr [esp+70h+var_40], xmm0
0x8B4111: movaps  xmm0, [esp+70h+var_40]
0x8B4116: lea     edx, [esp+70h+var_60]
0x8B411A: movss   dword ptr [edx], xmm0
0x8B411E: fld     [esp+70h+var_60]
0x8B4122: fcomp   dword ptr ds:0A2FAA8h
0x8B4128: fnstsw  ax
0x8B412A: test    ah, 41h
0x8B412D: jnz     loc_8B42AA
0x8B4133: fld     dword ptr ds:0A2F948h
0x8B4139: fdiv    [esp+70h+var_60]
0x8B413D: fstp    [esp+70h+var_58]
0x8B4141: movss   xmm0, [esp+70h+var_58]
0x8B4147: movaps  xmm2, xmm0
0x8B414A: shufps  xmm2, xmm0, 0
0x8B414E: mulps   xmm2, xmm1
0x8B4151: movaps  [esp+70h+var_50], xmm2
0x8B4156: fld     dword ptr [esp+70h+var_50]
0x8B415A: fabs
0x8B415C: fld     dword ptr [esp+70h+var_50+4]
0x8B4160: fabs
0x8B4162: fstp    [esp+70h+var_5C]
0x8B4166: fld     dword ptr [esp+70h+var_50+8]
0x8B416A: fabs
0x8B416C: fstp    [esp+70h+var_58]
0x8B4170: fcom    [esp+70h+var_5C]
0x8B4174: fnstsw  ax
0x8B4176: test    ah, 41h
0x8B4179: jnz     short loc_8B418F
0x8B417B: fcomp   [esp+70h+var_58]
0x8B417F: fnstsw  ax
0x8B4181: test    ah, 41h
0x8B4184: jnz     short loc_8B4191
0x8B4186: mov     dword ptr [ecx+8], 0
0x8B418D: jmp     short loc_8B41AD
0x8B418F: fstp    st
0x8B4191: fld     [esp+70h+var_5C]
0x8B4195: fcomp   [esp+70h+var_58]
0x8B4199: fnstsw  ax
0x8B419B: test    ah, 41h
0x8B419E: mov     eax, 1
0x8B41A3: jz      short loc_8B41AA
0x8B41A5: mov     eax, 2
0x8B41AA: mov     [ecx+8], eax
0x8B41AD: mov     eax, [ecx+8]
0x8B41B0: inc     eax
0x8B41B1: cdq
0x8B41B2: mov     esi, 3
0x8B41B7: idiv    esi
0x8B41B9: lea     eax, [edx+1]
0x8B41BC: mov     [ecx], edx
0x8B41BE: cdq
0x8B41BF: idiv    esi
0x8B41C1: lea     eax, [esp+70h+var_50]
0x8B41C5: push    eax
0x8B41C6: mov     [ecx+4], edx
0x8B41C9: lea     edx, [esp+74h+var_30]
0x8B41CD: push    edx
0x8B41CE: call    sub_8B3B50
0x8B41D3: mov     eax, [ecx]
0x8B41D5: test    eax, eax
0x8B41D7: jnz     short loc_8B41DE
0x8B41D9: fld     dword ptr [ecx+34h]
0x8B41DC: jmp     short loc_8B41ED
0x8B41DE: mov     edx, [ecx+4]
0x8B41E1: test    edx, edx
0x8B41E3: jnz     short loc_8B41EA
0x8B41E5: fld     dword ptr [ecx+38h]
0x8B41E8: jmp     short loc_8B41ED
0x8B41EA: fld     dword ptr [ecx+3Ch]
0x8B41ED: fld     dword ptr [esp+70h+var_50]
0x8B41F1: fmul    st, st(1)
0x8B41F3: fadd    dword ptr [ecx+64h]
0x8B41F6: fstp    dword ptr [ecx+64h]
0x8B41F9: fstp    st
0x8B41FB: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B41FF: fmul    dword ptr [ecx+40h]
0x8B4202: fadd    dword ptr [ecx+eax*4+68h]
0x8B4206: fstp    dword ptr [ecx+eax*4+68h]
0x8B420A: mov     eax, [ecx+4]
0x8B420D: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4211: fmul    dword ptr [ecx+44h]
0x8B4214: fadd    dword ptr [ecx+eax*4+68h]
0x8B4218: fstp    dword ptr [ecx+eax*4+68h]
0x8B421C: mov     eax, [ecx+8]
0x8B421F: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4223: fmul    dword ptr [ecx+48h]
0x8B4226: fadd    dword ptr [ecx+eax*4+68h]
0x8B422A: fstp    dword ptr [ecx+eax*4+68h]
0x8B422E: mov     eax, [ecx]
0x8B4230: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4234: fmul    dword ptr [ecx+4Ch]
0x8B4237: fadd    dword ptr [ecx+eax*4+74h]
0x8B423B: fstp    dword ptr [ecx+eax*4+74h]
0x8B423F: mov     eax, [ecx+4]
0x8B4242: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4246: fmul    dword ptr [ecx+50h]
0x8B4249: fadd    dword ptr [ecx+eax*4+74h]
0x8B424D: fstp    dword ptr [ecx+eax*4+74h]
0x8B4251: mov     eax, [ecx+8]
0x8B4254: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4258: fmul    dword ptr [ecx+54h]
0x8B425B: fadd    dword ptr [ecx+eax*4+74h]
0x8B425F: fstp    dword ptr [ecx+eax*4+74h]
0x8B4263: mov     eax, [ecx]
0x8B4265: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4269: fmul    dword ptr [ecx+58h]
0x8B426C: fadd    dword ptr [ecx+eax*4+80h]
0x8B4273: fstp    dword ptr [ecx+eax*4+80h]
0x8B427A: mov     eax, [ecx+4]
0x8B427D: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4281: fmul    dword ptr [ecx+5Ch]
0x8B4284: fadd    dword ptr [ecx+eax*4+80h]
0x8B428B: fstp    dword ptr [ecx+eax*4+80h]
0x8B4292: mov     eax, [ecx+8]
0x8B4295: fld     dword ptr [esp+eax*4+70h+var_50]
0x8B4299: fmul    dword ptr [ecx+60h]
0x8B429C: fadd    dword ptr [ecx+eax*4+80h]
0x8B42A3: fstp    dword ptr [ecx+eax*4+80h]
0x8B42AA: mov     edx, [esp+70h+var_64]
0x8B42AE: mov     eax, [esp+70h+var_54]
0x8B42B2: add     edx, 0Ch
0x8B42B5: dec     eax
0x8B42B6: mov     [esp+70h+var_64], edx
0x8B42BA: mov     [esp+70h+var_54], eax
0x8B42BE: jnz     loc_8B4070
0x8B42C4: fld     dword ptr [ecx+68h]
0x8B42C7: pop     edi
0x8B42C8: fmul    dword ptr ds:0A3D65Ch
0x8B42CE: pop     esi
0x8B42CF: pop     ebx
0x8B42D0: fstp    dword ptr [ecx+68h]
0x8B42D3: fld     dword ptr [ecx+6Ch]
0x8B42D6: fmul    dword ptr ds:0A3D65Ch
0x8B42DC: fstp    dword ptr [ecx+6Ch]
0x8B42DF: fld     dword ptr [ecx+70h]
0x8B42E2: fmul    dword ptr ds:0A3D65Ch
0x8B42E8: fstp    dword ptr [ecx+70h]
0x8B42EB: fld     dword ptr [ecx+74h]
0x8B42EE: fmul    dword ptr ds:0A7C038h
0x8B42F4: fstp    dword ptr [ecx+74h]
0x8B42F7: fld     dword ptr [ecx+78h]
0x8B42FA: fmul    dword ptr ds:0A7C038h
0x8B4300: fstp    dword ptr [ecx+78h]
0x8B4303: fld     dword ptr [ecx+7Ch]
0x8B4306: fmul    dword ptr ds:0A7C038h
0x8B430C: fstp    dword ptr [ecx+7Ch]
0x8B430F: fld     dword ptr [ecx+80h]
0x8B4315: fmul    dword ptr ds:0A3D65Ch
0x8B431B: fstp    dword ptr [ecx+80h]
0x8B4321: fld     dword ptr [ecx+84h]
0x8B4327: fmul    dword ptr ds:0A3D65Ch
0x8B432D: fstp    dword ptr [ecx+84h]
0x8B4333: fld     dword ptr [ecx+88h]
0x8B4339: fmul    dword ptr ds:0A3D65Ch
0x8B433F: fstp    dword ptr [ecx+88h]
0x8B4345: mov     esp, ebp
0x8B4347: pop     ebp
0x8B4348: retn    8
