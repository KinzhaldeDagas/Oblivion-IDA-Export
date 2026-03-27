0xA172D0: push    offset g_DefaulFOV
0xA172D5: mov     ecx, offset dword_B07CFC
0xA172DA: call    BSSimpleList_Remove
0xA172DF: mov     eax, off_B03140; "fDefaultFOV:Display"
0xA172E4: test    eax, eax
0xA172E6: jz      short locret_A172F4
0xA172E8: cmp     byte ptr [eax], 53h ; 'S'
0xA172EB: jnz     short locret_A172F4
0xA172ED: push    eax
0xA172EE: call    FormHeapFree
0xA172F3: pop     ecx
0xA172F4: retn
