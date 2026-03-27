0x6553E0: sub     esp, 18h
0x6553E3: mov     al, byte ptr [esp+18h+arg_4]
0x6553E7: push    ebx
0x6553E8: push    esi
0x6553E9: push    edi
0x6553EA: mov     edi, [esp+24h+arg_0]
0x6553EE: mov     esi, ecx
0x6553F0: mov     ecx, edi; this
0x6553F2: mov     ds:0B3BA80h, al
0x6553F7: call    TESObjectREFR_GetParentCell
0x6553FC: mov     edx, [edi]
0x6553FE: mov     [esp+24h+arg_0], eax
0x655402: mov     eax, [edx+174h]
0x655408: mov     ecx, edi
0x65540A: call    eax
0x65540C: mov     ecx, [eax]
0x65540E: mov     [esp+24h+a2], ecx
0x655412: mov     edx, [eax+4]
0x655415: mov     [esp+24h+var_14], edx
0x655419: mov     eax, [eax+8]
0x65541C: mov     edx, [esi]
0x65541E: mov     [esp+24h+var_10], eax
0x655422: mov     eax, [edx+184h]
0x655428: mov     ecx, esi
0x65542A: call    eax
0x65542C: mov     ebx, eax
0x65542E: test    ebx, ebx
0x655430: jz      loc_655580
0x655436: push    ebp
0x655437: mov     ebp, [ebx+24h]
0x65543A: test    ebp, ebp
0x65543C: jz      short loc_655464
0x65543E: mov     ecx, ebp
0x655440: call    sub_569740
0x655445: cmp     eax, 1
0x655448: jnz     short loc_655464
0x65544A: mov     ecx, ebp
0x65544C: call    sub_569800
0x655451: mov     ecx, eax; this
0x655453: call    TESObjectCELL_IsInterior
0x655458: test    al, al
0x65545A: jz      short loc_655464
0x65545C: fld     dword ptr ds:0A32048h
0x655462: jmp     short loc_65546A
0x655464: fld     dword ptr ds:0A6DD10h
0x65546A: push    edi; a7
0x65546B: fstp    [esp+2Ch+arg_4]
0x65546F: fld     [esp+2Ch+arg_4]
0x655473: push    offset sub_6505D0; a6
0x655478: push    ecx
0x655479: fstp    [esp+34h+a5]; a5
0x65547C: push    edi
0x65547D: lea     ecx, [esp+38h+var_C]
0x655481: push    ecx
0x655482: mov     ecx, ebx
0x655484: call    sub_566B30
0x655489: fld     [esp+34h+arg_4]
0x65548D: push    eax; a4
0x65548E: mov     eax, [esp+38h+arg_0]
0x655492: push    ecx
0x655493: mov     ecx, ds:0B33A98h
0x655499: fstp    [esp+3Ch+a3]; a3
0x65549C: lea     edx, [esp+3Ch+a2]
0x6554A0: push    edx; a2
0x6554A1: push    eax; a1
0x6554A2: call    sub_446B90
0x6554A7: add     esi, 0B0h ; '°'
0x6554AD: mov     ecx, esi
0x6554AF: call    BSSimpleList_Clear
0x6554B4: mov     ebx, offset stru_B3BA9C
0x6554B9: lea     esp, [esp+0]
0x6554C0: mov     edi, [ebx]
0x6554C2: test    edi, edi
0x6554C4: jz      short loc_6554FA
0x6554C6: cmp     dword ptr [esi], 0
0x6554C9: jz      short loc_6554F1
0x6554CB: push    8; Size
0x6554CD: call    FormHeapAlloc
0x6554D2: add     esp, 4
0x6554D5: test    eax, eax
0x6554D7: jz      short loc_6554E6
0x6554D9: mov     ecx, [esi]
0x6554DB: mov     [eax], ecx
0x6554DD: mov     dword ptr [eax+4], 0
0x6554E4: jmp     short loc_6554E8
0x6554E6: xor     eax, eax
0x6554E8: mov     edx, [esi+4]
0x6554EB: mov     [eax+4], edx
0x6554EE: mov     [esi+4], eax
0x6554F1: mov     [esi], edi
0x6554F3: mov     ebx, [ebx+4]
0x6554F6: test    ebx, ebx
0x6554F8: jnz     short loc_6554C0
0x6554FA: mov     ecx, offset stru_B3BA9C
0x6554FF: call    BSSimpleList_Clear
0x655504: mov     ebx, esi
0x655506: test    ebx, ebx
0x655508: jz      short loc_65557F
0x65550A: xor     ecx, ecx
0x65550C: mov     eax, ebx
0x65550E: mov     edi, edi
0x655510: cmp     dword ptr [eax], 0
0x655513: jz      short loc_655518
0x655515: add     ecx, 1
0x655518: mov     eax, [eax+4]
0x65551B: test    eax, eax
0x65551D: jnz     short loc_655510
0x65551F: test    ecx, ecx
0x655521: mov     [esp+28h+arg_0], ecx
0x655525: mov     al, 1
0x655527: jz      short loc_65557F
0x655529: jmp     short loc_655534
0x65552B: jmp     short loc_655530
0x65552D: align 10h
0x655530: mov     al, byte ptr [esp+28h+arg_4]
0x655534: test    al, al
0x655536: jz      short loc_65557F
0x655538: test    ebx, ebx
0x65553A: mov     byte ptr [esp+28h+arg_4], 0
0x65553F: mov     edi, ebx
0x655541: jz      short loc_655575
0x655543: mov     ebp, [ebx]
0x655545: mov     esi, [edi]
0x655547: mov     ecx, ebp; this
0x655549: call    TESObjectREFR_GetOwner
0x65554E: test    eax, eax
0x655550: jnz     short loc_65556E
0x655552: mov     ecx, esi; this
0x655554: call    TESObjectREFR_GetOwner
0x655559: test    eax, eax
0x65555B: jz      short loc_65556E
0x65555D: test    esi, esi
0x65555F: jz      short loc_655563
0x655561: mov     [ebx], esi
0x655563: test    ebp, ebp
0x655565: jz      short loc_655569
0x655567: mov     [edi], ebp
0x655569: mov     byte ptr [esp+28h+arg_4], 1
0x65556E: mov     edi, [edi+4]
0x655571: test    edi, edi
0x655573: jnz     short loc_655543
0x655575: sub     [esp+28h+arg_0], 1
0x65557A: mov     ebx, [ebx+4]
0x65557D: jnz     short loc_655530
0x65557F: pop     ebp
0x655580: pop     edi
0x655581: pop     esi
0x655582: pop     ebx
0x655583: add     esp, 18h
0x655586: retn    8
