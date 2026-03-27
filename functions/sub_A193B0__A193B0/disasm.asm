0xA193B0: push    offset byte_B06DC4
0xA193B5: mov     ecx, offset dword_B07CFC
0xA193BA: call    BSSimpleList_Remove
0xA193BF: mov     eax, off_B06DC8; "bStaticMenuBackground:Display"
0xA193C4: test    eax, eax
0xA193C6: jz      short locret_A193D4
0xA193C8: cmp     byte ptr [eax], 53h ; 'S'
0xA193CB: jnz     short locret_A193D4
0xA193CD: push    eax
0xA193CE: call    FormHeapFree
0xA193D3: pop     ecx
0xA193D4: retn
