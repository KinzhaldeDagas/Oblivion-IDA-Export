0x5C0E30: sub     esp, 14h
0x5C0E33: mov     ecx, ds:0B33B00h
0x5C0E39: push    ebx
0x5C0E3A: xor     ebx, ebx
0x5C0E3C: cmp     ds:0B05BACh, bl
0x5C0E42: mov     [esp+18h+var_4], ebx
0x5C0E46: mov     eax, [ecx+14h]
0x5C0E49: push    esi
0x5C0E4A: push    edi
0x5C0E4B: mov     [esp+20h+var_C], ebx
0x5C0E4F: mov     [esp+20h+var_10], eax
0x5C0E53: jz      short loc_5C0E59
0x5C0E55: mov     [esp+20h+var_10], eax
0x5C0E59: call    sub_45A170
0x5C0E5E: test    al, al
0x5C0E60: jz      short loc_5C0E95
0x5C0E62: mov     ecx, ds:0B33B00h
0x5C0E68: push    4; Size
0x5C0E6A: lea     eax, [esp+24h+Src]
0x5C0E6E: push    eax; Src
0x5C0E6F: mov     [esp+28h+Src], 4B4F4C42h
0x5C0E77: call    SaveLoad_SaveData
0x5C0E7C: mov     ecx, ds:0B33B00h
0x5C0E82: mov     edx, [ecx+14h]
0x5C0E85: push    2; Size
0x5C0E87: lea     eax, [esp+24h+var_4]
0x5C0E8B: push    eax; Src
0x5C0E8C: mov     [esp+28h+var_C], edx
0x5C0E90: call    SaveLoad_SaveData
0x5C0E95: xor     edi, edi
0x5C0E97: push    ebp
0x5C0E98: jmp     short loc_5C0EA0
0x5C0E9A: align 10h
0x5C0EA0: mov     ecx, ds:0B33B00h
0x5C0EA6: push    1; Size
0x5C0EA8: lea     edx, [esp+28h+var_11]
0x5C0EAC: mov     [esp+28h+var_11], bl
0x5C0EB0: mov     ebp, [ecx+14h]
0x5C0EB3: push    edx; Src
0x5C0EB4: call    SaveLoad_SaveData
0x5C0EB9: mov     esi, ds:dword_B3B444[edi]
0x5C0EBF: cmp     esi, ebx
0x5C0EC1: jz      short loc_5C0EF0
0x5C0EC3: lea     eax, [esi+8]
0x5C0EC6: mov     eax, [eax]
0x5C0EC8: cmp     eax, ebx
0x5C0ECA: mov     esi, [esi]
0x5C0ECC: jz      short loc_5C0EEC
0x5C0ECE: mov     eax, [eax+0Ch]
0x5C0ED1: push    4
0x5C0ED3: lea     ecx, [esp+28h+Src]
0x5C0ED7: push    ecx
0x5C0ED8: mov     ecx, ds:0B33B00h
0x5C0EDE: mov     [esp+2Ch+Src], eax
0x5C0EE2: call    SaveLoad_SaveFormID
0x5C0EE7: add     [esp+24h+var_11], 1
0x5C0EEC: cmp     esi, ebx
0x5C0EEE: jnz     short loc_5C0EC3
0x5C0EF0: mov     dl, [esp+24h+var_11]
0x5C0EF4: add     edi, 10h
0x5C0EF7: cmp     edi, 80h ; '€'
0x5C0EFD: mov     [ebp+0], dl
0x5C0F00: jb      short loc_5C0EA0
0x5C0F02: cmp     ds:0B05BACh, bl
0x5C0F08: pop     ebp
0x5C0F09: jz      short loc_5C0F76
0x5C0F0B: mov     eax, ds:0B33B00h
0x5C0F10: mov     edi, [eax+84h]
0x5C0F16: cmp     edi, ebx
0x5C0F18: mov     esi, [eax+14h]
0x5C0F1B: jz      short loc_5C0F5A
0x5C0F1D: mov     eax, [edi]
0x5C0F1F: push    eax; a1
0x5C0F20: call    TESForm_LookupByFormID
0x5C0F25: mov     ecx, [edi+5]
0x5C0F28: mov     edx, [eax]
0x5C0F2A: add     esp, 4
0x5C0F2D: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C0F32: push    389h
0x5C0F37: push    ecx
0x5C0F38: mov     ecx, eax
0x5C0F3A: mov     eax, [edx+0D4h]
0x5C0F40: call    eax
0x5C0F42: mov     ecx, [edi]
0x5C0F44: sub     esi, [esp+2Ch+var_10]
0x5C0F48: push    eax
0x5C0F49: push    ecx
0x5C0F4A: push    esi; ArgList
0x5C0F4B: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x5C0F50: call    sub_40FEC0
0x5C0F55: add     esp, 1Ch
0x5C0F58: jmp     short loc_5C0F76
0x5C0F5A: sub     esi, [esp+20h+var_10]
0x5C0F5E: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C0F63: push    389h
0x5C0F68: push    esi; ArgList
0x5C0F69: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x5C0F6E: call    sub_40FEC0
0x5C0F73: add     esp, 10h
0x5C0F76: mov     ecx, ds:0B33B00h
0x5C0F7C: call    sub_45A170
0x5C0F81: test    al, al
0x5C0F83: jz      short loc_5C0FB8
0x5C0F85: mov     edx, ds:0B33B00h
0x5C0F8B: mov     edi, [esp+20h+var_C]
0x5C0F8F: mov     esi, [edx+14h]
0x5C0F92: lea     eax, [edi+0FFFFh]
0x5C0F98: cmp     esi, eax
0x5C0F9A: jbe     short loc_5C0FB3
0x5C0F9C: push    389h
0x5C0FA1: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C0FA6: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x5C0FAB: call    PrintError
0x5C0FB0: add     esp, 0Ch
0x5C0FB3: sub     esi, edi
0x5C0FB5: mov     [edi], si
0x5C0FB8: pop     edi
0x5C0FB9: pop     esi
0x5C0FBA: pop     ebx
0x5C0FBB: add     esp, 14h
0x5C0FBE: retn
