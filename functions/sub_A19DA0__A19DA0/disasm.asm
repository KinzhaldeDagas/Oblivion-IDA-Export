0xA19DA0: push    offset dword_B06F6C
0xA19DA5: mov     ecx, offset dword_B07CFC
0xA19DAA: call    BSSimpleList_Remove
0xA19DAF: mov     eax, off_B06F70; "iPresentInterval:Display"
0xA19DB4: test    eax, eax
0xA19DB6: jz      short locret_A19DC4
0xA19DB8: cmp     byte ptr [eax], 53h ; 'S'
0xA19DBB: jnz     short locret_A19DC4
0xA19DBD: push    eax
0xA19DBE: call    FormHeapFree
0xA19DC3: pop     ecx
0xA19DC4: retn
