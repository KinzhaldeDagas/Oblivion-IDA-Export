0x6516D0: push    ebx
0x6516D1: push    esi
0x6516D2: mov     esi, [esp+8+arg_8]
0x6516D6: push    edi
0x6516D7: push    0; int
0x6516D9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6516DE: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6516E3: push    0; int
0x6516E5: push    esi; void *
0x6516E6: mov     edi, ecx
0x6516E8: call    OblivionDynamicCast
0x6516ED: add     esp, 14h
0x6516F0: push    esi
0x6516F1: mov     esi, [esp+10h+arg_0]
0x6516F5: mov     ebx, eax
0x6516F7: mov     eax, [esp+10h+arg_4]
0x6516FB: push    eax
0x6516FC: push    esi
0x6516FD: mov     ecx, edi
0x6516FF: call    LowProcess_LinkMagicData?
0x651704: mov     ecx, [edi+0C0h]
0x65170A: test    ecx, ecx
0x65170C: jz      short loc_651720
0x65170E: test    esi, 80000h
0x651714: jz      short loc_651720
0x651716: mov     edx, [ecx]
0x651718: mov     eax, [edx+0E8h]
0x65171E: call    eax
0x651720: mov     eax, [edi+13Ch]
0x651726: test    eax, eax
0x651728: jz      short loc_651750
0x65172A: push    0; int
0x65172C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x651731: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x651736: push    0; int
0x651738: push    eax; a1
0x651739: call    TESForm_LookupByFormID
0x65173E: add     esp, 4
0x651741: push    eax; void *
0x651742: call    OblivionDynamicCast
0x651747: add     esp, 14h
0x65174A: mov     [edi+13Ch], eax
0x651750: mov     eax, [edi+120h]
0x651756: test    eax, eax
0x651758: jz      short MiddleHighProc_LinkMagicData?___LinkActiveMagicItem
0x65175A: push    0; int
0x65175C: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x651761: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x651766: push    0; int
0x651768: push    eax; a1
0x651769: call    TESForm_LookupByFormID
0x65176E: add     esp, 4
0x651771: push    eax; void *
0x651772: call    OblivionDynamicCast
0x651777: add     esp, 14h
0x65177A: mov     [edi+120h], eax
