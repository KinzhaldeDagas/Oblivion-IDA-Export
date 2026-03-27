0x6471A0: sub     esp, 0Ch
0x6471A3: mov     eax, [esp+0Ch+Src]
0x6471A7: push    ebx
0x6471A8: push    ebp
0x6471A9: push    esi
0x6471AA: push    edi
0x6471AB: mov     edi, [esp+1Ch+arg_0]
0x6471AF: push    eax
0x6471B0: push    edi
0x6471B1: mov     esi, ecx
0x6471B3: call    sub_60D1F0
0x6471B8: mov     ecx, ds:0B33B00h
0x6471BE: xor     ebx, ebx
0x6471C0: mov     [esp+1Ch+var_4], ebx
0x6471C4: mov     ebp, [ecx+14h]
0x6471C7: mov     [esp+1Ch+var_8], ebx
0x6471CB: call    sub_45A170
0x6471D0: test    al, al
0x6471D2: jz      short loc_647207
0x6471D4: push    4; Size
0x6471D6: lea     ecx, [esp+20h+Src]
0x6471DA: push    ecx; Src
0x6471DB: mov     ecx, ds:0B33B00h
0x6471E1: mov     [esp+24h+Src], 4B4F4C42h
0x6471E9: call    SaveLoad_SaveData
0x6471EE: mov     ecx, ds:0B33B00h
0x6471F4: mov     edx, [ecx+14h]
0x6471F7: push    2; Size
0x6471F9: lea     eax, [esp+20h+var_4]
0x6471FD: push    eax; Src
0x6471FE: mov     [esp+24h+var_8], edx
0x647202: call    SaveLoad_SaveData
0x647207: push    4; Size
0x647209: lea     ecx, [esi+14h]
0x64720C: push    ecx; Src
0x64720D: mov     ecx, ds:0B33B00h
0x647213: call    SaveLoad_SaveData
0x647218: mov     ecx, ds:0B33B00h
0x64721E: push    4; Size
0x647220: lea     edx, [esi+18h]
0x647223: push    edx; Src
0x647224: call    SaveLoad_SaveData
0x647229: mov     ecx, ds:0B33B00h
0x64722F: push    1; Size
0x647231: lea     eax, [esi+1Ch]
0x647234: push    eax; Src
0x647235: call    SaveLoad_SaveData
0x64723A: push    1; Size
0x64723C: lea     ecx, [esi+1Dh]
0x64723F: push    ecx; Src
0x647240: mov     ecx, ds:0B33B00h
0x647246: call    SaveLoad_SaveData
0x64724B: mov     ecx, ds:0B33B00h
0x647251: push    1; Size
0x647253: lea     edx, [esi+84h]
0x647259: push    edx; Src
0x64725A: call    SaveLoad_SaveData
0x64725F: mov     ecx, ds:0B33B00h
0x647265: cmp     byte ptr [ecx+7Ch], 34h ; '4'
0x647269: jb      short loc_64727C
0x64726B: push    1; Size
0x64726D: lea     eax, [esi+1Fh]
0x647270: push    eax; Src
0x647271: call    SaveLoad_SaveData
0x647276: mov     ecx, ds:0B33B00h
0x64727C: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x647280: jb      short loc_647293
0x647282: push    1; Size
0x647284: lea     edx, [esi+20h]
0x647287: push    edx; Src
0x647288: call    SaveLoad_SaveData
0x64728D: mov     ecx, ds:0B33B00h
0x647293: cmp     byte ptr [ecx+7Ch], 4Bh ; 'K'
0x647297: jb      short loc_6472AD
0x647299: push    4; Size
0x64729B: lea     eax, [esi+88h]
0x6472A1: push    eax; Src
0x6472A2: call    SaveLoad_SaveData
0x6472A7: mov     ecx, ds:0B33B00h
0x6472AD: cmp     byte ptr [ecx+7Ch], 4Fh ; 'O'
0x6472B1: jb      short loc_6472E8
0x6472B3: push    4; Size
0x6472B5: lea     edx, [esi+28h]
0x6472B8: push    edx; Src
0x6472B9: call    SaveLoad_SaveData
0x6472BE: mov     eax, [esi+24h]
0x6472C1: cmp     eax, ebx
0x6472C3: mov     [esp+1Ch+Src], ebx
0x6472C7: jz      short loc_6472D0
0x6472C9: mov     eax, [eax+0Ch]
0x6472CC: mov     [esp+1Ch+Src], eax
0x6472D0: push    4
0x6472D2: lea     ecx, [esp+20h+Src]
0x6472D6: push    ecx
0x6472D7: mov     ecx, ds:0B33B00h
0x6472DD: call    SaveLoad_SaveFormID
0x6472E2: mov     ecx, ds:0B33B00h
0x6472E8: cmp     byte ptr [ecx+7Ch], 56h ; 'V'
0x6472EC: jb      short loc_6472FF
0x6472EE: push    4; Size
0x6472F0: lea     edx, [esi+38h]
0x6472F3: push    edx; Src
0x6472F4: call    SaveLoad_SaveData
0x6472F9: mov     ecx, ds:0B33B00h
0x6472FF: mov     eax, [esi+2Ch]
0x647302: cmp     eax, ebx
0x647304: mov     [esp+1Ch+arg_0], ebx
0x647308: jz      short loc_647316
0x64730A: cmp     [esi+44h], ebx
0x64730D: jnz     short loc_647316
0x64730F: mov     eax, [eax+0Ch]
0x647312: mov     [esp+1Ch+arg_0], eax
0x647316: push    4
0x647318: lea     edx, [esp+20h+arg_0]
0x64731C: push    edx
0x64731D: call    SaveLoad_SaveFormID
0x647322: mov     eax, [esi+30h]
0x647325: cmp     eax, ebx
0x647327: mov     [esp+1Ch+var_C], ebx
0x64732B: jz      short loc_647334
0x64732D: mov     eax, [eax+0Ch]
0x647330: mov     [esp+1Ch+var_C], eax
0x647334: push    4
0x647336: lea     ecx, [esp+20h+var_C]
0x64733A: push    ecx
0x64733B: mov     ecx, ds:0B33B00h
0x647341: call    SaveLoad_SaveFormID
0x647346: test    edi, 400000h
0x64734C: jz      short loc_647356
0x64734E: lea     ecx, [esi+70h]
0x647351: call    AVCollection_Save
0x647356: mov     ecx, ds:0B33B00h
0x64735C: cmp     byte ptr [ecx+7Ch], 74h ; 't'
0x647360: jb      short loc_647376
0x647362: push    4; Size
0x647364: lea     edx, [esi+8Ch]
0x64736A: push    edx; Src
0x64736B: call    SaveLoad_SaveData
0x647370: mov     ecx, ds:0B33B00h
0x647376: cmp     byte ptr [ecx+7Ch], 76h ; 'v'
0x64737A: jb      short loc_64738D
0x64737C: push    1; Size
0x64737E: add     esi, 1Eh
0x647381: push    esi; Src
0x647382: call    SaveLoad_SaveData
0x647387: mov     ecx, ds:0B33B00h
0x64738D: cmp     ds:0B05BACh, bl
0x647393: jz      short loc_6473FD
0x647395: mov     edi, [ecx+84h]
0x64739B: cmp     edi, ebx
0x64739D: mov     esi, [ecx+14h]
0x6473A0: jz      short loc_6473DD
0x6473A2: mov     eax, [edi]
0x6473A4: push    eax; a1
0x6473A5: call    TESForm_LookupByFormID
0x6473AA: mov     ecx, [edi+5]
0x6473AD: mov     edx, [eax]
0x6473AF: add     esp, 4
0x6473B2: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x6473B7: push    0F2Bh
0x6473BC: push    ecx
0x6473BD: mov     ecx, eax
0x6473BF: mov     eax, [edx+0D4h]
0x6473C5: call    eax
0x6473C7: mov     ecx, [edi]
0x6473C9: push    eax
0x6473CA: push    ecx
0x6473CB: sub     esi, ebp
0x6473CD: push    esi; ArgList
0x6473CE: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x6473D3: call    sub_40FEC0
0x6473D8: add     esp, 1Ch
0x6473DB: jmp     short loc_6473F7
0x6473DD: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x6473E2: push    0F2Bh
0x6473E7: sub     esi, ebp
0x6473E9: push    esi; ArgList
0x6473EA: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x6473EF: call    sub_40FEC0
0x6473F4: add     esp, 10h
0x6473F7: mov     ecx, ds:0B33B00h
0x6473FD: call    sub_45A170
0x647402: test    al, al
0x647404: jz      short loc_647439
0x647406: mov     edx, ds:0B33B00h
0x64740C: mov     edi, [esp+1Ch+var_8]
0x647410: mov     esi, [edx+14h]
0x647413: lea     eax, [edi+0FFFFh]
0x647419: cmp     esi, eax
0x64741B: jbe     short loc_647434
0x64741D: push    0F2Bh
0x647422: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x647427: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x64742C: call    PrintError
0x647431: add     esp, 0Ch
0x647434: sub     esi, edi
0x647436: mov     [edi], si
0x647439: pop     edi
0x64743A: pop     esi
0x64743B: pop     ebp
0x64743C: pop     ebx
0x64743D: add     esp, 0Ch
0x647440: retn    8
