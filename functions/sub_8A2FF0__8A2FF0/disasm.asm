0x8A2FF0: push    ebp
0x8A2FF1: mov     ebp, esp
0x8A2FF3: and     esp, 0FFFFFFF0h
0x8A2FF6: test    ecx, ecx
0x8A2FF8: jz      short loc_8A301C
0x8A2FFA: mov     eax, [ecx+8]
0x8A2FFD: test    eax, eax
0x8A2FFF: jz      short loc_8A301C
0x8A3001: mov     eax, [eax+50h]
0x8A3004: movaps  xmm0, xmmword ptr [eax+90h]
0x8A300B: add     eax, 90h
0x8A3010: mov     eax, [ebp+arg_0]
0x8A3013: movaps  xmmword ptr [eax], xmm0
0x8A3016: mov     esp, ebp
0x8A3018: pop     ebp
0x8A3019: retn    4
0x8A301C: mov     eax, offset stru_BA7A40
0x8A3021: movaps  xmm0, xmmword ptr [eax]
0x8A3024: mov     eax, [ebp+arg_0]
0x8A3027: movaps  xmmword ptr [eax], xmm0
0x8A302A: mov     esp, ebp
0x8A302C: pop     ebp
0x8A302D: retn    4
