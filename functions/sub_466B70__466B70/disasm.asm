0x466B70: mov     eax, ds:0B33398h
0x466B75: push    esi
0x466B76: push    edi
0x466B77: mov     edi, [eax+10h]
0x466B7A: mov     esi, ecx
0x466B7C: call    dword ptr ds:0A2808Ch
0x466B82: cmp     eax, edi
0x466B84: jnz     short loc_466B8B
0x466B86: mov     al, [esi+18h]
0x466B89: jmp     short loc_466B91
0x466B8B: mov     eax, [esi+18h]
0x466B8E: shr     eax, 12h
0x466B91: and     al, 1
0x466B93: test    al, al
0x466B95: jnz     short loc_466BD5
0x466B97: mov     ecx, ds:0B333C4h
0x466B9D: call    sub_65D140
0x466BA2: test    al, al
0x466BA4: jnz     short loc_466BD5
0x466BA6: fld1
0x466BA8: push    ecx
0x466BA9: fstp    [esp+0Ch+duration]; duration
0x466BAC: mov     [esi+0AAh], al
0x466BB2: mov     ecx, ds:0B387B8h
0x466BB8: push    1; unk2
0x466BBA: push    0; unk1
0x466BBC: push    ecx; string
0x466BBD: call    GameUI_QueueMessage
0x466BC2: add     esp, 10h
0x466BC5: push    0; int
0x466BC7: push    offset aAutosave; "autosave"
0x466BCC: push    0; int
0x466BCE: mov     ecx, esi
0x466BD0: call    TESSaveLoadGame_SaveGame?
0x466BD5: pop     edi
0x466BD6: pop     esi
0x466BD7: retn
