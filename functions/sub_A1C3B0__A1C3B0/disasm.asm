0xA1C3B0: push    offset byte_B10D3C
0xA1C3B5: mov     ecx, offset dword_B07CFC
0xA1C3BA: call    BSSimpleList_Remove
0xA1C3BF: mov     eax, off_B10D40; "bFaceGenTexturing:General"
0xA1C3C4: test    eax, eax
0xA1C3C6: jz      short locret_A1C3D4
0xA1C3C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C3CB: jnz     short locret_A1C3D4
0xA1C3CD: push    eax
0xA1C3CE: call    FormHeapFree
0xA1C3D3: pop     ecx
0xA1C3D4: retn
