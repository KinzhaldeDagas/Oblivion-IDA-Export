0x51DA50: push    esi
0x51DA51: push    edi
0x51DA52: mov     edi, [esp+8+arg_0]
0x51DA56: push    edi
0x51DA57: mov     esi, ecx
0x51DA59: call    TESActorBase_SaveModified
0x51DA5E: test    edi, 200h
0x51DA64: jz      short loc_51DA96
0x51DA66: push    1; a2
0x51DA68: lea     eax, [esi+105h]
0x51DA6E: push    eax; a1
0x51DA6F: mov     ecx, esi
0x51DA71: call    TESForm_SaveDataToCurrentSaveGame
0x51DA76: push    1; a2
0x51DA78: lea     ecx, [esi+106h]
0x51DA7E: push    ecx; a1
0x51DA7F: mov     ecx, esi
0x51DA81: call    TESForm_SaveDataToCurrentSaveGame
0x51DA86: push    1; a2
0x51DA88: lea     edx, [esi+107h]
0x51DA8E: push    edx; a1
0x51DA8F: mov     ecx, esi
0x51DA91: call    TESForm_SaveDataToCurrentSaveGame
0x51DA96: test    edi, 400h
0x51DA9C: jz      short loc_51DAB9
0x51DA9E: mov     eax, [esi+118h]
0x51DAA4: mov     ecx, [eax+0Ch]
0x51DAA7: push    4
0x51DAA9: lea     edx, [esp+0Ch+arg_0]
0x51DAAD: mov     [esp+0Ch+arg_0], ecx
0x51DAB1: push    edx
0x51DAB2: mov     ecx, esi
0x51DAB4: call    TESForm_SaveFormIDToCurrentSaveGame
0x51DAB9: pop     edi
0x51DABA: pop     esi
0x51DABB: retn    4
