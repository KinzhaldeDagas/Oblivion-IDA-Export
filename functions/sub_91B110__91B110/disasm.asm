0x91B110: push    edi
0x91B111: mov     edi, ecx
0x91B113: mov     eax, [edi+1Ch]
0x91B116: test    eax, eax
0x91B118: jz      short loc_91B143
0x91B11A: mov     ecx, [eax+60h]
0x91B11D: push    esi
0x91B11E: xor     esi, esi
0x91B120: test    ecx, ecx
0x91B122: jle     short loc_91B142
0x91B124: push    ebx
0x91B125: lea     ebx, [edi-8]
0x91B128: mov     eax, [eax+5Ch]
0x91B12B: mov     ecx, [eax+esi*4]
0x91B12E: push    ecx
0x91B12F: mov     ecx, ebx
0x91B131: call    sub_91AC60
0x91B136: mov     eax, [edi+1Ch]
0x91B139: mov     ecx, [eax+60h]
0x91B13C: inc     esi
0x91B13D: cmp     esi, ecx
0x91B13F: jl      short loc_91B128
0x91B141: pop     ebx
0x91B142: pop     esi
0x91B143: pop     edi
0x91B144: retn
