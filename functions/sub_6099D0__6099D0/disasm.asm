0x6099D0: sub     esp, 34h
0x6099D3: mov     eax, [esp+34h+a1.vtbl]
0x6099D7: push    ebx
0x6099D8: push    ebp
0x6099D9: push    esi
0x6099DA: push    edi
0x6099DB: push    eax; Src
0x6099DC: mov     esi, ecx
0x6099DE: call    MobileObject_SaveModifiedForm
0x6099E3: mov     ecx, ds:0B33B00h
0x6099E9: xor     ebx, ebx
0x6099EB: mov     [esp+44h+var_18], ebx
0x6099EF: mov     ebp, [ecx+14h]
0x6099F2: mov     [esp+44h+var_1C], ebx
0x6099F6: call    sub_45A170
0x6099FB: test    al, al
0x6099FD: jz      short loc_609A32
0x6099FF: push    4; Size
0x609A01: lea     ecx, [esp+48h+Src.member.modlist.next]
0x609A05: push    ecx; Src
0x609A06: mov     ecx, ds:0B33B00h
0x609A0C: mov     [esp+4Ch+Src.member.modlist.next], 4B4F4C42h
0x609A14: call    SaveLoad_SaveData
0x609A19: mov     ecx, ds:0B33B00h
0x609A1F: mov     edx, [ecx+14h]
0x609A22: push    2; Size
0x609A24: lea     eax, [esp+48h+var_18]
0x609A28: push    eax; Src
0x609A29: mov     [esp+4Ch+var_1C], edx
0x609A2D: call    SaveLoad_SaveData
0x609A32: push    4; Size
0x609A34: lea     ecx, [esi+60h]
0x609A37: push    ecx; Src
0x609A38: mov     ecx, ds:0B33B00h
0x609A3E: call    SaveLoad_SaveData
0x609A43: push    4; a2
0x609A45: lea     edx, [esi+64h]
0x609A48: push    edx; a1
0x609A49: mov     ecx, esi
0x609A4B: call    TESForm_SaveDataToCurrentSaveGame
0x609A50: push    4; a2
0x609A52: lea     eax, [esi+68h]
0x609A55: push    eax; a1
0x609A56: mov     ecx, esi
0x609A58: call    TESForm_SaveDataToCurrentSaveGame
0x609A5D: push    4; a2
0x609A5F: lea     ecx, [esi+6Ch]
0x609A62: push    ecx; a1
0x609A63: mov     ecx, esi
0x609A65: call    TESForm_SaveDataToCurrentSaveGame
0x609A6A: push    4; a2
0x609A6C: lea     edx, [esi+70h]
0x609A6F: push    edx; a1
0x609A70: mov     ecx, esi
0x609A72: call    TESForm_SaveDataToCurrentSaveGame
0x609A77: push    4; a2
0x609A79: lea     eax, [esi+74h]
0x609A7C: push    eax; a1
0x609A7D: mov     ecx, esi
0x609A7F: call    TESForm_SaveDataToCurrentSaveGame
0x609A84: push    0Ch; a2
0x609A86: lea     ecx, [esi+88h]
0x609A8C: push    ecx; a1
0x609A8D: mov     ecx, esi
0x609A8F: call    TESForm_SaveDataToCurrentSaveGame
0x609A94: mov     eax, [esi+78h]
0x609A97: cmp     eax, ebx
0x609A99: mov     [esp+44h+Src.member.flags], ebx
0x609A9D: jz      short loc_609AA6
0x609A9F: mov     edx, [eax+0Ch]
0x609AA2: mov     [esp+44h+Src.member.flags], edx
0x609AA6: push    4
0x609AA8: lea     eax, [esp+48h+Src.member.flags]
0x609AAC: push    eax
0x609AAD: mov     ecx, esi
0x609AAF: call    TESForm_SaveFormIDToCurrentSaveGame
0x609AB4: mov     eax, [esi+7Ch]
0x609AB7: cmp     eax, ebx
0x609AB9: mov     [esp+44h+Src.member.refID], ebx
0x609ABD: jz      short loc_609AC6
0x609ABF: mov     ecx, [eax+0Ch]
0x609AC2: mov     [esp+44h+Src.member.refID], ecx
0x609AC6: push    4
0x609AC8: lea     edx, [esp+48h+Src.member.refID]
0x609ACC: push    edx
0x609ACD: mov     ecx, esi
0x609ACF: call    TESForm_SaveFormIDToCurrentSaveGame
0x609AD4: mov     eax, [esi+84h]
0x609ADA: cmp     eax, ebx
0x609ADC: mov     [esp+44h+Src.member.modlist.data], ebx
0x609AE0: jz      short loc_609AE9
0x609AE2: mov     eax, [eax+0Ch]
0x609AE5: mov     [esp+44h+Src.member.modlist.data], eax
0x609AE9: push    4
0x609AEB: lea     ecx, [esp+48h+Src.member.modlist]
0x609AEF: push    ecx
0x609AF0: mov     ecx, esi
0x609AF2: call    TESForm_SaveFormIDToCurrentSaveGame
0x609AF7: cmp     [esi+5Ch], ebx
0x609AFA: mov     byte ptr [esp+44h+a1.vtbl], bl
0x609AFE: jz      short loc_609B05
0x609B00: mov     byte ptr [esp+44h+a1.vtbl], 1
0x609B05: push    1; a2
0x609B07: lea     edx, [esp+48h+a1]
0x609B0B: push    edx; a1
0x609B0C: mov     ecx, esi
0x609B0E: call    TESForm_SaveDataToCurrentSaveGame
0x609B13: cmp     byte ptr [esp+44h+a1.vtbl], bl
0x609B17: jz      loc_609C5C
0x609B1D: mov     eax, [esi+5Ch]
0x609B20: mov     ecx, ds:0B33B00h
0x609B26: push    4; Size
0x609B28: push    eax; Src
0x609B29: call    SaveLoad_SaveData
0x609B2E: mov     ecx, [esi+5Ch]
0x609B31: add     ecx, 4
0x609B34: push    0Ch; a2
0x609B36: push    ecx; a1
0x609B37: mov     ecx, esi
0x609B39: call    TESForm_SaveDataToCurrentSaveGame
0x609B3E: mov     edx, [esi+5Ch]
0x609B41: push    0Ch; a2
0x609B43: add     edx, 10h
0x609B46: push    edx; a1
0x609B47: mov     ecx, esi
0x609B49: call    TESForm_SaveDataToCurrentSaveGame
0x609B4E: mov     eax, [esi+5Ch]
0x609B51: push    0Ch; a2
0x609B53: add     eax, 1Ch
0x609B56: push    eax; a1
0x609B57: mov     ecx, esi
0x609B59: call    TESForm_SaveDataToCurrentSaveGame
0x609B5E: mov     ecx, ds:0B33B00h
0x609B64: cmp     byte ptr [ecx+7Ch], 50h ; 'P'
0x609B68: jb      short loc_609B8C
0x609B6A: mov     edx, [esi+5Ch]
0x609B6D: add     edx, 30h ; '0'
0x609B70: push    edx
0x609B71: lea     ecx, [esp+48h+var_10]
0x609B75: call    sub_7150F0
0x609B7A: mov     ecx, ds:0B33B00h
0x609B80: push    10h; Size
0x609B82: lea     eax, [esp+48h+var_10]
0x609B86: push    eax; Src
0x609B87: call    SaveLoad_SaveData
0x609B8C: mov     eax, [esi+5Ch]
0x609B8F: mov     ecx, [eax]
0x609B91: cmp     ecx, 1
0x609B94: jz      short loc_609B9E
0x609B96: cmp     ecx, ebx
0x609B98: jnz     loc_609C5C
0x609B9E: mov     [esp+44h+Src.member.modlist.next], ebx
0x609BA2: mov     eax, [eax+28h]
0x609BA5: cmp     eax, ebx
0x609BA7: jz      short loc_609BB0
0x609BA9: mov     ecx, [eax+0Ch]
0x609BAC: mov     [esp+44h+Src.member.modlist.next], ecx
0x609BB0: push    4
0x609BB2: lea     edx, [esp+48h+Src.member.modlist.next]
0x609BB6: push    edx
0x609BB7: mov     ecx, esi
0x609BB9: call    TESForm_SaveFormIDToCurrentSaveGame
0x609BBE: mov     eax, [esi+5Ch]
0x609BC1: mov     [esp+44h+Src.vtbl], ebx
0x609BC5: mov     dword ptr [esp+44h+Src.member.type], 0FFFFFFFFh
0x609BCD: mov     ecx, [eax+28h]
0x609BD0: cmp     ecx, ebx
0x609BD2: jz      short loc_609C40
0x609BD4: mov     edx, [eax+2Ch]
0x609BD7: cmp     edx, ebx
0x609BD9: jz      short loc_609C40
0x609BDB: cmp     [esi+94h], bl
0x609BE1: jnz     short loc_609C30
0x609BE3: cmp     [eax], ebx
0x609BE5: push    1
0x609BE7: setz    al
0x609BEA: mov     byte ptr [esp+48h+var_14], al
0x609BEE: mov     edi, [esp+48h+var_14]
0x609BF2: mov     eax, [ecx+3Ch]
0x609BF5: push    edi
0x609BF6: push    edi
0x609BF7: push    eax
0x609BF8: call    sub_480C50
0x609BFD: mov     edx, [esi+5Ch]
0x609C00: movzx   ecx, ax
0x609C03: mov     [esp+54h+Src.vtbl], ecx
0x609C07: mov     eax, [edx+2Ch]
0x609C0A: push    eax
0x609C0B: call    sub_4A05E0
0x609C10: mov     ecx, [esi+5Ch]
0x609C13: mov     edx, [ecx+28h]
0x609C16: mov     ecx, [edx+3Ch]
0x609C19: push    1
0x609C1B: push    edi
0x609C1C: push    edi
0x609C1D: push    eax
0x609C1E: push    ecx
0x609C1F: call    sub_480D60
0x609C24: movzx   eax, ax
0x609C27: add     esp, 28h
0x609C2A: mov     dword ptr [esp+44h+Src.member.type], eax
0x609C2E: jmp     short loc_609C40
0x609C30: mov     ecx, edx
0x609C32: movzx   edx, dx
0x609C35: shr     ecx, 10h
0x609C38: mov     [esp+44h+Src.vtbl], ecx
0x609C3C: mov     dword ptr [esp+44h+Src.member.type], edx
0x609C40: push    2; a2
0x609C42: lea     eax, [esp+48h+Src]
0x609C46: push    eax; a1
0x609C47: mov     ecx, esi
0x609C49: call    TESForm_SaveDataToCurrentSaveGame
0x609C4E: push    2; a2
0x609C50: lea     ecx, [esp+48h+Src.member]
0x609C54: push    ecx; a1
0x609C55: mov     ecx, esi
0x609C57: call    TESForm_SaveDataToCurrentSaveGame
0x609C5C: mov     edx, ds:0B33B00h
0x609C62: cmp     byte ptr [edx+7Ch], 54h ; 'T'
0x609C66: jb      short loc_609C78
0x609C68: push    1; a2
0x609C6A: lea     eax, [esi+95h]
0x609C70: push    eax; a1
0x609C71: mov     ecx, esi
0x609C73: call    TESForm_SaveDataToCurrentSaveGame
0x609C78: mov     ecx, ds:0B33B00h
0x609C7E: cmp     byte ptr [ecx+7Ch], 55h ; 'U'
0x609C82: jb      short loc_609C94
0x609C84: push    1; a2
0x609C86: lea     edx, [esi+96h]
0x609C8C: push    edx; a1
0x609C8D: mov     ecx, esi
0x609C8F: call    TESForm_SaveDataToCurrentSaveGame
0x609C94: cmp     ds:0B05BACh, bl
0x609C9A: jz      short loc_609D03
0x609C9C: mov     eax, ds:0B33B00h
0x609CA1: mov     edi, [eax+84h]
0x609CA7: cmp     edi, ebx
0x609CA9: mov     esi, [eax+14h]
0x609CAC: jz      short loc_609CE9
0x609CAE: mov     eax, [edi]
0x609CB0: push    eax; a1
0x609CB1: call    TESForm_LookupByFormID
0x609CB6: mov     ecx, [edi+5]
0x609CB9: mov     edx, [eax]
0x609CBB: add     esp, 4
0x609CBE: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x609CC3: push    8E6h
0x609CC8: push    ecx
0x609CC9: mov     ecx, eax
0x609CCB: mov     eax, [edx+0D4h]
0x609CD1: call    eax
0x609CD3: mov     ecx, [edi]
0x609CD5: push    eax
0x609CD6: push    ecx
0x609CD7: sub     esi, ebp
0x609CD9: push    esi; ArgList
0x609CDA: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x609CDF: call    sub_40FEC0
0x609CE4: add     esp, 1Ch
0x609CE7: jmp     short loc_609D03
0x609CE9: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x609CEE: push    8E6h
0x609CF3: sub     esi, ebp
0x609CF5: push    esi; ArgList
0x609CF6: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x609CFB: call    sub_40FEC0
0x609D00: add     esp, 10h
0x609D03: mov     ecx, ds:0B33B00h
0x609D09: call    sub_45A170
0x609D0E: test    al, al
0x609D10: jz      short loc_609D45
0x609D12: mov     edx, ds:0B33B00h
0x609D18: mov     edi, [esp+44h+var_1C]
0x609D1C: mov     esi, [edx+14h]
0x609D1F: lea     eax, [edi+0FFFFh]
0x609D25: cmp     esi, eax
0x609D27: jbe     short loc_609D40
0x609D29: push    8E6h
0x609D2E: push    offset a_AiArrowprojec; ".\\AI\\ArrowProjectile.cpp"
0x609D33: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x609D38: call    PrintError
0x609D3D: add     esp, 0Ch
0x609D40: sub     esi, edi
0x609D42: mov     [edi], si
0x609D45: pop     edi
0x609D46: pop     esi
0x609D47: pop     ebp
0x609D48: pop     ebx
0x609D49: add     esp, 34h
0x609D4C: retn    4
