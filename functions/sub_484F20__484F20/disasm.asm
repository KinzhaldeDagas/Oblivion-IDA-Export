0x484F20: push    esi
0x484F21: mov     esi, [ecx]
0x484F23: test    esi, esi
0x484F25: push    edi
0x484F26: jz      short loc_484F40
0x484F28: mov     edi, [esi]
0x484F2A: test    edi, edi
0x484F2C: jz      short loc_484F40
0x484F2E: mov     ecx, edi
0x484F30: call    ExtraDataList_GetExtraScript
0x484F35: test    eax, eax
0x484F37: jnz     short loc_484F45
0x484F39: mov     esi, [esi+4]
0x484F3C: test    esi, esi
0x484F3E: jnz     short loc_484F28
0x484F40: pop     edi
0x484F41: xor     eax, eax
0x484F43: pop     esi
0x484F44: retn
0x484F45: mov     ecx, edi
0x484F47: pop     edi
0x484F48: pop     esi
0x484F49: jmp     ExtraDataList_GetExtraScript
