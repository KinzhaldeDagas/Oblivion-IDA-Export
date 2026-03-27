0x6A2A72: mov     eax, [edi]
0x6A2A74: mov     edx, [eax+4]
0x6A2A77: mov     ecx, edi
0x6A2A79: call    edx
0x6A2A7B: test    eax, eax
0x6A2A7D: jz      short loc_6A2A93
0x6A2A7F: mov     eax, [edi]
0x6A2A81: mov     edx, [eax+4]
0x6A2A84: mov     ecx, edi
0x6A2A86: call    edx
0x6A2A88: mov     ecx, eax; this
0x6A2A8A: call    TESObjectREFR_GetName
0x6A2A8F: mov     edi, eax
0x6A2A91: jmp     short MagicTarget_AddEffect___PrintInvalidTarget_DebugMsg
0x6A2A93: mov     edi, offset aNull_1; "{NULL}"
