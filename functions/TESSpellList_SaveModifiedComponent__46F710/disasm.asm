0x46F710: sub     esp, 10h
0x46F713: test    byte ptr [esp+10h+arg_0], 20h
0x46F718: push    edi
0x46F719: mov     edi, ecx
0x46F71B: jz      loc_46F8CE
0x46F721: cmp     byte ptr ds:0B05BACh, 0
0x46F728: mov     ecx, ds:0B33B00h
0x46F72E: mov     [esp+14h+var_4], 0
0x46F736: mov     eax, [ecx+14h]
0x46F739: mov     [esp+14h+var_C], 0
0x46F741: mov     [esp+14h+var_10], eax
0x46F745: jz      short loc_46F74B
0x46F747: mov     [esp+14h+var_10], eax
0x46F74B: call    sub_45A170
0x46F750: test    al, al
0x46F752: jz      short loc_46F787
0x46F754: mov     ecx, ds:0B33B00h
0x46F75A: push    4; Size
0x46F75C: lea     eax, [esp+18h+Src]
0x46F760: push    eax; Src
0x46F761: mov     [esp+1Ch+Src], 4B4F4C42h
0x46F769: call    SaveLoad_SaveData
0x46F76E: mov     ecx, ds:0B33B00h
0x46F774: mov     edx, [ecx+14h]
0x46F777: push    2; Size
0x46F779: lea     eax, [esp+18h+var_4]
0x46F77D: push    eax; Src
0x46F77E: mov     [esp+1Ch+var_C], edx
0x46F782: call    SaveLoad_SaveData
0x46F787: mov     ecx, ds:0B33B00h
0x46F78D: push    ebp
0x46F78E: push    esi
0x46F78F: push    2; Size
0x46F791: lea     edx, [esp+20h+arg_0]
0x46F795: mov     [esp+20h+arg_0], 0
0x46F79D: mov     ebp, [ecx+14h]
0x46F7A0: push    edx; Src
0x46F7A1: call    SaveLoad_SaveData
0x46F7A6: lea     esi, [edi+4]
0x46F7A9: test    esi, esi
0x46F7AB: jz      short loc_46F7DB
0x46F7AD: lea     ecx, [ecx+0]
0x46F7B0: mov     eax, [esi]
0x46F7B2: test    eax, eax
0x46F7B4: jz      short loc_46F7D4
0x46F7B6: mov     eax, [eax+0Ch]
0x46F7B9: push    4
0x46F7BB: lea     ecx, [esp+20h+Src]
0x46F7BF: push    ecx
0x46F7C0: mov     ecx, ds:0B33B00h
0x46F7C6: mov     [esp+24h+Src], eax
0x46F7CA: call    SaveLoad_SaveFormID
0x46F7CF: add     [esp+1Ch+arg_0], 1
0x46F7D4: mov     esi, [esi+4]
0x46F7D7: test    esi, esi
0x46F7D9: jnz     short loc_46F7B0
0x46F7DB: lea     esi, [edi+0Ch]
0x46F7DE: test    esi, esi
0x46F7E0: jz      short loc_46F80D
0x46F7E2: mov     eax, [esi]
0x46F7E4: test    eax, eax
0x46F7E6: jz      short loc_46F806
0x46F7E8: mov     edx, [eax+0Ch]
0x46F7EB: mov     ecx, ds:0B33B00h
0x46F7F1: push    4
0x46F7F3: lea     eax, [esp+20h+Src]
0x46F7F7: push    eax
0x46F7F8: mov     [esp+24h+Src], edx
0x46F7FC: call    SaveLoad_SaveFormID
0x46F801: add     [esp+1Ch+arg_0], 1
0x46F806: mov     esi, [esi+4]
0x46F809: test    esi, esi
0x46F80B: jnz     short loc_46F7E2
0x46F80D: mov     cx, word ptr [esp+1Ch+arg_0]
0x46F812: mov     [ebp+0], cx
0x46F816: cmp     byte ptr ds:0B05BACh, 0
0x46F81D: jz      short loc_46F88A
0x46F81F: mov     eax, ds:0B33B00h
0x46F824: mov     edi, [eax+84h]
0x46F82A: test    edi, edi
0x46F82C: mov     esi, [eax+14h]
0x46F82F: jz      short loc_46F86E
0x46F831: mov     edx, [edi]
0x46F833: push    edx; a1
0x46F834: call    TESForm_LookupByFormID
0x46F839: mov     ecx, [edi+5]
0x46F83C: mov     edx, [eax]
0x46F83E: add     esp, 4
0x46F841: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F846: push    523h
0x46F84B: push    ecx
0x46F84C: mov     ecx, eax
0x46F84E: mov     eax, [edx+0D4h]
0x46F854: call    eax
0x46F856: mov     ecx, [edi]
0x46F858: sub     esi, [esp+28h+var_10]
0x46F85C: push    eax
0x46F85D: push    ecx
0x46F85E: push    esi; ArgList
0x46F85F: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x46F864: call    sub_40FEC0
0x46F869: add     esp, 1Ch
0x46F86C: jmp     short loc_46F88A
0x46F86E: sub     esi, [esp+1Ch+var_10]
0x46F872: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F877: push    523h
0x46F87C: push    esi; ArgList
0x46F87D: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x46F882: call    sub_40FEC0
0x46F887: add     esp, 10h
0x46F88A: mov     ecx, ds:0B33B00h
0x46F890: call    sub_45A170
0x46F895: test    al, al
0x46F897: jz      short loc_46F8CC
0x46F899: mov     edx, ds:0B33B00h
0x46F89F: mov     edi, [esp+1Ch+var_C]
0x46F8A3: mov     esi, [edx+14h]
0x46F8A6: lea     eax, [edi+0FFFFh]
0x46F8AC: cmp     esi, eax
0x46F8AE: jbe     short loc_46F8C7
0x46F8B0: push    523h
0x46F8B5: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F8BA: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x46F8BF: call    PrintError
0x46F8C4: add     esp, 0Ch
0x46F8C7: sub     esi, edi
0x46F8C9: mov     [edi], si
0x46F8CC: pop     esi
0x46F8CD: pop     ebp
0x46F8CE: pop     edi
0x46F8CF: add     esp, 10h
0x46F8D2: retn    4
