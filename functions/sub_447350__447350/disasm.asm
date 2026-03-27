0x447350: mov     eax, [esp+arg_0]
0x447354: test    eax, eax
0x447356: jz      short loc_447378
0x447358: lea     ecx, [esp+arg_0]
0x44735C: push    ecx
0x44735D: push    eax
0x44735E: mov     ecx, offset TESForm_FormIDMap
0x447363: mov     [esp+8+arg_0], 0
0x44736B: call    NiTMap_GetAt
0x447370: neg     al
0x447372: sbb     eax, eax
0x447374: and     eax, [esp+arg_0]
0x447378: push    0; int
0x44737A: push    offset ??_R0?AVBirthSign@@@8; struct TypeDescriptor *
0x44737F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x447384: push    0; int
0x447386: push    eax; void *
0x447387: call    OblivionDynamicCast
0x44738C: add     esp, 14h
0x44738F: retn    4
