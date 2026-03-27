0x51CAA0: mov     eax, [ecx+4]
0x51CAA3: shr     eax, 7
0x51CAA6: test    al, 1
0x51CAA8: push    esi
0x51CAA9: movzx   esi, word ptr [ecx+8]
0x51CAAD: jz      short loc_51CACA
0x51CAAF: call    TESActorBaseData_GetLevel
0x51CAB4: movzx   eax, ax
0x51CAB7: cmp     ax, 1
0x51CABB: jge     short loc_51CAC2
0x51CABD: mov     eax, 1
0x51CAC2: imul    eax, esi
0x51CAC5: movzx   eax, ax
0x51CAC8: pop     esi
0x51CAC9: retn
0x51CACA: mov     ax, si
0x51CACD: pop     esi
0x51CACE: retn
