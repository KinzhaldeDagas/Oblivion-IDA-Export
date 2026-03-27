0x4EF520: push    ebp
0x4EF521: mov     ebp, esp
0x4EF523: and     esp, 0FFFFFFF8h
0x4EF526: sub     esp, 14h
0x4EF529: push    ebx
0x4EF52A: push    esi
0x4EF52B: mov     esi, [ebp+a1]
0x4EF52E: test    esi, esi
0x4EF530: push    edi
0x4EF531: mov     ebx, ecx
0x4EF533: jz      short loc_4EF58B
0x4EF535: mov     ecx, esi
0x4EF537: call    TESFile_GetIsMaster
0x4EF53C: test    al, al
0x4EF53E: jz      short loc_4EF58B
0x4EF540: mov     edi, [ebx+0A8h]
0x4EF546: test    edi, edi
0x4EF548: jz      short loc_4EF58B
0x4EF54A: mov     eax, [ebp+a3]
0x4EF54D: mov     ecx, [ebp+a2]
0x4EF550: push    eax; a3
0x4EF551: push    ecx; a2
0x4EF552: mov     ecx, ebx; this
0x4EF554: call    TESWorldSpace__GetIndexForCellCoord
0x4EF559: cmp     eax, 0FFFFFFFFh
0x4EF55C: jz      short loc_4EF580
0x4EF55E: mov     eax, [edi+eax*4]
0x4EF561: test    eax, eax
0x4EF563: jz      short loc_4EF580
0x4EF565: mov     edx, [ebx+0BCh]
0x4EF56B: add     edx, eax
0x4EF56D: push    edx; Buffer
0x4EF56E: mov     ecx, esi
0x4EF570: call    TESFIle_JumpToRecord
0x4EF575: mov     al, 1
0x4EF577: pop     edi
0x4EF578: pop     esi
0x4EF579: pop     ebx
0x4EF57A: mov     esp, ebp
0x4EF57C: pop     ebp
0x4EF57D: retn    0Ch
0x4EF580: xor     al, al
0x4EF582: pop     edi
0x4EF583: pop     esi
0x4EF584: pop     ebx
0x4EF585: mov     esp, ebp
0x4EF587: pop     ebp
0x4EF588: retn    0Ch
0x4EF58B: mov     edi, [ebp+a3]
0x4EF58E: mov     eax, [ebp+a2]
0x4EF591: push    edi
0x4EF592: push    eax
0x4EF593: mov     [esp+28h+var_11], 0
0x4EF598: call    TESObjectCELL__CalcExtGroupBlockKey
0x4EF59D: mov     ecx, [ebp+a2]
0x4EF5A0: push    edi
0x4EF5A1: push    ecx
0x4EF5A2: mov     [esp+30h+var_10], eax
0x4EF5A6: call    TESObjectCELL__CalcExtGroupSubBlockKey
0x4EF5AB: add     esp, 10h
0x4EF5AE: test    esi, esi
0x4EF5B0: mov     [esp+20h+var_C], eax
0x4EF5B4: jz      loc_4EF70F
0x4EF5BA: push    ebx
0x4EF5BB: mov     ecx, esi
0x4EF5BD: call    TESFile__FindForm
0x4EF5C2: test    al, al
0x4EF5C4: jz      loc_4EF70F
0x4EF5CA: push    1
0x4EF5CC: mov     ecx, esi
0x4EF5CE: call    TESFile_NextRecordEx; NextForm?
0x4EF5D3: lea     edi, [esi+23Ch]
0x4EF5D9: test    edi, edi
0x4EF5DB: mov     [esp+20h+var_12], 0
0x4EF5E0: jz      loc_4EF70F
0x4EF5E6: cmp     [esp+20h+var_12], 0; jumptable 004EF613 default case, cases 2,3,7
0x4EF5EB: jnz     loc_4EF70F
0x4EF5F1: mov     eax, [edi]
0x4EF5F3: cmp     eax, ds:0B05E20h
0x4EF5F9: jnz     short loc_4EF648
0x4EF5FB: mov     eax, [edi+0Ch]
0x4EF5FE: add     eax, 0FFFFFFFFh; switch 10 cases
0x4EF601: cmp     eax, 9
0x4EF604: mov     cl, 1
0x4EF606: mov     [esp+20h+var_12], cl
0x4EF60A: ja      short def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF60C: movzx   edx, ds:byte_4EF730[eax]
0x4EF613: jmp     ds:jpt_4EF613[edx*4]; switch jump
0x4EF61A: xor     cl, cl; jumptable 004EF613 case 1
0x4EF61C: mov     eax, [esp+20h+var_10]; jumptable 004EF613 case 4
0x4EF620: cmp     eax, [edi+8]
0x4EF623: jnz     short loc_4EF627; jumptable 004EF613 case 5
0x4EF625: xor     cl, cl
0x4EF627: mov     edx, [esp+20h+var_C]; jumptable 004EF613 case 5
0x4EF62B: cmp     edx, [edi+8]
0x4EF62E: jnz     short loc_4EF632; jumptable 004EF613 cases 6,8-10
0x4EF630: xor     cl, cl
0x4EF632: test    cl, cl; jumptable 004EF613 cases 6,8-10
0x4EF634: mov     [esp+20h+var_12], 0
0x4EF639: jz      loc_4EF6F7
0x4EF63F: mov     ecx, esi
0x4EF641: call    TESFile__NextGroup
0x4EF646: jmp     short def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF648: cmp     eax, ds:0B06048h
0x4EF64E: jnz     loc_4EF6D9
0x4EF654: xor     eax, eax
0x4EF656: test    dword ptr [edi+8], 400h
0x4EF65D: mov     dword ptr [esp+20h+Dst], eax
0x4EF661: mov     [esp+20h+var_4], eax
0x4EF665: jz      short loc_4EF671
0x4EF667: mov     dword ptr [esp+20h+Dst], 7FFFFFFFh
0x4EF66F: jmp     short loc_4EF6B1
0x4EF671: mov     ecx, esi
0x4EF673: xor     bl, bl
0x4EF675: call    TESFile_GetChunkType
0x4EF67A: test    eax, eax
0x4EF67C: jz      short loc_4EF6B1
0x4EF67E: mov     edi, edi
0x4EF680: test    bl, bl
0x4EF682: jnz     short loc_4EF6B1
0x4EF684: cmp     eax, 434C4358h
0x4EF689: jnz     short loc_4EF69B
0x4EF68B: push    8; a4
0x4EF68D: lea     eax, [esp+24h+Dst]
0x4EF691: push    eax; Dst
0x4EF692: mov     ecx, esi; a1
0x4EF694: call    TESFile_GetChunkData
0x4EF699: mov     bl, 1
0x4EF69B: mov     ecx, esi
0x4EF69D: call    TESFile_GetNextChunk
0x4EF6A2: test    al, al
0x4EF6A4: jz      short loc_4EF6B1
0x4EF6A6: mov     ecx, esi
0x4EF6A8: call    TESFile_GetChunkType
0x4EF6AD: test    eax, eax
0x4EF6AF: jnz     short loc_4EF680
0x4EF6B1: mov     ecx, dword ptr [esp+20h+Dst]
0x4EF6B5: cmp     ecx, [ebp+a2]
0x4EF6B8: jnz     short loc_4EF6F7
0x4EF6BA: mov     edx, [esp+20h+var_4]
0x4EF6BE: cmp     edx, [ebp+a3]
0x4EF6C1: jnz     short loc_4EF6F7
0x4EF6C3: mov     ecx, esi
0x4EF6C5: mov     [esp+20h+var_11], 1
0x4EF6CA: mov     [esp+20h+var_12], 1
0x4EF6CF: call    TESFile_JumpToBeginningOfRecord; TESFile::TESRewindChunk
0x4EF6D4: jmp     def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF6D9: cmp     eax, ds:0B0609Ch
0x4EF6DF: jnz     short loc_4EF6EF
0x4EF6E1: push    1
0x4EF6E3: mov     ecx, esi
0x4EF6E5: call    TESFile_NextRecordEx; NextForm?
0x4EF6EA: jmp     def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF6EF: cmp     eax, ds:0B060A8h
0x4EF6F5: jnz     short loc_4EF705
0x4EF6F7: push    1
0x4EF6F9: mov     ecx, esi
0x4EF6FB: call    TESFile_NextRecordEx; NextForm?
0x4EF700: jmp     def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF705: mov     [esp+20h+var_12], 1
0x4EF70A: jmp     def_4EF613; jumptable 004EF613 default case, cases 2,3,7
0x4EF70F: mov     al, [esp+20h+var_11]
0x4EF713: pop     edi
0x4EF714: pop     esi
0x4EF715: pop     ebx
0x4EF716: mov     esp, ebp
0x4EF718: pop     ebp
0x4EF719: retn    0Ch
