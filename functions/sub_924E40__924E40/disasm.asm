0x924E40: push    esi
0x924E41: mov     esi, ecx
0x924E43: mov     ecx, [esi+0D0h]
0x924E49: test    ecx, ecx
0x924E4B: mov     dword ptr [esi], offset off_A9DFE8
0x924E51: jz      short loc_924E6B
0x924E53: cmp     word ptr [ecx+4], 0
0x924E58: jz      short loc_924E6B
0x924E5A: dec     word ptr [ecx+6]
0x924E5E: cmp     word ptr [ecx+6], 0
0x924E63: jnz     short loc_924E6B
0x924E65: mov     eax, [ecx]
0x924E67: push    1
0x924E69: call    dword ptr [eax]
0x924E6B: mov     ecx, [esi+0D4h]
0x924E71: test    ecx, ecx
0x924E73: jz      short loc_924E8D
0x924E75: cmp     word ptr [ecx+4], 0
0x924E7A: jz      short loc_924E8D
0x924E7C: dec     word ptr [ecx+6]
0x924E80: cmp     word ptr [ecx+6], 0
0x924E85: jnz     short loc_924E8D
0x924E87: mov     edx, [ecx]
0x924E89: push    1
0x924E8B: call    dword ptr [edx]
0x924E8D: mov     ecx, [esi+0D8h]
0x924E93: test    ecx, ecx
0x924E95: jz      short loc_924EAF
0x924E97: cmp     word ptr [ecx+4], 0
0x924E9C: jz      short loc_924EAF
0x924E9E: dec     word ptr [ecx+6]
0x924EA2: cmp     word ptr [ecx+6], 0
0x924EA7: jnz     short loc_924EAF
0x924EA9: mov     eax, [ecx]
0x924EAB: push    1
0x924EAD: call    dword ptr [eax]
0x924EAF: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x924EB5: pop     esi
0x924EB6: retn
