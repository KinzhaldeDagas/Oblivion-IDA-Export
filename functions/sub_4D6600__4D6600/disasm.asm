0x4D6600: push    esi
0x4D6601: push    0; int
0x4D6603: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x4D6608: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4D660D: mov     esi, ecx
0x4D660F: push    0; int
0x4D6611: push    esi; void *
0x4D6612: call    OblivionDynamicCast
0x4D6617: add     esp, 14h
0x4D661A: test    eax, eax
0x4D661C: jz      short loc_4D6638
0x4D661E: mov     eax, [esi]
0x4D6620: mov     edx, [eax+170h]
0x4D6626: mov     ecx, esi
0x4D6628: call    edx
0x4D662A: push    eax
0x4D662B: call    sub_46E3F0
0x4D6630: add     esp, 4
0x4D6633: movzx   eax, al
0x4D6636: pop     esi
0x4D6637: retn
0x4D6638: or      eax, 0FFFFFFFFh
0x4D663B: pop     esi
0x4D663C: retn
