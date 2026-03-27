0x501120: mov     eax, [esp+arg_8]
0x501124: push    0; int
0x501126: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50112B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501130: push    0; int
0x501132: push    eax; void *
0x501133: call    OblivionDynamicCast
0x501138: add     esp, 14h
0x50113B: test    eax, eax
0x50113D: jz      short loc_501176
0x50113F: cmp     byte ptr [eax+78h], 0
0x501143: setz    cl
0x501146: mov     [eax+78h], cl
0x501149: cmp     byte ptr ds:0B361ACh, 0
0x501150: jz      short loc_501176
0x501152: test    cl, cl
0x501154: mov     ecx, offset aOn_0
0x501159: jnz     short loc_501160
0x50115B: mov     ecx, offset aOff
0x501160: push    ecx
0x501161: mov     ecx, eax; this
0x501163: call    TESObjectREFR_GetName
0x501168: push    eax
0x501169: push    offset aSProcessingIsS; "%s processing is  %s"
0x50116E: call    Interface_ConsolePrint
0x501173: add     esp, 0Ch
0x501176: mov     al, 1
0x501178: retn
