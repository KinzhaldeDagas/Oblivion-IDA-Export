0x911060: push    ebp
0x911061: mov     ebp, esp
0x911063: and     esp, 0FFFFFFF0h
0x911066: sub     esp, 44h
0x911069: mov     eax, [ebp+arg_4]
0x91106C: movaps  xmm2, xmmword ptr [eax]
0x91106F: push    ebx
0x911070: push    esi
0x911071: mov     ebx, [ebp+arg_10]
0x911074: push    edi
0x911075: mov     edi, [ebp+arg_0]
0x911078: movaps  xmm0, xmmword ptr [edi]
0x91107B: movaps  xmm1, xmm2
0x91107E: shufps  xmm1, xmm2, 0C9h ; 'É'
0x911082: movaps  xmm3, xmm0
0x911085: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x911089: mulps   xmm3, xmm1
0x91108C: movaps  xmm1, xmm2
0x91108F: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x911093: movaps  xmm4, xmm0
0x911096: shufps  xmm4, xmm0, 0C9h ; 'É'
0x91109A: mulps   xmm4, xmm1
0x91109D: movaps  xmm1, xmm4
0x9110A0: subps   xmm1, xmm3
0x9110A3: mov     esi, ecx
0x9110A5: fld     dword ptr [esi+70h]
0x9110A8: movaps  [esp+50h+var_30], xmm1
0x9110AD: mulps   xmm1, xmm1
0x9110B0: fchs
0x9110B2: movaps  xmm3, xmm1
0x9110B5: fstp    [esp+50h+var_38]
0x9110B9: shufps  xmm3, xmm1, 55h ; 'U'
0x9110BD: movaps  xmm4, xmm1
0x9110C0: addss   xmm3, xmm1
0x9110C4: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x9110C8: lea     ecx, [esp+50h+var_40]
0x9110CC: addss   xmm4, xmm3
0x9110D0: movss   dword ptr [ecx], xmm4
0x9110D4: fld     [esp+50h+var_40]
0x9110D8: fcomp   dword ptr ds:0A9CCACh
0x9110DE: fnstsw  ax
0x9110E0: test    ah, 5
0x9110E3: jnp     loc_911170
0x9110E9: fld     [esp+50h+var_40]
0x9110ED: mulps   xmm0, xmm2
0x9110F0: fsqrt
0x9110F2: movaps  xmm1, xmm0
0x9110F5: shufps  xmm1, xmm0, 55h ; 'U'
0x9110F9: movaps  xmm2, xmm0
0x9110FC: addss   xmm1, xmm0
0x911100: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x911104: lea     edx, [esp+50h+var_3C]
0x911108: addss   xmm2, xmm1
0x91110C: movss   dword ptr [edx], xmm2
0x911110: mov     eax, [esp+50h+var_3C]
0x911114: push    eax; float
0x911115: fstp    [esp+54h+var_40]
0x911119: mov     ecx, [esp+54h+var_40]
0x91111D: push    ecx; float
0x91111E: call    sub_8ECBB0
0x911123: fchs
0x911125: fld     dword ptr ds:0A2F948h
0x91112B: mov     eax, [ebp+arg_C]
0x91112E: fdiv    [esp+58h+var_40]
0x911132: mov     edx, [esp+58h+var_38]
0x911136: push    ebx
0x911137: push    eax
0x911138: lea     ecx, [esp+60h+var_20]
0x91113C: push    ecx
0x91113D: mov     [esp+64h+var_10], edx
0x911141: mov     [esp+64h+var_C], 42C80000h
0x911149: fstp    [esp+64h+var_3C]
0x91114D: movss   xmm0, [esp+64h+var_3C]
0x911153: movaps  xmm1, xmm0
0x911156: shufps  xmm1, xmm0, 0
0x91115A: fstp    [esp+64h+var_8]
0x91115E: mulps   xmm1, [esp+64h+var_30]
0x911163: movaps  [esp+64h+var_20], xmm1
0x911168: call    sub_8F1B60
0x91116D: add     esp, 14h
0x911170: movaps  xmm0, xmmword ptr [edi]
0x911173: mov     ecx, [ebp+arg_8]
0x911176: movaps  xmm2, xmmword ptr [ecx]
0x911179: mov     edx, [esi+78h]
0x91117C: mov     eax, [esi+74h]
0x91117F: movaps  xmm1, xmm2
0x911182: shufps  xmm1, xmm2, 0C9h ; 'É'
0x911186: movaps  xmm3, xmm0
0x911189: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x91118D: mulps   xmm3, xmm1
0x911190: movaps  xmm1, xmm2
0x911193: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x911197: movaps  xmm4, xmm0
0x91119A: shufps  xmm4, xmm0, 0C9h ; 'É'
0x91119E: mulps   xmm4, xmm1
0x9111A1: movaps  xmm1, xmm4
0x9111A4: subps   xmm1, xmm3
0x9111A7: movaps  [esp+50h+var_30], xmm1
0x9111AC: mulps   xmm1, xmm1
0x9111AF: movaps  xmm3, xmm1
0x9111B2: mov     [esp+50h+var_34], edx
0x9111B6: shufps  xmm3, xmm1, 55h ; 'U'
0x9111BA: movaps  xmm4, xmm1
0x9111BD: addss   xmm3, xmm1
0x9111C1: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x9111C5: lea     edx, [esp+50h+var_40]
0x9111C9: addss   xmm4, xmm3
0x9111CD: movss   dword ptr [edx], xmm4
0x9111D1: fld     [esp+50h+var_40]
0x9111D5: fcomp   dword ptr ds:0A9CCACh
0x9111DB: mov     [esp+50h+var_3C], eax
0x9111DF: fnstsw  ax
0x9111E1: test    ah, 5
0x9111E4: jnp     loc_91126F
0x9111EA: fld     [esp+50h+var_40]
0x9111EE: mulps   xmm0, xmm2
0x9111F1: fsqrt
0x9111F3: movaps  xmm1, xmm0
0x9111F6: shufps  xmm1, xmm0, 55h ; 'U'
0x9111FA: movaps  xmm2, xmm0
0x9111FD: addss   xmm1, xmm0
0x911201: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x911205: lea     eax, [esp+50h+var_38]
0x911209: addss   xmm2, xmm1
0x91120D: movss   dword ptr [eax], xmm2
0x911211: mov     edx, [esp+50h+var_38]
0x911215: fstp    [esp+50h+var_40]
0x911219: mov     ecx, [esp+50h+var_40]
0x91121D: push    ecx; float
0x91121E: push    edx; float
0x91121F: call    sub_8ECBB0
0x911224: fld     dword ptr ds:0A2F948h
0x91122A: fdiv    [esp+58h+var_40]
0x91122E: mov     eax, [esp+58h+var_3C]
0x911232: mov     edx, [ebp+arg_C]
0x911235: mov     ecx, [esp+58h+var_34]
0x911239: push    ebx
0x91123A: mov     [esp+5Ch+var_10], eax
0x91123E: push    edx
0x91123F: lea     eax, [esp+60h+var_20]
0x911243: push    eax
0x911244: mov     [esp+64h+var_C], ecx
0x911248: fstp    [esp+64h+var_38]
0x91124C: movss   xmm0, [esp+64h+var_38]
0x911252: movaps  xmm1, xmm0
0x911255: shufps  xmm1, xmm0, 0
0x911259: fstp    [esp+64h+var_8]
0x91125D: mulps   xmm1, [esp+64h+var_30]
0x911262: movaps  [esp+64h+var_20], xmm1
0x911267: call    sub_8F1B60
0x91126C: add     esp, 14h
0x91126F: pop     edi
0x911270: pop     esi
0x911271: pop     ebx
0x911272: mov     esp, ebp
0x911274: pop     ebp
0x911275: retn    14h
