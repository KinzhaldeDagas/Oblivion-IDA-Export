0x51CA10: push    esi
0x51CA11: mov     esi, ecx
0x51CA13: mov     eax, [esi-58h]
0x51CA16: shr     eax, 7
0x51CA19: test    al, 1
0x51CA1B: jz      short loc_51CA43
0x51CA1D: lea     ecx, [esi-5Ch]
0x51CA20: call    TESActorBaseData_GetLevel
0x51CA25: movzx   eax, ax
0x51CA28: cmp     ax, 1
0x51CA2C: jge     short loc_51CA33
0x51CA2E: mov     eax, 1
0x51CA33: mov     cx, [esi+4]
0x51CA37: imul    cx, ax
0x51CA3B: movzx   eax, cx
0x51CA3E: movzx   eax, ax
0x51CA41: pop     esi
0x51CA42: retn
0x51CA43: movzx   eax, word ptr [esi+4]
0x51CA47: movzx   eax, ax
0x51CA4A: pop     esi
0x51CA4B: retn
