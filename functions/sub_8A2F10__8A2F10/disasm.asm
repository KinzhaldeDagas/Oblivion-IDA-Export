0x8A2F10: push    ebp
0x8A2F11: mov     ebp, esp
0x8A2F13: and     esp, 0FFFFFFF0h
0x8A2F16: test    ecx, ecx
0x8A2F18: jz      short loc_8A2F3C
0x8A2F1A: mov     eax, [ecx+8]
0x8A2F1D: test    eax, eax
0x8A2F1F: jz      short loc_8A2F3C
0x8A2F21: mov     eax, [eax+50h]
0x8A2F24: movaps  xmm0, xmmword ptr [eax+80h]
0x8A2F2B: add     eax, 80h ; '€'
0x8A2F30: mov     eax, [ebp+arg_0]
0x8A2F33: movaps  xmmword ptr [eax], xmm0
0x8A2F36: mov     esp, ebp
0x8A2F38: pop     ebp
0x8A2F39: retn    4
0x8A2F3C: mov     eax, offset flt_B2F080
0x8A2F41: movaps  xmm0, xmmword ptr [eax]
0x8A2F44: mov     eax, [ebp+arg_0]
0x8A2F47: movaps  xmmword ptr [eax], xmm0
0x8A2F4A: mov     esp, ebp
0x8A2F4C: pop     ebp
0x8A2F4D: retn    4
