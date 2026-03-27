0x4D2020: sub     esp, 8
0x4D2023: push    ebx
0x4D2024: mov     ebx, [esp+0Ch+Src]
0x4D2028: test    ebx, 8000000h
0x4D202E: push    ebp
0x4D202F: push    esi
0x4D2030: push    edi
0x4D2031: mov     esi, ecx
0x4D2033: jz      short loc_4D204F
0x4D2035: lea     ecx, [esi+28h]
0x4D2038: call    ExtraDataList?_GetDetachTime
0x4D203D: mov     [esp+18h+Src], eax
0x4D2041: push    4; a2
0x4D2043: lea     eax, [esp+1Ch+Src]
0x4D2047: push    eax; a1
0x4D2048: mov     ecx, esi
0x4D204A: call    TESForm_SaveDataToCurrentSaveGame
0x4D204F: push    ebx; a2
0x4D2050: mov     ecx, esi; this
0x4D2052: call    TESForm_SaveModifiedForm
0x4D2057: mov     ecx, ds:0B33B00h
0x4D205D: xor     edi, edi
0x4D205F: mov     [esp+18h+var_4], edi
0x4D2063: mov     ebp, [ecx+14h]
0x4D2066: mov     [esp+18h+var_8], edi
0x4D206A: call    sub_45A170
0x4D206F: test    al, al
0x4D2071: jz      short loc_4D20A6
0x4D2073: push    4; Size
0x4D2075: lea     ecx, [esp+1Ch+Src]
0x4D2079: push    ecx; Src
0x4D207A: mov     ecx, ds:0B33B00h
0x4D2080: mov     [esp+20h+Src], 4B4F4C42h
0x4D2088: call    SaveLoad_SaveData
0x4D208D: mov     ecx, ds:0B33B00h
0x4D2093: mov     edx, [ecx+14h]
0x4D2096: push    2; Size
0x4D2098: lea     eax, [esp+1Ch+var_4]
0x4D209C: push    eax; Src
0x4D209D: mov     [esp+20h+var_8], edx
0x4D20A1: call    SaveLoad_SaveData
0x4D20A6: test    bl, 8
0x4D20A9: jz      short loc_4D20C6
0x4D20AB: mov     cl, [esi+24h]
0x4D20AE: and     cl, 60h
0x4D20B1: or      cl, [esi+25h]
0x4D20B4: push    1; a2
0x4D20B6: lea     edx, [esp+1Ch+Src]
0x4D20BA: mov     byte ptr [esp+1Ch+Src], cl
0x4D20BE: push    edx; a1
0x4D20BF: mov     ecx, esi
0x4D20C1: call    TESForm_SaveDataToCurrentSaveGame
0x4D20C6: test    ebx, 10000000h
0x4D20CC: jz      short loc_4D20E0
0x4D20CE: lea     ecx, [esi+28h]
0x4D20D1: call    sub_420B50
0x4D20D6: mov     edx, [eax]
0x4D20D8: mov     ecx, eax
0x4D20DA: mov     eax, [edx+0Ch]
0x4D20DD: push    edi
0x4D20DE: call    eax
0x4D20E0: test    bl, 10h
0x4D20E3: jz      short loc_4D2129
0x4D20E5: mov     eax, [esi+1Ch]
0x4D20E8: cmp     eax, edi
0x4D20EA: mov     edi, eax
0x4D20EC: jnz     short loc_4D20F3
0x4D20EE: mov     edi, offset EmptyString
0x4D20F3: mov     eax, edi
0x4D20F5: lea     edx, [eax+1]
0x4D20F8: mov     cl, [eax]
0x4D20FA: add     eax, 1
0x4D20FD: test    cl, cl
0x4D20FF: jnz     short loc_4D20F8
0x4D2101: push    1; a2
0x4D2103: lea     ecx, [esp+1Ch+Src]
0x4D2107: sub     eax, edx
0x4D2109: push    ecx; a1
0x4D210A: mov     ecx, esi
0x4D210C: mov     byte ptr [esp+20h+Src], al
0x4D2110: call    TESForm_SaveDataToCurrentSaveGame
0x4D2115: mov     al, byte ptr [esp+18h+Src]
0x4D2119: test    al, al
0x4D211B: jz      short loc_4D2129
0x4D211D: movzx   edx, al
0x4D2120: push    edx; a2
0x4D2121: push    edi; a1
0x4D2122: mov     ecx, esi
0x4D2124: call    TESForm_SaveDataToCurrentSaveGame
0x4D2129: test    bl, 20h
0x4D212C: jz      short loc_4D2157
0x4D212E: lea     ecx, [esi+28h]
0x4D2131: call    ExtraDataList_GetOwner
0x4D2136: test    eax, eax
0x4D2138: mov     [esp+18h+Src], 0
0x4D2140: jz      short loc_4D2149
0x4D2142: mov     eax, [eax+0Ch]
0x4D2145: mov     [esp+18h+Src], eax
0x4D2149: push    4
0x4D214B: lea     ecx, [esp+1Ch+Src]
0x4D214F: push    ecx
0x4D2150: mov     ecx, esi
0x4D2152: call    TESForm_SaveFormIDToCurrentSaveGame
0x4D2157: test    ebx, 1000000h
0x4D215D: jz      short loc_4D2167
0x4D215F: mov     ecx, [esi+44h]
0x4D2162: call    sub_4E5B10
0x4D2167: cmp     byte ptr ds:0B05BACh, 0
0x4D216E: jz      short loc_4D21D7
0x4D2170: mov     eax, ds:0B33B00h
0x4D2175: mov     edi, [eax+84h]
0x4D217B: test    edi, edi
0x4D217D: mov     esi, [eax+14h]
0x4D2180: jz      short loc_4D21BD
0x4D2182: mov     edx, [edi]
0x4D2184: push    edx; a1
0x4D2185: call    TESForm_LookupByFormID
0x4D218A: mov     ecx, [edi+5]
0x4D218D: mov     edx, [eax]
0x4D218F: add     esp, 4
0x4D2192: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D2197: push    3174h
0x4D219C: push    ecx
0x4D219D: mov     ecx, eax
0x4D219F: mov     eax, [edx+0D4h]
0x4D21A5: call    eax
0x4D21A7: mov     ecx, [edi]
0x4D21A9: push    eax
0x4D21AA: push    ecx
0x4D21AB: sub     esi, ebp
0x4D21AD: push    esi; ArgList
0x4D21AE: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x4D21B3: call    sub_40FEC0
0x4D21B8: add     esp, 1Ch
0x4D21BB: jmp     short loc_4D21D7
0x4D21BD: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D21C2: push    3174h
0x4D21C7: sub     esi, ebp
0x4D21C9: push    esi; ArgList
0x4D21CA: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x4D21CF: call    sub_40FEC0
0x4D21D4: add     esp, 10h
0x4D21D7: mov     ecx, ds:0B33B00h
0x4D21DD: call    sub_45A170
0x4D21E2: test    al, al
0x4D21E4: jz      short loc_4D2219
0x4D21E6: mov     edx, ds:0B33B00h
0x4D21EC: mov     edi, [esp+18h+var_8]
0x4D21F0: mov     esi, [edx+14h]
0x4D21F3: lea     eax, [edi+0FFFFh]
0x4D21F9: cmp     esi, eax
0x4D21FB: jbe     short loc_4D2214
0x4D21FD: push    3174h
0x4D2202: push    offset a__TesSharedT_5; "..\\TES Shared\\TESObjectCELL.cpp"
0x4D2207: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4D220C: call    PrintError
0x4D2211: add     esp, 0Ch
0x4D2214: sub     esi, edi
0x4D2216: mov     [edi], si
0x4D2219: pop     edi
0x4D221A: pop     esi
0x4D221B: pop     ebp
0x4D221C: pop     ebx
0x4D221D: add     esp, 8
0x4D2220: retn    4
