0xA1D0C0: push    offset off_B11BD4; "1.0, 1.0"
0xA1D0C5: mov     ecx, offset unk_B11D4C
0xA1D0CA: call    BSSimpleList_Remove
0xA1D0CF: mov     eax, off_B11BD8; "sBackWeapon:DEFAULT"
0xA1D0D4: test    eax, eax
0xA1D0D6: jz      short locret_A1D0E4
0xA1D0D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D0DB: jnz     short locret_A1D0E4
0xA1D0DD: push    eax
0xA1D0DE: call    FormHeapFree
0xA1D0E3: pop     ecx
0xA1D0E4: retn
