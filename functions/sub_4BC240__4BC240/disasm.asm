0x4BC240: mov     eax, [esp+arg_0]
0x4BC244: push    esi
0x4BC245: push    edi
0x4BC246: push    0; int
0x4BC248: push    offset ??_R0?AVTESSubSpace@@@8; struct TypeDescriptor *
0x4BC24D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BC252: push    0; int
0x4BC254: push    eax; void *
0x4BC255: mov     edi, ecx
0x4BC257: call    OblivionDynamicCast
0x4BC25C: mov     esi, eax
0x4BC25E: add     esp, 14h
0x4BC261: test    esi, esi
0x4BC263: jz      short loc_4BC285
0x4BC265: push    esi; a2
0x4BC266: mov     ecx, edi; this
0x4BC268: call    TESForm_CopyAllComponentsFrom
0x4BC26D: movzx   eax, word ptr [esi+28h]
0x4BC271: movzx   ecx, word ptr [esi+26h]
0x4BC275: mov     dx, [esi+24h]
0x4BC279: mov     [edi+24h], dx
0x4BC27D: mov     [edi+26h], cx
0x4BC281: mov     [edi+28h], ax
0x4BC285: pop     edi
0x4BC286: pop     esi
0x4BC287: retn    4
