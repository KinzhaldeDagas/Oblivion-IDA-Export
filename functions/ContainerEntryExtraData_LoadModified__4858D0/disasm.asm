0x4858D0: push    0FFFFFFFFh
0x4858D2: push    offset SEH_6B9010
0x4858D7: mov     eax, large fs:0
0x4858DD: push    eax
0x4858DE: sub     esp, 14h
0x4858E1: push    ebx
0x4858E2: push    ebp
0x4858E3: push    esi
0x4858E4: push    edi
0x4858E5: mov     eax, ds:0B30AACh
0x4858EA: xor     eax, esp
0x4858EC: push    eax
0x4858ED: lea     eax, [esp+34h+var_C]
0x4858F1: mov     large fs:0, eax
0x4858F7: mov     ebx, ecx
0x4858F9: mov     ecx, ds:0B33B00h
0x4858FF: xor     edi, edi
0x485901: mov     [esp+34h+var_20], edi
0x485905: xor     ebp, ebp
0x485907: call    sub_45A170
0x48590C: test    al, al
0x48590E: jz      loc_4859AD
0x485914: mov     ecx, ds:0B33B00h
0x48591A: push    4; Size
0x48591C: lea     eax, [esp+38h+Dst]
0x485920: push    eax; Dst
0x485921: call    SaveLoad_LoadData
0x485926: cmp     [esp+34h+Dst], 4B4F4C42h
0x48592E: jz      short loc_485998
0x485930: mov     eax, ds:0B33B00h
0x485935: mov     esi, [eax+80h]
0x48593B: cmp     esi, edi
0x48593D: jz      short loc_48597C
0x48593F: mov     ecx, [esi]
0x485941: push    ecx; a1
0x485942: call    TESForm_LookupByFormID
0x485947: mov     edx, [esi+5]
0x48594A: movzx   ecx, byte ptr [esi+9]
0x48594E: add     esp, 4
0x485951: push    edx
0x485952: mov     edx, [eax]
0x485954: push    ecx
0x485955: mov     ecx, eax
0x485957: mov     eax, [edx+0D4h]
0x48595D: call    eax
0x48595F: mov     ecx, [esi]
0x485961: push    eax
0x485962: push    ecx
0x485963: push    5B1h
0x485968: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x48596D: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x485972: call    PrintError
0x485977: add     esp, 1Ch
0x48597A: jmp     short loc_485998
0x48597C: movzx   edx, byte ptr [eax+7Ch]
0x485980: push    edx
0x485981: push    5B1h
0x485986: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x48598B: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x485990: call    PrintError
0x485995: add     esp, 10h
0x485998: mov     ecx, ds:0B33B00h
0x48599E: mov     ebp, [ecx+14h]
0x4859A1: push    2; Size
0x4859A3: lea     eax, [esp+38h+var_20]
0x4859A7: push    eax; Dst
0x4859A8: call    SaveLoad_LoadData
0x4859AD: push    4; Size
0x4859AF: lea     ecx, [esp+38h+var_14]
0x4859B3: push    ecx; Dst
0x4859B4: mov     ecx, ds:0B33B00h
0x4859BA: call    SaveLoad_LoadFormID
0x4859BF: mov     ecx, ds:0B33B00h
0x4859C5: push    4; Size
0x4859C7: lea     edx, [ebx+4]
0x4859CA: push    edx; Dst
0x4859CB: call    SaveLoad_LoadData
0x4859D0: mov     eax, [esp+3Ch+a1]
0x4859D4: push    edi; int
0x4859D5: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x4859DA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4859DF: push    edi; int
0x4859E0: push    eax; a1
0x4859E1: call    TESForm_LookupByFormID
0x4859E6: add     esp, 4
0x4859E9: push    eax; void *
0x4859EA: call    OblivionDynamicCast
0x4859EF: add     esp, 14h
0x4859F2: push    4; Size
0x4859F4: lea     ecx, [esp+40h+var_24]
0x4859F8: mov     [ebx+8], eax
0x4859FB: mov     [ebx], edi
0x4859FD: push    ecx; Dst
0x4859FE: mov     ecx, ds:0B33B00h
0x485A04: call    SaveLoad_LoadData
0x485A09: cmp     dword ptr [esp+3Ch+var_24], edi
0x485A0D: jz      short loc_485A77
0x485A0F: push    8; Size
0x485A11: call    FormHeapAlloc
0x485A16: add     esp, 4
0x485A19: cmp     eax, edi
0x485A1B: jz      short loc_485A24
0x485A1D: mov     [eax], edi
0x485A1F: mov     [eax+4], edi
0x485A22: jmp     short loc_485A26
0x485A24: xor     eax, eax
0x485A26: cmp     dword ptr [esp+3Ch+var_24], edi
0x485A2A: mov     [ebx], eax
0x485A2C: jle     short loc_485A77
0x485A2E: mov     edi, edi
0x485A30: push    14h; Size
0x485A32: call    FormHeapAlloc
0x485A37: add     esp, 4
0x485A3A: mov     [esp+3Ch+Dst], eax
0x485A3E: xor     esi, esi
0x485A40: cmp     eax, esi
0x485A42: mov     [esp+3Ch+var_C], esi
0x485A46: jz      short loc_485A51
0x485A48: mov     ecx, eax
0x485A4A: call    ExtraDataList_constr
0x485A4F: mov     esi, eax
0x485A51: push    0
0x485A53: push    0
0x485A55: push    20h ; ' '
0x485A57: mov     ecx, esi
0x485A59: mov     [esp+48h+var_C], 0FFFFFFFFh
0x485A61: call    ExtraDataList_LoadModified
0x485A66: mov     ecx, [ebx]
0x485A68: push    esi
0x485A69: call    BSSimpleList_PushBack
0x485A6E: add     edi, 1
0x485A71: cmp     edi, dword ptr [esp+3Ch+var_24]
0x485A75: jl      short loc_485A30
0x485A77: mov     ecx, ds:0B33B00h
0x485A7D: call    sub_45A170
0x485A82: test    al, al
0x485A84: jz      loc_485BA1
0x485A8A: mov     ecx, ds:0B33B00h
0x485A90: mov     edi, [ecx+80h]
0x485A96: test    edi, edi
0x485A98: mov     esi, [ecx+14h]
0x485A9B: jz      loc_485B57
0x485AA1: mov     edx, [edi]
0x485AA3: push    edx; a1
0x485AA4: call    TESForm_LookupByFormID
0x485AA9: mov     ecx, eax
0x485AAB: movzx   eax, word ptr [esp+40h+anonymous_0]
0x485AB0: add     eax, ebp
0x485AB2: add     esp, 4
0x485AB5: cmp     esi, eax
0x485AB7: jbe     short loc_485B05
0x485AB9: mov     edx, [edi+5]
0x485ABC: movzx   eax, byte ptr [edi+9]
0x485AC0: push    edx
0x485AC1: mov     edx, [ecx]
0x485AC3: push    eax
0x485AC4: mov     eax, [edx+0D4h]
0x485ACA: call    eax
0x485ACC: mov     ecx, [edi]
0x485ACE: movzx   edx, word ptr [esp+44h+anonymous_0]
0x485AD3: push    eax
0x485AD4: push    ecx
0x485AD5: push    5D5h
0x485ADA: sub     esi, edx
0x485ADC: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485AE1: sub     esi, ebp
0x485AE3: push    esi; ArgList
0x485AE4: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x485AE9: call    PrintError
0x485AEE: add     esp, 20h
0x485AF1: mov     ecx, [esp+3Ch+var_14]
0x485AF5: mov     large fs:0, ecx
0x485AFC: pop     ecx
0x485AFD: pop     edi
0x485AFE: pop     esi
0x485AFF: pop     ebp
0x485B00: pop     ebx
0x485B01: add     esp, 20h
0x485B04: retn
0x485B05: jnb     loc_485BA1
0x485B0B: mov     eax, [edi+5]
0x485B0E: movzx   edx, byte ptr [edi+9]
0x485B12: push    eax
0x485B13: mov     eax, [ecx]
0x485B15: push    edx
0x485B16: mov     edx, [eax+0D4h]
0x485B1C: call    edx
0x485B1E: movzx   ecx, word ptr [esp+44h+anonymous_0]
0x485B23: push    eax
0x485B24: mov     eax, [edi]
0x485B26: push    eax
0x485B27: push    5D5h
0x485B2C: sub     ecx, esi
0x485B2E: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485B33: add     ecx, ebp
0x485B35: push    ecx; ArgList
0x485B36: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x485B3B: call    PrintError
0x485B40: add     esp, 20h
0x485B43: mov     ecx, [esp+3Ch+var_14]
0x485B47: mov     large fs:0, ecx
0x485B4E: pop     ecx
0x485B4F: pop     edi
0x485B50: pop     esi
0x485B51: pop     ebp
0x485B52: pop     ebx
0x485B53: add     esp, 20h
0x485B56: retn
0x485B57: movzx   eax, word ptr [esp+3Ch+anonymous_0]
0x485B5C: lea     edx, [eax+ebp]
0x485B5F: cmp     esi, edx
0x485B61: jbe     short loc_485B7E
0x485B63: movzx   edx, byte ptr [ecx+7Ch]
0x485B67: push    edx
0x485B68: push    5D5h
0x485B6D: sub     esi, eax
0x485B6F: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485B74: sub     esi, ebp
0x485B76: push    esi
0x485B77: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x485B7C: jmp     short loc_485B99
0x485B7E: jnb     short loc_485BA1
0x485B80: movzx   ecx, byte ptr [ecx+7Ch]
0x485B84: push    ecx
0x485B85: push    5D5h
0x485B8A: sub     eax, esi
0x485B8C: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485B91: add     eax, ebp
0x485B93: push    eax; ArgList
0x485B94: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x485B99: call    PrintError
0x485B9E: add     esp, 14h
0x485BA1: mov     ecx, [esp+3Ch+var_14]
0x485BA5: mov     large fs:0, ecx
0x485BAC: pop     ecx
0x485BAD: pop     edi
0x485BAE: pop     esi
0x485BAF: pop     ebp
0x485BB0: pop     ebx
0x485BB1: add     esp, 20h
0x485BB4: retn
