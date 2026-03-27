0xA1A4B0: push    offset dword_B070B8
0xA1A4B5: mov     ecx, offset dword_B07CFC
0xA1A4BA: call    BSSimpleList_Remove
0xA1A4BF: mov     eax, off_B070BC; "uNearWaterPoints:Water"
0xA1A4C4: test    eax, eax
0xA1A4C6: jz      short locret_A1A4D4
0xA1A4C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A4CB: jnz     short locret_A1A4D4
0xA1A4CD: push    eax
0xA1A4CE: call    FormHeapFree
0xA1A4D3: pop     ecx
0xA1A4D4: retn
