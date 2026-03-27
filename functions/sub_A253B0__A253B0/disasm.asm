0xA253B0: push    offset dword_B148EC
0xA253B5: mov     ecx, offset dword_B07CFC
0xA253BA: call    BSSimpleList_Remove
0xA253BF: mov     eax, off_B148F0; "fJumpAnimDelay:HAVOK"
0xA253C4: test    eax, eax
0xA253C6: jz      short locret_A253D4
0xA253C8: cmp     byte ptr [eax], 53h ; 'S'
0xA253CB: jnz     short locret_A253D4
0xA253CD: push    eax
0xA253CE: call    FormHeapFree
0xA253D3: pop     ecx
0xA253D4: retn
