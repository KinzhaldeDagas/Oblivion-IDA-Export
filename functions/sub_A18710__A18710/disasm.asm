0xA18710: push    offset unk_B068D0
0xA18715: mov     ecx, offset dword_B07CFC
0xA1871A: call    BSSimpleList_Remove
0xA1871F: mov     eax, off_B068D4; "fSE:HAVOK"
0xA18724: test    eax, eax
0xA18726: jz      short locret_A18734
0xA18728: cmp     byte ptr [eax], 53h ; 'S'
0xA1872B: jnz     short locret_A18734
0xA1872D: push    eax
0xA1872E: call    FormHeapFree
0xA18733: pop     ecx
0xA18734: retn
