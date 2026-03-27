0xA19BF0: push    offset unk_B06F24
0xA19BF5: mov     ecx, offset dword_B07CFC
0xA19BFA: call    BSSimpleList_Remove
0xA19BFF: mov     eax, off_B06F28; "bAllowPartialPrecision:Display"
0xA19C04: test    eax, eax
0xA19C06: jz      short locret_A19C14
0xA19C08: cmp     byte ptr [eax], 53h ; 'S'
0xA19C0B: jnz     short locret_A19C14
0xA19C0D: push    eax
0xA19C0E: call    FormHeapFree
0xA19C13: pop     ecx
0xA19C14: retn
