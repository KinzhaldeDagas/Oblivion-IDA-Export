0xA24670: push    offset flt_B135B0
0xA24675: mov     ecx, offset dword_B07CFC
0xA2467A: call    BSSimpleList_Remove
0xA2467F: mov     eax, off_B135B4; "fKeyRepeatTime:Interface"
0xA24684: test    eax, eax
0xA24686: jz      short locret_A24694
0xA24688: cmp     byte ptr [eax], 53h ; 'S'
0xA2468B: jnz     short locret_A24694
0xA2468D: push    eax
0xA2468E: call    FormHeapFree
0xA24693: pop     ecx
0xA24694: retn
