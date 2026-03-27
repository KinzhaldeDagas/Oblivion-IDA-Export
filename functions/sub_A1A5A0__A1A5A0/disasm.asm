0xA1A5A0: push    offset dword_B070E0
0xA1A5A5: mov     ecx, offset dword_B07CFC
0xA1A5AA: call    BSSimpleList_Remove
0xA1A5AF: mov     eax, off_B070E4; "uNumDepthGrids:Water"
0xA1A5B4: test    eax, eax
0xA1A5B6: jz      short locret_A1A5C4
0xA1A5B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A5BB: jnz     short locret_A1A5C4
0xA1A5BD: push    eax
0xA1A5BE: call    FormHeapFree
0xA1A5C3: pop     ecx
0xA1A5C4: retn
