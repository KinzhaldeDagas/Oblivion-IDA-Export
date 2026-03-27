0xA17C00: push    offset unk_B048F4
0xA17C05: mov     ecx, offset dword_B07CFC
0xA17C0A: call    BSSimpleList_Remove
0xA17C0F: mov     eax, off_B048F8; "iPostProcessMillisecondsEditor:Backgrou"...
0xA17C14: test    eax, eax
0xA17C16: jz      short locret_A17C24
0xA17C18: cmp     byte ptr [eax], 53h ; 'S'
0xA17C1B: jnz     short locret_A17C24
0xA17C1D: push    eax
0xA17C1E: call    FormHeapFree
0xA17C23: pop     ecx
0xA17C24: retn
