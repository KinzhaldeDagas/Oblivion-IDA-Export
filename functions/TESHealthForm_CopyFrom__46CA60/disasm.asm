0x46CA60: mov     eax, [esp+arg_0]
0x46CA64: push    esi
0x46CA65: push    0; int
0x46CA67: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46CA6C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46CA71: push    0; int
0x46CA73: push    eax; void *
0x46CA74: mov     esi, ecx
0x46CA76: call    OblivionDynamicCast
0x46CA7B: add     esp, 14h
0x46CA7E: test    eax, eax
0x46CA80: jz      short loc_46CA8E
0x46CA82: mov     edx, [eax]
0x46CA84: mov     ecx, eax
0x46CA86: mov     eax, [edx+10h]
0x46CA89: call    eax
0x46CA8B: mov     [esi+4], eax
0x46CA8E: pop     esi
0x46CA8F: retn    4
