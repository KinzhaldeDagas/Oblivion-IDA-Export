0x65CA60: push    ebx
0x65CA61: mov     ebx, [esp+4+arg_0]
0x65CA65: push    esi
0x65CA66: push    ebx
0x65CA67: mov     esi, ecx
0x65CA69: call    AVCollection_GetNode
0x65CA6E: mov     ecx, eax
0x65CA70: test    ecx, ecx
0x65CA72: jnz     short AVCollection_ModAVLimited___ModExistingModifier
