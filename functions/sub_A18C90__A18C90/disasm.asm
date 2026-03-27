0xA18C90: push    offset unk_B06C94
0xA18C95: mov     ecx, offset dword_B07CFC
0xA18C9A: call    BSSimpleList_Remove
0xA18C9F: mov     eax, off_B06C98; "iNPatchPOrder:Display"
0xA18CA4: test    eax, eax
0xA18CA6: jz      short locret_A18CB4
0xA18CA8: cmp     byte ptr [eax], 53h ; 'S'
0xA18CAB: jnz     short locret_A18CB4
0xA18CAD: push    eax
0xA18CAE: call    FormHeapFree
0xA18CB3: pop     ecx
0xA18CB4: retn
