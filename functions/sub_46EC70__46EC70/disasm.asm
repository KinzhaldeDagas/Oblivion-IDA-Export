0x46EC70: sub     esp, 10h
0x46EC73: test    byte ptr [esp+10h+arg_0], 8
0x46EC78: push    edi
0x46EC79: mov     edi, ecx
0x46EC7B: jz      loc_46EEC7
0x46EC81: mov     ecx, ds:0B33B00h
0x46EC87: push    ebx
0x46EC88: push    esi
0x46EC89: mov     [esp+1Ch+var_10], 0
0x46EC91: xor     ebx, ebx
0x46EC93: call    sub_45A170
0x46EC98: test    al, al
0x46EC9A: jz      loc_46ED39
0x46ECA0: mov     ecx, ds:0B33B00h
0x46ECA6: push    4; Size
0x46ECA8: lea     eax, [esp+20h+Dst]
0x46ECAC: push    eax; Dst
0x46ECAD: call    SaveLoad_LoadData
0x46ECB2: cmp     [esp+1Ch+Dst], 4B4F4C42h
0x46ECBA: jz      short loc_46ED24
0x46ECBC: mov     eax, ds:0B33B00h
0x46ECC1: mov     esi, [eax+80h]
0x46ECC7: test    esi, esi
0x46ECC9: jz      short loc_46ED08
0x46ECCB: mov     ecx, [esi]
0x46ECCD: push    ecx; a1
0x46ECCE: call    TESForm_LookupByFormID
0x46ECD3: mov     edx, [esi+5]
0x46ECD6: movzx   ecx, byte ptr [esi+9]
0x46ECDA: add     esp, 4
0x46ECDD: push    edx
0x46ECDE: mov     edx, [eax]
0x46ECE0: push    ecx
0x46ECE1: mov     ecx, eax
0x46ECE3: mov     eax, [edx+0D4h]
0x46ECE9: call    eax
0x46ECEB: mov     ecx, [esi]
0x46ECED: push    eax
0x46ECEE: push    ecx
0x46ECEF: push    519h
0x46ECF4: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46ECF9: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x46ECFE: call    PrintError
0x46ED03: add     esp, 1Ch
0x46ED06: jmp     short loc_46ED24
0x46ED08: movzx   edx, byte ptr [eax+7Ch]
0x46ED0C: push    edx
0x46ED0D: push    519h
0x46ED12: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46ED17: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x46ED1C: call    PrintError
0x46ED21: add     esp, 10h
0x46ED24: mov     ecx, ds:0B33B00h
0x46ED2A: mov     ebx, [ecx+14h]
0x46ED2D: push    2; Size
0x46ED2F: lea     eax, [esp+20h+var_10]
0x46ED33: push    eax; Dst
0x46ED34: call    SaveLoad_LoadData
0x46ED39: mov     ecx, edi
0x46ED3B: call    sub_46E600
0x46ED40: push    2; Size
0x46ED42: lea     ecx, [esp+20h+arg_0]
0x46ED46: push    ecx; Dst
0x46ED47: mov     ecx, ds:0B33B00h
0x46ED4D: call    SaveLoad_LoadData
0x46ED52: xor     esi, esi
0x46ED54: cmp     [esp+1Ch+arg_0], si
0x46ED59: jbe     short loc_46EDA1
0x46ED5B: jmp     short loc_46ED60
0x46ED5D: align 10h
0x46ED60: mov     ecx, ds:0B33B00h
0x46ED66: push    4; Size
0x46ED68: lea     edx, [esp+20h+var_4]
0x46ED6C: push    edx; Dst
0x46ED6D: call    SaveLoad_LoadFormID
0x46ED72: mov     ecx, ds:0B33B00h
0x46ED78: push    4; Size
0x46ED7A: lea     eax, [esp+28h+var_10]
0x46ED7E: push    eax; Dst
0x46ED7F: call    SaveLoad_LoadData
0x46ED84: mov     ecx, [esp+24h+var_10]
0x46ED88: mov     edx, [esp+24h+Dst]
0x46ED8C: push    ecx
0x46ED8D: push    edx
0x46ED8E: mov     ecx, edi
0x46ED90: call    sub_46E900
0x46ED95: movzx   eax, [esp+24h+var_4]
0x46ED9A: add     esi, 1
0x46ED9D: cmp     esi, eax
0x46ED9F: jb      short loc_46ED60
0x46EDA1: mov     ecx, ds:0B33B00h
0x46EDA7: call    sub_45A170
0x46EDAC: test    al, al
0x46EDAE: jz      loc_46EEC5
0x46EDB4: mov     ecx, ds:0B33B00h
0x46EDBA: mov     edi, [ecx+80h]
0x46EDC0: test    edi, edi
0x46EDC2: mov     esi, [ecx+14h]
0x46EDC5: jz      loc_46EE6C
0x46EDCB: mov     ecx, [edi]
0x46EDCD: push    ecx; a1
0x46EDCE: call    TESForm_LookupByFormID
0x46EDD3: movzx   edx, [esp+28h+var_18]
0x46EDD8: mov     ecx, eax
0x46EDDA: lea     eax, [edx+ebx]
0x46EDDD: add     esp, 4
0x46EDE0: cmp     esi, eax
0x46EDE2: jbe     short loc_46EE25
0x46EDE4: mov     eax, [edi+5]
0x46EDE7: movzx   edx, byte ptr [edi+9]
0x46EDEB: push    eax
0x46EDEC: mov     eax, [ecx]
0x46EDEE: push    edx
0x46EDEF: mov     edx, [eax+0D4h]
0x46EDF5: call    edx
0x46EDF7: movzx   ecx, [esp+2Ch+var_18]
0x46EDFC: push    eax
0x46EDFD: mov     eax, [edi]
0x46EDFF: push    eax
0x46EE00: push    52Bh
0x46EE05: sub     esi, ecx
0x46EE07: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EE0C: sub     esi, ebx
0x46EE0E: push    esi; ArgList
0x46EE0F: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x46EE14: call    PrintError
0x46EE19: add     esp, 20h
0x46EE1C: pop     esi
0x46EE1D: pop     ebx
0x46EE1E: pop     edi
0x46EE1F: add     esp, 10h
0x46EE22: retn    8
0x46EE25: jnb     loc_46EEC5
0x46EE2B: mov     edx, [edi+5]
0x46EE2E: movzx   eax, byte ptr [edi+9]
0x46EE32: push    edx
0x46EE33: mov     edx, [ecx]
0x46EE35: push    eax
0x46EE36: mov     eax, [edx+0D4h]
0x46EE3C: call    eax
0x46EE3E: mov     ecx, [edi]
0x46EE40: movzx   edx, [esp+2Ch+var_18]
0x46EE45: push    eax
0x46EE46: push    ecx
0x46EE47: push    52Bh
0x46EE4C: sub     edx, esi
0x46EE4E: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EE53: add     edx, ebx
0x46EE55: push    edx; ArgList
0x46EE56: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x46EE5B: call    PrintError
0x46EE60: add     esp, 20h
0x46EE63: pop     esi
0x46EE64: pop     ebx
0x46EE65: pop     edi
0x46EE66: add     esp, 10h
0x46EE69: retn    8
0x46EE6C: movzx   eax, [esp+24h+var_18]
0x46EE71: lea     edx, [eax+ebx]
0x46EE74: cmp     esi, edx
0x46EE76: jbe     short loc_46EEA2
0x46EE78: movzx   ecx, byte ptr [ecx+7Ch]
0x46EE7C: push    ecx
0x46EE7D: push    52Bh
0x46EE82: sub     esi, eax
0x46EE84: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EE89: sub     esi, ebx
0x46EE8B: push    esi; ArgList
0x46EE8C: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x46EE91: call    PrintError
0x46EE96: add     esp, 14h
0x46EE99: pop     esi
0x46EE9A: pop     ebx
0x46EE9B: pop     edi
0x46EE9C: add     esp, 10h
0x46EE9F: retn    8
0x46EEA2: jnb     short loc_46EEC5
0x46EEA4: movzx   edx, byte ptr [ecx+7Ch]
0x46EEA8: push    edx
0x46EEA9: push    52Bh
0x46EEAE: sub     eax, esi
0x46EEB0: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EEB5: add     eax, ebx
0x46EEB7: push    eax; ArgList
0x46EEB8: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x46EEBD: call    PrintError
0x46EEC2: add     esp, 14h
0x46EEC5: pop     esi
0x46EEC6: pop     ebx
0x46EEC7: pop     edi
0x46EEC8: add     esp, 10h
0x46EECB: retn    8
