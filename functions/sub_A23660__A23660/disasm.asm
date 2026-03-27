0xA23660: push    offset unk_B125F8
0xA23665: mov     ecx, offset dword_B07CFC
0xA2366A: call    BSSimpleList_Remove
0xA2366F: mov     eax, off_B125FC; "fTreeLODExponent:SpeedTree"
0xA23674: test    eax, eax
0xA23676: jz      short locret_A23684
0xA23678: cmp     byte ptr [eax], 53h ; 'S'
0xA2367B: jnz     short locret_A23684
0xA2367D: push    eax
0xA2367E: call    FormHeapFree
0xA23683: pop     ecx
0xA23684: retn
