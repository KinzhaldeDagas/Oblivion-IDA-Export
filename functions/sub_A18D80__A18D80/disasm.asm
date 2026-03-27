0xA18D80: push    offset byte_B06CBC
0xA18D85: mov     ecx, offset dword_B07CFC
0xA18D8A: call    BSSimpleList_Remove
0xA18D8F: mov     eax, off_B06CC0; "bDoCanopyShadowPass:Display"
0xA18D94: test    eax, eax
0xA18D96: jz      short locret_A18DA4
0xA18D98: cmp     byte ptr [eax], 53h ; 'S'
0xA18D9B: jnz     short locret_A18DA4
0xA18D9D: push    eax
0xA18D9E: call    FormHeapFree
0xA18DA3: pop     ecx
0xA18DA4: retn
