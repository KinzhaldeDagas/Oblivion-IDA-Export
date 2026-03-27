0x691C60: push    esi
0x691C61: mov     esi, ecx
0x691C63: call    ValueModifierEffect_Remove
0x691C68: mov     ecx, [esi+20h]; this
0x691C6B: test    ecx, ecx
0x691C6D: jz      short loc_691C9E
0x691C6F: call    MagicTarget_GetParentActor
0x691C74: mov     esi, eax
0x691C76: test    esi, esi
0x691C78: jz      short loc_691C9E
0x691C7A: mov     eax, [esi]
0x691C7C: mov     edx, [eax+330h]
0x691C82: mov     ecx, esi
0x691C84: call    edx
0x691C86: test    eax, eax
0x691C88: jz      short loc_691C9E
0x691C8A: mov     eax, [esi]
0x691C8C: mov     edx, [eax+330h]
0x691C92: mov     ecx, esi
0x691C94: call    edx
0x691C96: mov     ecx, eax
0x691C98: pop     esi
0x691C99: jmp     loc_6150C0
0x691C9E: pop     esi
0x691C9F: retn
