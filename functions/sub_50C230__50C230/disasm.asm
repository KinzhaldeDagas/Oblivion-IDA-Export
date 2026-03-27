0x50C230: mov     eax, [esp+arg_8]
0x50C234: fldz
0x50C236: push    esi
0x50C237: mov     esi, [esp+4+arg_18]
0x50C23B: push    0; int
0x50C23D: fstp    qword ptr [esi]
0x50C23F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C244: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C249: push    0; int
0x50C24B: push    eax; void *
0x50C24C: call    OblivionDynamicCast
0x50C251: add     esp, 14h
0x50C254: test    eax, eax
0x50C256: jz      short loc_50C265
0x50C258: cmp     byte ptr [eax+0C8h], 0
0x50C25F: jz      short loc_50C265
0x50C261: fld1
0x50C263: fstp    qword ptr [esi]
0x50C265: cmp     byte ptr ds:0B361ACh, 0
0x50C26C: jz      short loc_50C283
0x50C26E: fld     qword ptr [esi]
0x50C270: sub     esp, 8
0x50C273: fstp    [esp+0Ch+var_C]
0x50C276: push    offset aGetforcerun0_2; "GetForceRun >> %0.2f"
0x50C27B: call    Interface_ConsolePrint
0x50C280: add     esp, 0Ch
0x50C283: mov     al, 1
0x50C285: pop     esi
0x50C286: retn
