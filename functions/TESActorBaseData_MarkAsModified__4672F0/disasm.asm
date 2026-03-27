0x4672F0: push    0; int
0x4672F2: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x4672F7: push    offset ??_R0?AVTESActorBaseData@@@8; struct _s_RTTICompleteObjectLocator *
0x4672FC: push    0; int
0x4672FE: push    ecx; void *
0x4672FF: call    OblivionDynamicCast
0x467304: add     esp, 14h
0x467307: test    eax, eax
0x467309: jz      short locret_467314
0x46730B: mov     edx, [eax]
0x46730D: mov     edx, [edx+40h]
0x467310: mov     ecx, eax
0x467312: jmp     edx
0x467314: retn    4
