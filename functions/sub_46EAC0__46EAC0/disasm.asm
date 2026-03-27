0x46EAC0: sub     esp, 10h
0x46EAC3: test    byte ptr [esp+10h+arg_0], 8
0x46EAC8: push    esi
0x46EAC9: mov     esi, ecx
0x46EACB: jz      loc_46EC5F
0x46EAD1: cmp     byte ptr ds:0B05BACh, 0
0x46EAD8: mov     ecx, ds:0B33B00h
0x46EADE: mov     [esp+14h+var_4], 0
0x46EAE6: mov     eax, [ecx+14h]
0x46EAE9: mov     [esp+14h+var_C], 0
0x46EAF1: mov     [esp+14h+var_10], eax
0x46EAF5: jz      short loc_46EAFB
0x46EAF7: mov     [esp+14h+var_10], eax
0x46EAFB: call    sub_45A170
0x46EB00: test    al, al
0x46EB02: jz      short loc_46EB37
0x46EB04: mov     ecx, ds:0B33B00h
0x46EB0A: push    4; Size
0x46EB0C: lea     eax, [esp+18h+Src]
0x46EB10: push    eax; Src
0x46EB11: mov     [esp+1Ch+Src], 4B4F4C42h
0x46EB19: call    SaveLoad_SaveData
0x46EB1E: mov     ecx, ds:0B33B00h
0x46EB24: mov     edx, [ecx+14h]
0x46EB27: push    2; Size
0x46EB29: lea     eax, [esp+18h+var_4]
0x46EB2D: push    eax; Src
0x46EB2E: mov     [esp+1Ch+var_C], edx
0x46EB32: call    SaveLoad_SaveData
0x46EB37: mov     ecx, ds:0B33B00h
0x46EB3D: push    ebp
0x46EB3E: push    edi
0x46EB3F: push    2; Size
0x46EB41: lea     edx, [esp+20h+arg_0]
0x46EB45: mov     [esp+20h+arg_0], 0
0x46EB4D: mov     ebp, [ecx+14h]
0x46EB50: push    edx; Src
0x46EB51: call    SaveLoad_SaveData
0x46EB56: lea     edi, [esi+4]
0x46EB59: test    edi, edi
0x46EB5B: jz      short loc_46EB9E
0x46EB5D: lea     ecx, [ecx+0]
0x46EB60: mov     esi, [edi]
0x46EB62: test    esi, esi
0x46EB64: jz      short loc_46EB97
0x46EB66: mov     eax, [esi]
0x46EB68: mov     ecx, [eax+0Ch]
0x46EB6B: push    4
0x46EB6D: lea     edx, [esp+20h+Src]
0x46EB71: mov     [esp+20h+Src], ecx
0x46EB75: mov     ecx, ds:0B33B00h
0x46EB7B: push    edx
0x46EB7C: call    SaveLoad_SaveFormID
0x46EB81: mov     ecx, ds:0B33B00h
0x46EB87: push    4; Size
0x46EB89: add     esi, 4
0x46EB8C: push    esi; Src
0x46EB8D: call    SaveLoad_SaveData
0x46EB92: add     [esp+1Ch+arg_0], 1
0x46EB97: mov     edi, [edi+4]
0x46EB9A: test    edi, edi
0x46EB9C: jnz     short loc_46EB60
0x46EB9E: mov     ax, word ptr [esp+1Ch+arg_0]
0x46EBA3: mov     [ebp+0], ax
0x46EBA7: cmp     byte ptr ds:0B05BACh, 0
0x46EBAE: jz      short loc_46EC1B
0x46EBB0: mov     eax, ds:0B33B00h
0x46EBB5: mov     edi, [eax+84h]
0x46EBBB: test    edi, edi
0x46EBBD: mov     esi, [eax+14h]
0x46EBC0: jz      short loc_46EBFF
0x46EBC2: mov     ecx, [edi]
0x46EBC4: push    ecx; a1
0x46EBC5: call    TESForm_LookupByFormID
0x46EBCA: mov     edx, [edi+5]
0x46EBCD: add     esp, 4
0x46EBD0: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EBD5: push    50Dh
0x46EBDA: push    edx
0x46EBDB: mov     edx, [eax]
0x46EBDD: mov     ecx, eax
0x46EBDF: mov     eax, [edx+0D4h]
0x46EBE5: call    eax
0x46EBE7: mov     ecx, [edi]
0x46EBE9: sub     esi, [esp+28h+var_10]
0x46EBED: push    eax
0x46EBEE: push    ecx
0x46EBEF: push    esi; ArgList
0x46EBF0: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x46EBF5: call    sub_40FEC0
0x46EBFA: add     esp, 1Ch
0x46EBFD: jmp     short loc_46EC1B
0x46EBFF: sub     esi, [esp+1Ch+var_10]
0x46EC03: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EC08: push    50Dh
0x46EC0D: push    esi; ArgList
0x46EC0E: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x46EC13: call    sub_40FEC0
0x46EC18: add     esp, 10h
0x46EC1B: mov     ecx, ds:0B33B00h
0x46EC21: call    sub_45A170
0x46EC26: test    al, al
0x46EC28: jz      short loc_46EC5D
0x46EC2A: mov     edx, ds:0B33B00h
0x46EC30: mov     edi, [esp+1Ch+var_C]
0x46EC34: mov     esi, [edx+14h]
0x46EC37: lea     eax, [edi+0FFFFh]
0x46EC3D: cmp     esi, eax
0x46EC3F: jbe     short loc_46EC58
0x46EC41: push    50Dh
0x46EC46: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EC4B: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x46EC50: call    PrintError
0x46EC55: add     esp, 0Ch
0x46EC58: sub     esi, edi
0x46EC5A: mov     [edi], si
0x46EC5D: pop     edi
0x46EC5E: pop     ebp
0x46EC5F: pop     esi
0x46EC60: add     esp, 10h
0x46EC63: retn    4
