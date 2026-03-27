0x508340: mov     eax, [esp+arg_8]
0x508344: push    esi
0x508345: push    0; int
0x508347: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50834C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x508351: push    0; int
0x508353: push    eax; void *
0x508354: call    OblivionDynamicCast
0x508359: mov     esi, eax
0x50835B: add     esp, 14h
0x50835E: test    esi, esi
0x508360: jz      short loc_5083AD
0x508362: lea     ecx, [esi+44h]
0x508365: call    sub_41F070
0x50836A: cmp     byte ptr ds:0B361ACh, 0
0x508371: jz      short loc_5083AD
0x508373: test    eax, eax
0x508375: jz      short loc_508398
0x508377: mov     ecx, eax; this
0x508379: call    TESObjectREFR_GetName
0x50837E: push    eax
0x50837F: mov     ecx, esi; this
0x508381: call    TESObjectREFR_GetName
0x508386: push    eax
0x508387: push    offset aSSetToLookAtS; "%s set to look at %s"
0x50838C: call    Interface_ConsolePrint
0x508391: add     esp, 0Ch
0x508394: mov     al, 1
0x508396: pop     esi
0x508397: retn
0x508398: mov     ecx, esi; this
0x50839A: call    TESObjectREFR_GetName
0x50839F: push    eax
0x5083A0: push    offset aSSetToNotLookA; "%s set to not look at anyone"
0x5083A5: call    Interface_ConsolePrint
0x5083AA: add     esp, 8
0x5083AD: mov     al, 1
0x5083AF: pop     esi
0x5083B0: retn
