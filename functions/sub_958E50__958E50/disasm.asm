0x958E50: push    ebp
0x958E51: mov     ebp, esp
0x958E53: and     esp, 0FFFFFFF0h
0x958E56: sub     esp, 20h
0x958E59: mov     eax, [ecx+24h]
0x958E5C: movaps  xmm1, xmmword ptr [eax]
0x958E5F: mov     eax, [ecx+14h]
0x958E62: movaps  xmm0, xmmword ptr [eax]
0x958E65: mov     edx, [ecx+34h]
0x958E68: movaps  xmm2, xmmword ptr [edx]
0x958E6B: subps   xmm0, xmm1
0x958E6E: subps   xmm1, xmm2
0x958E71: movaps  xmm3, xmm0
0x958E74: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x958E78: movaps  xmm2, xmm1
0x958E7B: shufps  xmm2, xmm1, 0C9h ; 'É'
0x958E7F: mulps   xmm3, xmm2
0x958E82: movaps  xmm2, xmm1
0x958E85: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x958E89: movaps  xmm1, xmm0
0x958E8C: shufps  xmm1, xmm0, 0C9h ; 'É'
0x958E90: mulps   xmm1, xmm2
0x958E93: subps   xmm1, xmm3
0x958E96: movaps  xmm0, xmm1
0x958E99: mulps   xmm0, xmm1
0x958E9C: movaps  xmm2, xmm0
0x958E9F: shufps  xmm2, xmm0, 55h ; 'U'
0x958EA3: addss   xmm2, xmm0
0x958EA7: movaps  xmm3, xmm0
0x958EAA: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x958EAE: movaps  xmm0, xmm3
0x958EB1: addss   xmm0, xmm2
0x958EB5: movaps  [esp+20h+var_10], xmm0
0x958EBA: rsqrtss xmm2, xmm0
0x958EBE: movss   dword ptr [esp+20h+var_10], xmm2
0x958EC4: movaps  xmm2, [esp+20h+var_10]
0x958EC9: mulss   xmm0, xmm2
0x958ECD: mulss   xmm0, xmm2
0x958ED1: mov     [esp+20h+var_14], 40400000h
0x958ED9: movss   xmm3, [esp+20h+var_14]
0x958EDF: subss   xmm3, xmm0
0x958EE3: mov     [esp+20h+var_14], 3F000000h
0x958EEB: movss   xmm0, [esp+20h+var_14]
0x958EF1: mulss   xmm0, xmm2
0x958EF5: mulss   xmm0, xmm3
0x958EF9: movaps  xmm2, xmm0
0x958EFC: shufps  xmm2, xmm0, 0
0x958F00: movaps  xmmword ptr [ecx], xmm1
0x958F03: movaps  xmm0, xmm2
0x958F06: mulps   xmm0, xmm1
0x958F09: movaps  xmmword ptr [ecx], xmm0
0x958F0C: movaps  xmm1, xmmword ptr [eax]
0x958F0F: mulps   xmm0, xmm1
0x958F12: movaps  xmm1, xmm0
0x958F15: shufps  xmm1, xmm0, 55h ; 'U'
0x958F19: movaps  xmm2, xmm0
0x958F1C: addss   xmm1, xmm0
0x958F20: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x958F24: lea     eax, [esp+20h+var_14]
0x958F28: addss   xmm2, xmm1
0x958F2C: movss   dword ptr [eax], xmm2
0x958F30: mov     edx, [esp+20h+var_14]
0x958F34: mov     [ecx+10h], edx
0x958F37: mov     esp, ebp
0x958F39: pop     ebp
0x958F3A: retn
