0x8BC000: push    esi
0x8BC001: mov     esi, ecx
0x8BC003: mov     ecx, [esi+8]
0x8BC006: test    ecx, ecx
0x8BC008: mov     dword ptr [esi], offset off_A98328
0x8BC00E: jz      short loc_8BC028
0x8BC010: cmp     word ptr [ecx+4], 0
0x8BC015: jz      short loc_8BC028
0x8BC017: dec     word ptr [ecx+6]
0x8BC01B: cmp     word ptr [ecx+6], 0
0x8BC020: jnz     short loc_8BC028
0x8BC022: mov     eax, [ecx]
0x8BC024: push    1
0x8BC026: call    dword ptr [eax]
0x8BC028: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BC02E: pop     esi
0x8BC02F: retn
