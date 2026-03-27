0x936CB0: push    ebp
0x936CB1: mov     ebp, esp
0x936CB3: and     esp, 0FFFFFFF0h
0x936CB6: sub     esp, 8
0x936CB9: mov     eax, [ebp+arg_0]
0x936CBC: push    esi
0x936CBD: mov     esi, [ebp+arg_4]
0x936CC0: movzx   edx, byte ptr [esi]
0x936CC3: mov     [eax+38h], edx
0x936CC6: movzx   edx, byte ptr [esi+1]
0x936CCA: and     edx, 0FFFFFFF8h
0x936CCD: shl     edx, 1Ch
0x936CD0: push    edi
0x936CD1: mov     [esp+10h+var_4], 3F800000h
0x936CD9: mov     edi, [esp+10h+var_4]
0x936CDD: or      edi, edx
0x936CDF: mov     edx, edi
0x936CE1: mov     [eax+30h], edx
0x936CE4: movaps  xmm0, xmmword ptr [ecx+60h]
0x936CE8: xor     edx, edx
0x936CEA: mov     dl, [esi+1]
0x936CED: mov     [esp+10h+var_4], edi
0x936CF1: pop     edi
0x936CF2: pop     esi
0x936CF3: and     edx, 70h
0x936CF6: add     edx, offset unk_AA1CC0
0x936CFC: movaps  xmm1, xmmword ptr [edx]
0x936CFF: mulps   xmm0, xmm1
0x936D02: movaps  xmmword ptr [eax], xmm0
0x936D05: movaps  xmm3, xmmword ptr [ecx+40h]
0x936D09: movaps  xmm1, xmmword ptr [ecx+50h]
0x936D0D: movaps  xmm2, xmmword ptr [ecx+20h]
0x936D11: movaps  xmm5, xmmword ptr [ecx+30h]
0x936D15: subps   xmm0, xmm1
0x936D18: movaps  xmm4, xmm3
0x936D1B: shufps  xmm4, xmm3, 44h ; 'D'
0x936D1F: movaps  xmm7, xmm3
0x936D22: movaps  xmm1, xmm2
0x936D25: shufps  xmm1, xmm5, 44h ; 'D'
0x936D29: shufps  xmm7, xmm3, 0EEh ; 'î'
0x936D2D: shufps  xmm2, xmm5, 0EEh ; 'î'
0x936D31: movaps  xmm5, xmm1
0x936D34: movaps  xmm3, xmm0
0x936D37: shufps  xmm3, xmm0, 55h ; 'U'
0x936D3B: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x936D3F: mulps   xmm5, xmm3
0x936D42: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x936D46: movaps  xmm3, xmm0
0x936D49: movaps  xmm6, xmm0
0x936D4C: shufps  xmm3, xmm0, 0
0x936D50: mulps   xmm1, xmm3
0x936D53: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x936D57: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x936D5B: mulps   xmm2, xmm6
0x936D5E: addps   xmm1, xmm5
0x936D61: addps   xmm1, xmm2
0x936D64: movaps  xmmword ptr [eax+10h], xmm1
0x936D68: mov     esp, ebp
0x936D6A: pop     ebp
0x936D6B: retn    8
