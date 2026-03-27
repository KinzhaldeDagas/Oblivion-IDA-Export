0x4852B0: sub     esp, 8
0x4852B3: fld     dword ptr ds:0A30634h
0x4852B9: push    ebx
0x4852BA: push    esi
0x4852BB: fstp    [esp+10h+var_8]
0x4852BF: push    edi
0x4852C0: push    0; int
0x4852C2: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x4852C7: mov     esi, ecx
0x4852C9: mov     eax, [esi+8]
0x4852CC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4852D1: push    0; int
0x4852D3: push    eax; void *
0x4852D4: call    OblivionDynamicCast
0x4852D9: mov     ecx, [esi+8]
0x4852DC: push    0; int
0x4852DE: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x4852E3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4852E8: push    0; int
0x4852EA: push    ecx; void *
0x4852EB: mov     edi, eax
0x4852ED: call    OblivionDynamicCast
0x4852F2: mov     edx, [esi+8]
0x4852F5: push    0; int
0x4852F7: push    offset ??_R0?AVTESSigilStone@@@8; struct TypeDescriptor *
0x4852FC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x485301: push    0; int
0x485303: push    edx; void *
0x485304: mov     ebx, eax
0x485306: call    OblivionDynamicCast
0x48530B: add     esp, 3Ch
0x48530E: test    edi, edi
0x485310: jz      short ContainerEntryExtraData_GetHealthFracOrUses___Return_Uses
