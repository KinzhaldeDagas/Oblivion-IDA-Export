0x51F190: push    ebx
0x51F191: mov     ebx, [esp+4+Dst]
0x51F195: push    esi
0x51F196: push    edi
0x51F197: mov     edi, [esp+0Ch+a3]
0x51F19B: push    edi; a3
0x51F19C: push    ebx; Dst
0x51F19D: mov     esi, ecx
0x51F19F: call    TESForm_LoadModifiedForm
0x51F1A4: push    edi
0x51F1A5: push    ebx
0x51F1A6: lea     ecx, [esi+24h]
0x51F1A9: call    sub_46EC70
0x51F1AE: test    bl, 4
0x51F1B1: jz      short loc_51F1C0
0x51F1B3: push    1; a2
0x51F1B5: lea     eax, [esi+34h]
0x51F1B8: push    eax; a1
0x51F1B9: mov     ecx, esi
0x51F1BB: call    TESForm_LoadDataFromCurrentSaveGame
0x51F1C0: pop     edi
0x51F1C1: pop     esi
0x51F1C2: pop     ebx
0x51F1C3: retn    8
