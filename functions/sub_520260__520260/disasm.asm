0x520260: mov     ecx, [ecx+3Ch]
0x520263: xor     eax, eax
0x520265: test    ecx, ecx
0x520267: jz      short locret_520288
0x520269: push    eax; int
0x52026A: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52026F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520274: push    eax; int
0x520275: mov     eax, [esp+10h+arg_0]
0x520279: push    eax
0x52027A: call    sub_494ED0
0x52027F: push    eax; void *
0x520280: call    OblivionDynamicCast
0x520285: add     esp, 14h
0x520288: retn    4
