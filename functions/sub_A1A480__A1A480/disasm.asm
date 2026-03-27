0xA1A480: push    offset dword_B070B0
0xA1A485: mov     ecx, offset dword_B07CFC
0xA1A48A: call    BSSimpleList_Remove
0xA1A48F: mov     eax, off_B070B4; "uNearWaterRadius:Water"
0xA1A494: test    eax, eax
0xA1A496: jz      short locret_A1A4A4
0xA1A498: cmp     byte ptr [eax], 53h ; 'S'
0xA1A49B: jnz     short locret_A1A4A4
0xA1A49D: push    eax
0xA1A49E: call    FormHeapFree
0xA1A4A3: pop     ecx
0xA1A4A4: retn
