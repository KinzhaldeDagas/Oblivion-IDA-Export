0x46D5C0: push    esi
0x46D5C1: mov     esi, [esp+4+arg_0]
0x46D5C5: push    0; int
0x46D5C7: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46D5CC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46D5D1: push    0; int
0x46D5D3: push    esi; void *
0x46D5D4: call    OblivionDynamicCast
0x46D5D9: add     esp, 14h
0x46D5DC: test    eax, eax
0x46D5DE: jnz     short loc_46D600
0x46D5E0: push    eax; int
0x46D5E1: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46D5E6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46D5EB: push    eax; int
0x46D5EC: push    esi; void *
0x46D5ED: call    OblivionDynamicCast
0x46D5F2: push    eax
0x46D5F3: push    esi
0x46D5F4: call    sub_4694A0
0x46D5F9: add     esp, 1Ch
0x46D5FC: test    eax, eax
0x46D5FE: jz      short loc_46D605
0x46D600: fld     dword ptr [eax+0Ch]
0x46D603: pop     esi
0x46D604: retn
0x46D605: fldz
0x46D607: pop     esi
0x46D608: retn
