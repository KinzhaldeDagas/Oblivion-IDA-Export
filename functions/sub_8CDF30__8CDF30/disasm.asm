0x8CDF30: push    ebp
0x8CDF31: mov     ebp, esp
0x8CDF33: and     esp, 0FFFFFFF0h
0x8CDF36: sub     esp, 10h
0x8CDF39: mov     eax, [ebp+arg_4]
0x8CDF3C: movaps  xmm0, xmmword ptr [eax]
0x8CDF3F: mov     eax, [ebp+arg_0]
0x8CDF42: movaps  xmm2, xmmword ptr ds:0A372D0h
0x8CDF49: movaps  xmm3, xmmword ptr [eax+20h]
0x8CDF4D: mov     ecx, [ebp+arg_8]
0x8CDF50: movaps  xmm4, xmm0
0x8CDF53: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8CDF57: mulps   xmm4, xmm3
0x8CDF5A: mov     [esp+10h+var_4], ecx
0x8CDF5E: movss   xmm1, [esp+10h+var_4]
0x8CDF64: shufps  xmm1, xmm1, 0
0x8CDF68: movaps  xmm3, xmm0
0x8CDF6B: shufps  xmm3, xmm0, 55h ; 'U'
0x8CDF6F: andps   xmm4, xmm2
0x8CDF72: addps   xmm4, xmm1
0x8CDF75: movaps  xmm1, xmmword ptr [eax+10h]
0x8CDF79: mulps   xmm3, xmm1
0x8CDF7C: movaps  xmm1, xmmword ptr [eax]
0x8CDF7F: movaps  xmm5, xmm0
0x8CDF82: shufps  xmm5, xmm0, 0
0x8CDF86: mulps   xmm5, xmm1
0x8CDF89: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8CDF90: andps   xmm3, xmm2
0x8CDF93: andps   xmm5, xmm2
0x8CDF96: movaps  xmm2, xmmword ptr [eax+30h]
0x8CDF9A: mov     eax, [ebp+arg_C]
0x8CDF9D: movaps  xmm0, xmm5
0x8CDFA0: addps   xmm0, xmm3
0x8CDFA3: addps   xmm0, xmm4
0x8CDFA6: movaps  xmm3, xmm0
0x8CDFA9: xorps   xmm3, xmm1
0x8CDFAC: movaps  xmm1, xmm3
0x8CDFAF: addps   xmm1, xmm2
0x8CDFB2: addps   xmm0, xmm2
0x8CDFB5: movaps  xmmword ptr [eax+10h], xmm0
0x8CDFB9: movaps  xmmword ptr [eax], xmm1
0x8CDFBC: mov     esp, ebp
0x8CDFBE: pop     ebp
0x8CDFBF: retn
