0x431690: mov     eax, [esp+arg_8]
0x431694: mov     ecx, [esp+arg_4]
0x431698: mov     edx, [esp+arg_0]
0x43169C: push    esi
0x43169D: push    0FFFFh
0x4316A2: push    eax
0x4316A3: push    ecx
0x4316A4: push    edx
0x4316A5: call    FileFinder_LoadNiFile??
0x4316AA: push    0; int
0x4316AC: push    offset ??_R0?AVBSFile@@@8; struct TypeDescriptor *
0x4316B1: push    offset ??_R0?AVNiFile@@@8; struct _s_RTTICompleteObjectLocator *
0x4316B6: mov     esi, eax
0x4316B8: push    0; int
0x4316BA: push    esi; void *
0x4316BB: call    OblivionDynamicCast
0x4316C0: add     esp, 24h
0x4316C3: test    eax, eax
0x4316C5: jnz     short loc_4316D7
0x4316C7: test    esi, esi
0x4316C9: jz      short loc_4316D5
0x4316CB: mov     eax, [esi]
0x4316CD: mov     edx, [eax]
0x4316CF: push    1
0x4316D1: mov     ecx, esi
0x4316D3: call    edx
0x4316D5: xor     eax, eax
0x4316D7: pop     esi
0x4316D8: retn
