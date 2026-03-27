0x50C070: mov     eax, [esp+arg_8]
0x50C074: fldz
0x50C076: push    esi
0x50C077: mov     esi, [esp+4+arg_18]
0x50C07B: push    0; int
0x50C07D: fstp    qword ptr [esi]
0x50C07F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C084: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C089: push    0; int
0x50C08B: push    eax; void *
0x50C08C: call    OblivionDynamicCast
0x50C091: add     esp, 14h
0x50C094: test    eax, eax
0x50C096: mov     [esp+4+arg_18], 0
0x50C09E: jz      short loc_50C0C5
0x50C0A0: mov     edx, [eax]
0x50C0A2: mov     ecx, eax
0x50C0A4: mov     eax, [edx+338h]
0x50C0AA: call    eax
0x50C0AC: test    eax, eax
0x50C0AE: jz      short loc_50C0C5
0x50C0B0: mov     ecx, [eax+0Ch]
0x50C0B3: lea     edx, [esp+4+arg_18]
0x50C0B7: push    esi
0x50C0B8: push    edx
0x50C0B9: mov     [esp+0Ch+arg_18], ecx
0x50C0BD: call    sub_4F9FB0
0x50C0C2: add     esp, 8
0x50C0C5: cmp     byte ptr ds:0B361ACh, 0
0x50C0CC: pop     esi
0x50C0CD: jz      short loc_50C0E1
0x50C0CF: mov     eax, [esp+arg_18]
0x50C0D3: push    eax
0x50C0D4: push    offset aGetcombattarge; "GetCombatTarget >> (%08x)"
0x50C0D9: call    Interface_ConsolePrint
0x50C0DE: add     esp, 8
0x50C0E1: mov     al, 1
0x50C0E3: retn
