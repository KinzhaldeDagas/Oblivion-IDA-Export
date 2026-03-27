0xA19B90: push    offset byte_B06F14
0xA19B95: mov     ecx, offset dword_B07CFC
0xA19B9A: call    BSSimpleList_Remove
0xA19B9F: mov     eax, off_B06F18; "bShadowsOnGrass:Display"
0xA19BA4: test    eax, eax
0xA19BA6: jz      short locret_A19BB4
0xA19BA8: cmp     byte ptr [eax], 53h ; 'S'
0xA19BAB: jnz     short locret_A19BB4
0xA19BAD: push    eax
0xA19BAE: call    FormHeapFree
0xA19BB3: pop     ecx
0xA19BB4: retn
