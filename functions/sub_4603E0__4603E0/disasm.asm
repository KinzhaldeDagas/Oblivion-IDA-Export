0x4603E0: push    0FFFFFFFFh
0x4603E2: push    offset SEH_4603E0
0x4603E7: mov     eax, large fs:0
0x4603ED: push    eax
0x4603EE: push    ebx
0x4603EF: push    ebp
0x4603F0: push    esi
0x4603F1: push    edi
0x4603F2: mov     eax, ds:0B30AACh
0x4603F7: xor     eax, esp
0x4603F9: push    eax
0x4603FA: lea     eax, [esp+20h+var_C]
0x4603FE: mov     large fs:0, eax
0x460404: mov     ebp, ecx
0x460406: mov     eax, [esp+20h+a1]
0x46040A: push    eax; a1
0x46040B: call    TESForm_LookupByFormID
0x460410: mov     edi, [esp+24h+arg_4]
0x460414: add     esp, 4
0x460417: xor     ebx, ebx
0x460419: cmp     dword ptr [edi], 2
0x46041C: mov     esi, eax
0x46041E: jz      short loc_460464
0x460420: mov     ecx, [edi+4]
0x460423: push    ebx; int
0x460424: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x460429: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46042E: push    ebx; int
0x46042F: push    ecx; a1
0x460430: call    TESForm_LookupByFormID
0x460435: add     esp, 4
0x460438: push    eax; void *
0x460439: call    OblivionDynamicCast
0x46043E: mov     ebx, eax
0x460440: add     esp, 14h
0x460443: test    ebx, ebx
0x460445: jnz     short loc_460464
0x460447: mov     edx, [esp+20h+a1]
0x46044B: mov     eax, [edi+4]
0x46044E: push    edx
0x46044F: push    eax; ArgList
0x460450: push    offset aBoundObject08x; "Bound object %08X no longer exists.  Re"...
0x460455: call    PrintError
0x46045A: add     esp, 0Ch
0x46045D: xor     eax, eax
0x46045F: jmp     loc_4606AB
0x460464: test    esi, esi
0x460466: jz      short loc_4604AC
0x460468: push    0; int
0x46046A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46046F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460474: push    0; int
0x460476: push    esi; void *
0x460477: call    OblivionDynamicCast
0x46047C: add     esp, 14h
0x46047F: test    eax, eax
0x460481: jz      short loc_4604A2
0x460483: mov     ecx, [edi]
0x460485: test    ecx, ecx
0x460487: jz      short loc_46048E
0x460489: cmp     ecx, 3
0x46048C: jnz     short loc_4604A2
0x46048E: mov     edx, [eax]
0x460490: mov     ecx, eax
0x460492: mov     eax, [edx+170h]
0x460498: call    eax
0x46049A: cmp     eax, ebx
0x46049C: jz      loc_4606A2
0x4604A2: push    esi
0x4604A3: mov     ecx, ebp
0x4604A5: call    sub_45C7A0
0x4604AA: xor     esi, esi
0x4604AC: mov     eax, [edi]
0x4604AE: test    eax, eax
0x4604B0: jz      loc_4605E8
0x4604B6: cmp     eax, 3
0x4604B9: jz      loc_4605E8
0x4604BF: cmp     eax, 1
0x4604C2: jnz     short loc_460521
0x4604C4: push    9Ch ; 'œ'; Size
0x4604C9: call    FormHeapAlloc
0x4604CE: add     esp, 4
0x4604D1: mov     [esp+20h+arg_4], eax
0x4604D5: test    eax, eax
0x4604D7: mov     [esp+20h+var_4], 3
0x4604DF: jz      short loc_4604EC
0x4604E1: mov     ecx, eax
0x4604E3: call    sub_6078E0
0x4604E8: mov     esi, eax
0x4604EA: jmp     short loc_4604EE
0x4604EC: xor     esi, esi
0x4604EE: push    0; int
0x4604F0: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4604F5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4604FA: push    0; int
0x4604FC: push    esi; void *
0x4604FD: mov     [esp+34h+var_4], 0FFFFFFFFh
0x460505: call    OblivionDynamicCast
0x46050A: add     esp, 14h
0x46050D: push    ebx; a2
0x46050E: mov     ecx, eax; this
0x460510: call    TESObjectREFR_SetBaseForm
0x460515: mov     ecx, [esp+20h+a1]
0x460519: push    1
0x46051B: push    ecx
0x46051C: jmp     loc_460697
0x460521: cmp     eax, 2
0x460524: jnz     loc_4605C8
0x46052A: mov     edi, [edi+4]
0x46052D: xor     ecx, ecx
0x46052F: sub     edi, ecx
0x460531: jz      short loc_460588
0x460533: sub     edi, 1
0x460536: jz      short loc_460562
0x460538: sub     edi, eax
0x46053A: jnz     short loc_4605BA
0x46053C: push    9Ch ; 'œ'; Size
0x460541: call    FormHeapAlloc
0x460546: add     esp, 4
0x460549: mov     [esp+20h+arg_4], eax
0x46054D: test    eax, eax
0x46054F: mov     [esp+20h+var_4], 5
0x460557: jz      short loc_4605AE
0x460559: mov     ecx, eax; a1
0x46055B: call    MagicForProjectile__MagicFogProjectile
0x460560: jmp     short loc_4605B0
0x460562: push    0A4h ; '¤'; Size
0x460567: call    FormHeapAlloc
0x46056C: add     esp, 4
0x46056F: mov     [esp+20h+arg_4], eax
0x460573: test    eax, eax
0x460575: mov     [esp+20h+var_4], 6
0x46057D: jz      short loc_4605AE
0x46057F: mov     ecx, eax
0x460581: call    MagicBoltProjectile__MagicBoltProjectile
0x460586: jmp     short loc_4605B0
0x460588: push    90h; Size
0x46058D: call    FormHeapAlloc
0x460592: add     esp, 4
0x460595: mov     [esp+20h+arg_4], eax
0x460599: test    eax, eax
0x46059B: mov     [esp+20h+var_4], 4
0x4605A3: jz      short loc_4605AE
0x4605A5: mov     ecx, eax
0x4605A7: call    MagicBallProjectile__MagicBallProjectile
0x4605AC: jmp     short loc_4605B0
0x4605AE: xor     eax, eax
0x4605B0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4605B8: mov     ecx, eax
0x4605BA: mov     edx, [esp+20h+a1]
0x4605BE: push    1
0x4605C0: mov     esi, ecx
0x4605C2: push    edx
0x4605C3: jmp     loc_460699
0x4605C8: mov     ecx, [edi+8]
0x4605CB: mov     edx, [edi+4]
0x4605CE: push    ecx
0x4605CF: mov     ecx, [esp+24h+a1]
0x4605D3: push    edx
0x4605D4: push    ecx
0x4605D5: push    eax; ArgList
0x4605D6: push    offset aInvalidCreated; "Invalid created reference type %i for f"...
0x4605DB: call    PrintError
0x4605E0: add     esp, 14h
0x4605E3: jmp     loc_46069E
0x4605E8: movzx   eax, byte ptr [ebx+4]
0x4605EC: sub     eax, 23h ; '#'
0x4605EF: jz      short loc_46063F
0x4605F1: sub     eax, 1
0x4605F4: jz      short loc_460619
0x4605F6: push    58h ; 'X'; Size
0x4605F8: call    FormHeapAlloc
0x4605FD: add     esp, 4
0x460600: mov     [esp+20h+arg_4], eax
0x460604: test    eax, eax
0x460606: mov     [esp+20h+var_4], 2
0x46060E: jz      short loc_460665
0x460610: mov     ecx, eax; this
0x460612: call    TESObjectREFR_constr
0x460617: jmp     short loc_460667
0x460619: push    108h; Size
0x46061E: call    FormHeapAlloc
0x460623: add     esp, 4
0x460626: mov     [esp+20h+arg_4], eax
0x46062A: test    eax, eax
0x46062C: mov     [esp+20h+var_4], 1
0x460634: jz      short loc_460665
0x460636: mov     ecx, eax
0x460638: call    Creature_constr
0x46063D: jmp     short loc_460667
0x46063F: push    10Ch; Size
0x460644: call    FormHeapAlloc
0x460649: add     esp, 4
0x46064C: mov     [esp+20h+arg_4], eax
0x460650: test    eax, eax
0x460652: mov     [esp+20h+var_4], 0
0x46065A: jz      short loc_460665
0x46065C: mov     ecx, eax
0x46065E: call    Character_constr
0x460663: jmp     short loc_460667
0x460665: xor     eax, eax
0x460667: push    0; int
0x460669: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46066E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460673: mov     esi, eax
0x460675: push    0; int
0x460677: push    esi; void *
0x460678: mov     [esp+34h+var_4], 0FFFFFFFFh
0x460680: call    OblivionDynamicCast
0x460685: add     esp, 14h
0x460688: push    ebx; a2
0x460689: mov     ecx, eax; this
0x46068B: call    TESObjectREFR_SetBaseForm
0x460690: mov     edx, [esp+20h+a1]
0x460694: push    1; a3
0x460696: push    edx; a2
0x460697: mov     ecx, esi; this
0x460699: call    TESForm_SetFormID
0x46069E: test    esi, esi
0x4606A0: jz      short loc_4606A9
0x4606A2: or      dword ptr [esi+8], 200000h
0x4606A9: mov     eax, esi
0x4606AB: mov     ecx, dword ptr [esp+20h+var_C]
0x4606AF: mov     large fs:0, ecx
0x4606B6: pop     ecx
0x4606B7: pop     edi
0x4606B8: pop     esi
0x4606B9: pop     ebp
0x4606BA: pop     ebx
0x4606BB: add     esp, 0Ch
0x4606BE: retn    8
