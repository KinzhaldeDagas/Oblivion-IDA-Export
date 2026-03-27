0x6967B0: mov     eax, [esp+arg_0.vtbl]
0x6967B4: sub     esp, 24h
0x6967B7: push    ebx
0x6967B8: push    ebp
0x6967B9: push    esi
0x6967BA: push    edi
0x6967BB: push    eax; Src
0x6967BC: mov     esi, ecx
0x6967BE: call    sub_69F770
0x6967C3: push    4; Size
0x6967C5: lea     ecx, [esi+80h]
0x6967CB: push    ecx; Src
0x6967CC: mov     ecx, ds:0B33B00h
0x6967D2: call    SaveLoad_SaveData
0x6967D7: push    4; a2
0x6967D9: lea     edx, [esi+5Ch]
0x6967DC: push    edx; a1
0x6967DD: mov     ecx, esi
0x6967DF: call    TESForm_SaveDataToCurrentSaveGame
0x6967E4: mov     eax, ds:0B33B00h
0x6967E9: xor     ebx, ebx
0x6967EB: cmp     byte ptr [eax+7Ch], 30h ; '0'
0x6967EF: jb      short loc_69686D
0x6967F1: mov     edx, [esi]
0x6967F3: mov     eax, [edx+154h]
0x6967F9: mov     ecx, esi
0x6967FB: call    eax
0x6967FD: mov     ecx, [eax+54h]
0x696800: mov     [esp+34h+a1.member.flags], ecx
0x696804: mov     edx, [eax+58h]
0x696807: push    0Ch; a2
0x696809: lea     ecx, [esp+38h+a1.member.flags]
0x69680D: mov     [esp+38h+a1.member.refID], edx
0x696811: mov     eax, [eax+5Ch]
0x696814: push    ecx; a1
0x696815: mov     ecx, esi
0x696817: mov     [esp+3Ch+a1.member.modlist.data], eax
0x69681B: call    TESForm_SaveDataToCurrentSaveGame
0x696820: mov     edx, [esi]
0x696822: mov     eax, [edx+154h]
0x696828: mov     ecx, esi
0x69682A: call    eax
0x69682C: add     eax, 30h ; '0'
0x69682F: push    eax
0x696830: lea     ecx, [esp+38h+a1.member.modlist.next]
0x696834: call    sub_7150F0
0x696839: push    10h; Size
0x69683B: lea     ecx, [esp+38h+a1.member.modlist.next]
0x69683F: push    ecx; Src
0x696840: mov     ecx, ds:0B33B00h
0x696846: call    SaveLoad_SaveData
0x69684B: fldz
0x69684D: mov     eax, [esi+7Ch]
0x696850: fstp    [esp+34h+a1.vtbl]
0x696854: cmp     eax, ebx
0x696856: jz      short loc_69685F
0x696858: fld     dword ptr [eax+7Ch]
0x69685B: fstp    [esp+34h+a1.vtbl]
0x69685F: push    4; a2
0x696861: lea     edx, [esp+38h+a1]
0x696865: push    edx; a1
0x696866: mov     ecx, esi
0x696868: call    TESForm_SaveDataToCurrentSaveGame
0x69686D: mov     eax, [esi+98h]
0x696873: cmp     eax, ebx
0x696875: mov     dword ptr [esp+34h+a1.member.type], ebx
0x696879: jz      short loc_696882
0x69687B: mov     eax, [eax+0Ch]
0x69687E: mov     dword ptr [esp+34h+a1.member.type], eax
0x696882: push    4
0x696884: lea     ecx, [esp+38h+a1.member]
0x696888: push    ecx
0x696889: mov     ecx, esi
0x69688B: call    TESForm_SaveFormIDToCurrentSaveGame
0x696890: mov     edx, ds:0B33B00h
0x696896: push    2; a2
0x696898: lea     eax, [esp+38h+arg_0]
0x69689C: mov     [esp+38h+arg_0.vtbl], ebx
0x6968A0: mov     ebp, [edx+14h]
0x6968A3: push    eax; a1
0x6968A4: mov     ecx, esi
0x6968A6: call    TESForm_SaveDataToCurrentSaveGame
0x6968AB: mov     edi, [esi+84h]
0x6968B1: cmp     edi, ebx
0x6968B3: jz      short loc_6968EE
0x6968B5: mov     [esp+34h+a1.vtbl], ebx
0x6968B9: mov     eax, [edi+18h]
0x6968BC: cmp     eax, ebx
0x6968BE: jz      short loc_6968D4
0x6968C0: push    eax
0x6968C1: call    sub_4DC270
0x6968C6: add     esp, 4
0x6968C9: cmp     eax, ebx
0x6968CB: jz      short loc_6968D4
0x6968CD: mov     ecx, [eax+0Ch]
0x6968D0: mov     [esp+34h+a1.vtbl], ecx
0x6968D4: push    4
0x6968D6: lea     edx, [esp+38h+a1]
0x6968DA: push    edx
0x6968DB: mov     ecx, esi
0x6968DD: call    TESForm_SaveFormIDToCurrentSaveGame
0x6968E2: add     [esp+34h+arg_0.vtbl], 1
0x6968E7: mov     edi, [edi+1Ch]
0x6968EA: cmp     edi, ebx
0x6968EC: jnz     short loc_6968B5
0x6968EE: mov     ax, word ptr [esp+34h+arg_0.vtbl]
0x6968F3: mov     [ebp+0], ax
0x6968F7: mov     ecx, ds:0B33B00h
0x6968FD: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x696901: jb      short loc_696913
0x696903: push    4; a2
0x696905: lea     edx, [esi+0A0h]
0x69690B: push    edx; a1
0x69690C: mov     ecx, esi
0x69690E: call    TESForm_SaveDataToCurrentSaveGame
0x696913: pop     edi
0x696914: pop     esi
0x696915: pop     ebp
0x696916: pop     ebx
0x696917: add     esp, 24h
0x69691A: retn    4
