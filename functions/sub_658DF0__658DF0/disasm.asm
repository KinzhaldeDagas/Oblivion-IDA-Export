0x658DF0: mov     eax, [esp+arg_8]
0x658DF4: push    ebx
0x658DF5: push    ebp
0x658DF6: mov     ebp, [esp+8+arg_0]
0x658DFA: push    esi
0x658DFB: push    edi
0x658DFC: mov     edi, ecx
0x658DFE: mov     ecx, [esp+10h+Dst]
0x658E02: push    eax
0x658E03: push    ecx
0x658E04: push    ebp
0x658E05: mov     ecx, edi
0x658E07: call    sub_647450
0x658E0C: mov     ecx, ds:0B33B00h
0x658E12: xor     ebx, ebx
0x658E14: mov     [esp+10h+arg_8], ebx
0x658E18: call    sub_45A170
0x658E1D: test    al, al
0x658E1F: jz      loc_658EBE
0x658E25: mov     ecx, ds:0B33B00h
0x658E2B: push    4; Size
0x658E2D: lea     edx, [esp+14h+Dst]
0x658E31: push    edx; Dst
0x658E32: call    SaveLoad_LoadData
0x658E37: cmp     [esp+10h+Dst], 4B4F4C42h
0x658E3F: jz      short loc_658EA9
0x658E41: mov     eax, ds:0B33B00h
0x658E46: mov     esi, [eax+80h]
0x658E4C: test    esi, esi
0x658E4E: jz      short loc_658E8D
0x658E50: mov     eax, [esi]
0x658E52: push    eax; a1
0x658E53: call    TESForm_LookupByFormID
0x658E58: mov     ecx, [esi+5]
0x658E5B: movzx   edx, byte ptr [esi+9]
0x658E5F: add     esp, 4
0x658E62: push    ecx
0x658E63: push    edx
0x658E64: mov     edx, [eax]
0x658E66: mov     ecx, eax
0x658E68: mov     eax, [edx+0D4h]
0x658E6E: call    eax
0x658E70: mov     ecx, [esi]
0x658E72: push    eax
0x658E73: push    ecx
0x658E74: push    254h
0x658E79: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658E7E: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x658E83: call    PrintError
0x658E88: add     esp, 1Ch
0x658E8B: jmp     short loc_658EA9
0x658E8D: movzx   edx, byte ptr [eax+7Ch]
0x658E91: push    edx
0x658E92: push    254h
0x658E97: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658E9C: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x658EA1: call    PrintError
0x658EA6: add     esp, 10h
0x658EA9: mov     ecx, ds:0B33B00h
0x658EAF: mov     ebx, [ecx+14h]
0x658EB2: push    2; Size
0x658EB4: lea     eax, [esp+14h+arg_8]
0x658EB8: push    eax; Dst
0x658EB9: call    SaveLoad_LoadData
0x658EBE: push    4; Size
0x658EC0: lea     ecx, [edi+90h]
0x658EC6: push    ecx; Dst
0x658EC7: mov     ecx, ds:0B33B00h
0x658ECD: call    SaveLoad_LoadData
0x658ED2: test    ebp, 100000h
0x658ED8: jz      short loc_658EE5
0x658EDA: lea     ecx, [edi+94h]
0x658EE0: call    AVCollection_Load
0x658EE5: mov     ecx, ds:0B33B00h
0x658EEB: call    sub_45A170
0x658EF0: test    al, al
0x658EF2: jz      loc_659002
0x658EF8: mov     ecx, ds:0B33B00h
0x658EFE: mov     edi, [ecx+80h]
0x658F04: test    edi, edi
0x658F06: mov     esi, [ecx+14h]
0x658F09: jz      loc_658FAB
0x658F0F: mov     edx, [edi]
0x658F11: push    edx; a1
0x658F12: call    TESForm_LookupByFormID
0x658F17: mov     ecx, eax
0x658F19: movzx   eax, word ptr [esp+14h+arg_8]
0x658F1E: add     eax, ebx
0x658F20: add     esp, 4
0x658F23: cmp     esi, eax
0x658F25: jbe     short loc_658F66
0x658F27: mov     edx, [edi+5]
0x658F2A: movzx   eax, byte ptr [edi+9]
0x658F2E: push    edx
0x658F2F: mov     edx, [ecx]
0x658F31: push    eax
0x658F32: mov     eax, [edx+0D4h]
0x658F38: call    eax
0x658F3A: mov     ecx, [edi]
0x658F3C: movzx   edx, word ptr [esp+18h+arg_8]
0x658F41: push    eax
0x658F42: push    ecx
0x658F43: push    25Dh
0x658F48: sub     esi, edx
0x658F4A: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658F4F: sub     esi, ebx
0x658F51: push    esi; ArgList
0x658F52: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x658F57: call    PrintError
0x658F5C: add     esp, 20h
0x658F5F: pop     edi
0x658F60: pop     esi
0x658F61: pop     ebp
0x658F62: pop     ebx
0x658F63: retn    0Ch
0x658F66: jnb     loc_659002
0x658F6C: mov     eax, [edi+5]
0x658F6F: movzx   edx, byte ptr [edi+9]
0x658F73: push    eax
0x658F74: mov     eax, [ecx]
0x658F76: push    edx
0x658F77: mov     edx, [eax+0D4h]
0x658F7D: call    edx
0x658F7F: movzx   ecx, word ptr [esp+18h+arg_8]
0x658F84: push    eax
0x658F85: mov     eax, [edi]
0x658F87: push    eax
0x658F88: push    25Dh
0x658F8D: sub     ecx, esi
0x658F8F: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658F94: add     ecx, ebx
0x658F96: push    ecx; ArgList
0x658F97: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x658F9C: call    PrintError
0x658FA1: add     esp, 20h
0x658FA4: pop     edi
0x658FA5: pop     esi
0x658FA6: pop     ebp
0x658FA7: pop     ebx
0x658FA8: retn    0Ch
0x658FAB: movzx   eax, word ptr [esp+10h+arg_8]
0x658FB0: lea     edx, [eax+ebx]
0x658FB3: cmp     esi, edx
0x658FB5: jbe     short loc_658FDF
0x658FB7: movzx   edx, byte ptr [ecx+7Ch]
0x658FBB: push    edx
0x658FBC: push    25Dh
0x658FC1: sub     esi, eax
0x658FC3: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658FC8: sub     esi, ebx
0x658FCA: push    esi; ArgList
0x658FCB: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x658FD0: call    PrintError
0x658FD5: add     esp, 14h
0x658FD8: pop     edi
0x658FD9: pop     esi
0x658FDA: pop     ebp
0x658FDB: pop     ebx
0x658FDC: retn    0Ch
0x658FDF: jnb     short loc_659002
0x658FE1: movzx   ecx, byte ptr [ecx+7Ch]
0x658FE5: push    ecx
0x658FE6: push    25Dh
0x658FEB: sub     eax, esi
0x658FED: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658FF2: add     eax, ebx
0x658FF4: push    eax; ArgList
0x658FF5: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x658FFA: call    PrintError
0x658FFF: add     esp, 14h
0x659002: pop     edi
0x659003: pop     esi
0x659004: pop     ebp
0x659005: pop     ebx
0x659006: retn    0Ch
