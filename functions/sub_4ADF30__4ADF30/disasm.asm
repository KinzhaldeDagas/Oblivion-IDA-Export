0x4ADF30: push    esi
0x4ADF31: push    edi
0x4ADF32: mov     edi, [esp+8+a2]
0x4ADF36: push    0; int
0x4ADF38: push    offset ??_R0?AVTESFlora@@@8; struct TypeDescriptor *
0x4ADF3D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ADF42: push    0; int
0x4ADF44: push    edi; void *
0x4ADF45: mov     esi, ecx
0x4ADF47: call    OblivionDynamicCast
0x4ADF4C: add     esp, 14h
0x4ADF4F: test    eax, eax
0x4ADF51: jz      short loc_4ADF5B
0x4ADF53: push    edi; a2
0x4ADF54: mov     ecx, esi; this
0x4ADF56: call    TESForm_CopyAllComponentsFrom
0x4ADF5B: pop     edi
0x4ADF5C: pop     esi
0x4ADF5D: retn    4
