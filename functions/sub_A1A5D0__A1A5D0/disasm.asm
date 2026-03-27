0xA1A5D0: push    offset dword_B070E8
0xA1A5D5: mov     ecx, offset dword_B07CFC
0xA1A5DA: call    BSSimpleList_Remove
0xA1A5DF: mov     eax, off_B070EC; "uDepthRange:Water"
0xA1A5E4: test    eax, eax
0xA1A5E6: jz      short locret_A1A5F4
0xA1A5E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A5EB: jnz     short locret_A1A5F4
0xA1A5ED: push    eax
0xA1A5EE: call    FormHeapFree
0xA1A5F3: pop     ecx
0xA1A5F4: retn
