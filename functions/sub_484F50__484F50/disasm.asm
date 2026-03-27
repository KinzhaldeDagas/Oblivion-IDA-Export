0x484F50: push    esi
0x484F51: mov     esi, [ecx]
0x484F53: test    esi, esi
0x484F55: push    edi
0x484F56: jz      short loc_484F70
0x484F58: mov     edi, [esi]
0x484F5A: test    edi, edi
0x484F5C: jz      short loc_484F70
0x484F5E: mov     ecx, edi; this
0x484F60: call    ExtraDataList_GetExtraScriptEventList
0x484F65: test    eax, eax
0x484F67: jnz     short loc_484F75
0x484F69: mov     esi, [esi+4]
0x484F6C: test    esi, esi
0x484F6E: jnz     short loc_484F58
0x484F70: pop     edi
0x484F71: xor     eax, eax
0x484F73: pop     esi
0x484F74: retn
0x484F75: mov     ecx, edi; this
0x484F77: pop     edi
0x484F78: pop     esi
0x484F79: jmp     ExtraDataList_GetExtraScriptEventList
