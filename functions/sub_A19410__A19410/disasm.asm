0xA19410: push    offset unk_B06DD4
0xA19415: mov     ecx, offset dword_B07CFC
0xA1941A: call    BSSimpleList_Remove
0xA1941F: mov     eax, off_B06DD8; "bEquippedTorchesCastShadows:Display"
0xA19424: test    eax, eax
0xA19426: jz      short locret_A19434
0xA19428: cmp     byte ptr [eax], 53h ; 'S'
0xA1942B: jnz     short locret_A19434
0xA1942D: push    eax
0xA1942E: call    FormHeapFree
0xA19433: pop     ecx
0xA19434: retn
