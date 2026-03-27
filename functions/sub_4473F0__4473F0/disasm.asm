0x4473F0: mov     eax, [esp+arg_0]
0x4473F4: test    eax, eax
0x4473F6: jz      short loc_447418
0x4473F8: lea     ecx, [esp+arg_0]
0x4473FC: push    ecx
0x4473FD: push    eax
0x4473FE: mov     ecx, offset TESForm_FormIDMap
0x447403: mov     [esp+8+arg_0], 0
0x44740B: call    NiTMap_GetAt
0x447410: neg     al
0x447412: sbb     eax, eax
0x447414: and     eax, [esp+arg_0]
0x447418: push    0; int
0x44741A: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x44741F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x447424: push    0; int
0x447426: push    eax; void *
0x447427: call    OblivionDynamicCast
0x44742C: add     esp, 14h
0x44742F: retn    4
