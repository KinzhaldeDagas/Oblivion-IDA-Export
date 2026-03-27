0x94FA50: push    ebp
0x94FA51: mov     ebp, esp
0x94FA53: and     esp, 0FFFFFFF0h
0x94FA56: sub     esp, 0Ch
0x94FA59: mov     eax, [ebp+arg_0]
0x94FA5C: movaps  xmm2, xmmword ptr [eax+100h]
0x94FA63: movaps  xmm3, xmmword ptr [eax+0F0h]
0x94FA6A: mov     ecx, [eax+60h]
0x94FA6D: push    esi
0x94FA6E: mov     esi, [ebp+arg_4]
0x94FA71: movaps  xmm0, xmmword ptr [esi]
0x94FA74: movaps  xmm1, xmm0
0x94FA77: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x94FA7B: mulps   xmm2, xmm1
0x94FA7E: movaps  xmm1, xmm0
0x94FA81: shufps  xmm1, xmm0, 55h ; 'U'
0x94FA85: mulps   xmm3, xmm1
0x94FA88: movaps  xmm1, xmm0
0x94FA8B: shufps  xmm1, xmm0, 0
0x94FA8F: movaps  xmm0, xmmword ptr [eax+0E0h]
0x94FA96: mulps   xmm0, xmm1
0x94FA99: addps   xmm0, xmm3
0x94FA9C: addps   xmm0, xmm2
0x94FA9F: mov     [esp+10h+var_4], ecx
0x94FAA3: mov     ecx, [ebp+arg_8]
0x94FAA6: movss   xmm1, [esp+10h+var_4]
0x94FAAC: movaps  xmm2, xmm1
0x94FAAF: shufps  xmm2, xmm1, 0
0x94FAB3: movaps  xmm1, xmmword ptr [ecx]
0x94FAB6: mulps   xmm2, xmm0
0x94FAB9: addps   xmm1, xmm2
0x94FABC: movaps  xmmword ptr [ecx], xmm1
0x94FABF: mov     edx, [eax+0D0h]
0x94FAC5: mov     [esp+10h+var_4], edx
0x94FAC9: mov     edx, [ebp+arg_C]
0x94FACC: movss   xmm1, [esp+10h+var_4]
0x94FAD2: movaps  xmm2, xmm1
0x94FAD5: shufps  xmm2, xmm1, 0
0x94FAD9: mulps   xmm2, xmm0
0x94FADC: movaps  xmm0, xmmword ptr [edx]
0x94FADF: subps   xmm0, xmm2
0x94FAE2: movaps  xmmword ptr [edx], xmm0
0x94FAE5: movaps  xmm0, xmmword ptr [esi]
0x94FAE8: movaps  xmm2, xmmword ptr [eax+50h]
0x94FAEC: movaps  xmm3, xmmword ptr [eax+40h]
0x94FAF0: movaps  xmm1, xmm0
0x94FAF3: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x94FAF7: mulps   xmm2, xmm1
0x94FAFA: movaps  xmm1, xmm0
0x94FAFD: shufps  xmm1, xmm0, 55h ; 'U'
0x94FB01: mulps   xmm3, xmm1
0x94FB04: movaps  xmm1, xmm0
0x94FB07: shufps  xmm1, xmm0, 0
0x94FB0B: movaps  xmm0, xmmword ptr [eax+30h]
0x94FB0F: mulps   xmm0, xmm1
0x94FB12: movaps  xmm1, xmmword ptr [ecx+10h]
0x94FB16: addps   xmm0, xmm3
0x94FB19: addps   xmm0, xmm2
0x94FB1C: addps   xmm1, xmm0
0x94FB1F: movaps  xmmword ptr [ecx+10h], xmm1
0x94FB23: movaps  xmm0, xmmword ptr [esi]
0x94FB26: movaps  xmm2, xmmword ptr [eax+0C0h]
0x94FB2D: movaps  xmm3, xmmword ptr [eax+0B0h]
0x94FB34: movaps  xmm1, xmm0
0x94FB37: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x94FB3B: mulps   xmm2, xmm1
0x94FB3E: movaps  xmm1, xmm0
0x94FB41: shufps  xmm1, xmm0, 55h ; 'U'
0x94FB45: mulps   xmm3, xmm1
0x94FB48: movaps  xmm1, xmm0
0x94FB4B: shufps  xmm1, xmm0, 0
0x94FB4F: movaps  xmm0, xmmword ptr [eax+0A0h]
0x94FB56: mulps   xmm0, xmm1
0x94FB59: movaps  xmm1, xmmword ptr [edx+10h]
0x94FB5D: xor     eax, eax
0x94FB5F: addps   xmm0, xmm3
0x94FB62: addps   xmm0, xmm2
0x94FB65: subps   xmm1, xmm0
0x94FB68: movaps  xmmword ptr [edx+10h], xmm1
0x94FB6C: mov     [ecx+1Ch], eax
0x94FB6F: mov     [edx+1Ch], eax
0x94FB72: mov     [ecx+0Ch], eax
0x94FB75: mov     [edx+0Ch], eax
0x94FB78: pop     esi
0x94FB79: mov     esp, ebp
0x94FB7B: pop     ebp
0x94FB7C: retn
