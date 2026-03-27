0xA181B0: push    offset byte_B05584
0xA181B5: mov     ecx, offset dword_B07CFC
0xA181BA: call    BSSimpleList_Remove
0xA181BF: mov     eax, off_B05588; "bFileSkipModelChecks:TestAllCells"
0xA181C4: test    eax, eax
0xA181C6: jz      short locret_A181D4
0xA181C8: cmp     byte ptr [eax], 53h ; 'S'
0xA181CB: jnz     short locret_A181D4
0xA181CD: push    eax
0xA181CE: call    FormHeapFree
0xA181D3: pop     ecx
0xA181D4: retn
