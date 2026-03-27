0x67C0D0: sub     esp, 10h
0x67C0D3: push    ebp
0x67C0D4: push    esi
0x67C0D5: mov     esi, ecx
0x67C0D7: mov     ecx, ds:0B33B00h
0x67C0DD: mov     [esp+18h+var_4], 0
0x67C0E5: mov     ebp, [ecx+14h]
0x67C0E8: push    edi
0x67C0E9: mov     [esp+1Ch+var_C], 0
0x67C0F1: call    sub_45A170
0x67C0F6: test    al, al
0x67C0F8: jz      short loc_67C12D
0x67C0FA: mov     ecx, ds:0B33B00h
0x67C100: push    4; Size
0x67C102: lea     eax, [esp+20h+Src]
0x67C106: push    eax; Src
0x67C107: mov     [esp+24h+Src], 4B4F4C42h
0x67C10F: call    SaveLoad_SaveData
0x67C114: mov     ecx, ds:0B33B00h
0x67C11A: mov     edx, [ecx+14h]
0x67C11D: push    2; Size
0x67C11F: lea     eax, [esp+20h+var_4]
0x67C123: push    eax; Src
0x67C124: mov     [esp+24h+var_C], edx
0x67C128: call    SaveLoad_SaveData
0x67C12D: mov     ecx, ds:0B33B00h
0x67C133: push    2; Size
0x67C135: lea     edx, [esp+20h+var_10]
0x67C139: mov     [esp+20h+var_10], 0
0x67C141: mov     edi, [ecx+14h]
0x67C144: push    edx; Src
0x67C145: call    SaveLoad_SaveData
0x67C14A: mov     esi, [esi]
0x67C14C: test    esi, esi
0x67C14E: jz      short loc_67C16E
0x67C150: cmp     dword ptr [esi+4], 0
0x67C154: jnz     short loc_67C15B
0x67C156: cmp     dword ptr [esi], 0
0x67C159: jz      short loc_67C16E
0x67C15B: mov     ecx, [esi]
0x67C15D: call    sub_67B840
0x67C162: add     [esp+1Ch+var_10], 1
0x67C167: mov     esi, [esi+4]
0x67C16A: test    esi, esi
0x67C16C: jnz     short loc_67C150
0x67C16E: mov     ax, word ptr [esp+1Ch+var_10]
0x67C173: mov     [edi], ax
0x67C176: cmp     byte ptr ds:0B05BACh, 0
0x67C17D: jz      short loc_67C1E6
0x67C17F: mov     eax, ds:0B33B00h
0x67C184: mov     edi, [eax+84h]
0x67C18A: test    edi, edi
0x67C18C: mov     esi, [eax+14h]
0x67C18F: jz      short loc_67C1CC
0x67C191: mov     ecx, [edi]
0x67C193: push    ecx; a1
0x67C194: call    TESForm_LookupByFormID
0x67C199: mov     edx, [edi+5]
0x67C19C: add     esp, 4
0x67C19F: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67C1A4: push    233h
0x67C1A9: push    edx
0x67C1AA: mov     edx, [eax]
0x67C1AC: mov     ecx, eax
0x67C1AE: mov     eax, [edx+0D4h]
0x67C1B4: call    eax
0x67C1B6: mov     ecx, [edi]
0x67C1B8: push    eax
0x67C1B9: push    ecx
0x67C1BA: sub     esi, ebp
0x67C1BC: push    esi; ArgList
0x67C1BD: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x67C1C2: call    sub_40FEC0
0x67C1C7: add     esp, 1Ch
0x67C1CA: jmp     short loc_67C1E6
0x67C1CC: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67C1D1: push    233h
0x67C1D6: sub     esi, ebp
0x67C1D8: push    esi; ArgList
0x67C1D9: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x67C1DE: call    sub_40FEC0
0x67C1E3: add     esp, 10h
0x67C1E6: mov     ecx, ds:0B33B00h
0x67C1EC: call    sub_45A170
0x67C1F1: test    al, al
0x67C1F3: jz      short loc_67C228
0x67C1F5: mov     edx, ds:0B33B00h
0x67C1FB: mov     edi, [esp+1Ch+var_C]
0x67C1FF: mov     esi, [edx+14h]
0x67C202: lea     eax, [edi+0FFFFh]
0x67C208: cmp     esi, eax
0x67C20A: jbe     short loc_67C223
0x67C20C: push    233h
0x67C211: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67C216: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x67C21B: call    PrintError
0x67C220: add     esp, 0Ch
0x67C223: sub     esi, edi
0x67C225: mov     [edi], si
0x67C228: pop     edi
0x67C229: pop     esi
0x67C22A: pop     ebp
0x67C22B: add     esp, 10h
0x67C22E: retn
