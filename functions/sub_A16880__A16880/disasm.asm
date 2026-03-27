0xA16880: push    offset off_B02CD0
0xA16885: mov     ecx, offset dword_B07CFC
0xA1688A: call    BSSimpleList_Remove
0xA1688F: mov     eax, off_B02CD4; "sTestFile9:General"
0xA16894: test    eax, eax
0xA16896: jz      short locret_A168A4
0xA16898: cmp     byte ptr [eax], 53h ; 'S'
0xA1689B: jnz     short locret_A168A4
0xA1689D: push    eax
0xA1689E: call    FormHeapFree
0xA168A3: pop     ecx
0xA168A4: retn
