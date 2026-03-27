0xA1B8A0: push    offset unk_B08B54
0xA1B8A5: mov     ecx, offset dword_B07CFC
0xA1B8AA: call    BSSimpleList_Remove
0xA1B8AF: mov     eax, off_B08B58; "bCurrentCellOnly:Landscape"
0xA1B8B4: test    eax, eax
0xA1B8B6: jz      short locret_A1B8C4
0xA1B8B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B8BB: jnz     short locret_A1B8C4
0xA1B8BD: push    eax
0xA1B8BE: call    FormHeapFree
0xA1B8C3: pop     ecx
0xA1B8C4: retn
