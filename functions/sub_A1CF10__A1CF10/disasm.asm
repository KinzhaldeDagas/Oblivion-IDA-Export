0xA1CF10: push    offset off_B11B8C; "1.0, 1.0"
0xA1CF15: mov     ecx, offset unk_B11D4C
0xA1CF1A: call    BSSimpleList_Remove
0xA1CF1F: mov     eax, off_B11B90; "sRForeArm:DEFAULT"
0xA1CF24: test    eax, eax
0xA1CF26: jz      short locret_A1CF34
0xA1CF28: cmp     byte ptr [eax], 53h ; 'S'
0xA1CF2B: jnz     short locret_A1CF34
0xA1CF2D: push    eax
0xA1CF2E: call    FormHeapFree
0xA1CF33: pop     ecx
0xA1CF34: retn
