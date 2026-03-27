0xA18BA0: push    offset unk_B06C6C
0xA18BA5: mov     ecx, offset dword_B07CFC
0xA18BAA: call    BSSimpleList_Remove
0xA18BAF: mov     eax, off_B06C70; "bIgnoreResolutionCheck:Display"
0xA18BB4: test    eax, eax
0xA18BB6: jz      short locret_A18BC4
0xA18BB8: cmp     byte ptr [eax], 53h ; 'S'
0xA18BBB: jnz     short locret_A18BC4
0xA18BBD: push    eax
0xA18BBE: call    FormHeapFree
0xA18BC3: pop     ecx
0xA18BC4: retn
