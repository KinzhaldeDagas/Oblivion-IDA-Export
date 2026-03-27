0x8A3030: push    ebp
0x8A3031: mov     ebp, esp
0x8A3033: and     esp, 0FFFFFFF0h
0x8A3036: test    ecx, ecx
0x8A3038: jz      short loc_8A3057
0x8A303A: mov     eax, [ecx+8]
0x8A303D: test    eax, eax
0x8A303F: jz      short loc_8A3057
0x8A3041: mov     eax, [eax+50h]
0x8A3044: movaps  xmm0, xmmword ptr [eax+60h]
0x8A3048: add     eax, 60h ; '`'
0x8A304B: mov     eax, [ebp+arg_0]
0x8A304E: movaps  xmmword ptr [eax], xmm0
0x8A3051: mov     esp, ebp
0x8A3053: pop     ebp
0x8A3054: retn    4
0x8A3057: mov     eax, offset stru_BA7A40
0x8A305C: movaps  xmm0, xmmword ptr [eax]
0x8A305F: mov     eax, [ebp+arg_0]
0x8A3062: movaps  xmmword ptr [eax], xmm0
0x8A3065: mov     esp, ebp
0x8A3067: pop     ebp
0x8A3068: retn    4
