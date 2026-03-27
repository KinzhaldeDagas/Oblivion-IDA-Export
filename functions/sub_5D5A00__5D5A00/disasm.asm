0x5D5A00: mov     eax, [ecx+28h]
0x5D5A03: push    edi
0x5D5A04: xor     edi, edi
0x5D5A06: test    eax, eax
0x5D5A08: jz      short loc_5D5A41
0x5D5A0A: push    esi
0x5D5A0B: mov     esi, [eax+34h]
0x5D5A0E: test    esi, esi
0x5D5A10: jz      short loc_5D5A3C
0x5D5A12: mov     ecx, [esi+8]
0x5D5A15: test    ecx, ecx
0x5D5A17: lea     eax, [esi+8]
0x5D5A1A: mov     esi, [esi]
0x5D5A1C: jz      short loc_5D5A38
0x5D5A1E: push    0FB1h
0x5D5A23: call    Tile_GetFloat
0x5D5A28: fcomp   dword ptr ds:0A379B4h
0x5D5A2E: fnstsw  ax
0x5D5A30: test    ah, 44h
0x5D5A33: jp      short loc_5D5A38
0x5D5A35: add     edi, 1
0x5D5A38: test    esi, esi
0x5D5A3A: jnz     short loc_5D5A12
0x5D5A3C: pop     esi
0x5D5A3D: mov     eax, edi
0x5D5A3F: pop     edi
0x5D5A40: retn
0x5D5A41: mov     eax, edi
0x5D5A43: pop     edi
0x5D5A44: retn
