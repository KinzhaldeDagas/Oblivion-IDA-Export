0x517C60: push    ebx
0x517C61: mov     ebx, [esp+4+a2]
0x517C65: push    esi
0x517C66: push    edi
0x517C67: push    0; int
0x517C69: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x517C6E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x517C73: push    0; int
0x517C75: push    ebx; void *
0x517C76: mov     esi, ecx
0x517C78: call    OblivionDynamicCast
0x517C7D: mov     edi, eax
0x517C7F: add     esp, 14h
0x517C82: test    edi, edi
0x517C84: jz      short loc_517CA5
0x517C86: push    ebx; a2
0x517C87: mov     ecx, esi; this
0x517C89: call    TESForm_CopyAllComponentsFrom
0x517C8E: mov     edx, [edi+38h]
0x517C91: lea     eax, [edi+38h]
0x517C94: lea     ecx, [esi+38h]
0x517C97: mov     [ecx], edx
0x517C99: mov     edx, [eax+4]
0x517C9C: mov     [ecx+4], edx
0x517C9F: mov     eax, [eax+8]
0x517CA2: mov     [ecx+8], eax
0x517CA5: pop     edi
0x517CA6: pop     esi
0x517CA7: pop     ebx
0x517CA8: retn    4
