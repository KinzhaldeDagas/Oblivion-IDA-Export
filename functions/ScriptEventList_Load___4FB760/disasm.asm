0x4FB760: push    ebp
0x4FB761: mov     ebp, esp
0x4FB763: and     esp, 0FFFFFFC0h
0x4FB766: sub     esp, 30h
0x4FB769: push    ebx
0x4FB76A: push    ebp
0x4FB76B: push    esi
0x4FB76C: push    edi
0x4FB76D: mov     edi, ecx
0x4FB76F: mov     ecx, ds:0B33B00h
0x4FB775: mov     [esp+40h+var_14], 0
0x4FB77D: xor     ebp, ebp
0x4FB77F: call    sub_45A170
0x4FB784: test    al, al
0x4FB786: jz      loc_4FB825
0x4FB78C: mov     ecx, ds:0B33B00h
0x4FB792: push    4; Size
0x4FB794: lea     eax, [esp+44h+Dst]
0x4FB798: push    eax; Dst
0x4FB799: call    SaveLoad_LoadData
0x4FB79E: cmp     [esp+40h+Dst], 4B4F4C42h
0x4FB7A6: jz      short loc_4FB810
0x4FB7A8: mov     eax, ds:0B33B00h
0x4FB7AD: mov     esi, [eax+80h]
0x4FB7B3: test    esi, esi
0x4FB7B5: jz      short loc_4FB7F4
0x4FB7B7: mov     ecx, [esi]
0x4FB7B9: push    ecx; a1
0x4FB7BA: call    TESForm_LookupByFormID
0x4FB7BF: mov     edx, [esi+5]
0x4FB7C2: movzx   ecx, byte ptr [esi+9]
0x4FB7C6: add     esp, 4
0x4FB7C9: push    edx
0x4FB7CA: mov     edx, [eax]
0x4FB7CC: push    ecx
0x4FB7CD: mov     ecx, eax
0x4FB7CF: mov     eax, [edx+0D4h]
0x4FB7D5: call    eax
0x4FB7D7: mov     ecx, [esi]
0x4FB7D9: push    eax
0x4FB7DA: push    ecx
0x4FB7DB: push    29Ch
0x4FB7E0: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FB7E5: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x4FB7EA: call    PrintError
0x4FB7EF: add     esp, 1Ch
0x4FB7F2: jmp     short loc_4FB810
0x4FB7F4: movzx   edx, byte ptr [eax+7Ch]
0x4FB7F8: push    edx
0x4FB7F9: push    29Ch
0x4FB7FE: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FB803: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x4FB808: call    PrintError
0x4FB80D: add     esp, 10h
0x4FB810: mov     ecx, ds:0B33B00h
0x4FB816: mov     ebp, [ecx+14h]
0x4FB819: push    2; Size
0x4FB81B: lea     eax, [esp+44h+var_14]
0x4FB81F: push    eax; Dst
0x4FB820: call    SaveLoad_LoadData
0x4FB825: push    2; Size
0x4FB827: lea     ecx, [esp+44h+var_1C]
0x4FB82B: push    ecx; Dst
0x4FB82C: mov     ecx, ds:0B33B00h
0x4FB832: call    SaveLoad_LoadData
0x4FB837: xor     esi, esi
0x4FB839: cmp     [esp+40h+var_1C], si
0x4FB83E: jbe     loc_4FB8F4
0x4FB844: mov     bl, 75h ; 'u'
0x4FB846: fldz
0x4FB848: mov     ecx, ds:0B33B00h
0x4FB84E: fstp    [esp+40h+var_8]
0x4FB852: mov     dword ptr [esp+40h+ArgList], 0
0x4FB85A: cmp     [ecx+7Ch], bl
0x4FB85D: jb      short loc_4FB8B0
0x4FB85F: push    4; Size
0x4FB861: lea     edx, [esp+44h+ArgList]
0x4FB865: push    edx; Dst
0x4FB866: call    SaveLoad_LoadData
0x4FB86B: test    dword ptr [esp+40h+ArgList], 0F0000000h
0x4FB873: mov     ecx, ds:0B33B00h
0x4FB879: jz      short loc_4FB899
0x4FB87B: and     dword ptr [esp+40h+ArgList], 0FFFFFFFh
0x4FB883: push    4; Size
0x4FB885: lea     eax, [esp+44h+var_C]
0x4FB889: push    eax; Dst
0x4FB88A: call    SaveLoad_LoadFormID
0x4FB88F: mov     ecx, [esp+48h+var_14]
0x4FB893: mov     [esp+48h+Dst], ecx
0x4FB897: jmp     short loc_4FB8A5
0x4FB899: push    8; Size
0x4FB89B: lea     edx, [esp+44h+var_8]
0x4FB89F: push    edx; Dst
0x4FB8A0: call    SaveLoad_LoadData
0x4FB8A5: mov     ecx, ds:0B33B00h
0x4FB8AB: cmp     [ecx+7Ch], bl
0x4FB8AE: jnb     short loc_4FB8CE
0x4FB8B0: push    4; Size
0x4FB8B2: lea     eax, [esp+4Ch+var_20]
0x4FB8B6: push    eax; Dst
0x4FB8B7: call    SaveLoad_LoadData
0x4FB8BC: push    8; Size
0x4FB8BE: lea     ecx, [esp+4Ch+Dst]
0x4FB8C2: push    ecx; Dst
0x4FB8C3: mov     ecx, ds:0B33B00h
0x4FB8C9: call    SaveLoad_LoadData
0x4FB8CE: fld     qword ptr [esp+48h+Dst]
0x4FB8D2: mov     edx, dword ptr [esp+48h+var_20]
0x4FB8D6: sub     esp, 8
0x4FB8D9: fstp    [esp+50h+var_50]; double
0x4FB8DC: push    edx; ArgList
0x4FB8DD: mov     ecx, edi
0x4FB8DF: call    sub_4FB630
0x4FB8E4: movzx   eax, [esp+48h+var_24]
0x4FB8E9: add     esi, 1
0x4FB8EC: cmp     esi, eax
0x4FB8EE: jl      loc_4FB846
0x4FB8F4: push    1; Size
0x4FB8F6: lea     ecx, [esp+4Ch+var_25]
0x4FB8FA: push    ecx; Dst
0x4FB8FB: mov     ecx, ds:0B33B00h
0x4FB901: call    SaveLoad_LoadData
0x4FB906: cmp     [esp+48h+var_25], 0
0x4FB90B: jz      short loc_4FB928
0x4FB90D: push    8; Size
0x4FB90F: call    FormHeapAlloc
0x4FB914: add     esp, 4
0x4FB917: push    8; Size
0x4FB919: mov     [edi+10h], eax
0x4FB91C: mov     ecx, ds:0B33B00h
0x4FB922: push    eax; Dst
0x4FB923: call    SaveLoad_LoadData
0x4FB928: mov     ecx, ds:0B33B00h
0x4FB92E: call    sub_45A170
0x4FB933: test    al, al
0x4FB935: jz      loc_4FBA48
0x4FB93B: mov     ecx, ds:0B33B00h
0x4FB941: mov     edi, [ecx+80h]
0x4FB947: test    edi, edi
0x4FB949: mov     esi, [ecx+14h]
0x4FB94C: jz      loc_4FB9F0
0x4FB952: mov     edx, [edi]
0x4FB954: push    edx; a1
0x4FB955: call    TESForm_LookupByFormID
0x4FB95A: mov     ecx, eax
0x4FB95C: movzx   eax, [esp+4Ch+var_1C]
0x4FB961: add     eax, ebp
0x4FB963: add     esp, 4
0x4FB966: cmp     esi, eax
0x4FB968: jbe     short loc_4FB9AA
0x4FB96A: mov     edx, [edi+5]
0x4FB96D: movzx   eax, byte ptr [edi+9]
0x4FB971: push    edx
0x4FB972: mov     edx, [ecx]
0x4FB974: push    eax
0x4FB975: mov     eax, [edx+0D4h]
0x4FB97B: call    eax
0x4FB97D: mov     ecx, [edi]
0x4FB97F: movzx   edx, [esp+50h+var_1C]
0x4FB984: push    eax
0x4FB985: push    ecx
0x4FB986: push    2CBh
0x4FB98B: sub     esi, edx
0x4FB98D: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FB992: sub     esi, ebp
0x4FB994: push    esi; ArgList
0x4FB995: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x4FB99A: call    PrintError
0x4FB99F: add     esp, 20h
0x4FB9A2: pop     edi
0x4FB9A3: pop     esi
0x4FB9A4: pop     ebp
0x4FB9A5: pop     ebx
0x4FB9A6: mov     esp, ebp
0x4FB9A8: pop     ebp
0x4FB9A9: retn
0x4FB9AA: jnb     loc_4FBA48
0x4FB9B0: mov     eax, [edi+5]
0x4FB9B3: movzx   edx, byte ptr [edi+9]
0x4FB9B7: push    eax
0x4FB9B8: mov     eax, [ecx]
0x4FB9BA: push    edx
0x4FB9BB: mov     edx, [eax+0D4h]
0x4FB9C1: call    edx
0x4FB9C3: movzx   ecx, [esp+50h+var_1C]
0x4FB9C8: push    eax
0x4FB9C9: mov     eax, [edi]
0x4FB9CB: push    eax
0x4FB9CC: push    2CBh
0x4FB9D1: sub     ecx, esi
0x4FB9D3: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FB9D8: add     ecx, ebp
0x4FB9DA: push    ecx; ArgList
0x4FB9DB: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x4FB9E0: call    PrintError
0x4FB9E5: add     esp, 20h
0x4FB9E8: pop     edi
0x4FB9E9: pop     esi
0x4FB9EA: pop     ebp
0x4FB9EB: pop     ebx
0x4FB9EC: mov     esp, ebp
0x4FB9EE: pop     ebp
0x4FB9EF: retn
0x4FB9F0: movzx   eax, [esp+48h+var_1C]
0x4FB9F5: lea     edx, [eax+ebp]
0x4FB9F8: cmp     esi, edx
0x4FB9FA: jbe     short loc_4FBA25
0x4FB9FC: movzx   edx, byte ptr [ecx+7Ch]
0x4FBA00: push    edx
0x4FBA01: push    2CBh
0x4FBA06: sub     esi, eax
0x4FBA08: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FBA0D: sub     esi, ebp
0x4FBA0F: push    esi; ArgList
0x4FBA10: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4FBA15: call    PrintError
0x4FBA1A: add     esp, 14h
0x4FBA1D: pop     edi
0x4FBA1E: pop     esi
0x4FBA1F: pop     ebp
0x4FBA20: pop     ebx
0x4FBA21: mov     esp, ebp
0x4FBA23: pop     ebp
0x4FBA24: retn
0x4FBA25: jnb     short loc_4FBA48
0x4FBA27: movzx   ecx, byte ptr [ecx+7Ch]
0x4FBA2B: push    ecx
0x4FBA2C: push    2CBh
0x4FBA31: sub     eax, esi
0x4FBA33: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FBA38: add     eax, ebp
0x4FBA3A: push    eax; ArgList
0x4FBA3B: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4FBA40: call    PrintError
0x4FBA45: add     esp, 14h
0x4FBA48: pop     edi
0x4FBA49: pop     esi
0x4FBA4A: pop     ebp
0x4FBA4B: pop     ebx
0x4FBA4C: mov     esp, ebp
0x4FBA4E: pop     ebp
0x4FBA4F: retn
