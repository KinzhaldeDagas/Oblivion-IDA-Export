0xA179E0: push    offset bUseArchives_Archive
0xA179E5: mov     ecx, offset dword_B07CFC
0xA179EA: call    BSSimpleList_Remove
0xA179EF: mov     eax, off_B0442C; "bUseArchives:Archive"
0xA179F4: test    eax, eax
0xA179F6: jz      short locret_A17A04
0xA179F8: cmp     byte ptr [eax], 53h ; 'S'
0xA179FB: jnz     short locret_A17A04
0xA179FD: push    eax
0xA179FE: call    FormHeapFree
0xA17A03: pop     ecx
0xA17A04: retn
