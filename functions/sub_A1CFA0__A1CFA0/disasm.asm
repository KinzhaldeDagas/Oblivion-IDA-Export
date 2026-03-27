0xA1CFA0: push    offset off_B11BA4; "1.0, 1.0"
0xA1CFA5: mov     ecx, offset unk_B11D4C
0xA1CFAA: call    BSSimpleList_Remove
0xA1CFAF: mov     eax, off_B11BA8; "sRCalf:DEFAULT"
0xA1CFB4: test    eax, eax
0xA1CFB6: jz      short locret_A1CFC4
0xA1CFB8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CFBB: jnz     short locret_A1CFC4
0xA1CFBD: push    eax
0xA1CFBE: call    FormHeapFree
0xA1CFC3: pop     ecx
0xA1CFC4: retn
