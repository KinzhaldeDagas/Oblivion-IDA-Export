0x5E7EF0: sub     esp, 1Ch
0x5E7EF3: push    ebx
0x5E7EF4: mov     ebx, [esp+20h+arg_0]
0x5E7EF8: push    ebp
0x5E7EF9: push    esi
0x5E7EFA: push    edi
0x5E7EFB: push    ebx; Src
0x5E7EFC: mov     esi, ecx
0x5E7EFE: call    MobileObject_SaveModifiedForm
0x5E7F03: mov     ecx, ds:0B33B00h
0x5E7F09: xor     ebp, ebp
0x5E7F0B: cmp     byte ptr ds:0B05BACh, 0
0x5E7F12: mov     dword ptr [esp+2Ch+anonymous_1+4], ebp
0x5E7F16: mov     eax, [ecx+14h]
0x5E7F19: mov     dword ptr [esp+2Ch+anonymous_1], ebp
0x5E7F1D: mov     [esp+2Ch+anonymous_2], eax
0x5E7F21: jz      short loc_5E7F27
0x5E7F23: mov     [esp+2Ch+anonymous_2], eax
0x5E7F27: call    sub_45A170
0x5E7F2C: test    al, al
0x5E7F2E: jz      short loc_5E7F63
0x5E7F30: mov     ecx, ds:0B33B00h
0x5E7F36: push    4; Size
0x5E7F38: lea     eax, [esp+30h+Src]
0x5E7F3C: push    eax; Src
0x5E7F3D: mov     [esp+34h+Src], 4B4F4C42h
0x5E7F45: call    SaveLoad_SaveData
0x5E7F4A: mov     ecx, ds:0B33B00h
0x5E7F50: mov     edx, [ecx+14h]
0x5E7F53: push    2; Size
0x5E7F55: lea     eax, [esp+30h+anonymous_1+4]
0x5E7F59: push    eax; Src
0x5E7F5A: mov     dword ptr [esp+34h+anonymous_1], edx
0x5E7F5E: call    SaveLoad_SaveData
0x5E7F63: push    4; a2
0x5E7F65: lea     ecx, [esi+0BCh]
0x5E7F6B: push    ecx; a1
0x5E7F6C: mov     ecx, esi
0x5E7F6E: call    TESForm_SaveDataToCurrentSaveGame
0x5E7F73: push    1; a2
0x5E7F75: lea     edx, [esi+0C8h]
0x5E7F7B: push    edx; a1
0x5E7F7C: mov     ecx, esi
0x5E7F7E: call    TESForm_SaveDataToCurrentSaveGame
0x5E7F83: push    1; a2
0x5E7F85: lea     eax, [esi+0C9h]
0x5E7F8B: push    eax; a1
0x5E7F8C: mov     ecx, esi
0x5E7F8E: call    TESForm_SaveDataToCurrentSaveGame
0x5E7F93: push    1; a2
0x5E7F95: lea     ecx, [esi+78h]
0x5E7F98: push    ecx; a1
0x5E7F99: mov     ecx, esi
0x5E7F9B: call    TESForm_SaveDataToCurrentSaveGame
0x5E7FA0: test    bl, 40h
0x5E7FA3: jz      short loc_5E7FBD
0x5E7FA5: mov     dl, [esi+0B0h]
0x5E7FAB: push    1; a2
0x5E7FAD: lea     eax, [esp+30h+anonymous_0+3]
0x5E7FB1: push    eax; a1
0x5E7FB2: mov     ecx, esi
0x5E7FB4: mov     byte ptr [esp+34h+anonymous_0+3], dl
0x5E7FB8: call    TESForm_SaveDataToCurrentSaveGame
0x5E7FBD: mov     edx, [esi]
0x5E7FBF: mov     eax, [edx+170h]
0x5E7FC5: mov     ecx, esi
0x5E7FC7: call    eax
0x5E7FC9: cmp     byte ptr [eax+4], 24h ; '$'
0x5E7FCD: jnz     short loc_5E802A
0x5E7FCF: mov     edx, [esi]
0x5E7FD1: mov     eax, [edx+170h]
0x5E7FD7: mov     ecx, esi
0x5E7FD9: call    eax
0x5E7FDB: cmp     eax, ebp
0x5E7FDD: jz      short loc_5E802A
0x5E7FDF: cmp     byte ptr [eax+104h], 4
0x5E7FE6: jnz     short loc_5E802A
0x5E7FE8: cmp     [esi+0D4h], ebp
0x5E7FEE: mov     byte ptr [esp+2Ch+anonymous_0+3], 0
0x5E7FF3: jz      short loc_5E7FFA
0x5E7FF5: mov     byte ptr [esp+2Ch+anonymous_0+3], 1
0x5E7FFA: push    1; a2
0x5E7FFC: lea     ecx, [esp+30h+anonymous_0+3]
0x5E8000: push    ecx; a1
0x5E8001: mov     ecx, esi
0x5E8003: call    TESForm_SaveDataToCurrentSaveGame
0x5E8008: cmp     byte ptr [esp+2Ch+anonymous_0+3], 0
0x5E800D: jz      short loc_5E802A
0x5E800F: mov     edx, [esi+0D4h]
0x5E8015: mov     eax, [edx+0Ch]
0x5E8018: push    4
0x5E801A: lea     ecx, [esp+30h+Src]
0x5E801E: push    ecx
0x5E801F: mov     ecx, esi
0x5E8021: mov     [esp+34h+Src], eax
0x5E8025: call    TESForm_SaveFormIDToCurrentSaveGame
0x5E802A: test    ebx, 8000h
0x5E8030: jz      short loc_5E80A0
0x5E8032: mov     ecx, ds:0B33B00h
0x5E8038: push    2; Size
0x5E803A: lea     edx, [esp+30h+Src]
0x5E803E: mov     [esp+30h+Src], ebp
0x5E8042: mov     ebx, [ecx+14h]
0x5E8045: push    edx; Src
0x5E8046: call    SaveLoad_SaveData
0x5E804B: lea     edi, [esi+0A4h]
0x5E8051: cmp     edi, ebp
0x5E8053: jz      short loc_5E8094
0x5E8055: cmp     [edi+4], ebp
0x5E8058: jnz     short loc_5E805E
0x5E805A: cmp     [edi], ebp
0x5E805C: jz      short loc_5E8094
0x5E805E: mov     ebp, [edi]
0x5E8060: mov     eax, [ebp+4]
0x5E8063: test    eax, eax
0x5E8065: jz      short loc_5E808B
0x5E8067: mov     eax, [eax+0Ch]
0x5E806A: push    4
0x5E806C: lea     ecx, [esp+30h+anonymous_4]
0x5E8070: push    ecx
0x5E8071: mov     ecx, esi
0x5E8073: mov     [esp+34h+anonymous_4], eax
0x5E8077: call    TESForm_SaveFormIDToCurrentSaveGame
0x5E807C: push    4; a2
0x5E807E: push    ebp; a1
0x5E807F: mov     ecx, esi
0x5E8081: call    TESForm_SaveDataToCurrentSaveGame
0x5E8086: add     [esp+2Ch+Src], 1
0x5E808B: mov     edi, [edi+4]
0x5E808E: xor     ebp, ebp
0x5E8090: test    edi, edi
0x5E8092: jnz     short loc_5E8055
0x5E8094: mov     dx, word ptr [esp+2Ch+Src]
0x5E8099: mov     [ebx], dx
0x5E809C: mov     ebx, [esp+2Ch+arg_0]
0x5E80A0: test    ebx, 20000000h
0x5E80A6: jz      short loc_5E80C6
0x5E80A8: mov     ecx, ds:0B33B00h
0x5E80AE: push    esi
0x5E80AF: call    sub_453A00
0x5E80B4: mov     [esp+2Ch+anonymous_4], eax
0x5E80B8: push    4; a2
0x5E80BA: lea     eax, [esp+30h+anonymous_4]
0x5E80BE: push    eax; a1
0x5E80BF: mov     ecx, esi
0x5E80C1: call    TESForm_SaveDataToCurrentSaveGame
0x5E80C6: mov     ecx, ds:0B33B00h
0x5E80CC: push    2; Size
0x5E80CE: lea     edx, [esp+30h+anonymous_5]
0x5E80D2: mov     [esp+30h+anonymous_5], ebp
0x5E80D6: mov     ebx, [ecx+14h]
0x5E80D9: push    edx; Src
0x5E80DA: call    SaveLoad_SaveData
0x5E80DF: lea     edi, [esi+9Ch]
0x5E80E5: cmp     edi, ebp
0x5E80E7: jz      short loc_5E813A
0x5E80E9: lea     esp, [esp+0]
0x5E80F0: cmp     [edi+4], ebp
0x5E80F3: jnz     short loc_5E80F9
0x5E80F5: cmp     [edi], ebp
0x5E80F7: jz      short loc_5E813A
0x5E80F9: mov     ebp, [edi]
0x5E80FB: mov     [esp+2Ch+Src], 0
0x5E8103: mov     eax, [ebp+0]
0x5E8106: test    eax, eax
0x5E8108: jz      short loc_5E8111
0x5E810A: mov     eax, [eax+0Ch]
0x5E810D: mov     [esp+2Ch+Src], eax
0x5E8111: push    4
0x5E8113: lea     ecx, [esp+30h+Src]
0x5E8117: push    ecx
0x5E8118: mov     ecx, esi
0x5E811A: call    TESForm_SaveFormIDToCurrentSaveGame
0x5E811F: push    4; a2
0x5E8121: add     ebp, 4
0x5E8124: push    ebp; a1
0x5E8125: mov     ecx, esi
0x5E8127: call    TESForm_SaveDataToCurrentSaveGame
0x5E812C: add     [esp+2Ch+anonymous_5], 1
0x5E8131: mov     edi, [edi+4]
0x5E8134: xor     ebp, ebp
0x5E8136: test    edi, edi
0x5E8138: jnz     short loc_5E80F0
0x5E813A: mov     dx, word ptr [esp+2Ch+anonymous_5]
0x5E813F: mov     [ebx], dx
0x5E8142: mov     ecx, ds:0B33B00h
0x5E8148: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x5E814C: jb      short loc_5E8174
0x5E814E: mov     eax, [esi+7Ch]
0x5E8151: cmp     eax, ebp
0x5E8153: mov     [esp+2Ch+Src], ebp
0x5E8157: jz      short loc_5E8160
0x5E8159: mov     eax, [eax+0Ch]
0x5E815C: mov     [esp+2Ch+Src], eax
0x5E8160: push    4
0x5E8162: lea     ecx, [esp+30h+Src]
0x5E8166: push    ecx
0x5E8167: mov     ecx, esi
0x5E8169: call    TESForm_SaveFormIDToCurrentSaveGame
0x5E816E: mov     ecx, ds:0B33B00h
0x5E8174: cmp     byte ptr [ecx+7Ch], 3Ch ; '<'
0x5E8178: jb      short loc_5E81A3
0x5E817A: mov     eax, [esi+0D0h]
0x5E8180: cmp     eax, ebp
0x5E8182: mov     [esp+2Ch+Src], ebp
0x5E8186: jz      short loc_5E818F
0x5E8188: mov     edx, [eax+0Ch]
0x5E818B: mov     [esp+2Ch+Src], edx
0x5E818F: push    4
0x5E8191: lea     eax, [esp+30h+Src]
0x5E8195: push    eax
0x5E8196: mov     ecx, esi
0x5E8198: call    TESForm_SaveFormIDToCurrentSaveGame
0x5E819D: mov     ecx, ds:0B33B00h
0x5E81A3: cmp     byte ptr [ecx+7Ch], 44h ; 'D'
0x5E81A7: jb      short loc_5E81C4
0x5E81A9: test    [esp+2Ch+arg_0], 200000h
0x5E81B1: jz      short loc_5E81C4
0x5E81B3: lea     ecx, [esi+88h]
0x5E81B9: call    AVCollection_Save
0x5E81BE: mov     ecx, ds:0B33B00h
0x5E81C4: cmp     byte ptr [ecx+7Ch], 45h ; 'E'
0x5E81C8: jb      short loc_5E8205
0x5E81CA: push    1; Size
0x5E81CC: lea     edx, [esi+80h]
0x5E81D2: push    edx; Src
0x5E81D3: call    SaveLoad_SaveData
0x5E81D8: mov     eax, [esi+0CCh]
0x5E81DE: cmp     eax, ebp
0x5E81E0: mov     [esp+2Ch+arg_0], ebp
0x5E81E4: jz      short loc_5E81ED
0x5E81E6: mov     eax, [eax+0Ch]
0x5E81E9: mov     [esp+2Ch+arg_0], eax
0x5E81ED: push    4
0x5E81EF: lea     ecx, [esp+30h+arg_0]
0x5E81F3: push    ecx
0x5E81F4: mov     ecx, ds:0B33B00h
0x5E81FA: call    SaveLoad_SaveFormID
0x5E81FF: mov     ecx, ds:0B33B00h
0x5E8205: cmp     byte ptr [ecx+7Ch], 61h ; 'a'
0x5E8209: jb      short loc_5E8232
0x5E820B: mov     eax, [esi+0E4h]
0x5E8211: cmp     eax, ebp
0x5E8213: mov     [esp+2Ch+arg_0], ebp
0x5E8217: jz      short loc_5E8220
0x5E8219: mov     edx, [eax+0Ch]
0x5E821C: mov     [esp+2Ch+arg_0], edx
0x5E8220: push    4
0x5E8222: lea     eax, [esp+30h+arg_0]
0x5E8226: push    eax
0x5E8227: call    SaveLoad_SaveFormID
0x5E822C: mov     ecx, ds:0B33B00h
0x5E8232: cmp     byte ptr [ecx+7Ch], 65h ; 'e'
0x5E8236: jb      short loc_5E824E
0x5E8238: push    4; a2
0x5E823A: lea     ecx, [esi+84h]
0x5E8240: push    ecx; a1
0x5E8241: mov     ecx, esi
0x5E8243: call    TESForm_SaveDataToCurrentSaveGame
0x5E8248: mov     ecx, ds:0B33B00h
0x5E824E: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x5E8252: jb      short loc_5E82AA
0x5E8254: push    4; a2
0x5E8256: lea     edx, [esi+0ACh]
0x5E825C: push    edx; a1
0x5E825D: mov     ecx, esi
0x5E825F: call    TESForm_SaveDataToCurrentSaveGame
0x5E8264: push    1; a2
0x5E8266: lea     eax, [esi+0CAh]
0x5E826C: push    eax; a1
0x5E826D: mov     ecx, esi
0x5E826F: call    TESForm_SaveDataToCurrentSaveGame
0x5E8274: push    1; a2
0x5E8276: lea     ecx, [esi+0D8h]
0x5E827C: push    ecx; a1
0x5E827D: mov     ecx, esi
0x5E827F: call    TESForm_SaveDataToCurrentSaveGame
0x5E8284: push    4; a2
0x5E8286: lea     edx, [esi+0DCh]
0x5E828C: push    edx; a1
0x5E828D: mov     ecx, esi
0x5E828F: call    TESForm_SaveDataToCurrentSaveGame
0x5E8294: push    4; a2
0x5E8296: lea     eax, [esi+100h]
0x5E829C: push    eax; a1
0x5E829D: mov     ecx, esi
0x5E829F: call    TESForm_SaveDataToCurrentSaveGame
0x5E82A4: mov     ecx, ds:0B33B00h
0x5E82AA: cmp     byte ptr [ecx+7Ch], 73h ; 's'
0x5E82AE: jb      short loc_5E82C6
0x5E82B0: push    1; a2
0x5E82B2: lea     ecx, [esi+0FCh]
0x5E82B8: push    ecx; a1
0x5E82B9: mov     ecx, esi
0x5E82BB: call    TESForm_SaveDataToCurrentSaveGame
0x5E82C0: mov     ecx, ds:0B33B00h
0x5E82C6: cmp     byte ptr [ecx+7Ch], 7Bh ; '{'
0x5E82CA: jb      short loc_5E82E2
0x5E82CC: push    1; a2
0x5E82CE: lea     edx, [esi+0C0h]
0x5E82D4: push    edx; a1
0x5E82D5: mov     ecx, esi
0x5E82D7: call    TESForm_SaveDataToCurrentSaveGame
0x5E82DC: mov     ecx, ds:0B33B00h
0x5E82E2: cmp     byte ptr ds:0B05BACh, 0
0x5E82E9: jz      short loc_5E8357
0x5E82EB: mov     edi, [ecx+84h]
0x5E82F1: cmp     edi, ebp
0x5E82F3: mov     esi, [ecx+14h]
0x5E82F6: jz      short loc_5E8335
0x5E82F8: mov     eax, [edi]
0x5E82FA: push    eax; a1
0x5E82FB: call    TESForm_LookupByFormID
0x5E8300: mov     ecx, [edi+5]
0x5E8303: mov     edx, [eax]
0x5E8305: add     esp, 4
0x5E8308: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x5E830D: push    43C2h
0x5E8312: push    ecx
0x5E8313: mov     ecx, eax
0x5E8315: mov     eax, [edx+0D4h]
0x5E831B: call    eax
0x5E831D: mov     ecx, [edi]
0x5E831F: sub     esi, [esp+38h+anonymous_2]
0x5E8323: push    eax
0x5E8324: push    ecx
0x5E8325: push    esi; ArgList
0x5E8326: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x5E832B: call    sub_40FEC0
0x5E8330: add     esp, 1Ch
0x5E8333: jmp     short loc_5E8351
0x5E8335: sub     esi, [esp+2Ch+anonymous_2]
0x5E8339: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x5E833E: push    43C2h
0x5E8343: push    esi; ArgList
0x5E8344: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x5E8349: call    sub_40FEC0
0x5E834E: add     esp, 10h
0x5E8351: mov     ecx, ds:0B33B00h
0x5E8357: call    sub_45A170
0x5E835C: test    al, al
0x5E835E: jz      short loc_5E8393
0x5E8360: mov     edx, ds:0B33B00h
0x5E8366: mov     edi, dword ptr [esp+2Ch+anonymous_1]
0x5E836A: mov     esi, [edx+14h]
0x5E836D: lea     eax, [edi+0FFFFh]
0x5E8373: cmp     esi, eax
0x5E8375: jbe     short loc_5E838E
0x5E8377: push    43C2h
0x5E837C: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x5E8381: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x5E8386: call    PrintError
0x5E838B: add     esp, 0Ch
0x5E838E: sub     esi, edi
0x5E8390: mov     [edi], si
0x5E8393: pop     edi
0x5E8394: pop     esi
0x5E8395: pop     ebp
0x5E8396: pop     ebx
0x5E8397: add     esp, 1Ch
0x5E839A: retn    4
