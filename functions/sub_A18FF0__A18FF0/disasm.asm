0xA18FF0: push    offset texmipmapskip
0xA18FF5: mov     ecx, offset dword_B07CFC
0xA18FFA: call    BSSimpleList_Remove
0xA18FFF: mov     eax, off_B06D28; "iTexMipMapSkip:Display"
0xA19004: test    eax, eax
0xA19006: jz      short locret_A19014
0xA19008: cmp     byte ptr [eax], 53h ; 'S'
0xA1900B: jnz     short locret_A19014
0xA1900D: push    eax
0xA1900E: call    FormHeapFree
0xA19013: pop     ecx
0xA19014: retn
