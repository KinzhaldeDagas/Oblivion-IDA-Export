0x91CE10: push    edi
0x91CE11: mov     edi, ecx
0x91CE13: mov     eax, [edi+1Ch]
0x91CE16: test    eax, eax
0x91CE18: jz      short loc_91CE43
0x91CE1A: mov     ecx, [eax+60h]
0x91CE1D: push    esi
0x91CE1E: xor     esi, esi
0x91CE20: test    ecx, ecx
0x91CE22: jle     short loc_91CE42
0x91CE24: push    ebx
0x91CE25: lea     ebx, [edi-8]
0x91CE28: mov     eax, [eax+5Ch]
0x91CE2B: mov     ecx, [eax+esi*4]
0x91CE2E: push    ecx
0x91CE2F: mov     ecx, ebx
0x91CE31: call    sub_91CCA0
0x91CE36: mov     eax, [edi+1Ch]
0x91CE39: mov     ecx, [eax+60h]
0x91CE3C: inc     esi
0x91CE3D: cmp     esi, ecx
0x91CE3F: jl      short loc_91CE28
0x91CE41: pop     ebx
0x91CE42: pop     esi
0x91CE43: pop     edi
0x91CE44: retn
