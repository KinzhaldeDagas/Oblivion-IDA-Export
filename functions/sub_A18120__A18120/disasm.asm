0xA18120: push    offset unk_B0556C
0xA18125: mov     ecx, offset dword_B07CFC
0xA1812A: call    BSSimpleList_Remove
0xA1812F: mov     eax, off_B05570; "bCreate Maps Enable:General"
0xA18134: test    eax, eax
0xA18136: jz      short locret_A18144
0xA18138: cmp     byte ptr [eax], 53h ; 'S'
0xA1813B: jnz     short locret_A18144
0xA1813D: push    eax
0xA1813E: call    FormHeapFree
0xA18143: pop     ecx
0xA18144: retn
