0x472D10: sub     esp, 10h
0x472D13: mov     ecx, ds:0B33B00h
0x472D19: push    ebp
0x472D1A: push    esi
0x472D1B: mov     [esp+18h+var_4], 0
0x472D23: mov     ebp, [ecx+14h]
0x472D26: push    edi
0x472D27: mov     [esp+1Ch+var_C], 0
0x472D2F: call    sub_45A170
0x472D34: test    al, al
0x472D36: jz      short loc_472D6B
0x472D38: mov     ecx, ds:0B33B00h
0x472D3E: push    4; Size
0x472D40: lea     eax, [esp+20h+Src]
0x472D44: push    eax; Src
0x472D45: mov     [esp+24h+Src], 4B4F4C42h
0x472D4D: call    SaveLoad_SaveData
0x472D52: mov     ecx, ds:0B33B00h
0x472D58: mov     edx, [ecx+14h]
0x472D5B: push    2; Size
0x472D5D: lea     eax, [esp+20h+var_4]
0x472D61: push    eax; Src
0x472D62: mov     [esp+24h+var_C], edx
0x472D66: call    SaveLoad_SaveData
0x472D6B: mov     esi, [esp+1Ch+arg_4]
0x472D6F: test    esi, esi
0x472D71: mov     [esp+1Ch+var_10], 0
0x472D79: jz      short loc_472D89
0x472D7B: mov     eax, [esi+24h]
0x472D7E: test    eax, eax
0x472D80: jz      short loc_472D89
0x472D82: mov     ecx, [eax+0Ch]
0x472D85: mov     [esp+1Ch+var_10], ecx
0x472D89: mov     ecx, ds:0B33B00h
0x472D8F: push    4
0x472D91: lea     edx, [esp+20h+var_10]
0x472D95: push    edx
0x472D96: call    SaveLoad_SaveFormID
0x472D9B: cmp     [esp+1Ch+var_10], 0
0x472DA0: jz      short loc_472DE7
0x472DA2: mov     ecx, [esi+10h]
0x472DA5: test    ecx, ecx
0x472DA7: mov     eax, 0Dh
0x472DAC: jz      short loc_472DBA
0x472DAE: call    sub_49F550
0x472DB3: add     ax, 0Eh
0x472DB7: movzx   eax, ax
0x472DBA: movzx   eax, ax
0x472DBD: push    2; Size
0x472DBF: lea     ecx, [esp+20h+arg_4]
0x472DC3: push    ecx; Src
0x472DC4: mov     ecx, ds:0B33B00h
0x472DCA: mov     [esp+24h+arg_4], eax
0x472DCE: call    SaveLoad_SaveData
0x472DD3: mov     edx, [esp+1Ch+arg_8]
0x472DD7: fld     [esp+1Ch+arg_C]
0x472DDB: push    edx; int
0x472DDC: push    ecx
0x472DDD: mov     ecx, esi; Src
0x472DDF: fstp    [esp+24h+var_24]; float
0x472DE2: call    sub_472C40
0x472DE7: cmp     byte ptr ds:0B05BACh, 0
0x472DEE: jz      short loc_472E57
0x472DF0: mov     eax, ds:0B33B00h
0x472DF5: mov     edi, [eax+84h]
0x472DFB: test    edi, edi
0x472DFD: mov     esi, [eax+14h]
0x472E00: jz      short loc_472E3D
0x472E02: mov     eax, [edi]
0x472E04: push    eax; a1
0x472E05: call    TESForm_LookupByFormID
0x472E0A: mov     ecx, [edi+5]
0x472E0D: mov     edx, [eax]
0x472E0F: add     esp, 4
0x472E12: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x472E17: push    0F72h
0x472E1C: push    ecx
0x472E1D: mov     ecx, eax
0x472E1F: mov     eax, [edx+0D4h]
0x472E25: call    eax
0x472E27: mov     ecx, [edi]
0x472E29: push    eax
0x472E2A: push    ecx
0x472E2B: sub     esi, ebp
0x472E2D: push    esi; ArgList
0x472E2E: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x472E33: call    sub_40FEC0
0x472E38: add     esp, 1Ch
0x472E3B: jmp     short loc_472E57
0x472E3D: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x472E42: push    0F72h
0x472E47: sub     esi, ebp
0x472E49: push    esi; ArgList
0x472E4A: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x472E4F: call    sub_40FEC0
0x472E54: add     esp, 10h
0x472E57: mov     ecx, ds:0B33B00h
0x472E5D: call    sub_45A170
0x472E62: test    al, al
0x472E64: jz      short loc_472E99
0x472E66: mov     edx, ds:0B33B00h
0x472E6C: mov     edi, [esp+1Ch+var_C]
0x472E70: mov     esi, [edx+14h]
0x472E73: lea     eax, [edi+0FFFFh]
0x472E79: cmp     esi, eax
0x472E7B: jbe     short loc_472E94
0x472E7D: push    0F72h
0x472E82: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x472E87: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x472E8C: call    PrintError
0x472E91: add     esp, 0Ch
0x472E94: sub     esi, edi
0x472E96: mov     [edi], si
0x472E99: pop     edi
0x472E9A: pop     esi
0x472E9B: pop     ebp
0x472E9C: add     esp, 10h
0x472E9F: retn
