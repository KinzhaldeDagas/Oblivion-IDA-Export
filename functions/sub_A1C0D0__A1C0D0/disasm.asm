0xA1C0D0: push    offset off_B09EF0
0xA1C0D5: mov     ecx, offset dword_B07CFC
0xA1C0DA: call    BSSimpleList_Remove
0xA1C0DF: mov     eax, off_B09EF4; "sBetaCommentFileName:General"
0xA1C0E4: test    eax, eax
0xA1C0E6: jz      short locret_A1C0F4
0xA1C0E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C0EB: jnz     short locret_A1C0F4
0xA1C0ED: push    eax
0xA1C0EE: call    FormHeapFree
0xA1C0F3: pop     ecx
0xA1C0F4: retn
