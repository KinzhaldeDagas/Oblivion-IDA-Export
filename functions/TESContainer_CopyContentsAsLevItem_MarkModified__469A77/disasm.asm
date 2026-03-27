0x469A77: cmp     [esp+arg_F], 0
0x469A7C: jz      short TESContainer_CopyContentsAsLevItem___Done
0x469A7E: mov     ecx, [esp+arg_28]
0x469A82: mov     ecx, [ecx+4]
0x469A85: test    ecx, ecx
0x469A87: jz      short TESContainer_CopyContentsAsLevItem___Done
0x469A89: mov     edx, [ecx]
0x469A8B: mov     eax, [edx+48h]
0x469A8E: push    8000000h
0x469A93: call    eax
