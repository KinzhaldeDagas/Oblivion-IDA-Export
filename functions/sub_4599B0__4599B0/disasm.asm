0x4599B0: mov     ecx, ds:0B333C4h
0x4599B6: push    esi
0x4599B7: push    0
0x4599B9: call    PlayerCharacter_SetCurrentMagicItem
0x4599BE: call    sub_57AFB0
0x4599C3: mov     eax, ds:0B33398h
0x4599C8: mov     esi, [eax+24h]
0x4599CB: test    esi, esi
0x4599CD: jz      short loc_4599DF
0x4599CF: mov     ecx, esi
0x4599D1: call    sub_6AC210
0x4599D6: push    0FFFFFFFFh
0x4599D8: mov     ecx, esi
0x4599DA: call    sub_6AC330
0x4599DF: call    InterfaceManager__IsOpenedMenuDialogue
0x4599E4: test    al, al
0x4599E6: pop     esi
0x4599E7: jz      short locret_459A02
0x4599E9: fldz
0x4599EB: push    1; a5
0x4599ED: push    ecx
0x4599EE: fstp    [esp+8+a4]; a4
0x4599F1: call    Dialogue_GetSpeaker
0x4599F6: mov     ecx, ds:0B333C4h; a1
0x4599FC: push    eax; a3
0x4599FD: call    SetDialogueCamera
0x459A02: retn
