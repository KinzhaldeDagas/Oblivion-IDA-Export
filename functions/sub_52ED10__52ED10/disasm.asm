0x52ED10: xor     eax, eax
0x52ED12: push    esi
0x52ED13: xor     ecx, ecx
0x52ED15: cmp     ds:dword_B110F4[eax], ecx
0x52ED1B: jle     short loc_52ED3B
0x52ED1D: xor     edx, edx
0x52ED1F: nop
0x52ED20: mov     esi, ds:off_B111B8[eax]
0x52ED26: mov     dword ptr [edx+esi], 0
0x52ED2D: add     ecx, 1
0x52ED30: add     edx, 0Ch
0x52ED33: cmp     ecx, ds:dword_B110F4[eax]
0x52ED39: jl      short loc_52ED20
0x52ED3B: add     eax, 4
0x52ED3E: cmp     eax, 1Ch
0x52ED41: jl      short loc_52ED13
0x52ED43: pop     esi
0x52ED44: retn
