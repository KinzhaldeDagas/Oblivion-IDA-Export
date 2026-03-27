0xA19E90: push    offset byte_B06F94
0xA19E95: mov     ecx, offset dword_B07CFC
0xA19E9A: call    BSSimpleList_Remove
0xA19E9F: mov     eax, off_B06F98; "bFullBrightLighting:Display"
0xA19EA4: test    eax, eax
0xA19EA6: jz      short locret_A19EB4
0xA19EA8: cmp     byte ptr [eax], 53h ; 'S'
0xA19EAB: jnz     short locret_A19EB4
0xA19EAD: push    eax
0xA19EAE: call    FormHeapFree
0xA19EB3: pop     ecx
0xA19EB4: retn
