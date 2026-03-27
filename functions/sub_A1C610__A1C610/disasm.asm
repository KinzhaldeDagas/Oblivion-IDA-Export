0xA1C610: push    offset dword_B11910
0xA1C615: mov     ecx, offset dword_B07CFC
0xA1C61A: call    BSSimpleList_Remove
0xA1C61F: mov     eax, off_B11914; "iMaxViewCasterPicksFuzzy:Interface"
0xA1C624: test    eax, eax
0xA1C626: jz      short locret_A1C634
0xA1C628: cmp     byte ptr [eax], 53h ; 'S'
0xA1C62B: jnz     short locret_A1C634
0xA1C62D: push    eax
0xA1C62E: call    FormHeapFree
0xA1C633: pop     ecx
0xA1C634: retn
