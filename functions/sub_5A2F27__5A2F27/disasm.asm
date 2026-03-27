0x5A2F27: mov     eax, [esi+30h]
0x5A2F2A: mov     ecx, [eax]
0x5A2F2C: xor     ebp, ebp
0x5A2F2E: cmp     ecx, ebx
0x5A2F30: jz      short loc_5A2F34
0x5A2F32: mov     ebp, [ecx]
0x5A2F34: mov     ecx, ds:0B333C4h
0x5A2F3A: mov     edx, [ecx]
0x5A2F3C: mov     eax, [eax+8]
0x5A2F3F: mov     edx, [edx+100h]
0x5A2F45: push    ebx
0x5A2F46: push    1
0x5A2F48: push    ebx
0x5A2F49: push    ebx
0x5A2F4A: push    ebx
0x5A2F4B: push    ebx
0x5A2F4C: push    ebx
0x5A2F4D: push    1
0x5A2F4F: push    ebp
0x5A2F50: push    eax
0x5A2F51: call    edx
0x5A2F53: call    sub_5C1900
0x5A2F58: mov     ecx, ds:0B333C4h
0x5A2F5E: push    1
0x5A2F60: push    ebx
0x5A2F61: push    edi
0x5A2F62: call    TESObjectREFR_AddItem_Abbrev
0x5A2F67: mov     ecx, [esi+2Ch]
0x5A2F6A: mov     eax, [ecx]
0x5A2F6C: cmp     eax, ebx
0x5A2F6E: jz      short loc_5A2F72
0x5A2F70: mov     ebp, [eax]
0x5A2F72: mov     ecx, [ecx+8]
0x5A2F75: cmp     ecx, ds:0B35EE4h
0x5A2F7B: jz      short loc_5A2FA1
0x5A2F7D: mov     eax, ds:0B333C4h
0x5A2F82: mov     edx, [eax]
0x5A2F84: push    ebx
0x5A2F85: push    1
0x5A2F87: push    ebx
0x5A2F88: push    ebx
0x5A2F89: push    ebx
0x5A2F8A: push    ebx
0x5A2F8B: push    ebx
0x5A2F8C: push    1
0x5A2F8E: push    ebp
0x5A2F8F: push    ecx
0x5A2F90: mov     ecx, eax
0x5A2F92: mov     eax, [edx+100h]
0x5A2F98: call    eax
0x5A2F9A: call    sub_5C1900
0x5A2F9F: jmp     short loc_5A2FA8
0x5A2FA1: mov     ecx, ebp
0x5A2FA3: call    sub_41F650
0x5A2FA8: mov     ecx, ds:0B333C4h
0x5A2FAE: add     ecx, 44h ; 'D'; this
0x5A2FB1: call    ExtraDataList_GetContainerChanges
0x5A2FB6: mov     ecx, [esi+38h]
0x5A2FB9: mov     edx, ds:0B333C4h
0x5A2FBF: push    ebx
0x5A2FC0: push    ecx
0x5A2FC1: push    edx
0x5A2FC2: mov     ecx, eax
0x5A2FC4: call    sub_491700
0x5A2FC9: fld     dword ptr ds:0A31E2Ch
0x5A2FCF: mov     eax, ds:0B389E0h
0x5A2FD4: push    ecx
0x5A2FD5: fstp    [esp+20h+duration]; duration
0x5A2FD8: push    1; unk2
0x5A2FDA: push    ebx; unk1
0x5A2FDB: push    eax; string
0x5A2FDC: call    GameUI_QueueMessage
0x5A2FE1: push    0Bh; int
0x5A2FE3: call    sub_57DE50
0x5A2FE8: add     esp, 14h
0x5A2FEB: pop     edi
0x5A2FEC: pop     esi
0x5A2FED: pop     ebp
0x5A2FEE: pop     ebx
0x5A2FEF: add     esp, 0Ch
0x5A2FF2: jmp     sub_5A1740
