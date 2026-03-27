0x8D1EF0: push    ebp
0x8D1EF1: mov     ebp, esp
0x8D1EF3: and     esp, 0FFFFFFF0h
0x8D1EF6: sub     esp, 20h
0x8D1EF9: mov     eax, [ebp+arg_0]
0x8D1EFC: movaps  xmm3, xmmword ptr [eax+20h]
0x8D1F00: movaps  xmm2, xmmword ptr [eax+10h]
0x8D1F04: movaps  xmm4, xmmword ptr [eax]
0x8D1F07: movaps  xmm0, xmm3
0x8D1F0A: subps   xmm0, xmm2
0x8D1F0D: subps   xmm2, xmm4
0x8D1F10: movaps  xmm6, xmm2
0x8D1F13: movaps  xmm1, xmm4
0x8D1F16: subps   xmm1, xmm3
0x8D1F19: movaps  xmm2, xmm0
0x8D1F1C: mulps   xmm2, xmm0
0x8D1F1F: movaps  xmm3, xmm2
0x8D1F22: shufps  xmm3, xmm2, 55h ; 'U'
0x8D1F26: addss   xmm3, xmm2
0x8D1F2A: movaps  xmm4, xmm2
0x8D1F2D: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x8D1F31: movaps  xmm2, xmm4
0x8D1F34: addss   xmm2, xmm3
0x8D1F38: movaps  [esp+20h+var_10], xmm2
0x8D1F3D: rsqrtss xmm3, xmm2
0x8D1F41: movss   dword ptr [esp+20h+var_10], xmm3
0x8D1F47: movaps  xmm5, [esp+20h+var_10]
0x8D1F4C: mulss   xmm2, xmm5
0x8D1F50: mulss   xmm2, xmm5
0x8D1F54: mov     [esp+20h+var_14], 40400000h
0x8D1F5C: movss   xmm3, [esp+20h+var_14]
0x8D1F62: mov     [esp+20h+var_14], 3F000000h
0x8D1F6A: movss   xmm4, [esp+20h+var_14]
0x8D1F70: movaps  xmm7, xmm3
0x8D1F73: subss   xmm7, xmm2
0x8D1F77: movaps  xmm2, xmm4
0x8D1F7A: mulss   xmm2, xmm5
0x8D1F7E: mulss   xmm2, xmm7
0x8D1F82: lea     eax, [esp+20h+var_14]
0x8D1F86: movss   dword ptr [eax], xmm2
0x8D1F8A: fld     [esp+20h+var_14]
0x8D1F8E: mov     eax, [ebp+arg_4]
0x8D1F91: movaps  xmm2, xmm1
0x8D1F94: fstp    dword ptr [eax]
0x8D1F96: mulps   xmm2, xmm1
0x8D1F99: movaps  xmm5, xmm2
0x8D1F9C: shufps  xmm5, xmm2, 55h ; 'U'
0x8D1FA0: addss   xmm5, xmm2
0x8D1FA4: movaps  xmm7, xmm2
0x8D1FA7: shufps  xmm7, xmm2, 0AAh ; 'ª'
0x8D1FAB: movaps  xmm2, xmm7
0x8D1FAE: addss   xmm2, xmm5
0x8D1FB2: movaps  [esp+20h+var_10], xmm2
0x8D1FB7: rsqrtss xmm5, xmm2
0x8D1FBB: movss   dword ptr [esp+20h+var_10], xmm5
0x8D1FC1: movaps  xmm5, [esp+20h+var_10]
0x8D1FC6: mulss   xmm2, xmm5
0x8D1FCA: mulss   xmm2, xmm5
0x8D1FCE: movaps  xmm7, xmm3
0x8D1FD1: subss   xmm7, xmm2
0x8D1FD5: movaps  xmm2, xmm4
0x8D1FD8: mulss   xmm2, xmm5
0x8D1FDC: mulss   xmm2, xmm7
0x8D1FE0: lea     ecx, [esp+20h+var_14]
0x8D1FE4: movss   dword ptr [ecx], xmm2
0x8D1FE8: mov     edx, [esp+20h+var_14]
0x8D1FEC: movaps  xmm2, xmm6
0x8D1FEF: mulps   xmm2, xmm6
0x8D1FF2: movaps  xmm5, xmm2
0x8D1FF5: shufps  xmm5, xmm2, 55h ; 'U'
0x8D1FF9: addss   xmm5, xmm2
0x8D1FFD: movaps  xmm6, xmm2
0x8D2000: shufps  xmm6, xmm2, 0AAh ; 'ª'
0x8D2004: movaps  xmm2, xmm6
0x8D2007: addss   xmm2, xmm5
0x8D200B: movaps  [esp+20h+var_10], xmm2
0x8D2010: rsqrtss xmm5, xmm2
0x8D2014: movss   dword ptr [esp+20h+var_10], xmm5
0x8D201A: movaps  xmm5, [esp+20h+var_10]
0x8D201F: mulss   xmm2, xmm5
0x8D2023: mulss   xmm2, xmm5
0x8D2027: subss   xmm3, xmm2
0x8D202B: mulss   xmm4, xmm5
0x8D202F: mov     [eax+4], edx
0x8D2032: mulss   xmm4, xmm3
0x8D2036: fld     dword ptr ds:0A2F948h
0x8D203C: movaps  xmm3, xmm0
0x8D203F: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8D2043: movaps  xmm2, xmm1
0x8D2046: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8D204A: mulps   xmm3, xmm2
0x8D204D: movaps  xmm2, xmm1
0x8D2050: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8D2054: movaps  xmm1, xmm0
0x8D2057: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D205B: movaps  xmm0, xmm1
0x8D205E: mulps   xmm0, xmm2
0x8D2061: subps   xmm0, xmm3
0x8D2064: mulps   xmm0, xmm0
0x8D2067: movaps  xmm1, xmm0
0x8D206A: shufps  xmm1, xmm0, 55h ; 'U'
0x8D206E: movaps  xmm2, xmm0
0x8D2071: addss   xmm1, xmm0
0x8D2075: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D2079: movaps  xmm0, xmm2
0x8D207C: addss   xmm0, xmm1
0x8D2080: movaps  [esp+20h+var_10], xmm0
0x8D2085: lea     ecx, [esp+20h+var_14]
0x8D2089: movss   dword ptr [ecx], xmm4
0x8D208D: mov     edx, [esp+20h+var_14]
0x8D2091: sqrtss  xmm0, xmm0
0x8D2095: movss   dword ptr [esp+20h+var_10], xmm0
0x8D209B: movaps  xmm0, [esp+20h+var_10]
0x8D20A0: lea     ecx, [esp+20h+var_14]
0x8D20A4: movss   dword ptr [ecx], xmm0
0x8D20A8: fdiv    [esp+20h+var_14]
0x8D20AC: mov     [eax+8], edx
0x8D20AF: mov     edx, [esp+20h+var_14]
0x8D20B3: mov     [eax+10h], edx
0x8D20B6: fstp    dword ptr [eax+0Ch]
0x8D20B9: mov     esp, ebp
0x8D20BB: pop     ebp
0x8D20BC: retn
