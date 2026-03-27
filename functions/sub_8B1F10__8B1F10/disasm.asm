0x8B1F10: push    ebp
0x8B1F11: mov     ebp, esp
0x8B1F13: and     esp, 0FFFFFFF0h
0x8B1F16: sub     esp, 8
0x8B1F19: push    esi
0x8B1F1A: push    edi
0x8B1F1B: mov     edi, [ebp+arg_0]
0x8B1F1E: push    edi
0x8B1F1F: mov     esi, ecx
0x8B1F21: call    sub_8D2860
0x8B1F26: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8B1F2D: movaps  xmm0, xmmword ptr [edi+30h]
0x8B1F31: movaps  xmm2, xmmword ptr [esi+20h]
0x8B1F35: movaps  xmm3, xmmword ptr [esi+10h]
0x8B1F39: xorps   xmm0, xmm1
0x8B1F3C: movaps  xmm1, xmm0
0x8B1F3F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8B1F43: mulps   xmm2, xmm1
0x8B1F46: movaps  xmm1, xmm0
0x8B1F49: shufps  xmm1, xmm0, 55h ; 'U'
0x8B1F4D: mulps   xmm3, xmm1
0x8B1F50: movaps  xmm1, xmm0
0x8B1F53: shufps  xmm1, xmm0, 0
0x8B1F57: movaps  xmm0, xmmword ptr [esi]
0x8B1F5A: mulps   xmm0, xmm1
0x8B1F5D: addps   xmm0, xmm3
0x8B1F60: addps   xmm0, xmm2
0x8B1F63: pop     edi
0x8B1F64: movaps  xmmword ptr [esi+30h], xmm0
0x8B1F68: pop     esi
0x8B1F69: mov     esp, ebp
0x8B1F6B: pop     ebp
0x8B1F6C: retn    4
