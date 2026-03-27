0x468DF0: mov     eax, [esp+arg_0]
0x468DF4: push    esi
0x468DF5: push    edi
0x468DF6: push    0; int
0x468DF8: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x468DFD: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468E02: push    0; int
0x468E04: push    eax; void *
0x468E05: mov     edi, ecx
0x468E07: call    OblivionDynamicCast
0x468E0C: mov     esi, eax
0x468E0E: add     esp, 14h
0x468E11: test    esi, esi
0x468E13: jz      short loc_468E75
0x468E15: mov     ecx, [esi+4]
0x468E18: mov     edx, [edi+8]
0x468E1B: mov     edx, [edx+8]
0x468E1E: mov     [edi+4], ecx
0x468E21: lea     ecx, [edi+8]
0x468E24: lea     eax, [esi+8]
0x468E27: push    eax
0x468E28: call    edx
0x468E2A: mov     eax, [edi+38h]
0x468E2D: mov     eax, [eax+8]
0x468E30: lea     ecx, [edi+38h]
0x468E33: lea     edx, [esi+38h]
0x468E36: push    edx
0x468E37: call    eax
0x468E39: mov     edx, [edi+68h]
0x468E3C: mov     edx, [edx+8]
0x468E3F: lea     ecx, [edi+68h]
0x468E42: lea     eax, [esi+68h]
0x468E45: push    eax
0x468E46: call    edx
0x468E48: mov     eax, [edi+20h]
0x468E4B: mov     eax, [eax+8]
0x468E4E: lea     ecx, [edi+20h]
0x468E51: lea     edx, [esi+20h]
0x468E54: push    edx
0x468E55: call    eax
0x468E57: mov     edx, [edi+50h]
0x468E5A: mov     edx, [edx+8]
0x468E5D: lea     ecx, [edi+50h]
0x468E60: lea     eax, [esi+50h]
0x468E63: push    eax
0x468E64: call    edx
0x468E66: mov     eax, [edi+74h]
0x468E69: mov     edx, [eax+8]
0x468E6C: lea     ecx, [edi+74h]
0x468E6F: add     esi, 74h ; 't'
0x468E72: push    esi
0x468E73: call    edx
0x468E75: pop     edi
0x468E76: pop     esi
0x468E77: retn    4
