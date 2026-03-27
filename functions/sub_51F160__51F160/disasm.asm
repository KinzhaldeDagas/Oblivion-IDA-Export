0x51F160: push    ebx
0x51F161: mov     ebx, dword ptr [esp+4+a2]
0x51F165: push    esi
0x51F166: push    ebx; a2
0x51F167: mov     esi, ecx
0x51F169: call    TESForm_SaveModifiedForm
0x51F16E: push    ebx
0x51F16F: lea     ecx, [esi+24h]
0x51F172: call    sub_46EAC0
0x51F177: test    bl, 4
0x51F17A: jz      short loc_51F189
0x51F17C: push    1; a2
0x51F17E: lea     eax, [esi+34h]
0x51F181: push    eax; a1
0x51F182: mov     ecx, esi
0x51F184: call    TESForm_SaveDataToCurrentSaveGame
0x51F189: pop     esi
0x51F18A: pop     ebx
0x51F18B: retn    4
