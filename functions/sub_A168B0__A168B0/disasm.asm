0xA168B0: push    offset off_B02CD8
0xA168B5: mov     ecx, offset dword_B07CFC
0xA168BA: call    BSSimpleList_Remove
0xA168BF: mov     eax, off_B02CDC; "sTestFile10:General"
0xA168C4: test    eax, eax
0xA168C6: jz      short locret_A168D4
0xA168C8: cmp     byte ptr [eax], 53h ; 'S'
0xA168CB: jnz     short locret_A168D4
0xA168CD: push    eax
0xA168CE: call    FormHeapFree
0xA168D3: pop     ecx
0xA168D4: retn
