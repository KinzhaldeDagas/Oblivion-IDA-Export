0x8F00E0: push    ebp
0x8F00E1: mov     ebp, esp
0x8F00E3: and     esp, 0FFFFFFF0h
0x8F00E6: sub     esp, 10h
0x8F00E9: mov     eax, [ebp+arg_0]
0x8F00EC: mov     ecx, [ebp+arg_4]
0x8F00EF: movaps  xmm0, xmmword ptr [ecx]
0x8F00F2: movaps  xmm2, xmmword ptr [eax+20h]
0x8F00F6: movaps  xmm5, xmmword ptr ds:0A372D0h
0x8F00FD: mov     edx, [ebp+arg_C]
0x8F0100: movaps  xmm4, xmmword ptr [eax]
0x8F0103: movaps  xmm3, xmmword ptr [eax+10h]
0x8F0107: mov     ecx, [ebp+arg_8]
0x8F010A: movaps  xmm6, xmm0
0x8F010D: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F0111: mulps   xmm6, xmm2
0x8F0114: andps   xmm6, xmm5
0x8F0117: mov     [esp+10h+var_4], edx
0x8F011B: movss   xmm1, [esp+10h+var_4]
0x8F0121: shufps  xmm1, xmm1, 0
0x8F0125: addps   xmm6, xmm1
0x8F0128: movaps  xmm7, xmm0
0x8F012B: shufps  xmm7, xmm0, 0
0x8F012F: movaps  xmm1, xmm0
0x8F0132: shufps  xmm1, xmm0, 55h ; 'U'
0x8F0136: mulps   xmm1, xmm3
0x8F0139: andps   xmm1, xmm5
0x8F013C: mulps   xmm7, xmm4
0x8F013F: andps   xmm7, xmm5
0x8F0142: movaps  xmm5, xmmword ptr [eax+30h]
0x8F0146: mov     eax, [ebp+arg_10]
0x8F0149: movaps  xmm0, xmm7
0x8F014C: addps   xmm0, xmm1
0x8F014F: movaps  xmm1, xmmword ptr [ecx]
0x8F0152: addps   xmm0, xmm6
0x8F0155: movaps  xmm6, xmm1
0x8F0158: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8F015C: mulps   xmm2, xmm6
0x8F015F: addps   xmm2, xmm5
0x8F0162: movaps  xmm5, xmm1
0x8F0165: shufps  xmm5, xmm1, 55h ; 'U'
0x8F0169: mulps   xmm3, xmm5
0x8F016C: movaps  xmm5, xmm1
0x8F016F: shufps  xmm5, xmm1, 0
0x8F0173: mulps   xmm4, xmm5
0x8F0176: addps   xmm4, xmm3
0x8F0179: movaps  xmm1, xmm4
0x8F017C: addps   xmm1, xmm2
0x8F017F: movaps  xmm2, xmmword ptr ds:0A965C0h
0x8F0186: movaps  xmm3, xmm0
0x8F0189: xorps   xmm3, xmm2
0x8F018C: movaps  xmm2, xmm3
0x8F018F: addps   xmm2, xmm1
0x8F0192: addps   xmm0, xmm1
0x8F0195: movaps  xmmword ptr [eax+10h], xmm0
0x8F0199: movaps  xmmword ptr [eax], xmm2
0x8F019C: mov     esp, ebp
0x8F019E: pop     ebp
0x8F019F: retn
