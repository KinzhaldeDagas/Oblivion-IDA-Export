0x428F00: push    ebx
0x428F01: mov     ebx, [esp+4+arg_0]
0x428F05: push    esi
0x428F06: push    edi
0x428F07: push    0; int
0x428F09: push    offset ??_R0?AVExtraMapMarker@@@8; struct TypeDescriptor *
0x428F0E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x428F13: push    0; int
0x428F15: push    ebx; void *
0x428F16: mov     edi, ecx
0x428F18: call    OblivionDynamicCast
0x428F1D: mov     esi, eax
0x428F1F: add     esp, 14h
0x428F22: test    esi, esi
0x428F24: jnz     short loc_428F2E
0x428F26: pop     edi
0x428F27: pop     esi
0x428F28: mov     al, 1
0x428F2A: pop     ebx
0x428F2B: retn    4
0x428F2E: push    ebx
0x428F2F: mov     ecx, edi
0x428F31: call    BSExtraData_CompareTo
0x428F36: test    al, al
0x428F38: jnz     short loc_428F26
0x428F3A: mov     eax, [esi+0Ch]
0x428F3D: mov     ecx, [edi+0Ch]
0x428F40: push    eax
0x428F41: call    sub_42B2D0
0x428F46: pop     edi
0x428F47: test    al, al
0x428F49: pop     esi
0x428F4A: setnz   al
0x428F4D: pop     ebx
0x428F4E: retn    4
