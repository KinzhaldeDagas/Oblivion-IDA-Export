0x5973F0: push    ebx; Commit an Oblivion custom class. Copies staged specialization and two favored attributes, then performs exactly seven TESClass_SetMajorSkillAV calls from ClassMenu+0x68..+0x80. No minor-selection phase, minor writeback, duplicate validation, or eighth slot follows.
0x5973F1: push    esi
0x5973F2: mov     esi, ecx
0x5973F4: mov     ecx, ds:0B333C4h
0x5973FA: mov     eax, [esi+3Ch]
0x5973FD: mov     [ecx+654h], eax
0x597403: mov     ecx, [esi+40h]
0x597406: push    edi
0x597407: call    TESClass_IsPlayable; TESClass_IsPlayable reads classFlags at +0x60 bit 0.
0x59740C: test    al, al
0x59740E: jnz     short loc_59741A
0x597410: mov     ecx, [esi+40h]; this
0x597413: push    1; playable
0x597415: call    TESClass_SetPlayable; Sets or clears the TESClass playable flag; ClassMenu custom-class commit forces the chosen custom class playable.
0x59741A: mov     eax, [esi+3Ch]
0x59741D: add     eax, 2Ch ; ','
0x597420: mov     eax, [eax+4]
0x597423: test    eax, eax
0x597425: jnz     short loc_59742C
0x597427: mov     eax, offset EmptyString
0x59742C: mov     ecx, [esi+40h]
0x59742F: push    0; a3
0x597431: push    eax; a2
0x597432: add     ecx, 30h ; '0'; this
0x597435: call    BSStringT_Set
0x59743A: mov     edx, [esi+5Ch]
0x59743D: mov     ecx, [esi+40h]; this
0x597440: push    edx; Custom-class commit writes staged favored attribute 2.
0x597441: call    Shared_SetDwordAtOffset40; In this call context, Shared_SetDwordAtOffset40 writes the staged specialization to TESClass+0x40 in the fixed CLAS DATA payload.
0x597446: mov     eax, [esi+60h]
0x597449: mov     ecx, [esi+40h]; this
0x59744C: push    eax; attribute
0x59744D: call    TESClass_SetPrimaryAttribute1; Stores the first favored/primary attribute in the fixed CLAS DATA payload.
0x597452: mov     ecx, [esi+64h]
0x597455: push    ecx; attribute
0x597456: mov     ecx, [esi+40h]; this
0x597459: call    TESClass_SetPrimaryAttribute2; Stores the second favored/primary attribute in the fixed CLAS DATA payload.
0x59745E: mov     edx, [esi+84h]
0x597464: mov     ecx, [esi+40h]
0x597467: push    0; a3
0x597469: push    edx; a2
0x59746A: add     ecx, 1Ch; this
0x59746D: call    BSStringT_Set
0x597472: xor     edi, edi
0x597474: lea     ebx, [esi+68h]
0x597477: mov     eax, [ebx]
0x597479: mov     ecx, [esi+40h]; this
0x59747C: push    eax; actorValue
0x59747D: push    edi; index
0x59747E: call    TESClass_SetMajorSkillAV; Each staged major is filtered to SkillActorValue 0x0C..0x20 by TESClass_SetMajorSkillAV. Invalid values are silently ignored; the setter does not detect duplicates.
0x597483: add     edi, 1
0x597486: add     ebx, 4
0x597489: cmp     edi, 7
0x59748C: jl      short loc_597477
0x59748E: mov     ecx, [esi+40h]
0x597491: push    ecx
0x597492: mov     ecx, ds:0B33A98h
0x597498: add     ecx, 54h ; 'T'
0x59749B: call    BSSimpleList_Remove
0x5974A0: mov     edx, [esi+40h]
0x5974A3: mov     ecx, ds:0B33A98h
0x5974A9: push    offset TESClass_CompareNameNoCase; Case-insensitive TESClass full-name comparator used to keep the playable class list sorted.
0x5974AE: push    edx
0x5974AF: add     ecx, 54h ; 'T'
0x5974B2: call    BSSimpleList_InsertSorted
0x5974B7: mov     eax, [esi+40h]
0x5974BA: push    0
0x5974BC: mov     ecx, esi
0x5974BE: mov     [esi+3Ch], eax
0x5974C1: call    ClassMenu_RefreshClassDetails; Refreshes the committed class display after the fixed seven-major writeback. The native refresh exposes only seven major names/AVs.
0x5974C6: push    1
0x5974C8: mov     ecx, esi
0x5974CA: call    ClassMenu_RebuildClassList; Rebuilds the ClassMenu list from TESDataHandler classes, includes only playable classes, sorts/displays them by name, and optionally activates the current class row.
0x5974CF: pop     edi
0x5974D0: pop     esi
0x5974D1: pop     ebx
0x5974D2: retn
