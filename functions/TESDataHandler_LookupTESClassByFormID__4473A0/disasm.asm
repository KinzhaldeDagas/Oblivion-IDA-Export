0x4473A0: mov     eax, [esp+arg_0]
0x4473A4: test    eax, eax
0x4473A6: jz      short loc_4473C8
0x4473A8: lea     ecx, [esp+arg_0]
0x4473AC: push    ecx
0x4473AD: push    eax
0x4473AE: mov     ecx, offset TESForm_FormIDMap
0x4473B3: mov     [esp+8+arg_0], 0
0x4473BB: call    NiTMap_GetAt
0x4473C0: neg     al
0x4473C2: sbb     eax, eax
0x4473C4: and     eax, [esp+arg_0]
0x4473C8: push    0; int
0x4473CA: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x4473CF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4473D4: push    0; int
0x4473D6: push    eax; void *
0x4473D7: call    OblivionDynamicCast
0x4473DC: add     esp, 14h
0x4473DF: retn    4
