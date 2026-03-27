0xA180C0: push    offset off_B0555C; "Data\\"
0xA180C5: mov     ecx, offset dword_B07CFC
0xA180CA: call    BSSimpleList_Remove
0xA180CF: mov     eax, off_B05560; "sLocalMasterPath:General"
0xA180D4: test    eax, eax
0xA180D6: jz      short locret_A180E4
0xA180D8: cmp     byte ptr [eax], 53h ; 'S'
0xA180DB: jnz     short locret_A180E4
0xA180DD: push    eax
0xA180DE: call    FormHeapFree
0xA180E3: pop     ecx
0xA180E4: retn
