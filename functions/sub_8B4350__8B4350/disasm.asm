0x8B4350: push    ebp
0x8B4351: mov     ebp, esp
0x8B4353: and     esp, 0FFFFFFF0h
0x8B4356: sub     esp, 10h
0x8B4359: mov     eax, [ebp+arg_4]
0x8B435C: mov     edx, [eax+4]
0x8B435F: test    edx, edx
0x8B4361: mov     [esp+10h+var_4], 7F7FFFFFh
0x8B4369: movss   xmm1, [esp+10h+var_4]
0x8B436F: mov     [esp+10h+var_4], 0FF7FFFFFh
0x8B4377: movss   xmm2, [esp+10h+var_4]
0x8B437D: xorps   xmm3, xmm3
0x8B4380: shufps  xmm1, xmm1, 0
0x8B4384: shufps  xmm2, xmm2, 0
0x8B4388: jle     short loc_8B43AA
0x8B438A: mov     eax, [eax]
0x8B438C: mov     ecx, edx
0x8B438E: mov     edi, edi
0x8B4390: movaps  xmm0, xmmword ptr [eax]
0x8B4393: movaps  xmm4, xmm0
0x8B4396: add     eax, 10h
0x8B4399: dec     ecx
0x8B439A: minps   xmm4, xmm1
0x8B439D: maxps   xmm0, xmm2
0x8B43A0: movaps  xmm1, xmm4
0x8B43A3: movaps  xmm2, xmm0
0x8B43A6: jnz     short loc_8B4390
0x8B43A8: test    edx, edx
0x8B43AA: jz      short loc_8B43CA
0x8B43AC: mov     [esp+10h+var_4], 3F000000h
0x8B43B4: movss   xmm0, [esp+10h+var_4]
0x8B43BA: addps   xmm1, xmm2
0x8B43BD: movaps  xmm2, xmm0
0x8B43C0: shufps  xmm2, xmm0, 0
0x8B43C4: movaps  xmm3, xmm2
0x8B43C7: mulps   xmm3, xmm1
0x8B43CA: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8B43D1: mov     eax, [ebp+arg_0]
0x8B43D4: xorps   xmm3, xmm0
0x8B43D7: movaps  xmmword ptr [eax], xmm3
0x8B43DA: mov     esp, ebp
0x8B43DC: pop     ebp
0x8B43DD: retn
