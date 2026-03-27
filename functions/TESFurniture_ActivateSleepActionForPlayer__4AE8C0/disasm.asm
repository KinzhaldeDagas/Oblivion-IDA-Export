0x4AE8C0: sub     esp, 10h
0x4AE8C3: push    esi
0x4AE8C4: push    edi
0x4AE8C5: mov     edi, [esp+18h+arg_4]
0x4AE8C9: push    0; int
0x4AE8CB: push    offset ??_R0?AVPlayerCharacter@@@8; struct TypeDescriptor *
0x4AE8D0: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4AE8D5: push    0; int
0x4AE8D7: push    edi; void *
0x4AE8D8: call    OblivionDynamicCast
0x4AE8DD: mov     esi, eax
0x4AE8DF: add     esp, 14h
0x4AE8E2: test    esi, esi
0x4AE8E4: jnz     short loc_4AE8F0
0x4AE8E6: pop     edi
0x4AE8E7: xor     al, al
0x4AE8E9: pop     esi
0x4AE8EA: add     esp, 10h
0x4AE8ED: retn    14h
0x4AE8F0: mov     eax, [esi]
0x4AE8F2: mov     edx, [eax+18Ch]
0x4AE8F8: mov     ecx, esi
0x4AE8FA: call    edx
0x4AE8FC: test    eax, eax
0x4AE8FE: jnz     loc_4AEB0F
0x4AE904: mov     edx, [edi]
0x4AE906: mov     [esp+18h+arg_4], eax
0x4AE90A: mov     [esp+18h+var_4], ax
0x4AE90F: lea     eax, [esp+18h+arg_4]
0x4AE913: push    eax
0x4AE914: mov     eax, [edx+174h]
0x4AE91A: lea     ecx, [esp+1Ch+var_10]
0x4AE91E: push    ecx
0x4AE91F: push    1
0x4AE921: push    1
0x4AE923: mov     ecx, edi
0x4AE925: mov     [esp+28h+var_2], 0FFh
0x4AE92A: call    eax
0x4AE92C: mov     edi, [esp+28h+arg_0]
0x4AE930: push    eax
0x4AE931: mov     ecx, edi
0x4AE933: call    sub_4DBAE0
0x4AE938: test    al, al
0x4AE93A: jz      short loc_4AE8E6
0x4AE93C: cmp     [esp+18h+var_2], 0Ah
0x4AE941: jnb     loc_4AEAA8
0x4AE947: mov     ecx, esi; this
0x4AE949: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x4AE94E: test    al, al
0x4AE950: mov     ecx, ds:0B333C4h
0x4AE956: jz      short loc_4AE990
0x4AE958: cmp     byte ptr [ecx+610h], 0
0x4AE95F: jnz     short loc_4AE990
0x4AE961: mov     ecx, ds:0B38D00h
0x4AE967: mov     edx, ds:0B38CF8h
0x4AE96D: mov     eax, ds:0B38B30h
0x4AE972: push    0
0x4AE974: push    ecx
0x4AE975: push    edx
0x4AE976: push    1
0x4AE978: push    offset MsgBox_ServeSentenceCallback
0x4AE97D: push    eax
0x4AE97E: call    ShowUIMessageBox
0x4AE983: add     esp, 18h
0x4AE986: pop     edi
0x4AE987: mov     al, 1
0x4AE989: pop     esi
0x4AE98A: add     esp, 10h
0x4AE98D: retn    14h
0x4AE990: mov     edx, [ecx]
0x4AE992: mov     eax, [edx+354h]
0x4AE998: call    eax
0x4AE99A: test    al, al
0x4AE99C: push    0
0x4AE99E: jnz     loc_4AEA84
0x4AE9A4: mov     ecx, ds:0B333C4h
0x4AE9AA: call    PlayerCharacter_IsPlayerInCombat
0x4AE9AF: test    al, al
0x4AE9B1: jnz     loc_4AEA5F
0x4AE9B7: mov     ecx, ds:0B333C4h; this
0x4AE9BD: call    sub_4D8B90
0x4AE9C2: mov     ecx, offset ActorProcessManager_ptr
0x4AE9C7: push    eax
0x4AE9C8: call    ActorProcessManager__AreHostilesNEarby
0x4AE9CD: test    al, al
0x4AE9CF: jnz     short loc_4AEA3A
0x4AE9D1: mov     ecx, edi; this
0x4AE9D3: call    TESObjectREFR_GetOwner
0x4AE9D8: test    eax, eax
0x4AE9DA: jz      short loc_4AEA1C
0x4AE9DC: push    1
0x4AE9DE: push    esi
0x4AE9DF: mov     ecx, edi
0x4AE9E1: call    TESOBjectREFR_IsOwnedBy
0x4AE9E6: test    al, al
0x4AE9E8: jnz     short loc_4AEA1C
0x4AE9EA: cmp     esi, ds:0B333C4h
0x4AE9F0: jnz     loc_4AEB2A
0x4AE9F6: mov     ecx, ds:0B38CF0h
0x4AE9FC: mov     edx, ds:0B38AA8h
0x4AEA02: push    0
0x4AEA04: push    ecx
0x4AEA05: push    1
0x4AEA07: push    0
0x4AEA09: push    edx
0x4AEA0A: call    ShowUIMessageBox
0x4AEA0F: add     esp, 14h
0x4AEA12: pop     edi
0x4AEA13: mov     al, 1
0x4AEA15: pop     esi
0x4AEA16: add     esp, 10h
0x4AEA19: retn    14h
0x4AEA1C: mov     ecx, offset ActorProcessManager_ptr
0x4AEA21: call    sub_676EE0
0x4AEA26: push    1; a4
0x4AEA28: call    ShowSleepWaitMenu
0x4AEA2D: add     esp, 4
0x4AEA30: pop     edi
0x4AEA31: mov     al, 1
0x4AEA33: pop     esi
0x4AEA34: add     esp, 10h
0x4AEA37: retn    14h
0x4AEA3A: mov     eax, ds:0B38CF0h
0x4AEA3F: mov     ecx, ds:0B38AC0h
0x4AEA45: push    0
0x4AEA47: push    eax
0x4AEA48: push    1
0x4AEA4A: push    0
0x4AEA4C: push    ecx
0x4AEA4D: call    ShowUIMessageBox
0x4AEA52: add     esp, 14h
0x4AEA55: pop     edi
0x4AEA56: mov     al, 1
0x4AEA58: pop     esi
0x4AEA59: add     esp, 10h
0x4AEA5C: retn    14h
0x4AEA5F: mov     edx, ds:0B38CF0h
0x4AEA65: mov     eax, ds:0B38AB8h
0x4AEA6A: push    0
0x4AEA6C: push    edx
0x4AEA6D: push    1
0x4AEA6F: push    0
0x4AEA71: push    eax
0x4AEA72: call    ShowUIMessageBox
0x4AEA77: add     esp, 14h
0x4AEA7A: pop     edi
0x4AEA7B: mov     al, 1
0x4AEA7D: pop     esi
0x4AEA7E: add     esp, 10h
0x4AEA81: retn    14h
0x4AEA84: mov     ecx, ds:0B38CF0h
0x4AEA8A: mov     edx, ds:0B38AA0h
0x4AEA90: push    ecx
0x4AEA91: push    1
0x4AEA93: push    0
0x4AEA95: push    edx
0x4AEA96: call    ShowUIMessageBox
0x4AEA9B: add     esp, 14h
0x4AEA9E: pop     edi
0x4AEA9F: mov     al, 1
0x4AEAA1: pop     esi
0x4AEAA2: add     esp, 10h
0x4AEAA5: retn    14h
0x4AEAA8: mov     ecx, edi; this
0x4AEAAA: call    TESObjectREFR_GetOwner
0x4AEAAF: test    eax, eax
0x4AEAB1: jz      short loc_4AEAEE
0x4AEAB3: push    1
0x4AEAB5: push    esi
0x4AEAB6: mov     ecx, edi
0x4AEAB8: call    TESOBjectREFR_IsOwnedBy
0x4AEABD: test    al, al
0x4AEABF: jnz     short loc_4AEAEE
0x4AEAC1: cmp     esi, ds:0B333C4h
0x4AEAC7: jnz     short loc_4AEB2A
0x4AEAC9: mov     eax, ds:0B38CF0h
0x4AEACE: mov     ecx, ds:0B38AB0h
0x4AEAD4: push    0
0x4AEAD6: push    eax
0x4AEAD7: push    1
0x4AEAD9: push    0
0x4AEADB: push    ecx
0x4AEADC: call    ShowUIMessageBox
0x4AEAE1: add     esp, 14h
0x4AEAE4: pop     edi
0x4AEAE5: mov     al, 1
0x4AEAE7: pop     esi
0x4AEAE8: add     esp, 10h
0x4AEAEB: retn    14h
0x4AEAEE: mov     ecx, esi
0x4AEAF0: call    RestoreCamera
0x4AEAF5: fldz
0x4AEAF7: push    edi; int
0x4AEAF8: fstp    dword ptr [esi+61Ch]
0x4AEAFE: mov     ecx, esi; int
0x4AEB00: call    sub_660760
0x4AEB05: pop     edi
0x4AEB06: mov     al, 1
0x4AEB08: pop     esi
0x4AEB09: add     esp, 10h
0x4AEB0C: retn    14h
0x4AEB0F: mov     ecx, esi
0x4AEB11: call    RestoreCamera
0x4AEB16: fldz
0x4AEB18: mov     edx, [esi]
0x4AEB1A: fstp    dword ptr [esi+61Ch]
0x4AEB20: mov     eax, [edx+320h]
0x4AEB26: mov     ecx, esi
0x4AEB28: call    eax
0x4AEB2A: pop     edi
0x4AEB2B: mov     al, 1
0x4AEB2D: pop     esi
0x4AEB2E: add     esp, 10h
0x4AEB31: retn    14h
