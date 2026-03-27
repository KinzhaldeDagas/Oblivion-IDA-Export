0x8A9970: push    ebp
0x8A9971: mov     ebp, esp
0x8A9973: and     esp, 0FFFFFFF0h
0x8A9976: sub     esp, 40h
0x8A9979: mov     eax, [ecx]
0x8A997B: lea     edx, [esp+40h+var_20]
0x8A997F: push    edx
0x8A9980: push    0
0x8A9982: push    offset xmmword_B2F090
0x8A9987: call    dword ptr [eax+0Ch]
0x8A998A: movaps  xmm2, [esp+40h+anonymous_0]
0x8A998F: movaps  xmm1, [esp+40h+var_20]
0x8A9994: mov     eax, [ebp+arg_4]
0x8A9997: mov     edx, [ebp+arg_0]
0x8A999A: movaps  xmm0, xmm2
0x8A999D: subps   xmm0, xmm1
0x8A99A0: movaps  xmmword ptr [eax], xmm0
0x8A99A3: mov     eax, [edx+50h]
0x8A99A6: mulps   xmm0, xmm0
0x8A99A9: movaps  xmm3, xmm0
0x8A99AC: shufps  xmm3, xmm0, 55h ; 'U'
0x8A99B0: movaps  xmm4, xmm0
0x8A99B3: addss   xmm3, xmm0
0x8A99B7: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8A99BB: movaps  xmm0, xmm4
0x8A99BE: addss   xmm0, xmm3
0x8A99C2: movaps  xmm3, xmmword ptr [eax+90h]
0x8A99C9: movaps  [esp+40h+var_3C+0Ch], xmm0
0x8A99CE: sqrtss  xmm0, xmm0
0x8A99D2: movss   dword ptr [esp+40h+var_3C+0Ch], xmm0
0x8A99D8: movaps  xmm0, [esp+40h+var_3C+0Ch]
0x8A99DD: addps   xmm1, xmm2
0x8A99E0: lea     ecx, [esp+40h+var_3C+8]
0x8A99E4: movss   dword ptr [ecx], xmm0
0x8A99E8: fld     dword ptr [esp+40h+var_3C+8]
0x8A99EC: fmul    dword ptr ds:0A3D65Ch
0x8A99F2: mov     dword ptr [esp+40h+var_3C+4], 3F000000h
0x8A99FA: movss   xmm0, dword ptr [esp+40h+var_3C+4]
0x8A9A00: movaps  xmm2, xmm0
0x8A9A03: shufps  xmm2, xmm0, 0
0x8A9A07: movaps  xmm0, xmm2
0x8A9A0A: mulps   xmm0, xmm1
0x8A9A0D: subps   xmm0, xmm3
0x8A9A10: mulps   xmm0, xmm0
0x8A9A13: movaps  xmm1, xmm0
0x8A9A16: shufps  xmm1, xmm0, 55h ; 'U'
0x8A9A1A: movaps  xmm2, xmm0
0x8A9A1D: addss   xmm1, xmm0
0x8A9A21: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8A9A25: movaps  xmm0, xmm2
0x8A9A28: addss   xmm0, xmm1
0x8A9A2C: movaps  [esp+40h+var_3C+0Ch], xmm0
0x8A9A31: sqrtss  xmm0, xmm0
0x8A9A35: movss   dword ptr [esp+40h+var_3C+0Ch], xmm0
0x8A9A3B: movaps  xmm0, [esp+40h+var_3C+0Ch]
0x8A9A40: lea     ecx, [esp+40h+var_3C+4]
0x8A9A44: movss   dword ptr [ecx], xmm0
0x8A9A48: fadd    dword ptr [esp+40h+var_3C+4]
0x8A9A4C: fstp    dword ptr [eax+0B0h]
0x8A9A52: mov     esp, ebp
0x8A9A54: pop     ebp
0x8A9A55: retn
