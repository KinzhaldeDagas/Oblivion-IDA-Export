0x42B550: push    esi
0x42B551: mov     esi, ecx
0x42B553: mov     eax, [esi]
0x42B555: test    eax, eax
0x42B557: jz      short loc_42B57B
0x42B559: push    0; int
0x42B55B: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42B560: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42B565: push    0; int
0x42B567: push    eax; a1
0x42B568: call    TESForm_LookupByFormID
0x42B56D: add     esp, 4
0x42B570: push    eax; void *
0x42B571: call    OblivionDynamicCast
0x42B576: add     esp, 14h
0x42B579: mov     [esi], eax
0x42B57B: pop     esi
0x42B57C: retn
