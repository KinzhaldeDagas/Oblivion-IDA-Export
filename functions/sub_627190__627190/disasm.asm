0x627190: sub     esp, 18h
0x627193: push    ebx
0x627194: push    esi
0x627195: push    edi
0x627196: mov     esi, ecx
0x627198: call    sub_567F70
0x62719D: mov     ecx, ds:0B33B00h
0x6271A3: xor     ebx, ebx
0x6271A5: mov     dword ptr [esp+24h+a1.member.type], ebx
0x6271A9: call    sub_45A170
0x6271AE: test    al, al
0x6271B0: jz      loc_62724F
0x6271B6: mov     ecx, ds:0B33B00h
0x6271BC: push    4; Size
0x6271BE: lea     eax, [esp+28h+a1.member.flags]
0x6271C2: push    eax; Dst
0x6271C3: call    SaveLoad_LoadData
0x6271C8: cmp     [esp+24h+a1.member.flags], 4B4F4C42h
0x6271D0: jz      short loc_62723A
0x6271D2: mov     eax, ds:0B33B00h
0x6271D7: mov     edi, [eax+80h]
0x6271DD: test    edi, edi
0x6271DF: jz      short loc_62721E
0x6271E1: mov     ecx, [edi]
0x6271E3: push    ecx; a1
0x6271E4: call    TESForm_LookupByFormID
0x6271E9: mov     edx, [edi+5]
0x6271EC: movzx   ecx, byte ptr [edi+9]
0x6271F0: add     esp, 4
0x6271F3: push    edx
0x6271F4: mov     edx, [eax]
0x6271F6: push    ecx
0x6271F7: mov     ecx, eax
0x6271F9: mov     eax, [edx+0D4h]
0x6271FF: call    eax
0x627201: mov     ecx, [edi]
0x627203: push    eax
0x627204: push    ecx
0x627205: push    211h
0x62720A: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x62720F: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x627214: call    PrintError
0x627219: add     esp, 1Ch
0x62721C: jmp     short loc_62723A
0x62721E: movzx   edx, byte ptr [eax+7Ch]
0x627222: push    edx
0x627223: push    211h
0x627228: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x62722D: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x627232: call    PrintError
0x627237: add     esp, 10h
0x62723A: mov     ecx, ds:0B33B00h
0x627240: mov     ebx, [ecx+14h]
0x627243: push    2; Size
0x627245: lea     eax, [esp+28h+a1.member]
0x627249: push    eax; Dst
0x62724A: call    SaveLoad_LoadData
0x62724F: push    ebp
0x627250: push    2; a2
0x627252: lea     ecx, [esp+2Ch+a1]
0x627256: push    ecx; a1
0x627257: mov     ecx, esi
0x627259: call    TESForm_LoadDataFromCurrentSaveGame
0x62725E: xor     ebp, ebp
0x627260: cmp     word ptr [esp+28h+a1.vtbl], bp
0x627265: jbe     short loc_6272CC
0x627267: push    4; a2
0x627269: lea     edx, [esp+2Ch+a1.member.refID]
0x62726D: push    edx; a1
0x62726E: mov     ecx, esi
0x627270: call    TESForm_LoadFormIDFromCurrentSaveGame
0x627275: mov     eax, dword ptr [esp+30h+a1.member.type]
0x627279: test    eax, eax
0x62727B: mov     edi, eax
0x62727D: jz      short loc_6272C0
0x62727F: cmp     dword ptr [esi+54h], 0
0x627283: jz      short loc_6272BD
0x627285: push    8; Size
0x627287: call    FormHeapAlloc
0x62728C: add     esp, 4
0x62728F: test    eax, eax
0x627291: jz      short loc_6272AD
0x627293: mov     ecx, [esi+54h]
0x627296: mov     [eax], ecx
0x627298: mov     dword ptr [eax+4], 0
0x62729F: mov     edx, [esi+58h]
0x6272A2: mov     [eax+4], edx
0x6272A5: mov     [esi+58h], eax
0x6272A8: mov     [esi+54h], edi
0x6272AB: jmp     short loc_6272C0
0x6272AD: mov     edx, [esi+58h]
0x6272B0: xor     eax, eax
0x6272B2: mov     [eax+4], edx
0x6272B5: mov     [esi+58h], eax
0x6272B8: mov     [esi+54h], edi
0x6272BB: jmp     short loc_6272C0
0x6272BD: mov     [esi+54h], eax
0x6272C0: movzx   eax, [esp+30h+var_20]
0x6272C5: add     ebp, 1
0x6272C8: cmp     ebp, eax
0x6272CA: jl      short loc_627267
0x6272CC: push    4; a2
0x6272CE: lea     ecx, [esp+34h+a1.member.flags]
0x6272D2: push    ecx; a1
0x6272D3: mov     ecx, esi
0x6272D5: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6272DA: mov     edx, [esp+38h+a1.vtbl]
0x6272DE: push    4; a2
0x6272E0: lea     eax, [esp+3Ch+a1.member]
0x6272E4: push    eax; a1
0x6272E5: mov     ecx, esi
0x6272E7: mov     [esi+60h], edx
0x6272EA: call    TESForm_LoadFormIDFromCurrentSaveGame
0x6272EF: mov     ecx, [esp+40h+var_1C]
0x6272F3: push    1; a2
0x6272F5: lea     edx, [esi+3Dh]
0x6272F8: mov     [esi+5Ch], ecx
0x6272FB: push    edx; a1
0x6272FC: mov     ecx, esi
0x6272FE: call    TESForm_LoadDataFromCurrentSaveGame
0x627303: push    1; a2
0x627305: lea     eax, [esi+64h]
0x627308: push    eax; a1
0x627309: mov     ecx, esi
0x62730B: call    TESForm_LoadDataFromCurrentSaveGame
0x627310: push    1; a2
0x627312: lea     ecx, [esi+50h]
0x627315: push    ecx; a1
0x627316: mov     ecx, esi
0x627318: call    TESForm_LoadDataFromCurrentSaveGame
0x62731D: push    4; a2
0x62731F: lea     edx, [esi+4Ch]
0x627322: push    edx; a1
0x627323: mov     ecx, esi
0x627325: call    TESForm_LoadDataFromCurrentSaveGame
0x62732A: push    0Ch; a2
0x62732C: lea     eax, [esi+40h]
0x62732F: push    eax; a1
0x627330: mov     ecx, esi
0x627332: call    TESForm_LoadDataFromCurrentSaveGame
0x627337: push    1; a2
0x627339: lea     ecx, [esi+3Ch]
0x62733C: push    ecx; a1
0x62733D: mov     ecx, esi
0x62733F: call    TESForm_LoadDataFromCurrentSaveGame
0x627344: mov     edx, ds:0B33B00h
0x62734A: cmp     byte ptr [edx+7Ch], 71h ; 'q'
0x62734E: pop     ebp
0x62734F: jb      short loc_62735E
0x627351: push    1; a2
0x627353: lea     eax, [esi+65h]
0x627356: push    eax; a1
0x627357: mov     ecx, esi
0x627359: call    TESForm_LoadDataFromCurrentSaveGame
0x62735E: mov     ecx, ds:0B33B00h
0x627364: call    sub_45A170
0x627369: test    al, al
0x62736B: jz      loc_62747C
0x627371: mov     ecx, ds:0B33B00h
0x627377: mov     edi, [ecx+80h]
0x62737D: test    edi, edi
0x62737F: mov     esi, [ecx+14h]
0x627382: jz      loc_627425
0x627388: mov     ecx, [edi]
0x62738A: push    ecx; a1
0x62738B: call    TESForm_LookupByFormID
0x627390: movzx   edx, word ptr [esp+40h+var_2C]
0x627395: mov     ecx, eax
0x627397: lea     eax, [edx+ebx]
0x62739A: add     esp, 4
0x62739D: cmp     esi, eax
0x62739F: jbe     short loc_6273E0
0x6273A1: mov     eax, [edi+5]
0x6273A4: movzx   edx, byte ptr [edi+9]
0x6273A8: push    eax
0x6273A9: mov     eax, [ecx]
0x6273AB: push    edx
0x6273AC: mov     edx, [eax+0D4h]
0x6273B2: call    edx
0x6273B4: movzx   ecx, word ptr [esp+44h+var_2C]
0x6273B9: push    eax
0x6273BA: mov     eax, [edi]
0x6273BC: push    eax
0x6273BD: push    239h
0x6273C2: sub     esi, ecx
0x6273C4: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x6273C9: sub     esi, ebx
0x6273CB: push    esi; ArgList
0x6273CC: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6273D1: call    PrintError
0x6273D6: add     esp, 20h
0x6273D9: pop     edi
0x6273DA: pop     esi
0x6273DB: pop     ebx
0x6273DC: add     esp, 18h
0x6273DF: retn
0x6273E0: jnb     loc_62747C
0x6273E6: mov     edx, [edi+5]
0x6273E9: movzx   eax, byte ptr [edi+9]
0x6273ED: push    edx
0x6273EE: mov     edx, [ecx]
0x6273F0: push    eax
0x6273F1: mov     eax, [edx+0D4h]
0x6273F7: call    eax
0x6273F9: mov     ecx, [edi]
0x6273FB: movzx   edx, word ptr [esp+44h+var_2C]
0x627400: push    eax
0x627401: push    ecx
0x627402: push    239h
0x627407: sub     edx, esi
0x627409: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x62740E: add     edx, ebx
0x627410: push    edx; ArgList
0x627411: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x627416: call    PrintError
0x62741B: add     esp, 20h
0x62741E: pop     edi
0x62741F: pop     esi
0x627420: pop     ebx
0x627421: add     esp, 18h
0x627424: retn
0x627425: movzx   eax, word ptr [esp+3Ch+var_2C]
0x62742A: lea     edx, [eax+ebx]
0x62742D: cmp     esi, edx
0x62742F: jbe     short loc_627459
0x627431: movzx   ecx, byte ptr [ecx+7Ch]
0x627435: push    ecx
0x627436: push    239h
0x62743B: sub     esi, eax
0x62743D: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x627442: sub     esi, ebx
0x627444: push    esi; ArgList
0x627445: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x62744A: call    PrintError
0x62744F: add     esp, 14h
0x627452: pop     edi
0x627453: pop     esi
0x627454: pop     ebx
0x627455: add     esp, 18h
0x627458: retn
0x627459: jnb     short loc_62747C
0x62745B: movzx   edx, byte ptr [ecx+7Ch]
0x62745F: push    edx
0x627460: push    239h
0x627465: sub     eax, esi
0x627467: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x62746C: add     eax, ebx
0x62746E: push    eax; ArgList
0x62746F: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x627474: call    PrintError
0x627479: add     esp, 14h
0x62747C: pop     edi
0x62747D: pop     esi
0x62747E: pop     ebx
0x62747F: add     esp, 18h
0x627482: retn
