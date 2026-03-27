0xA180F0: push    offset lpString2
0xA180F5: mov     ecx, offset dword_B07CFC
0xA180FA: call    BSSimpleList_Remove
0xA180FF: mov     eax, off_B05568; "sLocalSavePath:General"
0xA18104: test    eax, eax
0xA18106: jz      short locret_A18114
0xA18108: cmp     byte ptr [eax], 53h ; 'S'
0xA1810B: jnz     short locret_A18114
0xA1810D: push    eax
0xA1810E: call    FormHeapFree
0xA18113: pop     ecx
0xA18114: retn
