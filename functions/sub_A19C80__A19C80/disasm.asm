0xA19C80: push    offset unk_B06F3C
0xA19C85: mov     ecx, offset dword_B07CFC
0xA19C8A: call    BSSimpleList_Remove
0xA19C8F: mov     eax, off_B06F40; "uVideoDeviceIdentifierPart2:Display"
0xA19C94: test    eax, eax
0xA19C96: jz      short locret_A19CA4
0xA19C98: cmp     byte ptr [eax], 53h ; 'S'
0xA19C9B: jnz     short locret_A19CA4
0xA19C9D: push    eax
0xA19C9E: call    FormHeapFree
0xA19CA3: pop     ecx
0xA19CA4: retn
