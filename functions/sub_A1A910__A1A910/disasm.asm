0xA1A910: push    offset byte_B0763C
0xA1A915: mov     ecx, offset dword_B07CFC
0xA1A91A: call    BSSimpleList_Remove
0xA1A91F: mov     eax, off_B07640; "bLODPopItems:LOD"
0xA1A924: test    eax, eax
0xA1A926: jz      short locret_A1A934
0xA1A928: cmp     byte ptr [eax], 53h ; 'S'
0xA1A92B: jnz     short locret_A1A934
0xA1A92D: push    eax
0xA1A92E: call    FormHeapFree
0xA1A933: pop     ecx
0xA1A934: retn
