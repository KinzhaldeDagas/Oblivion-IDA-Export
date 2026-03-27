0x468390: push    0; int
0x468392: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x468397: push    offset ??_R0?AVTESAIForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46839C: push    0; int
0x46839E: push    ecx; void *
0x46839F: call    OblivionDynamicCast
0x4683A4: add     esp, 14h
0x4683A7: test    eax, eax
0x4683A9: jz      short locret_4683B4
0x4683AB: mov     edx, [eax]
0x4683AD: mov     edx, [edx+40h]
0x4683B0: mov     ecx, eax
0x4683B2: jmp     edx
0x4683B4: retn    4
