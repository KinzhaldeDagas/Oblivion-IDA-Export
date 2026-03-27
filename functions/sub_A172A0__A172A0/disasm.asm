0xA172A0: push    offset NearDistance
0xA172A5: mov     ecx, offset dword_B07CFC
0xA172AA: call    BSSimpleList_Remove
0xA172AF: mov     eax, off_B03138; "fNearDistance:Display"
0xA172B4: test    eax, eax
0xA172B6: jz      short locret_A172C4
0xA172B8: cmp     byte ptr [eax], 53h ; 'S'
0xA172BB: jnz     short locret_A172C4
0xA172BD: push    eax
0xA172BE: call    FormHeapFree
0xA172C3: pop     ecx
0xA172C4: retn
