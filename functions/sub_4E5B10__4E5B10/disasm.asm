0x4E5B10: sub     esp, 14h
0x4E5B13: cmp     byte ptr ds:0B05BACh, 0
0x4E5B1A: push    ebp
0x4E5B1B: push    esi
0x4E5B1C: push    edi
0x4E5B1D: mov     edi, ecx
0x4E5B1F: mov     ecx, ds:0B33B00h
0x4E5B25: mov     [esp+20h+var_4], 0
0x4E5B2D: mov     eax, [ecx+14h]
0x4E5B30: mov     [esp+20h+var_C], 0
0x4E5B38: mov     [esp+20h+var_10], eax
0x4E5B3C: jz      short loc_4E5B42
0x4E5B3E: mov     [esp+20h+var_10], eax
0x4E5B42: call    sub_45A170
0x4E5B47: test    al, al
0x4E5B49: jz      short loc_4E5B7E
0x4E5B4B: mov     ecx, ds:0B33B00h
0x4E5B51: push    4; Size
0x4E5B53: lea     eax, [esp+24h+Src]
0x4E5B57: push    eax; Src
0x4E5B58: mov     [esp+28h+Src], 4B4F4C42h
0x4E5B60: call    SaveLoad_SaveData
0x4E5B65: mov     ecx, ds:0B33B00h
0x4E5B6B: mov     edx, [ecx+14h]
0x4E5B6E: push    2; Size
0x4E5B70: lea     eax, [esp+24h+var_4]
0x4E5B74: push    eax; Src
0x4E5B75: mov     [esp+28h+var_C], edx
0x4E5B79: call    SaveLoad_SaveData
0x4E5B7E: mov     ecx, ds:0B33B00h
0x4E5B84: push    2; Size
0x4E5B86: lea     edx, [esp+24h+var_14]
0x4E5B8A: mov     [esp+24h+var_14], 0
0x4E5B92: mov     ebp, [ecx+14h]
0x4E5B95: push    edx; Src
0x4E5B96: call    SaveLoad_SaveData
0x4E5B9B: mov     eax, [edi+24h]
0x4E5B9E: test    eax, eax
0x4E5BA0: jz      short loc_4E5BEF
0x4E5BA2: xor     esi, esi
0x4E5BA4: cmp     [eax+0Ah], si
0x4E5BA8: jbe     short loc_4E5BEF
0x4E5BAA: lea     ebx, [ebx+0]
0x4E5BB0: mov     eax, [eax+4]
0x4E5BB3: mov     ecx, [eax+esi*4]
0x4E5BB6: test    ecx, ecx
0x4E5BB8: jz      short loc_4E5BE1
0x4E5BBA: call    sub_67ED70
0x4E5BBF: test    al, al
0x4E5BC1: jz      short loc_4E5BE1
0x4E5BC3: movzx   ecx, si
0x4E5BC6: push    2; Size
0x4E5BC8: lea     edx, [esp+24h+Src]
0x4E5BCC: mov     [esp+24h+Src], ecx
0x4E5BD0: mov     ecx, ds:0B33B00h
0x4E5BD6: push    edx; Src
0x4E5BD7: call    SaveLoad_SaveData
0x4E5BDC: add     [esp+20h+var_14], 1
0x4E5BE1: mov     eax, [edi+24h]
0x4E5BE4: movzx   ecx, word ptr [eax+0Ah]
0x4E5BE8: add     esi, 1
0x4E5BEB: cmp     esi, ecx
0x4E5BED: jb      short loc_4E5BB0
0x4E5BEF: mov     dx, word ptr [esp+20h+var_14]
0x4E5BF4: mov     [ebp+0], dx
0x4E5BF8: cmp     byte ptr ds:0B05BACh, 0
0x4E5BFF: jz      short loc_4E5C6C
0x4E5C01: mov     eax, ds:0B33B00h
0x4E5C06: mov     edi, [eax+84h]
0x4E5C0C: test    edi, edi
0x4E5C0E: mov     esi, [eax+14h]
0x4E5C11: jz      short loc_4E5C50
0x4E5C13: mov     eax, [edi]
0x4E5C15: push    eax; a1
0x4E5C16: call    TESForm_LookupByFormID
0x4E5C1B: mov     ecx, [edi+5]
0x4E5C1E: mov     edx, [eax]
0x4E5C20: add     esp, 4
0x4E5C23: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5C28: push    0D5Dh
0x4E5C2D: push    ecx
0x4E5C2E: mov     ecx, eax
0x4E5C30: mov     eax, [edx+0D4h]
0x4E5C36: call    eax
0x4E5C38: mov     ecx, [edi]
0x4E5C3A: sub     esi, [esp+2Ch+var_10]
0x4E5C3E: push    eax
0x4E5C3F: push    ecx
0x4E5C40: push    esi; ArgList
0x4E5C41: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x4E5C46: call    sub_40FEC0
0x4E5C4B: add     esp, 1Ch
0x4E5C4E: jmp     short loc_4E5C6C
0x4E5C50: sub     esi, [esp+20h+var_10]
0x4E5C54: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5C59: push    0D5Dh
0x4E5C5E: push    esi; ArgList
0x4E5C5F: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x4E5C64: call    sub_40FEC0
0x4E5C69: add     esp, 10h
0x4E5C6C: mov     ecx, ds:0B33B00h
0x4E5C72: call    sub_45A170
0x4E5C77: test    al, al
0x4E5C79: jz      short loc_4E5CAE
0x4E5C7B: mov     edx, ds:0B33B00h
0x4E5C81: mov     edi, [esp+20h+var_C]
0x4E5C85: mov     esi, [edx+14h]
0x4E5C88: lea     eax, [edi+0FFFFh]
0x4E5C8E: cmp     esi, eax
0x4E5C90: jbe     short loc_4E5CA9
0x4E5C92: push    0D5Dh
0x4E5C97: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5C9C: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4E5CA1: call    PrintError
0x4E5CA6: add     esp, 0Ch
0x4E5CA9: sub     esi, edi
0x4E5CAB: mov     [edi], si
0x4E5CAE: pop     edi
0x4E5CAF: pop     esi
0x4E5CB0: pop     ebp
0x4E5CB1: add     esp, 14h
0x4E5CB4: retn
