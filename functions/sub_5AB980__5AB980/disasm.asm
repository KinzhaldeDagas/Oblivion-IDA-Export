0x5AB980: sub     esp, 0Ch
0x5AB983: push    esi
0x5AB984: push    1; arg1
0x5AB986: push    0; canCreate
0x5AB988: call    InterfaceManager_GetSingleton
0x5AB98D: mov     ecx, [eax+88h]
0x5AB993: add     esp, 8
0x5AB996: test    ecx, ecx
0x5AB998: jnz     short loc_5AB9A6
0x5AB99A: mov     ecx, [esp+10h+arg_0]
0x5AB99E: test    ecx, ecx
0x5AB9A0: jz      loc_5ABBAC
0x5AB9A6: push    0FB9h
0x5AB9AB: call    Tile_GetFloat
0x5AB9B0: call    Double_To_SInt32
0x5AB9B5: mov     ecx, ds:0B333C4h; this
0x5AB9BB: push    0; a3
0x5AB9BD: push    eax; a2
0x5AB9BE: call    GetInventoryEntryOfItem
0x5AB9C3: mov     esi, eax
0x5AB9C5: mov     ecx, [esi+8]
0x5AB9C8: mov     eax, [ecx]
0x5AB9CA: mov     edx, [eax+78h]
0x5AB9CD: call    edx
0x5AB9CF: test    al, al
0x5AB9D1: jz      short loc_5AB9F4
0x5AB9D3: fld     dword ptr ds:0A30634h
0x5AB9D9: mov     eax, ds:0B38568h
0x5AB9DE: push    ecx
0x5AB9DF: fstp    [esp+14h+duration]; duration
0x5AB9E2: push    1; unk2
0x5AB9E4: push    0; unk1
0x5AB9E6: push    eax; string
0x5AB9E7: call    GameUI_QueueMessage
0x5AB9EC: add     esp, 10h
0x5AB9EF: pop     esi
0x5AB9F0: add     esp, 0Ch
0x5AB9F3: retn
0x5AB9F4: mov     ecx, ds:0B333C4h
0x5AB9FA: call    Actor_GetCurrentAction
0x5AB9FF: cmp     eax, 0FFFFFFFFh
0x5ABA02: jz      short loc_5ABA33
0x5ABA04: push    0
0x5ABA06: mov     ecx, esi
0x5ABA08: call    ContainerEntryExtraData_HasWorn
0x5ABA0D: test    al, al
0x5ABA0F: jz      short loc_5ABA33
0x5ABA11: fld     dword ptr ds:0A30634h
0x5ABA17: push    ecx
0x5ABA18: mov     ecx, ds:0B38A08h
0x5ABA1E: fstp    [esp+14h+duration]; duration
0x5ABA21: push    1; unk2
0x5ABA23: push    0; unk1
0x5ABA25: push    ecx; string
0x5ABA26: call    GameUI_QueueMessage
0x5ABA2B: add     esp, 10h
0x5ABA2E: pop     esi
0x5ABA2F: add     esp, 0Ch
0x5ABA32: retn
0x5ABA33: mov     eax, [esi]
0x5ABA35: test    eax, eax
0x5ABA37: jz      short loc_5ABA7A
0x5ABA39: mov     eax, [eax]
0x5ABA3B: test    eax, eax
0x5ABA3D: jz      short loc_5ABA7A
0x5ABA3F: mov     ecx, eax
0x5ABA41: call    sub_41DF40
0x5ABA46: test    al, al
0x5ABA48: jz      short loc_5ABA7A
0x5ABA4A: mov     edx, [esi]
0x5ABA4C: mov     ecx, [edx]
0x5ABA4E: push    0
0x5ABA50: call    ExtraDataList_HasWorn
0x5ABA55: test    al, al
0x5ABA57: jz      short loc_5ABA7A
0x5ABA59: fld     dword ptr ds:0A30634h
0x5ABA5F: mov     eax, ds:0B38560h
0x5ABA64: push    ecx
0x5ABA65: fstp    [esp+14h+duration]; duration
0x5ABA68: push    1; unk2
0x5ABA6A: push    0; unk1
0x5ABA6C: push    eax; string
0x5ABA6D: call    GameUI_QueueMessage
0x5ABA72: add     esp, 10h
0x5ABA75: pop     esi
0x5ABA76: add     esp, 0Ch
0x5ABA79: retn
0x5ABA7A: push    3EAh
0x5ABA7F: call    Menu_GetOpenMenuTile
0x5ABA84: add     esp, 4
0x5ABA87: test    eax, eax
0x5ABA89: jz      loc_5ABBAC
0x5ABA8F: mov     ecx, eax
0x5ABA91: call    Tile_GetParentMenu
0x5ABA96: mov     [eax+50h], esi
0x5ABA99: mov     ecx, ds:0B333C4h
0x5ABA9F: call    sub_65AAD0
0x5ABAA4: test    al, al
0x5ABAA6: jz      short loc_5ABAC2
0x5ABAA8: fld     dword ptr ds:0A30634h
0x5ABAAE: push    ecx
0x5ABAAF: mov     ecx, ds:0B38A18h
0x5ABAB5: fstp    [esp+14h+duration]
0x5ABAB8: push    1
0x5ABABA: push    0
0x5ABABC: push    ecx
0x5ABABD: jmp     loc_5ABB9A
0x5ABAC2: mov     eax, [esi+8]
0x5ABAC5: mov     ecx, ds:0B333C4h
0x5ABACB: push    0
0x5ABACD: push    0
0x5ABACF: lea     edx, [esp+18h+var_C]
0x5ABAD3: push    edx
0x5ABAD4: push    eax
0x5ABAD5: call    sub_66E0D0
0x5ABADA: test    al, al
0x5ABADC: jz      loc_5ABB85
0x5ABAE2: mov     ecx, esi
0x5ABAE4: mov     byte ptr ds:0B3B3DAh, 1
0x5ABAEB: call    TESHealthForm_GetHealth
0x5ABAF0: push    0
0x5ABAF2: push    1
0x5ABAF4: push    1; arg1
0x5ABAF6: push    0; canCreate
0x5ABAF8: mov     ds:0B140E4h, eax
0x5ABAFD: call    InterfaceManager_GetSingleton
0x5ABB02: add     esp, 8
0x5ABB05: mov     ecx, eax
0x5ABB07: call    sub_57CFE0
0x5ABB0C: push    1; arg1
0x5ABB0E: push    0; canCreate
0x5ABB10: call    InterfaceManager_GetSingleton
0x5ABB15: add     esp, 8
0x5ABB18: mov     ecx, eax
0x5ABB1A: call    sub_583E60
0x5ABB1F: push    1; arg1
0x5ABB21: push    0; canCreate
0x5ABB23: call    InterfaceManager_GetSingleton
0x5ABB28: add     esp, 8
0x5ABB2B: mov     ecx, eax
0x5ABB2D: call    sub_5821F0
0x5ABB32: push    1; arg1
0x5ABB34: push    0; canCreate
0x5ABB36: call    InterfaceManager_GetSingleton
0x5ABB3B: add     esp, 8
0x5ABB3E: mov     ecx, eax
0x5ABB40: call    sub_583F40
0x5ABB45: call    sub_57CC00
0x5ABB4A: mov     ecx, [esp+10h+var_C]
0x5ABB4E: mov     edx, [esp+10h+var_8]
0x5ABB52: push    1
0x5ABB54: sub     esp, 0Ch
0x5ABB57: mov     eax, esp
0x5ABB59: mov     [eax], ecx
0x5ABB5B: mov     ecx, [esp+20h+var_4]
0x5ABB5F: mov     [eax+4], edx
0x5ABB62: mov     [eax+8], ecx
0x5ABB65: call    sub_5AB800
0x5ABB6A: push    1; arg1
0x5ABB6C: push    0; canCreate
0x5ABB6E: call    InterfaceManager_GetSingleton
0x5ABB73: add     esp, 18h
0x5ABB76: mov     dword ptr [eax+90h], 1
0x5ABB80: pop     esi
0x5ABB81: add     esp, 0Ch
0x5ABB84: retn
0x5ABB85: fld     dword ptr ds:0A30634h
0x5ABB8B: mov     edx, ds:0B38A10h
0x5ABB91: push    ecx
0x5ABB92: fstp    [esp+14h+duration]; duration
0x5ABB95: push    1; unk2
0x5ABB97: push    0; unk1
0x5ABB99: push    edx; string
0x5ABB9A: call    GameUI_QueueMessage
0x5ABB9F: mov     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5ABBA9: add     esp, 10h
0x5ABBAC: pop     esi
0x5ABBAD: add     esp, 0Ch
0x5ABBB0: retn
