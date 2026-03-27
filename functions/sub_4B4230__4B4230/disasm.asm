0x4B4230: mov     eax, [esp+arg_0]
0x4B4234: push    esi
0x4B4235: push    edi
0x4B4236: push    0; int
0x4B4238: push    offset ??_R0?AVTESObjectANIO@@@8; struct TypeDescriptor *
0x4B423D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4242: push    0; int
0x4B4244: push    eax; void *
0x4B4245: mov     edi, ecx
0x4B4247: call    OblivionDynamicCast
0x4B424C: mov     esi, eax
0x4B424E: add     esp, 14h
0x4B4251: test    esi, esi
0x4B4253: jnz     short loc_4B425C
0x4B4255: pop     edi
0x4B4256: mov     al, 1
0x4B4258: pop     esi
0x4B4259: retn    4
0x4B425C: push    esi; a2
0x4B425D: mov     ecx, edi; this
0x4B425F: call    TESForm_CompareAllComponentsTo
0x4B4264: test    al, al
0x4B4266: jnz     short loc_4B4255
0x4B4268: mov     ecx, [edi+30h]
0x4B426B: cmp     ecx, [esi+30h]
0x4B426E: pop     edi
0x4B426F: setnz   al
0x4B4272: pop     esi
0x4B4273: retn    4
