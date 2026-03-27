0xA1C8B0: push    offset off_B11A7C; "1.0, 1.0"
0xA1C8B5: mov     ecx, offset unk_B11D4C
0xA1C8BA: call    BSSimpleList_Remove
0xA1C8BF: mov     eax, off_B11A80; "sRForeArm:HIT"
0xA1C8C4: test    eax, eax
0xA1C8C6: jz      short locret_A1C8D4
0xA1C8C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C8CB: jnz     short locret_A1C8D4
0xA1C8CD: push    eax
0xA1C8CE: call    FormHeapFree
0xA1C8D3: pop     ecx
0xA1C8D4: retn
