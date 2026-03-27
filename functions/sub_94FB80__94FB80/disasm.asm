0x94FB80: push    ebp
0x94FB81: mov     ebp, esp
0x94FB83: and     esp, 0FFFFFFF0h
0x94FB86: sub     esp, 10h
0x94FB89: mov     eax, [ebp+arg_0]
0x94FB8C: mov     ecx, [ebp+arg_4]
0x94FB8F: mov     edx, [ebp+arg_8]
0x94FB92: movaps  xmm5, xmmword ptr [eax+100h]
0x94FB99: movaps  xmm1, xmmword ptr [edx]
0x94FB9C: movaps  xmm4, xmmword ptr [eax+0E0h]
0x94FBA3: movaps  xmm0, xmmword ptr [ecx]
0x94FBA6: movaps  xmm2, xmmword ptr [eax+0F0h]
0x94FBAD: subps   xmm0, xmm1
0x94FBB0: movaps  xmm3, xmmword ptr [ecx+10h]
0x94FBB4: movaps  xmm1, xmm4
0x94FBB7: shufps  xmm1, xmm2, 44h ; 'D'
0x94FBBB: movaps  xmm6, xmm0
0x94FBBE: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x94FBC2: movaps  xmm2, xmm5
0x94FBC5: shufps  xmm2, xmm5, 44h ; 'D'
0x94FBC9: movaps  xmm7, xmm5
0x94FBCC: shufps  xmm7, xmm5, 0EEh ; 'î'
0x94FBD0: movaps  xmm5, xmmword ptr [eax+0F0h]
0x94FBD7: shufps  xmm4, xmm5, 0EEh ; 'î'
0x94FBDB: shufps  xmm4, xmm7, 88h ; 'ˆ'
0x94FBDF: mulps   xmm4, xmm6
0x94FBE2: movaps  xmm5, xmm4
0x94FBE5: movaps  xmm4, xmm0
0x94FBE8: shufps  xmm4, xmm0, 55h ; 'U'
0x94FBEC: movaps  [esp+10h+var_10], xmm2
0x94FBF0: movaps  xmm2, xmmword ptr [edx+10h]
0x94FBF4: movaps  xmm6, xmm4
0x94FBF7: movaps  xmm4, [esp+10h+var_10]
0x94FBFB: movaps  xmm7, xmm1
0x94FBFE: shufps  xmm7, xmm4, 0DDh ; 'Ý'
0x94FC02: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x94FC06: movaps  xmm4, xmmword ptr [eax+90h]
0x94FC0D: mulps   xmm7, xmm6
0x94FC10: movaps  xmm6, xmm0
0x94FC13: shufps  xmm6, xmm0, 0
0x94FC17: movaps  xmm0, xmm2
0x94FC1A: shufps  xmm0, xmm2, 0AAh ; 'ª'
0x94FC1E: mulps   xmm4, xmm0
0x94FC21: movaps  xmm0, xmm2
0x94FC24: shufps  xmm0, xmm2, 55h ; 'U'
0x94FC28: mulps   xmm1, xmm6
0x94FC2B: addps   xmm1, xmm7
0x94FC2E: addps   xmm1, xmm5
0x94FC31: movaps  xmm5, xmmword ptr [eax+80h]
0x94FC38: mulps   xmm5, xmm0
0x94FC3B: movaps  xmm0, xmm2
0x94FC3E: shufps  xmm0, xmm2, 0
0x94FC42: movaps  xmm2, xmmword ptr [eax+70h]
0x94FC46: mulps   xmm2, xmm0
0x94FC49: movaps  xmm0, xmm3
0x94FC4C: shufps  xmm0, xmm3, 0AAh ; 'ª'
0x94FC50: addps   xmm2, xmm5
0x94FC53: movaps  xmm5, xmmword ptr [eax+10h]
0x94FC57: addps   xmm2, xmm4
0x94FC5A: movaps  xmm4, xmmword ptr [eax+20h]
0x94FC5E: mulps   xmm4, xmm0
0x94FC61: movaps  xmm0, xmm3
0x94FC64: shufps  xmm0, xmm3, 55h ; 'U'
0x94FC68: mulps   xmm5, xmm0
0x94FC6B: movaps  xmm0, xmm3
0x94FC6E: shufps  xmm0, xmm3, 0
0x94FC72: movaps  xmm3, xmmword ptr [eax]
0x94FC75: mov     eax, [ebp+arg_C]
0x94FC78: mulps   xmm3, xmm0
0x94FC7B: addps   xmm3, xmm5
0x94FC7E: addps   xmm3, xmm4
0x94FC81: subps   xmm3, xmm2
0x94FC84: addps   xmm3, xmm1
0x94FC87: movaps  xmmword ptr [eax], xmm3
0x94FC8A: mov     esp, ebp
0x94FC8C: pop     ebp
0x94FC8D: retn
