0x4E5CC0: sub     esp, 10h
0x4E5CC3: push    ebx
0x4E5CC4: push    esi
0x4E5CC5: push    edi
0x4E5CC6: mov     edi, ecx
0x4E5CC8: mov     ecx, ds:0B33B00h
0x4E5CCE: mov     [esp+1Ch+var_8], 0
0x4E5CD6: xor     ebx, ebx
0x4E5CD8: call    sub_45A170
0x4E5CDD: test    al, al
0x4E5CDF: jz      loc_4E5D7E
0x4E5CE5: mov     ecx, ds:0B33B00h
0x4E5CEB: push    4; Size
0x4E5CED: lea     eax, [esp+20h+Dst]
0x4E5CF1: push    eax; Dst
0x4E5CF2: call    SaveLoad_LoadData
0x4E5CF7: cmp     [esp+1Ch+Dst], 4B4F4C42h
0x4E5CFF: jz      short loc_4E5D69
0x4E5D01: mov     eax, ds:0B33B00h
0x4E5D06: mov     esi, [eax+80h]
0x4E5D0C: test    esi, esi
0x4E5D0E: jz      short loc_4E5D4D
0x4E5D10: mov     ecx, [esi]
0x4E5D12: push    ecx; a1
0x4E5D13: call    TESForm_LookupByFormID
0x4E5D18: mov     edx, [esi+5]
0x4E5D1B: movzx   ecx, byte ptr [esi+9]
0x4E5D1F: add     esp, 4
0x4E5D22: push    edx
0x4E5D23: mov     edx, [eax]
0x4E5D25: push    ecx
0x4E5D26: mov     ecx, eax
0x4E5D28: mov     eax, [edx+0D4h]
0x4E5D2E: call    eax
0x4E5D30: mov     ecx, [esi]
0x4E5D32: push    eax
0x4E5D33: push    ecx
0x4E5D34: push    0D63h
0x4E5D39: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5D3E: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x4E5D43: call    PrintError
0x4E5D48: add     esp, 1Ch
0x4E5D4B: jmp     short loc_4E5D69
0x4E5D4D: movzx   edx, byte ptr [eax+7Ch]
0x4E5D51: push    edx
0x4E5D52: push    0D63h
0x4E5D57: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5D5C: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x4E5D61: call    PrintError
0x4E5D66: add     esp, 10h
0x4E5D69: mov     ecx, ds:0B33B00h
0x4E5D6F: mov     ebx, [ecx+14h]
0x4E5D72: push    2; Size
0x4E5D74: lea     eax, [esp+20h+var_8]
0x4E5D78: push    eax; Dst
0x4E5D79: call    SaveLoad_LoadData
0x4E5D7E: push    2; Size
0x4E5D80: lea     ecx, [esp+20h+var_10]
0x4E5D84: push    ecx; Dst
0x4E5D85: mov     ecx, ds:0B33B00h
0x4E5D8B: call    SaveLoad_LoadData
0x4E5D90: xor     esi, esi
0x4E5D92: cmp     [esp+1Ch+var_10], si
0x4E5D97: jbe     short loc_4E5DE4
0x4E5D99: lea     esp, [esp+0]
0x4E5DA0: mov     ecx, ds:0B33B00h
0x4E5DA6: push    2; Size
0x4E5DA8: lea     edx, [esp+20h+var_C]
0x4E5DAC: push    edx; Dst
0x4E5DAD: call    SaveLoad_LoadData
0x4E5DB2: mov     eax, [edi+24h]
0x4E5DB5: test    eax, eax
0x4E5DB7: jz      short loc_4E5DD8
0x4E5DB9: mov     cx, [esp+1Ch+var_C]
0x4E5DBE: cmp     cx, [eax+0Ah]
0x4E5DC2: jnb     short loc_4E5DD8
0x4E5DC4: mov     edx, [eax+4]
0x4E5DC7: movzx   ecx, cx
0x4E5DCA: mov     ecx, [edx+ecx*4]
0x4E5DCD: test    ecx, ecx
0x4E5DCF: jz      short loc_4E5DD8
0x4E5DD1: push    1
0x4E5DD3: call    sub_67ED80
0x4E5DD8: movzx   eax, [esp+1Ch+var_10]
0x4E5DDD: add     esi, 1
0x4E5DE0: cmp     esi, eax
0x4E5DE2: jb      short loc_4E5DA0
0x4E5DE4: mov     ecx, ds:0B33B00h
0x4E5DEA: call    sub_45A170
0x4E5DEF: test    al, al
0x4E5DF1: jz      loc_4E5F02
0x4E5DF7: mov     ecx, ds:0B33B00h
0x4E5DFD: mov     edi, [ecx+80h]
0x4E5E03: test    edi, edi
0x4E5E05: mov     esi, [ecx+14h]
0x4E5E08: jz      loc_4E5EAB
0x4E5E0E: mov     ecx, [edi]
0x4E5E10: push    ecx; a1
0x4E5E11: call    TESForm_LookupByFormID
0x4E5E16: movzx   edx, word ptr [esp+20h+var_8]
0x4E5E1B: mov     ecx, eax
0x4E5E1D: lea     eax, [edx+ebx]
0x4E5E20: add     esp, 4
0x4E5E23: cmp     esi, eax
0x4E5E25: jbe     short loc_4E5E66
0x4E5E27: mov     eax, [edi+5]
0x4E5E2A: movzx   edx, byte ptr [edi+9]
0x4E5E2E: push    eax
0x4E5E2F: mov     eax, [ecx]
0x4E5E31: push    edx
0x4E5E32: mov     edx, [eax+0D4h]
0x4E5E38: call    edx
0x4E5E3A: movzx   ecx, word ptr [esp+24h+var_8]
0x4E5E3F: push    eax
0x4E5E40: mov     eax, [edi]
0x4E5E42: push    eax
0x4E5E43: push    0D75h
0x4E5E48: sub     esi, ecx
0x4E5E4A: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5E4F: sub     esi, ebx
0x4E5E51: push    esi; ArgList
0x4E5E52: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x4E5E57: call    PrintError
0x4E5E5C: add     esp, 20h
0x4E5E5F: pop     edi
0x4E5E60: pop     esi
0x4E5E61: pop     ebx
0x4E5E62: add     esp, 10h
0x4E5E65: retn
0x4E5E66: jnb     loc_4E5F02
0x4E5E6C: mov     edx, [edi+5]
0x4E5E6F: movzx   eax, byte ptr [edi+9]
0x4E5E73: push    edx
0x4E5E74: mov     edx, [ecx]
0x4E5E76: push    eax
0x4E5E77: mov     eax, [edx+0D4h]
0x4E5E7D: call    eax
0x4E5E7F: mov     ecx, [edi]
0x4E5E81: movzx   edx, word ptr [esp+24h+var_8]
0x4E5E86: push    eax
0x4E5E87: push    ecx
0x4E5E88: push    0D75h
0x4E5E8D: sub     edx, esi
0x4E5E8F: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5E94: add     edx, ebx
0x4E5E96: push    edx; ArgList
0x4E5E97: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x4E5E9C: call    PrintError
0x4E5EA1: add     esp, 20h
0x4E5EA4: pop     edi
0x4E5EA5: pop     esi
0x4E5EA6: pop     ebx
0x4E5EA7: add     esp, 10h
0x4E5EAA: retn
0x4E5EAB: movzx   eax, word ptr [esp+1Ch+var_8]
0x4E5EB0: lea     edx, [eax+ebx]
0x4E5EB3: cmp     esi, edx
0x4E5EB5: jbe     short loc_4E5EDF
0x4E5EB7: movzx   ecx, byte ptr [ecx+7Ch]
0x4E5EBB: push    ecx
0x4E5EBC: push    0D75h
0x4E5EC1: sub     esi, eax
0x4E5EC3: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5EC8: sub     esi, ebx
0x4E5ECA: push    esi; ArgList
0x4E5ECB: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4E5ED0: call    PrintError
0x4E5ED5: add     esp, 14h
0x4E5ED8: pop     edi
0x4E5ED9: pop     esi
0x4E5EDA: pop     ebx
0x4E5EDB: add     esp, 10h
0x4E5EDE: retn
0x4E5EDF: jnb     short loc_4E5F02
0x4E5EE1: movzx   edx, byte ptr [ecx+7Ch]
0x4E5EE5: push    edx
0x4E5EE6: push    0D75h
0x4E5EEB: sub     eax, esi
0x4E5EED: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5EF2: add     eax, ebx
0x4E5EF4: push    eax; ArgList
0x4E5EF5: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4E5EFA: call    PrintError
0x4E5EFF: add     esp, 14h
0x4E5F02: pop     edi
0x4E5F03: pop     esi
0x4E5F04: pop     ebx
0x4E5F05: add     esp, 10h
0x4E5F08: retn
