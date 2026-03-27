0x5E44C0: push    esi
0x5E44C1: push    edi
0x5E44C2: mov     edi, [esp+8+arg_0]
0x5E44C6: test    edi, edi
0x5E44C8: mov     esi, ecx
0x5E44CA: jz      loc_5E45DF
0x5E44D0: mov     eax, [edi]
0x5E44D2: mov     edx, [eax+78h]
0x5E44D5: mov     ecx, edi
0x5E44D7: call    edx
0x5E44D9: test    al, al
0x5E44DB: jz      short loc_5E44FE
0x5E44DD: fld     dword ptr ds:0A30634h
0x5E44E3: mov     eax, ds:0B394C0h
0x5E44E8: push    ecx
0x5E44E9: fstp    [esp+0Ch+duration]; duration
0x5E44EC: push    1; unk2
0x5E44EE: push    0; unk1
0x5E44F0: push    eax; string
0x5E44F1: call    GameUI_QueueMessage
0x5E44F6: add     esp, 10h
0x5E44F9: pop     edi
0x5E44FA: pop     esi
0x5E44FB: retn    0Ch
0x5E44FE: mov     ecx, ds:0B33B00h
0x5E4504: call    sub_45A500
0x5E4509: test    al, al
0x5E450B: jnz     short loc_5E4529
0x5E450D: mov     ecx, [esp+8+arg_4]
0x5E4511: push    2
0x5E4513: push    ecx
0x5E4514: push    esi
0x5E4515: call    Script_AddEventToExtraScript
0x5E451A: push    2
0x5E451C: lea     edx, [esi+44h]
0x5E451F: push    edx
0x5E4520: push    edi
0x5E4521: call    Script_AddEventToExtraScript
0x5E4526: add     esp, 18h
0x5E4529: mov     eax, [edi]
0x5E452B: mov     edx, [eax+0ACh]
0x5E4531: push    ebp
0x5E4532: mov     ecx, edi
0x5E4534: xor     ebp, ebp
0x5E4536: call    edx
0x5E4538: test    al, al
0x5E453A: jz      short loc_5E453F
0x5E453C: lea     ebp, [edi+24h]
0x5E453F: mov     eax, ds:0B333C4h
0x5E4544: cmp     esi, eax
0x5E4546: jnz     short loc_5E458E
0x5E4548: cmp     [esp+0Ch+arg_8], 0
0x5E454D: jnz     short loc_5E458E
0x5E454F: add     dword ptr [eax+684h], 1
0x5E4556: mov     ecx, ds:0B333C4h
0x5E455C: push    ebp
0x5E455D: call    Player_EquipPotion?
0x5E4562: test    al, al
0x5E4564: jz      short loc_5E45DE
0x5E4566: mov     ecx, [esp+0Ch+arg_4]
0x5E456A: mov     eax, [esi]
0x5E456C: mov     edx, [eax+100h]
0x5E4572: push    0
0x5E4574: push    1
0x5E4576: push    0
0x5E4578: push    0
0x5E457A: push    0
0x5E457C: push    0
0x5E457E: push    0
0x5E4580: push    1
0x5E4582: push    ecx
0x5E4583: push    edi
0x5E4584: mov     ecx, esi
0x5E4586: call    edx
0x5E4588: pop     ebp
0x5E4589: pop     edi
0x5E458A: pop     esi
0x5E458B: retn    0Ch
0x5E458E: mov     eax, [esi+5Ch]
0x5E4591: mov     edx, [eax+34h]
0x5E4594: push    ebx
0x5E4595: lea     ebx, [esi+5Ch]
0x5E4598: push    ebp
0x5E4599: mov     ecx, ebx
0x5E459B: call    edx
0x5E459D: push    0
0x5E459F: mov     ecx, ebx
0x5E45A1: call    MagicCaster_UseActiveMagicItem
0x5E45A6: cmp     esi, ds:0B333C4h
0x5E45AC: pop     ebx
0x5E45AD: jz      short loc_5E45D9
0x5E45AF: mov     ecx, [esp+0Ch+arg_4]
0x5E45B3: mov     eax, [esi]
0x5E45B5: mov     edx, [eax+100h]
0x5E45BB: push    0
0x5E45BD: push    1
0x5E45BF: push    0
0x5E45C1: push    0
0x5E45C3: push    0
0x5E45C5: push    0
0x5E45C7: push    0
0x5E45C9: push    1
0x5E45CB: push    ecx
0x5E45CC: push    edi
0x5E45CD: mov     ecx, esi
0x5E45CF: call    edx
0x5E45D1: cmp     esi, ds:0B333C4h
0x5E45D7: jnz     short loc_5E45DE
0x5E45D9: call    sub_5C1900
0x5E45DE: pop     ebp
0x5E45DF: pop     edi
0x5E45E0: pop     esi
0x5E45E1: retn    0Ch
