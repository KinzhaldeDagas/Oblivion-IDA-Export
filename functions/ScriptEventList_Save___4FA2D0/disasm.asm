0x4FA2D0: sub     esp, 20h
0x4FA2D3: push    ebx
0x4FA2D4: push    ebp
0x4FA2D5: xor     ebx, ebx
0x4FA2D7: cmp     ds:0B05BACh, bl
0x4FA2DD: mov     ebp, ecx
0x4FA2DF: mov     ecx, ds:0B33B00h
0x4FA2E5: mov     [esp+28h+var_C], ebx
0x4FA2E9: mov     eax, [ecx+14h]
0x4FA2EC: push    esi
0x4FA2ED: push    edi
0x4FA2EE: mov     [esp+30h+var_14], ebx
0x4FA2F2: mov     [esp+30h+var_18], eax
0x4FA2F6: jz      short loc_4FA2FC
0x4FA2F8: mov     [esp+30h+var_18], eax
0x4FA2FC: call    sub_45A170
0x4FA301: test    al, al
0x4FA303: jz      short loc_4FA338
0x4FA305: mov     ecx, ds:0B33B00h
0x4FA30B: push    4; Size
0x4FA30D: lea     eax, [esp+34h+Src]
0x4FA311: push    eax; Src
0x4FA312: mov     [esp+38h+Src], 4B4F4C42h
0x4FA31A: call    SaveLoad_SaveData
0x4FA31F: mov     ecx, ds:0B33B00h
0x4FA325: mov     edx, [ecx+14h]
0x4FA328: push    2; Size
0x4FA32A: lea     eax, [esp+34h+var_C]
0x4FA32E: push    eax; Src
0x4FA32F: mov     [esp+38h+var_14], edx
0x4FA333: call    SaveLoad_SaveData
0x4FA338: mov     ecx, ds:0B33B00h
0x4FA33E: mov     [esp+30h+var_1C], ebx
0x4FA342: mov     edx, [ecx+14h]
0x4FA345: push    2; Size
0x4FA347: lea     eax, [esp+34h+var_1C]
0x4FA34B: push    eax; Src
0x4FA34C: mov     [esp+38h+var_4], edx
0x4FA350: call    SaveLoad_SaveData
0x4FA355: mov     edi, [ebp+0Ch]
0x4FA358: cmp     edi, ebx
0x4FA35A: jz      short loc_4FA3C2
0x4FA35C: lea     esp, [esp+0]
0x4FA360: mov     edx, [edi]
0x4FA362: cmp     edx, ebx
0x4FA364: jz      short loc_4FA3BB
0x4FA366: fldz
0x4FA368: lea     esi, [edx+8]
0x4FA36B: fcomp   qword ptr [esi]
0x4FA36D: fnstsw  ax
0x4FA36F: test    ah, 44h
0x4FA372: jnp     short loc_4FA3BB
0x4FA374: mov     eax, [ebp+0]
0x4FA377: cmp     eax, ebx
0x4FA379: jz      short loc_4FA39A
0x4FA37B: add     eax, 40h ; '@'
0x4FA37E: cmp     eax, ebx
0x4FA380: jz      short loc_4FA39A
0x4FA382: mov     ecx, [eax]
0x4FA384: cmp     ecx, ebx
0x4FA386: jz      short loc_4FA39A
0x4FA388: mov     ecx, [ecx+0Ch]
0x4FA38B: cmp     ecx, [edx]
0x4FA38D: jz      loc_4FA460
0x4FA393: mov     eax, [eax+4]
0x4FA396: cmp     eax, ebx
0x4FA398: jnz     short loc_4FA382
0x4FA39A: mov     ecx, ds:0B33B00h
0x4FA3A0: push    4; Size
0x4FA3A2: push    edx; Src
0x4FA3A3: call    SaveLoad_SaveData
0x4FA3A8: mov     ecx, ds:0B33B00h
0x4FA3AE: push    8; Size
0x4FA3B0: push    esi; Src
0x4FA3B1: call    SaveLoad_SaveData
0x4FA3B6: add     [esp+30h+var_1C], 1
0x4FA3BB: mov     edi, [edi+4]
0x4FA3BE: cmp     edi, ebx
0x4FA3C0: jnz     short loc_4FA360
0x4FA3C2: mov     cx, word ptr [esp+30h+var_1C]
0x4FA3C7: mov     edx, [esp+30h+var_4]
0x4FA3CB: mov     [edx], cx
0x4FA3CE: cmp     [ebp+10h], ebx
0x4FA3D1: mov     [esp+30h+var_1D], bl
0x4FA3D5: jz      short loc_4FA3DC
0x4FA3D7: mov     [esp+30h+var_1D], 1
0x4FA3DC: mov     ecx, ds:0B33B00h
0x4FA3E2: push    1; Size
0x4FA3E4: lea     eax, [esp+34h+var_1D]
0x4FA3E8: push    eax; Src
0x4FA3E9: call    SaveLoad_SaveData
0x4FA3EE: cmp     [esp+30h+var_1D], bl
0x4FA3F2: jz      short loc_4FA405
0x4FA3F4: mov     ecx, [ebp+10h]
0x4FA3F7: push    8; Size
0x4FA3F9: push    ecx; Src
0x4FA3FA: mov     ecx, ds:0B33B00h
0x4FA400: call    SaveLoad_SaveData
0x4FA405: cmp     ds:0B05BACh, bl
0x4FA40B: jz      loc_4FA4B7
0x4FA411: mov     eax, ds:0B33B00h
0x4FA416: mov     edi, [eax+84h]
0x4FA41C: cmp     edi, ebx
0x4FA41E: mov     esi, [eax+14h]
0x4FA421: jz      short loc_4FA49B
0x4FA423: mov     edx, [edi]
0x4FA425: push    edx; a1
0x4FA426: call    TESForm_LookupByFormID
0x4FA42B: mov     ecx, [edi+5]
0x4FA42E: mov     edx, [eax]
0x4FA430: add     esp, 4
0x4FA433: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FA438: push    296h
0x4FA43D: push    ecx
0x4FA43E: mov     ecx, eax
0x4FA440: mov     eax, [edx+0D4h]
0x4FA446: call    eax
0x4FA448: mov     ecx, [edi]
0x4FA44A: sub     esi, [esp+3Ch+var_18]
0x4FA44E: push    eax
0x4FA44F: push    ecx
0x4FA450: push    esi; ArgList
0x4FA451: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x4FA456: call    sub_40FEC0
0x4FA45B: add     esp, 1Ch
0x4FA45E: jmp     short loc_4FA4B7
0x4FA460: mov     ecx, [edx]
0x4FA462: mov     eax, [esi]
0x4FA464: or      ecx, 0F0000000h
0x4FA46A: push    4; Size
0x4FA46C: lea     edx, [esp+34h+Src]
0x4FA470: mov     [esp+34h+Src], ecx
0x4FA474: mov     ecx, ds:0B33B00h
0x4FA47A: push    edx; Src
0x4FA47B: mov     [esp+38h+var_8], eax
0x4FA47F: call    SaveLoad_SaveData
0x4FA484: mov     ecx, ds:0B33B00h
0x4FA48A: push    4
0x4FA48C: lea     eax, [esp+34h+var_8]
0x4FA490: push    eax
0x4FA491: call    SaveLoad_SaveFormID
0x4FA496: jmp     loc_4FA3B6
0x4FA49B: sub     esi, [esp+30h+var_18]
0x4FA49F: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FA4A4: push    296h
0x4FA4A9: push    esi; ArgList
0x4FA4AA: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x4FA4AF: call    sub_40FEC0
0x4FA4B4: add     esp, 10h
0x4FA4B7: mov     ecx, ds:0B33B00h
0x4FA4BD: call    sub_45A170
0x4FA4C2: test    al, al
0x4FA4C4: jz      short loc_4FA4F9
0x4FA4C6: mov     edx, ds:0B33B00h
0x4FA4CC: mov     edi, [esp+30h+var_14]
0x4FA4D0: mov     esi, [edx+14h]
0x4FA4D3: lea     eax, [edi+0FFFFh]
0x4FA4D9: cmp     esi, eax
0x4FA4DB: jbe     short loc_4FA4F4
0x4FA4DD: push    296h
0x4FA4E2: push    offset a__TesSharedT_1; "..\\TES Shared\\TESScript.cpp"
0x4FA4E7: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4FA4EC: call    PrintError
0x4FA4F1: add     esp, 0Ch
0x4FA4F4: sub     esi, edi
0x4FA4F6: mov     [edi], si
0x4FA4F9: pop     edi
0x4FA4FA: pop     esi
0x4FA4FB: pop     ebp
0x4FA4FC: pop     ebx
0x4FA4FD: add     esp, 20h
0x4FA500: retn
