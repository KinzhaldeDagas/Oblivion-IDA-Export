0x4AF3B0: mov     eax, [esp+arg_0]
0x4AF3B4: push    esi
0x4AF3B5: push    edi
0x4AF3B6: push    0; int
0x4AF3B8: push    offset ??_R0?AVTESGrass@@@8; struct TypeDescriptor *
0x4AF3BD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AF3C2: push    0; int
0x4AF3C4: push    eax; void *
0x4AF3C5: mov     edi, ecx
0x4AF3C7: call    OblivionDynamicCast
0x4AF3CC: mov     esi, eax
0x4AF3CE: add     esp, 14h
0x4AF3D1: test    esi, esi
0x4AF3D3: jz      short loc_4AF3EA
0x4AF3D5: push    esi; a2
0x4AF3D6: mov     ecx, edi; this
0x4AF3D8: call    TESForm_CopyAllComponentsFrom
0x4AF3DD: add     esi, 3Ch ; '<'
0x4AF3E0: add     edi, 3Ch ; '<'
0x4AF3E3: mov     ecx, 8
0x4AF3E8: rep movsd
0x4AF3EA: pop     edi
0x4AF3EB: pop     esi
0x4AF3EC: retn    4
