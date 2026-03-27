0x4937E0: sub     esp, 18h
0x4937E3: push    ebx
0x4937E4: push    ebp
0x4937E5: push    esi
0x4937E6: push    edi
0x4937E7: mov     edi, ecx
0x4937E9: mov     ecx, ds:0B33B00h
0x4937EF: xor     ebp, ebp
0x4937F1: xor     ebx, ebx
0x4937F3: mov     [esp+28h+var_4], edi
0x4937F7: mov     [esp+28h+var_14], ebp
0x4937FB: mov     [esp+28h+var_10], ebx
0x4937FF: call    sub_45A170
0x493804: test    al, al
0x493806: jz      loc_4938AD
0x49380C: mov     ecx, ds:0B33B00h
0x493812: push    4; Size
0x493814: lea     eax, [esp+2Ch+Dst]
0x493818: push    eax; Dst
0x493819: call    SaveLoad_LoadData
0x49381E: cmp     [esp+28h+Dst], 4B4F4C42h
0x493826: jz      short loc_493890
0x493828: mov     eax, ds:0B33B00h
0x49382D: mov     esi, [eax+80h]
0x493833: cmp     esi, ebp
0x493835: jz      short loc_493874
0x493837: mov     ecx, [esi]
0x493839: push    ecx; a1
0x49383A: call    TESForm_LookupByFormID
0x49383F: mov     edx, [esi+5]
0x493842: movzx   ecx, byte ptr [esi+9]
0x493846: add     esp, 4
0x493849: push    edx
0x49384A: mov     edx, [eax]
0x49384C: push    ecx
0x49384D: mov     ecx, eax
0x49384F: mov     eax, [edx+0D4h]
0x493855: call    eax
0x493857: mov     ecx, [esi]
0x493859: push    eax
0x49385A: push    ecx
0x49385B: push    2154h
0x493860: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493865: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x49386A: call    PrintError
0x49386F: add     esp, 1Ch
0x493872: jmp     short loc_493890
0x493874: movzx   edx, byte ptr [eax+7Ch]
0x493878: push    edx
0x493879: push    2154h
0x49387E: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493883: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x493888: call    PrintError
0x49388D: add     esp, 10h
0x493890: mov     ecx, ds:0B33B00h
0x493896: mov     eax, [ecx+14h]
0x493899: push    2; Size
0x49389B: lea     edx, [esp+2Ch+var_14]
0x49389F: push    edx; Dst
0x4938A0: mov     [esp+30h+var_10], eax
0x4938A4: call    SaveLoad_LoadData
0x4938A9: mov     ebx, [esp+28h+var_10]
0x4938AD: mov     ecx, ds:0B33B00h
0x4938B3: push    2; Size
0x4938B5: lea     eax, [esp+2Ch+var_18]
0x4938B9: push    eax; Dst
0x4938BA: call    SaveLoad_LoadData
0x4938BF: cmp     [esp+28h+var_18], bp
0x4938C4: mov     [esp+28h+var_C], ebp
0x4938C8: jbe     loc_493997
0x4938CE: mov     edi, edi
0x4938D0: push    0Ch; Size
0x4938D2: call    FormHeapAlloc
0x4938D7: add     esp, 4
0x4938DA: cmp     eax, ebp
0x4938DC: jz      short loc_4938EA
0x4938DE: mov     [eax+8], ebp
0x4938E1: mov     [eax], ebp
0x4938E3: mov     [eax+4], ebp
0x4938E6: mov     ebx, eax
0x4938E8: jmp     short loc_4938EC
0x4938EA: xor     ebx, ebx
0x4938EC: mov     ecx, ebx
0x4938EE: call    ContainerEntryExtraData_LoadModified
0x4938F3: cmp     [ebx+8], ebp
0x4938F6: jz      short loc_49392F
0x4938F8: mov     esi, [edi]
0x4938FA: cmp     [esi], ebp
0x4938FC: jz      short loc_49392B
0x4938FE: push    8; Size
0x493900: call    FormHeapAlloc
0x493905: add     esp, 4
0x493908: cmp     eax, ebp
0x49390A: jz      short loc_493920
0x49390C: mov     ecx, [esi]
0x49390E: mov     [eax], ecx
0x493910: mov     [eax+4], ebp
0x493913: mov     edx, [esi+4]
0x493916: mov     [eax+4], edx
0x493919: mov     [esi+4], eax
0x49391C: mov     [esi], ebx
0x49391E: jmp     short loc_49397B
0x493920: mov     edx, [esi+4]
0x493923: xor     eax, eax
0x493925: mov     [eax+4], edx
0x493928: mov     [esi+4], eax
0x49392B: mov     [esi], ebx
0x49392D: jmp     short loc_49397B
0x49392F: mov     edi, [ebx]
0x493931: cmp     edi, ebp
0x493933: jz      short loc_493959
0x493935: mov     esi, [edi]
0x493937: cmp     esi, ebp
0x493939: jz      short loc_493959
0x49393B: mov     edi, [edi+4]
0x49393E: push    1
0x493940: mov     ecx, esi
0x493942: call    BaseExtraList_Clear
0x493947: cmp     esi, ebp
0x493949: jz      short loc_493955
0x49394B: mov     eax, [esi]
0x49394D: mov     edx, [eax]
0x49394F: push    1
0x493951: mov     ecx, esi
0x493953: call    edx
0x493955: cmp     edi, ebp
0x493957: jnz     short loc_493935
0x493959: mov     ecx, [ebx]
0x49395B: cmp     ecx, ebp
0x49395D: jz      short loc_493964
0x49395F: call    BSSimpleList_Clear
0x493964: mov     eax, [ebx]
0x493966: push    eax
0x493967: call    FormHeapFree
0x49396C: push    ebx
0x49396D: mov     [ebx], ebp
0x49396F: call    FormHeapFree
0x493974: mov     edi, [esp+30h+var_4]
0x493978: add     esp, 8
0x49397B: mov     eax, [esp+28h+var_C]
0x49397F: movzx   ecx, [esp+28h+var_18]
0x493984: add     eax, 1
0x493987: cmp     eax, ecx
0x493989: mov     [esp+28h+var_C], eax
0x49398D: jl      loc_4938D0
0x493993: mov     ebx, [esp+28h+var_10]
0x493997: mov     ecx, edi
0x493999: call    sub_491CE0
0x49399E: mov     ecx, ds:0B33B00h
0x4939A4: call    sub_45A170
0x4939A9: test    al, al
0x4939AB: jz      loc_493ABE
0x4939B1: mov     ecx, ds:0B33B00h
0x4939B7: mov     edi, [ecx+80h]
0x4939BD: cmp     edi, ebp
0x4939BF: mov     esi, [ecx+14h]
0x4939C2: jz      loc_493A66
0x4939C8: mov     edx, [edi]
0x4939CA: push    edx; a1
0x4939CB: call    TESForm_LookupByFormID
0x4939D0: mov     ecx, eax
0x4939D2: movzx   eax, word ptr [esp+2Ch+var_14]
0x4939D7: add     eax, ebx
0x4939D9: add     esp, 4
0x4939DC: cmp     esi, eax
0x4939DE: jbe     short loc_493A20
0x4939E0: mov     edx, [edi+5]
0x4939E3: movzx   eax, byte ptr [edi+9]
0x4939E7: push    edx
0x4939E8: mov     edx, [ecx]
0x4939EA: push    eax
0x4939EB: mov     eax, [edx+0D4h]
0x4939F1: call    eax
0x4939F3: mov     ecx, [edi]
0x4939F5: movzx   edx, word ptr [esp+30h+var_14]
0x4939FA: push    eax
0x4939FB: push    ecx
0x4939FC: push    2167h
0x493A01: sub     esi, edx
0x493A03: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493A08: sub     esi, ebx
0x493A0A: push    esi; ArgList
0x493A0B: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x493A10: call    PrintError
0x493A15: add     esp, 20h
0x493A18: pop     edi
0x493A19: pop     esi
0x493A1A: pop     ebp
0x493A1B: pop     ebx
0x493A1C: add     esp, 18h
0x493A1F: retn
0x493A20: jnb     loc_493ABE
0x493A26: mov     eax, [edi+5]
0x493A29: movzx   edx, byte ptr [edi+9]
0x493A2D: push    eax
0x493A2E: mov     eax, [ecx]
0x493A30: push    edx
0x493A31: mov     edx, [eax+0D4h]
0x493A37: call    edx
0x493A39: movzx   ecx, word ptr [esp+30h+var_14]
0x493A3E: push    eax
0x493A3F: mov     eax, [edi]
0x493A41: push    eax
0x493A42: push    2167h
0x493A47: sub     ecx, esi
0x493A49: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493A4E: add     ecx, ebx
0x493A50: push    ecx; ArgList
0x493A51: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x493A56: call    PrintError
0x493A5B: add     esp, 20h
0x493A5E: pop     edi
0x493A5F: pop     esi
0x493A60: pop     ebp
0x493A61: pop     ebx
0x493A62: add     esp, 18h
0x493A65: retn
0x493A66: movzx   eax, word ptr [esp+28h+var_14]
0x493A6B: lea     edx, [eax+ebx]
0x493A6E: cmp     esi, edx
0x493A70: jbe     short loc_493A9B
0x493A72: movzx   edx, byte ptr [ecx+7Ch]
0x493A76: push    edx
0x493A77: push    2167h
0x493A7C: sub     esi, eax
0x493A7E: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493A83: sub     esi, ebx
0x493A85: push    esi; ArgList
0x493A86: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x493A8B: call    PrintError
0x493A90: add     esp, 14h
0x493A93: pop     edi
0x493A94: pop     esi
0x493A95: pop     ebp
0x493A96: pop     ebx
0x493A97: add     esp, 18h
0x493A9A: retn
0x493A9B: jnb     short loc_493ABE
0x493A9D: movzx   ecx, byte ptr [ecx+7Ch]
0x493AA1: push    ecx
0x493AA2: push    2167h
0x493AA7: sub     eax, esi
0x493AA9: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x493AAE: add     eax, ebx
0x493AB0: push    eax; ArgList
0x493AB1: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x493AB6: call    PrintError
0x493ABB: add     esp, 14h
0x493ABE: pop     edi
0x493ABF: pop     esi
0x493AC0: pop     ebp
0x493AC1: pop     ebx
0x493AC2: add     esp, 18h
0x493AC5: retn
