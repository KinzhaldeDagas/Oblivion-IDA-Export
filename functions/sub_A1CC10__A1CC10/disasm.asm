0xA1CC10: push    offset off_B11B0C; "1.0, 1.0"
0xA1CC15: mov     ecx, offset unk_B11D4C
0xA1CC1A: call    BSSimpleList_Remove
0xA1CC1F: mov     eax, off_B11B10; "sLUpperArm:QUADHIT"
0xA1CC24: test    eax, eax
0xA1CC26: jz      short locret_A1CC34
0xA1CC28: cmp     byte ptr [eax], 53h ; 'S'
0xA1CC2B: jnz     short locret_A1CC34
0xA1CC2D: push    eax
0xA1CC2E: call    FormHeapFree
0xA1CC33: pop     ecx
0xA1CC34: retn
