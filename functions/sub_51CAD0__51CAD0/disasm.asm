0x51CAD0: mov     eax, [ecx+4]
0x51CAD3: shr     eax, 7
0x51CAD6: test    al, 1
0x51CAD8: push    esi
0x51CAD9: movzx   esi, word ptr [ecx+0Ah]
0x51CADD: jz      short loc_51CAFA
0x51CADF: call    TESActorBaseData_GetLevel
0x51CAE4: movzx   eax, ax
0x51CAE7: cmp     ax, 1
0x51CAEB: jge     short loc_51CAF2
0x51CAED: mov     eax, 1
0x51CAF2: imul    eax, esi
0x51CAF5: movzx   eax, ax
0x51CAF8: pop     esi
0x51CAF9: retn
0x51CAFA: mov     ax, si
0x51CAFD: pop     esi
0x51CAFE: retn
