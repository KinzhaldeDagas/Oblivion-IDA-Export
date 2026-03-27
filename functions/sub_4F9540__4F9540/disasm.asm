0x4F9540: push    ebx
0x4F9541: mov     ebx, [esp+4+a2]
0x4F9545: push    esi
0x4F9546: push    edi
0x4F9547: push    0; int
0x4F9549: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x4F954E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F9553: push    0; int
0x4F9555: push    ebx; void *
0x4F9556: mov     edi, ecx
0x4F9558: call    OblivionDynamicCast
0x4F955D: mov     esi, eax
0x4F955F: add     esp, 14h
0x4F9562: test    esi, esi
0x4F9564: jz      short loc_4F957A
0x4F9566: push    ebx; a2
0x4F9567: mov     ecx, edi; this
0x4F9569: call    TESForm_CopyAllComponentsFrom
0x4F956E: mov     al, [esi+20h]
0x4F9571: mov     [edi+20h], al
0x4F9574: fld     dword ptr [esi+24h]
0x4F9577: fstp    dword ptr [edi+24h]
0x4F957A: pop     edi
0x4F957B: pop     esi
0x4F957C: pop     ebx
0x4F957D: retn    4
