0x467AF0: sub     esp, 10h
0x467AF3: push    ebp
0x467AF4: push    esi
0x467AF5: push    edi
0x467AF6: mov     esi, ecx
0x467AF8: mov     ecx, ds:0B33B00h
0x467AFE: xor     edi, edi
0x467B00: mov     [esp+1Ch+var_8], edi
0x467B04: mov     ebp, [ecx+14h]
0x467B07: mov     [esp+1Ch+var_C], edi
0x467B0B: call    sub_45A170
0x467B10: test    al, al
0x467B12: jz      short loc_467B47
0x467B14: mov     ecx, ds:0B33B00h
0x467B1A: push    4; Size
0x467B1C: lea     eax, [esp+20h+Src]
0x467B20: push    eax; Src
0x467B21: mov     [esp+24h+Src], 4B4F4C42h
0x467B29: call    SaveLoad_SaveData
0x467B2E: mov     ecx, ds:0B33B00h
0x467B34: mov     edx, [ecx+14h]
0x467B37: push    2; Size
0x467B39: lea     eax, [esp+20h+var_8]
0x467B3D: push    eax; Src
0x467B3E: mov     [esp+24h+var_C], edx
0x467B42: call    SaveLoad_SaveData
0x467B47: push    ebx
0x467B48: mov     bl, [esp+20h+arg_0]
0x467B4C: test    bl, 10h
0x467B4F: jz      short loc_467B62
0x467B51: push    10h; Size
0x467B53: lea     ecx, [esi+4]
0x467B56: push    ecx; Src
0x467B57: mov     ecx, ds:0B33B00h
0x467B5D: call    SaveLoad_SaveData
0x467B62: test    bl, 40h
0x467B65: jz      short loc_467BDC
0x467B67: mov     ecx, ds:0B33B00h
0x467B6D: push    2; Size
0x467B6F: lea     edx, [esp+24h+Src]
0x467B73: mov     [esp+24h+Src], edi
0x467B77: mov     edi, [ecx+14h]
0x467B7A: push    edx; Src
0x467B7B: call    SaveLoad_SaveData
0x467B80: add     esi, 18h
0x467B83: jz      short loc_467BD4
0x467B85: mov     ebx, 1
0x467B8A: lea     ebx, [ebx+0]
0x467B90: mov     eax, [esi]
0x467B92: test    eax, eax
0x467B94: jz      short loc_467BCD
0x467B96: mov     ecx, [eax]
0x467B98: mov     edx, [ecx+0Ch]
0x467B9B: mov     al, [eax+4]
0x467B9E: push    4
0x467BA0: lea     ecx, [esp+24h+var_4]
0x467BA4: push    ecx
0x467BA5: mov     ecx, ds:0B33B00h
0x467BAB: mov     [esp+28h+var_4], edx
0x467BAF: mov     [esp+28h+arg_0], al
0x467BB3: call    SaveLoad_SaveFormID
0x467BB8: mov     ecx, ds:0B33B00h
0x467BBE: push    ebx; Size
0x467BBF: lea     edx, [esp+24h+arg_0]
0x467BC3: push    edx; Src
0x467BC4: call    SaveLoad_SaveData
0x467BC9: add     [esp+20h+Src], ebx
0x467BCD: mov     esi, [esi+4]
0x467BD0: test    esi, esi
0x467BD2: jnz     short loc_467B90
0x467BD4: mov     ax, word ptr [esp+20h+Src]
0x467BD9: mov     [edi], ax
0x467BDC: cmp     byte ptr ds:0B05BACh, 0
0x467BE3: pop     ebx
0x467BE4: jz      short loc_467C4D
0x467BE6: mov     eax, ds:0B33B00h
0x467BEB: mov     edi, [eax+84h]
0x467BF1: test    edi, edi
0x467BF3: mov     esi, [eax+14h]
0x467BF6: jz      short loc_467C33
0x467BF8: mov     ecx, [edi]
0x467BFA: push    ecx; a1
0x467BFB: call    TESForm_LookupByFormID
0x467C00: mov     edx, [edi+5]
0x467C03: add     esp, 4
0x467C06: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467C0B: push    66Fh
0x467C10: push    edx
0x467C11: mov     edx, [eax]
0x467C13: mov     ecx, eax
0x467C15: mov     eax, [edx+0D4h]
0x467C1B: call    eax
0x467C1D: mov     ecx, [edi]
0x467C1F: push    eax
0x467C20: push    ecx
0x467C21: sub     esi, ebp
0x467C23: push    esi; ArgList
0x467C24: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x467C29: call    sub_40FEC0
0x467C2E: add     esp, 1Ch
0x467C31: jmp     short loc_467C4D
0x467C33: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467C38: push    66Fh
0x467C3D: sub     esi, ebp
0x467C3F: push    esi; ArgList
0x467C40: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x467C45: call    sub_40FEC0
0x467C4A: add     esp, 10h
0x467C4D: mov     ecx, ds:0B33B00h
0x467C53: call    sub_45A170
0x467C58: test    al, al
0x467C5A: jz      short loc_467C8F
0x467C5C: mov     edx, ds:0B33B00h
0x467C62: mov     edi, [esp+1Ch+var_C]
0x467C66: mov     esi, [edx+14h]
0x467C69: lea     eax, [edi+0FFFFh]
0x467C6F: cmp     esi, eax
0x467C71: jbe     short loc_467C8A
0x467C73: push    66Fh
0x467C78: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467C7D: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x467C82: call    PrintError
0x467C87: add     esp, 0Ch
0x467C8A: sub     esi, edi
0x467C8C: mov     [edi], si
0x467C8F: pop     edi
0x467C90: pop     esi
0x467C91: pop     ebp
0x467C92: add     esp, 10h
0x467C95: retn    4
