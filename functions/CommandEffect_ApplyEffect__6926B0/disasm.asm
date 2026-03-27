0x6926B0: push    esi
0x6926B1: mov     esi, ecx
0x6926B3: mov     ecx, [esi+20h]; this
0x6926B6: test    ecx, ecx
0x6926B8: push    edi
0x6926B9: jz      short loc_6926C4
0x6926BB: call    MagicTarget_GetParentActor
0x6926C0: mov     edi, eax
0x6926C2: jmp     short loc_6926C6
0x6926C4: xor     edi, edi
0x6926C6: mov     ecx, [esi+24h]; this
0x6926C9: test    ecx, ecx
0x6926CB: jz      short loc_6926D4
0x6926CD: call    MagicCaster_GetParentActor
0x6926D2: jmp     short loc_6926D6
0x6926D4: xor     eax, eax
0x6926D6: test    edi, edi
0x6926D8: jz      short loc_6926E8
0x6926DA: test    eax, eax
0x6926DC: jz      short loc_6926E8
0x6926DE: push    eax
0x6926DF: push    edi
0x6926E0: call    CommandEffect_MakeActorLoyal??
0x6926E5: add     esp, 8
0x6926E8: pop     edi
0x6926E9: pop     esi
0x6926EA: retn
