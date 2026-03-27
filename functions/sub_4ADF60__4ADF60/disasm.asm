0x4ADF60: mov     eax, [esp+arg_0]
0x4ADF64: push    esi
0x4ADF65: push    0; int
0x4ADF67: push    offset ??_R0?AVTESFlora@@@8; struct TypeDescriptor *
0x4ADF6C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ADF71: push    0; int
0x4ADF73: push    eax; void *
0x4ADF74: mov     esi, ecx
0x4ADF76: call    OblivionDynamicCast
0x4ADF7B: add     esp, 14h
0x4ADF7E: test    eax, eax
0x4ADF80: jnz     short loc_4ADF88
0x4ADF82: mov     al, 1
0x4ADF84: pop     esi
0x4ADF85: retn    4
0x4ADF88: add     eax, 0Ch
0x4ADF8B: push    eax; a2
0x4ADF8C: mov     ecx, esi; this
0x4ADF8E: call    TESForm_CompareAllComponentsTo
0x4ADF93: test    al, al
0x4ADF95: setnz   al
0x4ADF98: pop     esi
0x4ADF99: retn    4
