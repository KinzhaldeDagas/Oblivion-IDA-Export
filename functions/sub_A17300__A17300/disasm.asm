0xA17300: push    offset byte_B03144
0xA17305: mov     ecx, offset dword_B07CFC
0xA1730A: call    BSSimpleList_Remove
0xA1730F: mov     eax, off_B03148; "bAutoViewDistance:Display"
0xA17314: test    eax, eax
0xA17316: jz      short locret_A17324
0xA17318: cmp     byte ptr [eax], 53h ; 'S'
0xA1731B: jnz     short locret_A17324
0xA1731D: push    eax
0xA1731E: call    FormHeapFree
0xA17323: pop     ecx
0xA17324: retn
