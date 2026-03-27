0x4BB350: push    ebx
0x4BB351: mov     ebx, [esp+4+a2]
0x4BB355: push    esi
0x4BB356: push    edi
0x4BB357: push    0; int
0x4BB359: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x4BB35E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BB363: push    0; int
0x4BB365: push    ebx; void *
0x4BB366: mov     esi, ecx
0x4BB368: call    OblivionDynamicCast
0x4BB36D: mov     edi, eax
0x4BB36F: add     esp, 14h
0x4BB372: test    edi, edi
0x4BB374: jz      short loc_4BB3B4
0x4BB376: push    ebx; a2
0x4BB377: mov     ecx, esi; this
0x4BB379: call    TESForm_CopyAllComponentsFrom
0x4BB37E: mov     eax, [edi+90h]
0x4BB384: mov     [esi+90h], eax
0x4BB38A: mov     ecx, [edi+94h]
0x4BB390: mov     [esi+94h], ecx
0x4BB396: mov     edx, [edi+98h]
0x4BB39C: mov     [esi+98h], edx
0x4BB3A2: mov     eax, [edi+9Ch]
0x4BB3A8: mov     [esi+9Ch], eax
0x4BB3AE: mov     cl, [edi+4]
0x4BB3B1: mov     [esi+4], cl
0x4BB3B4: pop     edi
0x4BB3B5: pop     esi
0x4BB3B6: pop     ebx
0x4BB3B7: retn    4
