0x532EF0: push    edi
0x532EF1: mov     edi, ecx
0x532EF3: cmp     word ptr [edi+14h], 0
0x532EF8: jz      short loc_532F42
0x532EFA: mov     eax, [edi+0Ch]
0x532EFD: mov     ecx, [eax]
0x532EFF: test    ecx, ecx
0x532F01: jz      short loc_532F42
0x532F03: mov     edx, [ecx]
0x532F05: mov     eax, [edx+58h]
0x532F08: call    eax
0x532F0A: test    eax, eax
0x532F0C: jz      short loc_532F16
0x532F0E: mov     eax, [eax+2B0h]
0x532F14: jmp     short loc_532F18
0x532F16: xor     eax, eax
0x532F18: test    eax, eax
0x532F1A: jz      short loc_532F42
0x532F1C: push    esi
0x532F1D: xor     esi, esi
0x532F1F: cmp     [edi+14h], si
0x532F23: jbe     short loc_532F41
0x532F25: mov     ecx, [edi+0Ch]
0x532F28: mov     ecx, [ecx+esi*4]
0x532F2B: test    ecx, ecx
0x532F2D: jz      short loc_532F36
0x532F2F: mov     edx, [ecx]
0x532F31: mov     eax, [edx+60h]
0x532F34: call    eax
0x532F36: movzx   ecx, word ptr [edi+14h]
0x532F3A: add     esi, 1
0x532F3D: cmp     esi, ecx
0x532F3F: jb      short loc_532F25
0x532F41: pop     esi
0x532F42: pop     edi
0x532F43: retn
