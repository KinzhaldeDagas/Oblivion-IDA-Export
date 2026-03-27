0x68FDF0: sub     esp, 10h
0x68FDF3: mov     eax, [esp+10h+arg_0]
0x68FDF7: push    esi
0x68FDF8: push    edi
0x68FDF9: push    eax
0x68FDFA: mov     edi, ecx
0x68FDFC: call    AssociatedItemEffect_Save
0x68FE01: mov     ecx, ds:0B33B00h
0x68FE07: xor     esi, esi
0x68FE09: cmp     byte ptr ds:0B05BACh, 0
0x68FE10: mov     [esp+18h+var_4], esi
0x68FE14: mov     eax, [ecx+14h]
0x68FE17: mov     [esp+18h+var_C], esi
0x68FE1B: mov     [esp+18h+var_10], eax
0x68FE1F: jz      short loc_68FE25
0x68FE21: mov     [esp+18h+var_10], eax
0x68FE25: call    sub_45A170
0x68FE2A: test    al, al
0x68FE2C: jz      short loc_68FE61
0x68FE2E: push    4; Size
0x68FE30: lea     ecx, [esp+1Ch+Src]
0x68FE34: push    ecx; Src
0x68FE35: mov     ecx, ds:0B33B00h
0x68FE3B: mov     [esp+20h+Src], 4B4F4C42h
0x68FE43: call    SaveLoad_SaveData
0x68FE48: mov     ecx, ds:0B33B00h
0x68FE4E: mov     edx, [ecx+14h]
0x68FE51: push    2; Size
0x68FE53: lea     eax, [esp+1Ch+var_4]
0x68FE57: push    eax; Src
0x68FE58: mov     [esp+20h+var_C], edx
0x68FE5C: call    SaveLoad_SaveData
0x68FE61: cmp     [edi+3Ch], esi
0x68FE64: mov     byte ptr [esp+18h+arg_0], 0
0x68FE69: jz      short loc_68FE70
0x68FE6B: mov     byte ptr [esp+18h+arg_0], 1
0x68FE70: push    1; Size
0x68FE72: lea     ecx, [esp+1Ch+arg_0]
0x68FE76: push    ecx; Src
0x68FE77: mov     ecx, ds:0B33B00h
0x68FE7D: call    SaveLoad_SaveData
0x68FE82: cmp     byte ptr [esp+18h+arg_0], 0
0x68FE87: jz      short loc_68FE91
0x68FE89: mov     ecx, [edi+3Ch]
0x68FE8C: call    SaveGame
0x68FE91: push    ebp
0x68FE92: lea     esi, [edi+40h]
0x68FE95: mov     ebp, 10h
0x68FE9A: lea     ebx, [ebx+0]
0x68FEA0: cmp     dword ptr [esi], 0
0x68FEA3: mov     byte ptr [esp+1Ch+arg_0], 0
0x68FEA8: jz      short loc_68FEAF
0x68FEAA: mov     byte ptr [esp+1Ch+arg_0], 1
0x68FEAF: mov     ecx, ds:0B33B00h
0x68FEB5: push    1; Size
0x68FEB7: lea     edx, [esp+20h+arg_0]
0x68FEBB: push    edx; Src
0x68FEBC: call    SaveLoad_SaveData
0x68FEC1: cmp     byte ptr [esp+1Ch+arg_0], 0
0x68FEC6: jz      short loc_68FECF
0x68FEC8: mov     ecx, [esi]
0x68FECA: call    SaveGame
0x68FECF: add     esi, 4
0x68FED2: sub     ebp, 1
0x68FED5: jnz     short loc_68FEA0
0x68FED7: mov     ecx, ds:0B33B00h
0x68FEDD: cmp     byte ptr [ecx+7Ch], 41h ; 'A'
0x68FEE1: pop     ebp
0x68FEE2: jb      short loc_68FF0C
0x68FEE4: push    4; Size
0x68FEE6: lea     eax, [edi+80h]
0x68FEEC: push    eax; Src
0x68FEED: call    SaveLoad_SaveData
0x68FEF2: push    1; Size
0x68FEF4: lea     ecx, [edi+84h]
0x68FEFA: push    ecx; Src
0x68FEFB: mov     ecx, ds:0B33B00h
0x68FF01: call    SaveLoad_SaveData
0x68FF06: mov     ecx, ds:0B33B00h
0x68FF0C: cmp     byte ptr [ecx+7Ch], 6Bh ; 'k'
0x68FF10: jb      short loc_68FF26
0x68FF12: push    1; Size
0x68FF14: add     edi, 88h ; 'ˆ'
0x68FF1A: push    edi; Src
0x68FF1B: call    SaveLoad_SaveData
0x68FF20: mov     ecx, ds:0B33B00h
0x68FF26: cmp     byte ptr ds:0B05BACh, 0
0x68FF2D: jz      short loc_68FF9B
0x68FF2F: mov     edi, [ecx+84h]
0x68FF35: test    edi, edi
0x68FF37: mov     esi, [ecx+14h]
0x68FF3A: jz      short loc_68FF79
0x68FF3C: mov     edx, [edi]
0x68FF3E: push    edx; a1
0x68FF3F: call    TESForm_LookupByFormID
0x68FF44: mov     ecx, [edi+5]
0x68FF47: mov     edx, [eax]
0x68FF49: add     esp, 4
0x68FF4C: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x68FF51: push    2DBh
0x68FF56: push    ecx
0x68FF57: mov     ecx, eax
0x68FF59: mov     eax, [edx+0D4h]
0x68FF5F: call    eax
0x68FF61: mov     ecx, [edi]
0x68FF63: sub     esi, [esp+24h+var_10]
0x68FF67: push    eax
0x68FF68: push    ecx
0x68FF69: push    esi; ArgList
0x68FF6A: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x68FF6F: call    sub_40FEC0
0x68FF74: add     esp, 1Ch
0x68FF77: jmp     short loc_68FF95
0x68FF79: sub     esi, [esp+18h+var_10]
0x68FF7D: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x68FF82: push    2DBh
0x68FF87: push    esi; ArgList
0x68FF88: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x68FF8D: call    sub_40FEC0
0x68FF92: add     esp, 10h
0x68FF95: mov     ecx, ds:0B33B00h
0x68FF9B: call    sub_45A170
0x68FFA0: test    al, al
0x68FFA2: jz      short loc_68FFD7
0x68FFA4: mov     edx, ds:0B33B00h
0x68FFAA: mov     edi, [esp+18h+var_C]
0x68FFAE: mov     esi, [edx+14h]
0x68FFB1: lea     eax, [edi+0FFFFh]
0x68FFB7: cmp     esi, eax
0x68FFB9: jbe     short loc_68FFD2
0x68FFBB: push    2DBh
0x68FFC0: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x68FFC5: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x68FFCA: call    PrintError
0x68FFCF: add     esp, 0Ch
0x68FFD2: sub     esi, edi
0x68FFD4: mov     [edi], si
0x68FFD7: pop     edi
0x68FFD8: pop     esi
0x68FFD9: add     esp, 10h
0x68FFDC: retn    4
