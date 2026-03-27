0x5C4E40: push    0FFFFFFFFh
0x5C4E42: push    offset ??0RaceSexMenu@@QAE@XZ_SEH
0x5C4E47: mov     eax, large fs:0
0x5C4E4D: push    eax
0x5C4E4E: sub     esp, 8
0x5C4E51: push    ebx
0x5C4E52: push    esi
0x5C4E53: push    edi
0x5C4E54: mov     eax, ds:0B30AACh
0x5C4E59: xor     eax, esp
0x5C4E5B: push    eax
0x5C4E5C: lea     eax, [esp+24h+var_C]
0x5C4E60: mov     large fs:0, eax
0x5C4E66: mov     esi, ecx
0x5C4E68: mov     [esp+24h+var_14], esi
0x5C4E6C: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5C4E71: push    offset BSStringT_Clear; a5
0x5C4E76: push    offset BSStringT_constr; a4
0x5C4E7B: push    10h; size
0x5C4E7D: push    8; a2
0x5C4E7F: lea     eax, [esi+930h]
0x5C4E85: xor     ebx, ebx
0x5C4E87: push    eax; a1
0x5C4E88: mov     [esp+38h+var_4], ebx
0x5C4E8C: mov     dword ptr [esi], offset ??_7RaceSexMenu@@6B@; const RaceSexMenu::`vftable'
0x5C4E92: call    ArrayConstructor
0x5C4E97: fldz
0x5C4E99: mov     [esi+28h], ebx
0x5C4E9C: mov     [esi+2Ch], ebx
0x5C4E9F: mov     [esi+30h], ebx
0x5C4EA2: mov     [esi+3Ch], ebx
0x5C4EA5: xor     eax, eax
0x5C4EA7: lea     edi, [esi+94h]
0x5C4EAD: mov     ecx, 1F4h
0x5C4EB2: rep stosd
0x5C4EB4: fst     dword ptr [esi+898h]
0x5C4EBA: fst     dword ptr [esi+8A0h]
0x5C4EC0: mov     [esi+894h], bl
0x5C4EC6: mov     ecx, ds:0B3F9A8h
0x5C4ECC: mov     [esi+8A4h], ecx
0x5C4ED2: mov     edx, ds:0B3F9ACh
0x5C4ED8: mov     [esi+8A8h], edx
0x5C4EDE: mov     eax, ds:0B3F9B0h
0x5C4EE3: mov     [esi+8ACh], eax
0x5C4EE9: mov     [esi+8B0h], ebx
0x5C4EEF: mov     ecx, ds:0B3F9A8h
0x5C4EF5: mov     [esi+8B4h], ecx
0x5C4EFB: mov     edx, ds:0B3F9ACh
0x5C4F01: mov     [esi+8B8h], edx
0x5C4F07: mov     eax, ds:0B3F9B0h
0x5C4F0C: mov     [esi+8BCh], eax
0x5C4F12: mov     ecx, ds:0B3F9A8h
0x5C4F18: mov     [esi+8C0h], ecx
0x5C4F1E: mov     edx, ds:0B3F9ACh
0x5C4F24: mov     [esi+8C4h], edx
0x5C4F2A: mov     eax, ds:0B3F9B0h
0x5C4F2F: push    64h ; 'd'; Size
0x5C4F31: fstp    dword ptr [esi+8CCh]
0x5C4F37: mov     byte ptr [esp+28h+var_4], 1
0x5C4F3C: mov     dword ptr ds:0B3B5D4h, 0C8h ; 'È'
0x5C4F46: mov     [esi+8C8h], eax
0x5C4F4C: mov     [esi+8D0h], bl
0x5C4F52: call    FormHeapAlloc
0x5C4F57: add     esp, 4
0x5C4F5A: mov     [esp+24h+var_10], eax
0x5C4F5E: cmp     eax, ebx
0x5C4F60: mov     byte ptr [esp+24h+var_4], 2
0x5C4F65: jz      short loc_5C4F86
0x5C4F67: push    offset sub_43ACE0; a5
0x5C4F6C: push    offset sub_43EB30; a4
0x5C4F71: push    4; size
0x5C4F73: lea     edi, [eax+4]
0x5C4F76: push    18h; a2
0x5C4F78: push    edi; a1
0x5C4F79: mov     dword ptr [eax], 4
0x5C4F7F: call    ArrayConstructor
0x5C4F84: jmp     short loc_5C4F88
0x5C4F86: xor     edi, edi
0x5C4F88: push    64h ; 'd'; Size
0x5C4F8A: mov     byte ptr [esp+28h+var_4], 1
0x5C4F8F: mov     [esi+8D4h], edi
0x5C4F95: call    FormHeapAlloc
0x5C4F9A: add     esp, 4
0x5C4F9D: mov     [esp+24h+var_10], eax
0x5C4FA1: cmp     eax, ebx
0x5C4FA3: mov     byte ptr [esp+24h+var_4], 3
0x5C4FA8: jz      short loc_5C4FC9
0x5C4FAA: push    offset sub_43ACE0; a5
0x5C4FAF: push    offset sub_43EB30; a4
0x5C4FB4: push    4; size
0x5C4FB6: lea     edi, [eax+4]
0x5C4FB9: push    18h; a2
0x5C4FBB: push    edi; a1
0x5C4FBC: mov     dword ptr [eax], 4
0x5C4FC2: call    ArrayConstructor
0x5C4FC7: jmp     short loc_5C4FCB
0x5C4FC9: xor     edi, edi
0x5C4FCB: fldz
0x5C4FCD: push    28h ; '('; Size
0x5C4FCF: fst     dword ptr [esi+8DCh]
0x5C4FD5: mov     byte ptr [esp+28h+var_4], 1
0x5C4FDA: fst     dword ptr [esi+8E0h]
0x5C4FE0: mov     [esi+8D8h], edi
0x5C4FE6: fst     dword ptr [esi+874h]
0x5C4FEC: mov     byte ptr [esi+868h], 1
0x5C4FF3: fst     dword ptr [esi+880h]
0x5C4FF9: mov     [esi+86Ch], ebx
0x5C4FFF: fstp    dword ptr [esi+884h]
0x5C5005: mov     [esi+870h], ebx
0x5C500B: mov     [esi+878h], ebx
0x5C5011: mov     [esi+87Ch], ebx
0x5C5017: call    FormHeapAlloc
0x5C501C: add     esp, 4
0x5C501F: mov     [esp+24h+var_10], eax
0x5C5023: cmp     eax, ebx
0x5C5025: mov     byte ptr [esp+24h+var_4], 4
0x5C502A: jz      short loc_5C5035
0x5C502C: mov     ecx, eax
0x5C502E: call    sub_57FE70
0x5C5033: jmp     short loc_5C5037
0x5C5035: xor     eax, eax
0x5C5037: push    1
0x5C5039: push    ebx
0x5C503A: push    ebx
0x5C503B: mov     [esi+8ECh], eax
0x5C5041: mov     [esi+864h], ebx
0x5C5047: mov     ecx, ds:0B33A1Ch
0x5C504D: push    offset aCharacters_m_0; "Characters\\_Male\\Skeleton.nif"
0x5C5052: mov     byte ptr [esp+34h+var_4], 1
0x5C5057: mov     ds:0B3B4C9h, bl
0x5C505D: mov     ds:0B3B4C8h, bl
0x5C5063: mov     ds:0B3B5D8h, bl
0x5C5069: call    sub_439EB0
0x5C506E: mov     ecx, ds:0B33A1Ch
0x5C5074: push    1
0x5C5076: push    ebx
0x5C5077: push    ebx
0x5C5078: push    offset aCharacters_m_1; "Characters\\_Male\\SkeletonBeast.nif"
0x5C507D: call    sub_439EB0
0x5C5082: mov     eax, esi
0x5C5084: mov     ecx, [esp+24h+var_C]
0x5C5088: mov     large fs:0, ecx
0x5C508F: pop     ecx
0x5C5090: pop     edi
0x5C5091: pop     esi
0x5C5092: pop     ebx
0x5C5093: add     esp, 14h
0x5C5096: retn
