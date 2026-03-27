0xA17B70: push    offset off_B0472C; ".\\"
0xA17B75: mov     ecx, offset unk_B07E34
0xA17B7A: call    BSSimpleList_Remove
0xA17B7F: mov     eax, off_B04730; "sBasePath"
0xA17B84: test    eax, eax
0xA17B86: jz      short locret_A17B94
0xA17B88: cmp     byte ptr [eax], 53h ; 'S'
0xA17B8B: jnz     short locret_A17B94
0xA17B8D: push    eax
0xA17B8E: call    FormHeapFree
0xA17B93: pop     ecx
0xA17B94: retn
