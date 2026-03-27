0x950D80: push    ebp
0x950D81: mov     ebp, esp
0x950D83: and     esp, 0FFFFFFF0h
0x950D86: push    ecx
0x950D87: mov     eax, [ebp+arg_8]
0x950D8A: mov     [esp+4+var_4], 7F7FFFFFh
0x950D91: movss   xmm0, [esp+4+var_4]
0x950D96: shufps  xmm0, xmm0, 0
0x950D9A: movaps  xmmword ptr [eax], xmm0
0x950D9D: mov     [esp+4+var_4], 0FF7FFFFFh
0x950DA4: movss   xmm0, [esp+4+var_4]
0x950DA9: push    ebx
0x950DAA: shufps  xmm0, xmm0, 0
0x950DAE: movaps  xmmword ptr [eax+10h], xmm0
0x950DB2: mov     edx, [ecx+14h]
0x950DB5: push    esi
0x950DB6: xor     ebx, ebx
0x950DB8: test    edx, edx
0x950DBA: push    edi
0x950DBB: jle     short loc_950E20
0x950DBD: mov     esi, [ebp+arg_0]
0x950DC0: xor     edi, edi
0x950DC2: mov     edx, [ecx+10h]
0x950DC5: movaps  xmm0, xmmword ptr [edx+edi]
0x950DC9: movaps  xmm1, xmmword ptr [esi+30h]
0x950DCD: movaps  xmm3, xmmword ptr [esi+20h]
0x950DD1: add     edx, edi
0x950DD3: movaps  xmm2, xmm0
0x950DD6: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x950DDA: mulps   xmm3, xmm2
0x950DDD: movaps  xmm2, xmmword ptr [esi+10h]
0x950DE1: addps   xmm3, xmm1
0x950DE4: movaps  xmm1, xmm0
0x950DE7: shufps  xmm1, xmm0, 55h ; 'U'
0x950DEB: mulps   xmm2, xmm1
0x950DEE: movaps  xmm1, xmm0
0x950DF1: shufps  xmm1, xmm0, 0
0x950DF5: movaps  xmm0, xmmword ptr [esi]
0x950DF8: mulps   xmm0, xmm1
0x950DFB: movaps  xmm1, xmmword ptr [eax]
0x950DFE: addps   xmm0, xmm2
0x950E01: addps   xmm0, xmm3
0x950E04: minps   xmm1, xmm0
0x950E07: movaps  xmmword ptr [eax], xmm1
0x950E0A: movaps  xmm1, xmmword ptr [eax+10h]
0x950E0E: maxps   xmm1, xmm0
0x950E11: movaps  xmmword ptr [eax+10h], xmm1
0x950E15: mov     edx, [ecx+14h]
0x950E18: inc     ebx
0x950E19: add     edi, 10h
0x950E1C: cmp     ebx, edx
0x950E1E: jl      short loc_950DC2
0x950E20: fld     [ebp+arg_4]
0x950E23: movaps  xmm1, xmmword ptr [eax]
0x950E26: fadd    dword ptr [ecx+0Ch]
0x950E29: pop     edi
0x950E2A: pop     esi
0x950E2B: pop     ebx
0x950E2C: fstp    [esp+4+var_4]
0x950E2F: movss   xmm0, [esp+4+var_4]
0x950E34: shufps  xmm0, xmm0, 0
0x950E38: subps   xmm1, xmm0
0x950E3B: movaps  xmmword ptr [eax], xmm1
0x950E3E: movaps  xmm1, xmmword ptr [eax+10h]
0x950E42: addps   xmm1, xmm0
0x950E45: movaps  xmmword ptr [eax+10h], xmm1
0x950E49: mov     esp, ebp
0x950E4B: pop     ebp
0x950E4C: retn    0Ch
