0xA19D40: push    offset byte_B06F5C
0xA19D45: mov     ecx, offset dword_B07CFC
0xA19D4A: call    BSSimpleList_Remove
0xA19D4F: mov     eax, off_B06F60; "bDecalsOnSkinnedGeometry:Display"
0xA19D54: test    eax, eax
0xA19D56: jz      short locret_A19D64
0xA19D58: cmp     byte ptr [eax], 53h ; 'S'
0xA19D5B: jnz     short locret_A19D64
0xA19D5D: push    eax
0xA19D5E: call    FormHeapFree
0xA19D63: pop     ecx
0xA19D64: retn
