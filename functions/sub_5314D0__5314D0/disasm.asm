0x5314D0: push    0FFFFFFFFh
0x5314D2: push    offset SEH_5314D0
0x5314D7: mov     eax, large fs:0
0x5314DD: push    eax
0x5314DE: sub     esp, 230h
0x5314E4: mov     eax, ds:0B30AACh
0x5314E9: xor     eax, esp
0x5314EB: mov     [esp+23Ch+var_10], eax
0x5314F2: push    ebx
0x5314F3: push    ebp
0x5314F4: push    esi
0x5314F5: push    edi
0x5314F6: mov     eax, ds:0B30AACh
0x5314FB: xor     eax, esp
0x5314FD: push    eax
0x5314FE: lea     eax, [esp+250h+var_C]
0x531505: mov     large fs:0, eax
0x53150B: mov     ebx, [esp+250h+arg_0]
0x531512: mov     ebp, ecx
0x531514: xor     esi, esi
0x531516: cmp     ebx, esi
0x531518: lea     edi, [ebp+8]
0x53151B: mov     [esp+250h+a1.member.modlist.data], ebp
0x53151F: mov     [esp+250h+a1.member.modlist.next], ebx
0x531523: mov     dword ptr [esp+250h+a1.member.type], esi
0x531527: mov     [esp+250h+var_23C], edi
0x53152B: jz      short loc_53153C
0x53152D: push    0FFFFFFFFh; a2
0x53152F: mov     ecx, ebx; this
0x531531: call    TESForm_GetOverrideFile
0x531536: mov     [esp+250h+a1.member.refID], eax
0x53153A: jmp     short loc_531540
0x53153C: mov     [esp+250h+a1.member.refID], esi
0x531540: cmp     edi, esi
0x531542: jz      loc_5316C3
0x531548: jmp     short loc_531554
0x53154A: align 10h
0x531550: mov     edi, [esp+250h+var_23C]
0x531554: mov     eax, [edi]
0x531556: cmp     eax, esi
0x531558: jz      loc_5316C3
0x53155E: mov     [esp+250h+a1.member.flags], eax
0x531562: mov     eax, [esp+250h+a1.member.refID]
0x531566: push    eax; a2
0x531567: lea     ecx, [esp+254h+a1.member.flags]
0x53156B: push    ecx; a1
0x53156C: call    TESForm_ResolveFormID
0x531571: mov     edx, [esp+258h+a1.member.flags]
0x531575: add     esp, 8
0x531578: push    esi; int
0x531579: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x53157E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x531583: push    esi; int
0x531584: push    edx; a1
0x531585: call    TESForm_LookupByFormID
0x53158A: add     esp, 4
0x53158D: push    eax; void *
0x53158E: call    OblivionDynamicCast
0x531593: add     esp, 14h
0x531596: cmp     eax, esi
0x531598: jnz     loc_5316AC
0x53159E: mov     eax, [edi+4]
0x5315A1: cmp     eax, esi
0x5315A3: jnz     short loc_5315C6
0x5315A5: mov     ebp, dword ptr [esp+250h+a1.member.type]
0x5315A9: cmp     ebp, esi
0x5315AB: jz      short loc_5315C2
0x5315AD: mov     eax, [esp+250h+a1.member.flags]
0x5315B1: push    eax
0x5315B2: mov     ecx, ebp
0x5315B4: call    BSSimpleList_Remove
0x5315B9: mov     ecx, [ebp+4]
0x5315BC: mov     [esp+250h+var_23C], ecx
0x5315C0: jmp     short loc_5315DD
0x5315C2: cmp     eax, esi
0x5315C4: jz      short loc_5315DB
0x5315C6: mov     edx, [eax+4]
0x5315C9: mov     [edi+4], edx
0x5315CC: mov     ecx, [eax]
0x5315CE: push    eax
0x5315CF: mov     [edi], ecx
0x5315D1: call    FormHeapFree
0x5315D6: add     esp, 4
0x5315D9: jmp     short loc_5315DD
0x5315DB: mov     [edi], esi
0x5315DD: push    esi; int
0x5315DE: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x5315E3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5315E8: push    esi; int
0x5315E9: push    ebx; void *
0x5315EA: call    OblivionDynamicCast
0x5315EF: mov     edi, eax
0x5315F1: push    edi
0x5315F2: call    TESTopic_static_GetTopicInfoParent?
0x5315F7: add     esp, 18h
0x5315FA: mov     ebx, eax
0x5315FC: push    edi
0x5315FD: mov     ecx, ebx
0x5315FF: call    sub_52F570
0x531604: mov     ebp, eax
0x531606: mov     [esp+250h+var_238], esi
0x53160A: mov     [esp+250h+var_234], si
0x53160F: mov     [esp+250h+var_232], si
0x531614: push    1
0x531616: lea     edx, [esp+254h+var_238]
0x53161A: push    edx
0x53161B: mov     ecx, edi
0x53161D: mov     [esp+258h+var_4], esi
0x531624: call    sub_531200
0x531629: mov     eax, [ebx+0Ch]
0x53162C: mov     ecx, [ebp+0Ch]
0x53162F: mov     edx, [ebx]
0x531631: mov     edi, [edi+0Ch]
0x531634: mov     [esp+250h+a1.vtbl], ecx
0x531638: push    eax
0x531639: mov     eax, [edx+0D4h]
0x53163F: mov     ecx, ebx
0x531641: call    eax
0x531643: mov     ecx, [esp+254h+a1.vtbl]
0x531647: mov     edx, [ebp+0]
0x53164A: push    eax
0x53164B: mov     eax, [edx+0D4h]
0x531651: push    ecx
0x531652: mov     ecx, ebp
0x531654: call    eax
0x531656: mov     ebx, [esp+25Ch+var_238]
0x53165A: push    eax
0x53165B: push    ebx
0x53165C: push    edi
0x53165D: lea     ecx, [esp+268h+var_218]
0x531661: push    offset aTopicinfo08xSI; "TopicInfo %08X \"%s\" in Quest %s (%08x"...
0x531666: push    ecx
0x531667: call    __sprintf
0x53166C: mov     eax, [esp+270h+a1.member.flags]
0x531670: lea     edx, [esp+270h+var_218]
0x531674: push    edx
0x531675: push    eax; ArgList
0x531676: push    offset aUnableToFindTo; "Unable to find topic (%08X) for convers"...
0x53167B: call    PrintError
0x531680: push    ebx
0x531681: mov     [esp+280h+var_4], 0FFFFFFFFh
0x53168C: call    FormHeapFree
0x531691: mov     ebp, [esp+280h+a1.member.modlist.data]
0x531695: mov     ebx, [esp+280h+a1.member.modlist.next]
0x531699: add     esp, 30h
0x53169C: mov     [esp+250h+var_238], esi
0x5316A0: mov     [esp+250h+var_232], si
0x5316A5: mov     [esp+250h+var_234], si
0x5316AA: jmp     short loc_5316B9
0x5316AC: mov     ecx, [edi+4]
0x5316AF: mov     [edi], eax
0x5316B1: mov     dword ptr [esp+250h+a1.member.type], edi
0x5316B5: mov     [esp+250h+var_23C], ecx
0x5316B9: cmp     [esp+250h+var_23C], esi
0x5316BD: jnz     loc_531550
0x5316C3: cmp     ebp, esi
0x5316C5: mov     edi, ebp
0x5316C7: mov     dword ptr [esp+250h+a1.member.type], esi
0x5316CB: mov     [esp+250h+var_23C], edi
0x5316CF: jz      loc_531850
0x5316D5: jmp     short loc_5316DB
0x5316D7: mov     edi, [esp+250h+var_23C]
0x5316DB: mov     eax, [edi]
0x5316DD: cmp     eax, esi
0x5316DF: jz      loc_531850
0x5316E5: mov     edx, [esp+250h+a1.member.refID]
0x5316E9: mov     [esp+250h+a1.vtbl], eax
0x5316ED: push    edx; a2
0x5316EE: lea     eax, [esp+254h+a1]
0x5316F2: push    eax; a1
0x5316F3: call    TESForm_ResolveFormID
0x5316F8: mov     ecx, [esp+258h+a1.vtbl]
0x5316FC: add     esp, 8
0x5316FF: push    esi; int
0x531700: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x531705: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x53170A: push    esi; int
0x53170B: push    ecx; a1
0x53170C: call    TESForm_LookupByFormID
0x531711: add     esp, 4
0x531714: push    eax; void *
0x531715: call    OblivionDynamicCast
0x53171A: add     esp, 14h
0x53171D: cmp     eax, esi
0x53171F: jnz     loc_531839
0x531725: mov     eax, [edi+4]
0x531728: cmp     eax, esi
0x53172A: jnz     short loc_53174D
0x53172C: mov     ebp, dword ptr [esp+250h+a1.member.type]
0x531730: cmp     ebp, esi
0x531732: jz      short loc_531749
0x531734: mov     edx, [esp+250h+a1.vtbl]
0x531738: push    edx
0x531739: mov     ecx, ebp
0x53173B: call    BSSimpleList_Remove
0x531740: mov     eax, [ebp+4]
0x531743: mov     [esp+250h+var_23C], eax
0x531747: jmp     short loc_531764
0x531749: cmp     eax, esi
0x53174B: jz      short loc_531762
0x53174D: mov     ecx, [eax+4]
0x531750: mov     [edi+4], ecx
0x531753: mov     edx, [eax]
0x531755: push    eax
0x531756: mov     [edi], edx
0x531758: call    FormHeapFree
0x53175D: add     esp, 4
0x531760: jmp     short loc_531764
0x531762: mov     [edi], esi
0x531764: push    esi; int
0x531765: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x53176A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x53176F: push    esi; int
0x531770: push    ebx; void *
0x531771: call    OblivionDynamicCast
0x531776: mov     edi, eax
0x531778: push    edi
0x531779: call    TESTopic_static_GetTopicInfoParent?
0x53177E: add     esp, 18h
0x531781: mov     ebx, eax
0x531783: push    edi
0x531784: mov     ecx, ebx
0x531786: call    sub_52F570
0x53178B: mov     ebp, eax
0x53178D: mov     [esp+250h+var_238], esi
0x531791: mov     [esp+250h+var_234], si
0x531796: mov     [esp+250h+var_232], si
0x53179B: push    1
0x53179D: lea     eax, [esp+254h+var_238]
0x5317A1: push    eax
0x5317A2: mov     ecx, edi
0x5317A4: mov     [esp+258h+var_4], 1
0x5317AF: call    sub_531200
0x5317B4: mov     eax, [ebx+0Ch]
0x5317B7: mov     ecx, [ebp+0Ch]
0x5317BA: mov     edx, [ebx]
0x5317BC: mov     edi, [edi+0Ch]
0x5317BF: mov     [esp+250h+a1.member.modlist.data], ecx
0x5317C3: push    eax
0x5317C4: mov     eax, [edx+0D4h]
0x5317CA: mov     ecx, ebx
0x5317CC: call    eax
0x5317CE: mov     ecx, [esp+254h+a1.member.modlist.data]
0x5317D2: mov     edx, [ebp+0]
0x5317D5: push    eax
0x5317D6: mov     eax, [edx+0D4h]
0x5317DC: push    ecx
0x5317DD: mov     ecx, ebp
0x5317DF: call    eax
0x5317E1: mov     ebx, [esp+25Ch+var_238]
0x5317E5: push    eax
0x5317E6: push    ebx
0x5317E7: push    edi
0x5317E8: lea     ecx, [esp+268h+var_114]
0x5317EF: push    offset aTopicinfo08xSI; "TopicInfo %08X \"%s\" in Quest %s (%08x"...
0x5317F4: push    ecx
0x5317F5: call    __sprintf
0x5317FA: mov     eax, [esp+270h+a1.vtbl]
0x5317FE: lea     edx, [esp+270h+var_114]
0x531805: push    edx
0x531806: push    eax; ArgList
0x531807: push    offset aUnableToFin_26; "Unable to find topic (%08X) for convers"...
0x53180C: call    PrintError
0x531811: push    ebx
0x531812: mov     [esp+280h+var_4], 0FFFFFFFFh
0x53181D: call    FormHeapFree
0x531822: mov     ebx, [esp+280h+a1.member.modlist.next]
0x531826: add     esp, 30h
0x531829: mov     [esp+250h+var_238], esi
0x53182D: mov     [esp+250h+var_232], si
0x531832: mov     [esp+250h+var_234], si
0x531837: jmp     short loc_531846
0x531839: mov     ecx, [edi+4]
0x53183C: mov     [edi], eax
0x53183E: mov     dword ptr [esp+250h+a1.member.type], edi
0x531842: mov     [esp+250h+var_23C], ecx
0x531846: cmp     [esp+250h+var_23C], esi
0x53184A: jnz     loc_5316D7
0x531850: mov     ecx, [esp+250h+var_C]
0x531857: mov     large fs:0, ecx
0x53185E: pop     ecx
0x53185F: pop     edi
0x531860: pop     esi
0x531861: pop     ebp
0x531862: pop     ebx
0x531863: mov     ecx, [esp+23Ch+var_10]
0x53186A: xor     ecx, esp
0x53186C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x531871: add     esp, 23Ch
0x531877: retn    4
