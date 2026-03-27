0x4B0FC0: push    ebx
0x4B0FC1: mov     ebx, [esp+4+a2]
0x4B0FC5: push    esi
0x4B0FC6: push    edi
0x4B0FC7: push    0; int
0x4B0FC9: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x4B0FCE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0FD3: push    0; int
0x4B0FD5: push    ebx; void *
0x4B0FD6: mov     esi, ecx
0x4B0FD8: call    OblivionDynamicCast
0x4B0FDD: mov     edi, eax
0x4B0FDF: add     esp, 14h
0x4B0FE2: test    edi, edi
0x4B0FE4: jz      short loc_4B1036
0x4B0FE6: push    ebx; a2
0x4B0FE7: mov     ecx, esi; this
0x4B0FE9: call    TESForm_CopyAllComponentsFrom
0x4B0FEE: mov     eax, [edi+70h]
0x4B0FF1: mov     [esi+70h], eax
0x4B0FF4: mov     ecx, [edi+74h]
0x4B0FF7: mov     [esi+74h], ecx
0x4B0FFA: mov     edx, [edi+78h]
0x4B0FFD: mov     [esi+78h], edx
0x4B1000: mov     eax, [edi+7Ch]
0x4B1003: mov     [esi+7Ch], eax
0x4B1006: mov     ecx, [edi+80h]
0x4B100C: mov     [esi+80h], ecx
0x4B1012: mov     edx, [edi+84h]
0x4B1018: mov     [esi+84h], edx
0x4B101E: fld     dword ptr [edi+88h]
0x4B1024: fstp    dword ptr [esi+88h]
0x4B102A: mov     eax, [edi+8Ch]
0x4B1030: mov     [esi+8Ch], eax
0x4B1036: pop     edi
0x4B1037: pop     esi
0x4B1038: pop     ebx
0x4B1039: retn    4
