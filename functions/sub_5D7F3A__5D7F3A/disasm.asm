0x5D7F3A: push    0Bh; int
0x5D7F3C: call    sub_57DE50
0x5D7F41: add     esp, 4
0x5D7F44: call    sub_5D76A0
0x5D7F49: fld     dword ptr ds:0A31E2Ch
0x5D7F4F: push    ecx
0x5D7F50: mov     ecx, ds:0B389A8h
0x5D7F56: fstp    [esp+4+duration]; duration
0x5D7F59: push    1; unk2
0x5D7F5B: push    0; unk1
0x5D7F5D: push    ecx; string
0x5D7F5E: call    GameUI_QueueMessage
0x5D7F63: add     esp, 10h
0x5D7F66: jmp     loc_5D811A
0x5D7F6B: mov     eax, ds:0B38CF0h
0x5D7F70: mov     ecx, ds:0B38988h
0x5D7F76: push    0
0x5D7F78: push    eax
0x5D7F79: push    1
0x5D7F7B: push    0
0x5D7F7D: push    ecx
0x5D7F7E: call    ShowUIMessageBox
0x5D7F83: mov     eax, [esp+0Ch+arg_34]
0x5D7F87: mov     edx, [esi]
0x5D7F89: mov     edx, [edx+14h]
0x5D7F8C: add     esp, 14h
0x5D7F8F: push    eax
0x5D7F90: push    0Eh
0x5D7F92: mov     ecx, esi
0x5D7F94: call    edx
0x5D7F96: jmp     loc_5D811A
0x5D7F9B: mov     edx, ds:0B38CF0h
0x5D7FA1: mov     eax, ds:0B38DB0h
0x5D7FA6: push    edx
0x5D7FA7: push    1
0x5D7FA9: push    0
0x5D7FAB: push    eax
0x5D7FAC: jmp     short loc_5D7F7E
0x5D7FAE: mov     eax, ds:0B38CF0h
0x5D7FB3: mov     ecx, ds:0B38998h
0x5D7FB9: push    0
0x5D7FBB: push    eax
0x5D7FBC: push    1
0x5D7FBE: push    0
0x5D7FC0: jmp     short loc_5D7F7D
0x5D7FC2: mov     edx, ds:0B38CF0h
0x5D7FC8: mov     eax, ds:0B389A0h
0x5D7FCD: push    0
0x5D7FCF: push    edx
0x5D7FD0: push    1
0x5D7FD2: push    0
0x5D7FD4: push    eax
0x5D7FD5: jmp     short loc_5D7F7E
0x5D7FD7: mov     edi, [edi]
0x5D7FD9: cmp     edi, ebp
0x5D7FDB: jz      loc_5D811A
0x5D7FE1: mov     eax, [edi+98h]
0x5D7FE7: mov     ecx, [esi+74h]
0x5D7FEA: push    48h ; 'H'
0x5D7FEC: push    eax
0x5D7FED: add     ecx, 24h ; '$'
0x5D7FF0: call    EffectItemList_HasEffect
0x5D7FF5: test    al, al
0x5D7FF7: jz      short loc_5D8002
0x5D7FF9: test    dword ptr [edi+58h], 180000h
0x5D8000: jz      short loc_5D807E
0x5D8002: push    24h ; '$'; Size
0x5D8004: call    FormHeapAlloc
0x5D8009: add     esp, 4
0x5D800C: mov     [esp+arg_2C], eax
0x5D8010: cmp     eax, ebp
0x5D8012: mov     [esp+arg_20], ebp
0x5D8016: jz      short loc_5D8024
0x5D8018: push    edi
0x5D8019: mov     ecx, eax
0x5D801B: call    EffectItem_constr
0x5D8020: mov     esi, eax
0x5D8022: jmp     short loc_5D8026
0x5D8024: xor     esi, esi
0x5D8026: mov     eax, [edi+58h]
0x5D8029: mov     ecx, eax
0x5D802B: shr     ecx, 13h
0x5D802E: test    cl, 1
0x5D8031: mov     [esp+arg_20], 0FFFFFFFFh
0x5D8039: jz      short loc_5D8044
0x5D803B: mov     dword ptr [esi+14h], 0Ch
0x5D8042: jmp     short loc_5D804E
0x5D8044: shr     eax, 14h
0x5D8047: test    al, 1
0x5D8049: jz      short loc_5D804E
0x5D804B: mov     [esi+14h], ebp
0x5D804E: push    edi
0x5D804F: mov     ecx, esi
0x5D8051: call    EffectItem_SetEffectSetting
0x5D8056: push    1
0x5D8058: push    esi
0x5D8059: call    EffectSettingsMenu_Create
0x5D805E: add     esp, 8
0x5D8061: cmp     esi, ebp
0x5D8063: jz      loc_5D811A
0x5D8069: mov     ecx, esi
0x5D806B: call    EffectItem_destr
0x5D8070: push    esi
0x5D8071: call    FormHeapFree
0x5D8076: add     esp, 4
0x5D8079: jmp     loc_5D811A
0x5D807E: mov     edx, ds:0B38CF0h
0x5D8084: mov     eax, ds:0B389F8h
0x5D8089: push    ebp
0x5D808A: push    edx
0x5D808B: push    1
0x5D808D: push    ebp
0x5D808E: push    eax
0x5D808F: call    ShowUIMessageBox
0x5D8094: add     esp, 14h
0x5D8097: jmp     loc_5D811A
0x5D809C: cmp     edi, 0BB8h
0x5D80A2: jnz     short loc_5D811A
0x5D80A4: mov     esi, [esi+74h]
0x5D80A7: test    esi, esi
0x5D80A9: jz      short loc_5D811A
0x5D80AB: xor     edi, edi
0x5D80AD: lea     ebx, [esi+28h]
0x5D80B0: mov     eax, ebx
0x5D80B2: xor     ecx, ecx
0x5D80B4: test    eax, eax
0x5D80B6: jz      short loc_5D811A
0x5D80B8: cmp     dword ptr [eax], 0
0x5D80BB: jz      short loc_5D80C0
0x5D80BD: add     ecx, 1
0x5D80C0: mov     eax, [eax+4]
0x5D80C3: test    eax, eax
0x5D80C5: jnz     short loc_5D80B8
0x5D80C7: cmp     edi, ecx
0x5D80C9: jnb     short loc_5D811A
0x5D80CB: push    0FB1h
0x5D80D0: mov     ecx, ebp
0x5D80D2: call    Tile_GetFloat
0x5D80D7: fnstcw  word ptr [esp+arg_2C]
0x5D80DB: movzx   eax, word ptr [esp+arg_2C]
0x5D80E0: or      eax, 0C00h
0x5D80E5: mov     [esp+arg_28], eax
0x5D80E9: fldcw   word ptr [esp+arg_28]
0x5D80ED: fistp   [esp+arg_10]
0x5D80F1: mov     ecx, dword ptr [esp+arg_10]
0x5D80F5: cmp     edi, ecx
0x5D80F7: fldcw   word ptr [esp+arg_2C]
0x5D80FB: jnz     short loc_5D810A
0x5D80FD: push    edi
0x5D80FE: lea     ecx, [esi+24h]
0x5D8101: call    EffectItemList_GetItemByIndex2
0x5D8106: test    eax, eax
0x5D8108: jnz     short loc_5D810F
0x5D810A: add     edi, 1
0x5D810D: jmp     short loc_5D80B0
0x5D810F: push    0
0x5D8111: push    eax
0x5D8112: call    EffectSettingsMenu_Create
0x5D8117: add     esp, 8
0x5D811A: mov     ecx, [esp+arg_18]
0x5D811E: mov     large fs:0, ecx
0x5D8125: pop     ecx
0x5D8126: pop     edi
0x5D8127: pop     esi
0x5D8128: pop     ebp
0x5D8129: pop     ebx
0x5D812A: add     esp, 14h
0x5D812D: retn    8
