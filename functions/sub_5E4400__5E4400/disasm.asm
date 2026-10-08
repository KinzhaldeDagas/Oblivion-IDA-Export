0x5E4400: push    esi
0x5E4401: add     ecx, 44h ; 'D'; this
0x5E4404: xor     esi, esi
0x5E4406: call    ExtraDataList_GetContainerChanges
0x5E440B: test    eax, eax
0x5E440D: jz      short loc_5E4417
0x5E440F: mov     ecx, eax
0x5E4411: pop     esi
0x5E4412: jmp     loc_4873A0
0x5E4417: mov     eax, esi
0x5E4419: pop     esi
0x5E441A: retn
0x4873A0: push    0FFFFFFFFh; RadiantAI: edible inventory/container-change helper used by sub_62DA10; returns edible Ingredient/AlchemyItem entry or null.
0x4873A2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4873A7: mov     eax, large fs:0
0x4873AD: push    eax
0x4873AE: push    ecx
0x4873AF: push    ebx
0x4873B0: push    ebp
0x4873B1: push    esi
0x4873B2: push    edi
0x4873B3: mov     eax, ds:0B30AACh
0x4873B8: xor     eax, esp
0x4873BA: push    eax
0x4873BB: lea     eax, [esp+24h+var_C]
0x4873BF: mov     large fs:0, eax
0x4873C5: mov     ebx, ecx
0x4873C7: mov     [esp+24h+var_10], ebx
0x4873CB: mov     ecx, [ebx+4]; this
0x4873CE: test    ecx, ecx
0x4873D0: jz      short loc_4873D9
0x4873D2: call    TESObjectREFR_GetContainer
0x4873D7: jmp     short loc_4873DB
0x4873D9: xor     eax, eax
0x4873DB: lea     esi, [eax+8]
0x4873DE: xor     ebp, ebp
0x4873E0: test    esi, esi
0x4873E2: jz      loc_4874EB
0x4873E8: cmp     dword ptr [esi+4], 0
0x4873EC: jnz     short loc_4873F7
0x4873EE: cmp     dword ptr [esi], 0
0x4873F1: jz      loc_4874EB
0x4873F7: mov     eax, [esi]
0x4873F9: mov     eax, [eax+4]
0x4873FC: push    0; int
0x4873FE: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x487403: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x487408: push    0; int
0x48740A: push    eax; void *
0x48740B: call    OblivionDynamicCast
0x487410: mov     edi, eax
0x487412: add     esp, 14h
0x487415: test    edi, edi
0x487417: jnz     short loc_487439
0x487419: mov     eax, [esi]
0x48741B: mov     ecx, [eax+4]
0x48741E: push    edi; int
0x48741F: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x487424: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x487429: push    edi; int
0x48742A: push    ecx; void *
0x48742B: call    OblivionDynamicCast
0x487430: mov     ebp, eax
0x487432: add     esp, 14h
0x487435: mov     ebx, ebp
0x487437: jmp     short loc_48743B
0x487439: mov     ebx, edi
0x48743B: test    ebp, ebp
0x48743D: jz      short loc_487451
0x48743F: test    byte ptr [ebp+7Ch], 2
0x487443: jz      short loc_487451
0x487445: lea     ecx, [ebp+30h]
0x487448: call    EffectItemList_AllEffectsHostile
0x48744D: test    al, al
0x48744F: jz      short loc_487463
0x487451: test    edi, edi
0x487453: jz      loc_4874DF
0x487459: test    byte ptr [edi+7Ch], 2
0x48745D: jz      loc_4874DF
0x487463: mov     edx, [esp+24h+var_10]
0x487467: mov     eax, [edx]
0x487469: test    eax, eax
0x48746B: mov     dl, 1
0x48746D: jz      short loc_48748A
0x48746F: nop
0x487470: test    dl, dl
0x487472: jz      short loc_4874C6
0x487474: mov     ecx, [eax]
0x487476: test    ecx, ecx
0x487478: jz      short loc_487483
0x48747A: cmp     [ecx+8], ebx
0x48747D: jnz     short loc_487483
0x48747F: xor     dl, dl
0x487481: jmp     short loc_487486
0x487483: mov     eax, [eax+4]
0x487486: test    eax, eax
0x487488: jnz     short loc_487470
0x48748A: push    0Ch; Size
0x48748C: call    FormHeapAlloc
0x487491: add     esp, 4
0x487494: mov     [esp+24h+var_10], eax
0x487498: test    eax, eax
0x48749A: mov     [esp+24h+var_4], 0
0x4874A2: jz      loc_487593
0x4874A8: push    0
0x4874AA: push    ebx
0x4874AB: mov     ecx, eax
0x4874AD: call    ContainerEntryExtraData_constr
0x4874B2: mov     ecx, [esp+24h+var_C]
0x4874B6: mov     large fs:0, ecx
0x4874BD: pop     ecx
0x4874BE: pop     edi
0x4874BF: pop     esi
0x4874C0: pop     ebp
0x4874C1: pop     ebx
0x4874C2: add     esp, 10h
0x4874C5: retn
0x4874C6: test    eax, eax
0x4874C8: jz      short loc_48748A
0x4874CA: mov     eax, [eax]
0x4874CC: test    eax, eax
0x4874CE: jz      short loc_48748A
0x4874D0: mov     edx, [esi]
0x4874D2: mov     ecx, [eax+4]
0x4874D5: mov     edx, [edx]
0x4874D7: add     edx, ecx
0x4874D9: jnz     loc_487595
0x4874DF: mov     esi, [esi+4]
0x4874E2: mov     ebx, [esp+24h+var_10]
0x4874E6: jmp     loc_4873E0
0x4874EB: mov     esi, [ebx]
0x4874ED: test    esi, esi
0x4874EF: jz      loc_487593
0x4874F5: cmp     dword ptr [esi+4], 0
0x4874F9: jnz     short loc_487504
0x4874FB: cmp     dword ptr [esi], 0
0x4874FE: jz      loc_487593
0x487504: mov     eax, [esi]
0x487506: mov     eax, [eax+8]
0x487509: push    0; int
0x48750B: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x487510: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x487515: push    0; int
0x487517: push    eax; void *
0x487518: call    OblivionDynamicCast
0x48751D: add     esp, 14h
0x487520: test    eax, eax
0x487522: jnz     short loc_487546
0x487524: mov     eax, [esi]
0x487526: mov     ecx, [eax+8]
0x487529: push    0; int
0x48752B: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x487530: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x487535: push    0; int
0x487537: push    ecx; void *
0x487538: call    OblivionDynamicCast
0x48753D: mov     ebp, eax
0x48753F: add     esp, 14h
0x487542: mov     edi, ebp
0x487544: jmp     short loc_48754E
0x487546: test    byte ptr [eax+7Ch], 2
0x48754A: mov     edi, eax
0x48754C: jnz     short loc_487564
0x48754E: test    ebp, ebp
0x487550: jz      short loc_487588
0x487552: test    byte ptr [ebp+7Ch], 2
0x487556: jz      short loc_487588
0x487558: lea     ecx, [ebp+30h]
0x48755B: call    EffectItemList_AllEffectsHostile
0x487560: test    al, al
0x487562: jnz     short loc_487588
0x487564: mov     ecx, [ebx+4]; this
0x487567: test    ecx, ecx
0x487569: jz      short loc_487572
0x48756B: call    TESObjectREFR_GetContainer
0x487570: jmp     short loc_487574
0x487572: xor     eax, eax
0x487574: push    edi; a2
0x487575: mov     ecx, eax; this
0x487577: call    TESContainer_HasForm
0x48757C: test    al, al
0x48757E: jnz     short loc_487588
0x487580: mov     edx, [esi]
0x487582: cmp     dword ptr [edx+4], 0
0x487586: jg      short loc_4875A9
0x487588: mov     esi, [esi+4]
0x48758B: test    esi, esi
0x48758D: jnz     loc_4874F5
0x487593: xor     eax, eax
0x487595: mov     ecx, [esp+24h+var_C]
0x487599: mov     large fs:0, ecx
0x4875A0: pop     ecx
0x4875A1: pop     edi
0x4875A2: pop     esi
0x4875A3: pop     ebp
0x4875A4: pop     ebx
0x4875A5: add     esp, 10h
0x4875A8: retn
0x4875A9: mov     eax, edx
0x4875AB: mov     ecx, [esp+24h+var_C]
0x4875AF: mov     large fs:0, ecx
0x4875B6: pop     ecx
0x4875B7: pop     edi
0x4875B8: pop     esi
0x4875B9: pop     ebp
0x4875BA: pop     ebx
0x4875BB: add     esp, 10h
0x4875BE: retn
0x9CAD70: mov     eax, [ebp-10h]
0x9CAD73: push    eax
0x9CAD74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CAD79: pop     ecx
0x9CAD7A: retn
0x9CAD7B: mov     edx, [esp+arg_4]
0x9CAD7F: lea     eax, [edx-14h]
0x9CAD82: mov     ecx, [edx-18h]
0x9CAD85: xor     ecx, eax
0x9CAD87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAD8C: mov     eax, offset stru_AF3390
0x9CAD91: jmp     ___CxxFrameHandler3
