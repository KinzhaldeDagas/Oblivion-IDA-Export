0x8F3EE0: push    ebp
0x8F3EE1: mov     ebp, esp
0x8F3EE3: and     esp, 0FFFFFFF0h
0x8F3EE6: sub     esp, 70h
0x8F3EE9: fld     [ebp+arg_4]
0x8F3EEC: lea     eax, [ecx+10h]
0x8F3EEF: fadd    dword ptr [ecx+0Ch]
0x8F3EF2: mov     ecx, [ebp+arg_0]
0x8F3EF5: movaps  xmm0, xmmword ptr [ecx+30h]
0x8F3EF9: movaps  xmm2, xmmword ptr [ecx]
0x8F3EFC: movaps  xmm3, xmmword ptr [ecx+10h]
0x8F3F00: fstp    [esp+70h+var_64]
0x8F3F04: movaps  xmm4, xmmword ptr [ecx+20h]
0x8F3F08: movss   xmm1, [esp+70h+var_64]
0x8F3F0E: lea     ecx, [esp+70h+var_60]
0x8F3F12: shufps  xmm1, xmm1, 0
0x8F3F16: movaps  [esp+70h+var_10], xmm0
0x8F3F1B: sub     ecx, eax
0x8F3F1D: mov     edx, 2
0x8F3F22: movaps  xmm0, xmmword ptr [eax]
0x8F3F25: movaps  xmm5, xmm0
0x8F3F28: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F3F2C: movaps  xmm6, xmm4
0x8F3F2F: mulps   xmm6, xmm5
0x8F3F32: addps   xmm6, [esp+70h+var_10]
0x8F3F37: movaps  xmm5, xmm0
0x8F3F3A: shufps  xmm5, xmm0, 55h ; 'U'
0x8F3F3E: movaps  xmm7, xmm3
0x8F3F41: mulps   xmm7, xmm5
0x8F3F44: movaps  xmm5, xmm0
0x8F3F47: shufps  xmm5, xmm0, 0
0x8F3F4B: movaps  xmm0, xmm2
0x8F3F4E: mulps   xmm0, xmm5
0x8F3F51: addps   xmm0, xmm7
0x8F3F54: addps   xmm0, xmm6
0x8F3F57: movaps  xmmword ptr [ecx+eax], xmm0
0x8F3F5B: add     eax, 10h
0x8F3F5E: dec     edx
0x8F3F5F: jnz     short loc_8F3F22
0x8F3F61: movaps  xmm0, [esp+70h+var_60]
0x8F3F66: mov     eax, [ebp+arg_8]
0x8F3F69: movaps  xmm2, [esp+70h+var_50]
0x8F3F6E: movaps  xmm3, xmm0
0x8F3F71: maxps   xmm0, xmm2
0x8F3F74: minps   xmm3, xmm2
0x8F3F77: movaps  xmmword ptr [eax+10h], xmm0
0x8F3F7B: subps   xmm3, xmm1
0x8F3F7E: movaps  xmmword ptr [eax], xmm3
0x8F3F81: movaps  xmm0, xmmword ptr [eax+10h]
0x8F3F85: addps   xmm0, xmm1
0x8F3F88: movaps  xmmword ptr [eax+10h], xmm0
0x8F3F8C: mov     esp, ebp
0x8F3F8E: pop     ebp
0x8F3F8F: retn    0Ch
