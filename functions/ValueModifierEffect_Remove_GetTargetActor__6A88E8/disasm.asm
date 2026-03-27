0x6A88E8: mov     ecx, [esi+20h]; this
0x6A88EB: test    ecx, ecx
0x6A88ED: push    edi
0x6A88EE: jz      short loc_6A88F9
0x6A88F0: call    MagicTarget_GetParentActor
0x6A88F5: mov     edi, eax
0x6A88F7: jmp     short ValueModifierEffect_Remove___TestMagnitude?
0x6A88F9: xor     edi, edi
