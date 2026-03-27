0x501180: mov     eax, [esp+arg_8]
0x501184: push    0; int
0x501186: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50118B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501190: push    0; int
0x501192: push    eax; void *
0x501193: call    OblivionDynamicCast
0x501198: add     esp, 14h
0x50119B: test    eax, eax
0x50119D: jz      short loc_5011E6
0x50119F: cmp     byte ptr [eax+78h], 0
0x5011A3: jnz     short loc_5011AF
0x5011A5: fld1
0x5011A7: mov     ecx, [esp+arg_18]
0x5011AB: fstp    qword ptr [ecx]
0x5011AD: jmp     short loc_5011B7
0x5011AF: fldz
0x5011B1: mov     edx, [esp+arg_18]
0x5011B5: fstp    qword ptr [edx]
0x5011B7: cmp     byte ptr ds:0B361ACh, 0
0x5011BE: jz      short loc_5011E6
0x5011C0: cmp     byte ptr [eax+78h], 0
0x5011C4: mov     ecx, offset aOn_0
0x5011C9: jnz     short loc_5011D0
0x5011CB: mov     ecx, offset aOff
0x5011D0: push    ecx
0x5011D1: mov     ecx, eax; this
0x5011D3: call    TESObjectREFR_GetName
0x5011D8: push    eax
0x5011D9: push    offset aSProcessingIsS; "%s processing is  %s"
0x5011DE: call    Interface_ConsolePrint
0x5011E3: add     esp, 0Ch
0x5011E6: mov     al, 1
0x5011E8: retn
