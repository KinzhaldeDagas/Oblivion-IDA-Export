0x447440: mov     eax, [esp+formID]; Looks up a form by runtime FormID and dynamic-casts TESForm to TESTopic. Used here only for the HELLO and GOODBYE conversation roots.
0x447444: test    eax, eax
0x447446: jz      short loc_447468
0x447448: lea     ecx, [esp+formID]
0x44744C: push    ecx
0x44744D: push    eax
0x44744E: mov     ecx, offset TESForm_FormIDMap
0x447453: mov     [esp+8+formID], 0
0x44745B: call    NiTMap_GetAt
0x447460: neg     al
0x447462: sbb     eax, eax
0x447464: and     eax, [esp+formID]
0x447468: push    0; int
0x44746A: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x44746F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x447474: push    0; int
0x447476: push    eax; void *
0x447477: call    OblivionDynamicCast
0x44747C: add     esp, 14h
0x44747F: retn    4
