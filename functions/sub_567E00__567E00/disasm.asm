0x567E00: sub     esp, 0Ch
0x567E03: push    ebx
0x567E04: push    ebp
0x567E05: push    esi
0x567E06: mov     esi, ecx
0x567E08: mov     ecx, ds:0B33B00h
0x567E0E: mov     [esp+18h+var_4], 0
0x567E16: mov     ebx, [ecx+14h]
0x567E19: xor     ebp, ebp
0x567E1B: call    sub_45A170
0x567E20: test    al, al
0x567E22: jz      short loc_567E53
0x567E24: mov     ecx, ds:0B33B00h
0x567E2A: push    4; Size
0x567E2C: lea     eax, [esp+1Ch+Src]
0x567E30: push    eax; Src
0x567E31: mov     [esp+20h+Src], 4B4F4C42h
0x567E39: call    SaveLoad_SaveData
0x567E3E: mov     ecx, ds:0B33B00h
0x567E44: mov     ebp, [ecx+14h]
0x567E47: push    2; Size
0x567E49: lea     edx, [esp+1Ch+var_4]
0x567E4D: push    edx; Src
0x567E4E: call    SaveLoad_SaveData
0x567E53: mov     ecx, ds:0B33B00h
0x567E59: push    8; Size
0x567E5B: lea     eax, [esi+1Ch]
0x567E5E: push    eax; Src
0x567E5F: call    SaveLoad_SaveData
0x567E64: cmp     dword ptr [esi+24h], 0
0x567E68: mov     [esp+18h+var_9], 0
0x567E6D: jz      short loc_567E74
0x567E6F: mov     [esp+18h+var_9], 1
0x567E74: cmp     dword ptr [esi+28h], 0
0x567E78: jz      short loc_567E7F
0x567E7A: or      [esp+18h+var_9], 2
0x567E7F: push    1; a2
0x567E81: lea     ecx, [esp+1Ch+var_9]
0x567E85: push    ecx; a1
0x567E86: mov     ecx, esi
0x567E88: call    TESForm_SaveDataToCurrentSaveGame
0x567E8D: mov     ecx, [esi+24h]; Src
0x567E90: test    ecx, ecx
0x567E92: jz      short loc_567E99
0x567E94: call    sub_569CF0
0x567E99: mov     ecx, [esi+28h]; Src
0x567E9C: test    ecx, ecx
0x567E9E: jz      short loc_567EA5
0x567EA0: call    sub_56A290
0x567EA5: mov     ecx, ds:0B33B00h
0x567EAB: push    4; Size
0x567EAD: add     esi, 18h
0x567EB0: push    esi; Src
0x567EB1: call    SaveLoad_SaveData
0x567EB6: cmp     byte ptr ds:0B05BACh, 0
0x567EBD: jz      short loc_567F28
0x567EBF: mov     eax, ds:0B33B00h
0x567EC4: mov     esi, [eax+14h]
0x567EC7: push    edi
0x567EC8: mov     edi, [eax+84h]
0x567ECE: test    edi, edi
0x567ED0: jz      short loc_567F0D
0x567ED2: mov     edx, [edi]
0x567ED4: push    edx; a1
0x567ED5: call    TESForm_LookupByFormID
0x567EDA: mov     ecx, [edi+5]
0x567EDD: mov     edx, [eax]
0x567EDF: add     esp, 4
0x567EE2: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x567EE7: push    0EBAh
0x567EEC: push    ecx
0x567EED: mov     ecx, eax
0x567EEF: mov     eax, [edx+0D4h]
0x567EF5: call    eax
0x567EF7: mov     ecx, [edi]
0x567EF9: push    eax
0x567EFA: push    ecx
0x567EFB: sub     esi, ebx
0x567EFD: push    esi; ArgList
0x567EFE: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x567F03: call    sub_40FEC0
0x567F08: add     esp, 1Ch
0x567F0B: jmp     short loc_567F27
0x567F0D: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x567F12: push    0EBAh
0x567F17: sub     esi, ebx
0x567F19: push    esi; ArgList
0x567F1A: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x567F1F: call    sub_40FEC0
0x567F24: add     esp, 10h
0x567F27: pop     edi
0x567F28: mov     ecx, ds:0B33B00h
0x567F2E: call    sub_45A170
0x567F33: test    al, al
0x567F35: jz      short loc_567F67
0x567F37: mov     edx, ds:0B33B00h
0x567F3D: mov     esi, [edx+14h]
0x567F40: lea     eax, [ebp+0FFFFh]
0x567F46: cmp     esi, eax
0x567F48: jbe     short loc_567F61
0x567F4A: push    0EBAh
0x567F4F: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x567F54: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x567F59: call    PrintError
0x567F5E: add     esp, 0Ch
0x567F61: sub     esi, ebp
0x567F63: mov     [ebp+0], si
0x567F67: pop     esi
0x567F68: pop     ebp
0x567F69: pop     ebx
0x567F6A: add     esp, 0Ch
0x567F6D: retn
