0x912140: push    ebp
0x912141: mov     ebp, esp
0x912143: and     esp, 0FFFFFFF0h
0x912146: sub     esp, 10h
0x912149: mov     edx, ds:0B2FF9Ch[esi*4]
0x912150: lea     eax, [edx+5]
0x912153: shl     eax, 4
0x912156: movaps  xmm1, xmmword ptr [eax+ecx]
0x91215A: add     eax, ecx
0x91215C: mov     eax, ds:0B2FFA0h[esi*4]
0x912163: add     eax, 8
0x912166: shl     eax, 4
0x912169: movaps  xmm0, xmmword ptr [eax+ecx]
0x91216D: mulps   xmm0, xmm1
0x912170: movaps  xmm2, xmm0
0x912173: shufps  xmm2, xmm0, 55h ; 'U'
0x912177: addss   xmm2, xmm0
0x91217B: add     edx, 8
0x91217E: movaps  xmm3, xmm0
0x912181: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x912185: shl     edx, 4
0x912188: movaps  xmm0, xmmword ptr [edx+ecx]
0x91218C: mulps   xmm0, xmm1
0x91218F: addss   xmm3, xmm2
0x912193: movaps  xmm1, xmm0
0x912196: shufps  xmm1, xmm0, 55h ; 'U'
0x91219A: movaps  xmm2, xmm0
0x91219D: addss   xmm1, xmm0
0x9121A1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9121A5: lea     ecx, [esp+10h+var_8]
0x9121A9: addss   xmm2, xmm1
0x9121AD: lea     eax, [esp+10h+var_4]
0x9121B1: movss   dword ptr [ecx], xmm2
0x9121B5: mov     edx, [esp+10h+var_8]
0x9121B9: movss   dword ptr [eax], xmm3
0x9121BD: mov     eax, [esp+10h+var_4]
0x9121C1: push    edx; float
0x9121C2: push    eax; float
0x9121C3: call    sub_8ECBB0
0x9121C8: add     esp, 8
0x9121CB: mov     esp, ebp
0x9121CD: pop     ebp
0x9121CE: retn
