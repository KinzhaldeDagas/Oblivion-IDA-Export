0x50C330: mov     eax, [esp+arg_8]
0x50C334: fldz
0x50C336: push    esi
0x50C337: mov     esi, [esp+4+arg_18]
0x50C33B: push    0; int
0x50C33D: fstp    qword ptr [esi]
0x50C33F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C344: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C349: push    0; int
0x50C34B: push    eax; void *
0x50C34C: call    OblivionDynamicCast
0x50C351: add     esp, 14h
0x50C354: test    eax, eax
0x50C356: jz      short loc_50C365
0x50C358: cmp     byte ptr [eax+0C9h], 0
0x50C35F: jz      short loc_50C365
0x50C361: fld1
0x50C363: fstp    qword ptr [esi]
0x50C365: cmp     byte ptr ds:0B361ACh, 0
0x50C36C: jz      short loc_50C383
0x50C36E: fld     qword ptr [esi]
0x50C370: sub     esp, 8
0x50C373: fstp    [esp+0Ch+var_C]
0x50C376: push    offset aGetforcesneak0; "GetForceSneak >> %0.2f"
0x50C37B: call    Interface_ConsolePrint
0x50C380: add     esp, 0Ch
0x50C383: mov     al, 1
0x50C385: pop     esi
0x50C386: retn
