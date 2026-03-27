0x441280: sub     esp, 14h
0x441283: push    ebx
0x441284: push    esi
0x441285: push    edi
0x441286: mov     edi, ecx
0x441288: mov     ecx, ds:0B33B00h
0x44128E: mov     [esp+20h+var_14], 0
0x441296: xor     ebx, ebx
0x441298: call    sub_45A170
0x44129D: test    al, al
0x44129F: jz      loc_44133E
0x4412A5: mov     ecx, ds:0B33B00h
0x4412AB: push    4; Size
0x4412AD: lea     eax, [esp+24h+Dst]
0x4412B1: push    eax; Dst
0x4412B2: call    SaveLoad_LoadData
0x4412B7: cmp     [esp+20h+Dst], 4B4F4C42h
0x4412BF: jz      short loc_441329
0x4412C1: mov     eax, ds:0B33B00h
0x4412C6: mov     esi, [eax+80h]
0x4412CC: test    esi, esi
0x4412CE: jz      short loc_44130D
0x4412D0: mov     ecx, [esi]
0x4412D2: push    ecx; a1
0x4412D3: call    TESForm_LookupByFormID
0x4412D8: mov     edx, [esi+5]
0x4412DB: movzx   ecx, byte ptr [esi+9]
0x4412DF: add     esp, 4
0x4412E2: push    edx
0x4412E3: mov     edx, [eax]
0x4412E5: push    ecx
0x4412E6: mov     ecx, eax
0x4412E8: mov     eax, [edx+0D4h]
0x4412EE: call    eax
0x4412F0: mov     ecx, [esi]
0x4412F2: push    eax
0x4412F3: push    ecx
0x4412F4: push    15F6h
0x4412F9: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x4412FE: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x441303: call    PrintError
0x441308: add     esp, 1Ch
0x44130B: jmp     short loc_441329
0x44130D: movzx   edx, byte ptr [eax+7Ch]
0x441311: push    edx
0x441312: push    15F6h
0x441317: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x44131C: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x441321: call    PrintError
0x441326: add     esp, 10h
0x441329: mov     ecx, ds:0B33B00h
0x44132F: mov     ebx, [ecx+14h]
0x441332: push    2; Size
0x441334: lea     eax, [esp+24h+var_14]
0x441338: push    eax; Dst
0x441339: call    SaveLoad_LoadData
0x44133E: mov     ecx, ds:0B33B00h
0x441344: cmp     byte ptr [ecx+7Ch], 14h
0x441348: jb      loc_4413CE
0x44134E: push    4; Size
0x441350: lea     edx, [esp+24h+a1]
0x441354: push    edx; Dst
0x441355: call    SaveLoad_LoadData
0x44135A: xor     esi, esi
0x44135C: cmp     [esp+20h+a1], esi
0x441360: jbe     short loc_4413C8
0x441362: mov     ecx, ds:0B33B00h
0x441368: push    4; Size
0x44136A: lea     eax, [esp+24h+var_8]
0x44136E: push    eax; Dst
0x44136F: call    SaveLoad_LoadFormID
0x441374: push    2; Size
0x441376: lea     ecx, [esp+2Ch+Dst]
0x44137A: push    ecx; Dst
0x44137B: mov     ecx, ds:0B33B00h
0x441381: call    SaveLoad_LoadData
0x441386: mov     eax, [esp+28h+a1]
0x44138A: test    eax, eax
0x44138C: jz      short loc_4413BF
0x44138E: push    0; int
0x441390: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x441395: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44139A: push    0; int
0x44139C: push    eax; a1
0x44139D: call    TESForm_LookupByFormID
0x4413A2: add     esp, 4
0x4413A5: push    eax; void *
0x4413A6: call    OblivionDynamicCast
0x4413AB: add     esp, 14h
0x4413AE: test    eax, eax
0x4413B0: jz      short loc_4413BF
0x4413B2: mov     edx, [esp+28h+Dst]
0x4413B6: push    edx
0x4413B7: push    eax
0x4413B8: mov     ecx, edi
0x4413BA: call    sub_440FA0
0x4413BF: add     esi, 1
0x4413C2: cmp     esi, [esp+28h+var_18]
0x4413C6: jb      short loc_441362
0x4413C8: mov     ecx, ds:0B33B00h
0x4413CE: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x4413D2: jb      short loc_4413E6
0x4413D4: push    4; Size
0x4413D6: push    offset flt_B33A30; Dst
0x4413DB: call    SaveLoad_LoadData
0x4413E0: mov     ecx, ds:0B33B00h
0x4413E6: call    sub_45A170
0x4413EB: test    al, al
0x4413ED: jz      loc_4414FE
0x4413F3: mov     ecx, ds:0B33B00h
0x4413F9: mov     edi, [ecx+80h]
0x4413FF: test    edi, edi
0x441401: mov     esi, [ecx+14h]
0x441404: jz      loc_4414A7
0x44140A: mov     eax, [edi]
0x44140C: push    eax; a1
0x44140D: call    TESForm_LookupByFormID
0x441412: movzx   edx, [esp+2Ch+var_1C]
0x441417: mov     ecx, eax
0x441419: lea     eax, [edx+ebx]
0x44141C: add     esp, 4
0x44141F: cmp     esi, eax
0x441421: jbe     short loc_441462
0x441423: mov     eax, [edi+5]
0x441426: movzx   edx, byte ptr [edi+9]
0x44142A: push    eax
0x44142B: mov     eax, [ecx]
0x44142D: push    edx
0x44142E: mov     edx, [eax+0D4h]
0x441434: call    edx
0x441436: movzx   ecx, [esp+30h+var_1C]
0x44143B: push    eax
0x44143C: mov     eax, [edi]
0x44143E: push    eax
0x44143F: push    16E4h
0x441444: sub     esi, ecx
0x441446: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x44144B: sub     esi, ebx
0x44144D: push    esi; ArgList
0x44144E: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x441453: call    PrintError
0x441458: add     esp, 20h
0x44145B: pop     edi
0x44145C: pop     esi
0x44145D: pop     ebx
0x44145E: add     esp, 14h
0x441461: retn
0x441462: jnb     loc_4414FE
0x441468: mov     edx, [edi+5]
0x44146B: movzx   eax, byte ptr [edi+9]
0x44146F: push    edx
0x441470: mov     edx, [ecx]
0x441472: push    eax
0x441473: mov     eax, [edx+0D4h]
0x441479: call    eax
0x44147B: mov     ecx, [edi]
0x44147D: movzx   edx, [esp+30h+var_1C]
0x441482: push    eax
0x441483: push    ecx
0x441484: push    16E4h
0x441489: sub     edx, esi
0x44148B: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x441490: add     edx, ebx
0x441492: push    edx; ArgList
0x441493: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x441498: call    PrintError
0x44149D: add     esp, 20h
0x4414A0: pop     edi
0x4414A1: pop     esi
0x4414A2: pop     ebx
0x4414A3: add     esp, 14h
0x4414A6: retn
0x4414A7: movzx   eax, [esp+28h+var_1C]
0x4414AC: lea     edx, [eax+ebx]
0x4414AF: cmp     esi, edx
0x4414B1: jbe     short loc_4414DB
0x4414B3: movzx   ecx, byte ptr [ecx+7Ch]
0x4414B7: push    ecx
0x4414B8: push    16E4h
0x4414BD: sub     esi, eax
0x4414BF: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x4414C4: sub     esi, ebx
0x4414C6: push    esi; ArgList
0x4414C7: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4414CC: call    PrintError
0x4414D1: add     esp, 14h
0x4414D4: pop     edi
0x4414D5: pop     esi
0x4414D6: pop     ebx
0x4414D7: add     esp, 14h
0x4414DA: retn
0x4414DB: jnb     short loc_4414FE
0x4414DD: movzx   edx, byte ptr [ecx+7Ch]
0x4414E1: push    edx
0x4414E2: push    16E4h
0x4414E7: sub     eax, esi
0x4414E9: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x4414EE: add     eax, ebx
0x4414F0: push    eax; ArgList
0x4414F1: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4414F6: call    PrintError
0x4414FB: add     esp, 14h
0x4414FE: pop     edi
0x4414FF: pop     esi
0x441500: pop     ebx
0x441501: add     esp, 14h
0x441504: retn
