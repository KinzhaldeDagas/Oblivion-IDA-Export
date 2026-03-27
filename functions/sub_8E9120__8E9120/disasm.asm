0x8E9120: push    ebp
0x8E9121: mov     ebp, esp
0x8E9123: and     esp, 0FFFFFFF0h
0x8E9126: sub     esp, 10h
0x8E9129: mov     eax, [ebp+arg_4]
0x8E912C: mov     edx, [eax+50h]
0x8E912F: movaps  xmm2, xmmword ptr [edx+60h]
0x8E9133: fld     dword ptr [edx+0B0h]
0x8E9139: movaps  xmm0, xmmword ptr [ecx+10h]
0x8E913D: fld     dword ptr [ecx+54h]
0x8E9140: add     edx, 10h
0x8E9143: fld     st
0x8E9145: subps   xmm0, xmm2
0x8E9148: fmul    st, st(1)
0x8E914A: mulps   xmm0, xmm0
0x8E914D: movaps  xmm1, xmm0
0x8E9150: shufps  xmm1, xmm0, 55h ; 'U'
0x8E9154: addss   xmm1, xmm0
0x8E9158: movaps  xmm3, xmm0
0x8E915B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E915F: movaps  xmm0, xmmword ptr [edx+70h]
0x8E9163: addss   xmm3, xmm1
0x8E9167: movaps  xmm1, xmmword ptr [ecx+20h]
0x8E916B: subps   xmm1, xmm0
0x8E916E: mulps   xmm1, xmm1
0x8E9171: lea     eax, [esp+10h+var_8]
0x8E9175: movss   dword ptr [eax], xmm3
0x8E9179: fld     [esp+10h+var_8]
0x8E917D: movaps  xmm0, xmm1
0x8E9180: fcompp
0x8E9182: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8E9186: addps   xmm0, xmm1
0x8E9189: movaps  xmm1, xmm0
0x8E918C: lea     eax, [esp+10h+var_4]
0x8E9190: fstp    st
0x8E9192: shufps  xmm1, xmm0, 0B1h ; '±'
0x8E9196: addps   xmm0, xmm1
0x8E9199: movss   dword ptr [eax], xmm0
0x8E919D: fnstsw  ax
0x8E919F: test    ah, 5
0x8E91A2: jp      short loc_8E91CC
0x8E91A4: fld     dword ptr [ecx+58h]
0x8E91A7: fld     [esp+10h+var_4]
0x8E91AB: fmul    st, st(2)
0x8E91AD: fmul    st, st(2)
0x8E91AF: fld     st(1)
0x8E91B1: fmul    st, st(2)
0x8E91B3: fcompp
0x8E91B5: fnstsw  ax
0x8E91B7: fstp    st
0x8E91B9: test    ah, 41h
0x8E91BC: fstp    st
0x8E91BE: jnz     short loc_8E91CE
0x8E91C0: mov     eax, [ebp+arg_0]
0x8E91C3: mov     byte ptr [eax], 1
0x8E91C6: mov     esp, ebp
0x8E91C8: pop     ebp
0x8E91C9: retn    8
0x8E91CC: fstp    st
0x8E91CE: mov     eax, [ebp+arg_0]
0x8E91D1: movaps  xmmword ptr [ecx+10h], xmm2
0x8E91D5: movaps  xmm0, xmmword ptr [edx+70h]
0x8E91D9: movaps  xmmword ptr [ecx+20h], xmm0
0x8E91DD: mov     byte ptr [eax], 0
0x8E91E0: mov     esp, ebp
0x8E91E2: pop     ebp
0x8E91E3: retn    8
