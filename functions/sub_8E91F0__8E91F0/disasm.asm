0x8E91F0: push    ebp
0x8E91F1: mov     ebp, esp
0x8E91F3: and     esp, 0FFFFFFF0h
0x8E91F6: sub     esp, 10h
0x8E91F9: mov     eax, [ebp+arg_4]
0x8E91FC: mov     edx, [eax+50h]
0x8E91FF: movaps  xmm2, xmmword ptr [edx+60h]
0x8E9203: fld     dword ptr [edx+0B0h]
0x8E9209: movaps  xmm0, xmmword ptr [ecx+30h]
0x8E920D: fld     dword ptr [ecx+5Ch]
0x8E9210: add     edx, 10h
0x8E9213: fld     st
0x8E9215: subps   xmm0, xmm2
0x8E9218: fmul    st, st(1)
0x8E921A: mulps   xmm0, xmm0
0x8E921D: movaps  xmm1, xmm0
0x8E9220: shufps  xmm1, xmm0, 55h ; 'U'
0x8E9224: addss   xmm1, xmm0
0x8E9228: movaps  xmm3, xmm0
0x8E922B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E922F: movaps  xmm0, xmmword ptr [edx+70h]
0x8E9233: addss   xmm3, xmm1
0x8E9237: movaps  xmm1, xmmword ptr [ecx+40h]
0x8E923B: subps   xmm1, xmm0
0x8E923E: mulps   xmm1, xmm1
0x8E9241: lea     eax, [esp+10h+var_8]
0x8E9245: movss   dword ptr [eax], xmm3
0x8E9249: fld     [esp+10h+var_8]
0x8E924D: movaps  xmm0, xmm1
0x8E9250: fcompp
0x8E9252: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8E9256: addps   xmm0, xmm1
0x8E9259: movaps  xmm1, xmm0
0x8E925C: lea     eax, [esp+10h+var_4]
0x8E9260: fstp    st
0x8E9262: shufps  xmm1, xmm0, 0B1h ; '±'
0x8E9266: addps   xmm0, xmm1
0x8E9269: movss   dword ptr [eax], xmm0
0x8E926D: fnstsw  ax
0x8E926F: test    ah, 5
0x8E9272: jp      short loc_8E929C
0x8E9274: fld     dword ptr [ecx+60h]
0x8E9277: fld     [esp+10h+var_4]
0x8E927B: fmul    st, st(2)
0x8E927D: fmul    st, st(2)
0x8E927F: fld     st(1)
0x8E9281: fmul    st, st(2)
0x8E9283: fcompp
0x8E9285: fnstsw  ax
0x8E9287: fstp    st
0x8E9289: test    ah, 41h
0x8E928C: fstp    st
0x8E928E: jnz     short loc_8E929E
0x8E9290: mov     eax, [ebp+arg_0]
0x8E9293: mov     byte ptr [eax], 1
0x8E9296: mov     esp, ebp
0x8E9298: pop     ebp
0x8E9299: retn    8
0x8E929C: fstp    st
0x8E929E: mov     eax, [ebp+arg_0]
0x8E92A1: movaps  xmmword ptr [ecx+30h], xmm2
0x8E92A5: movaps  xmm0, xmmword ptr [edx+70h]
0x8E92A9: movaps  xmmword ptr [ecx+40h], xmm0
0x8E92AD: mov     byte ptr [eax], 0
0x8E92B0: mov     esp, ebp
0x8E92B2: pop     ebp
0x8E92B3: retn    8
