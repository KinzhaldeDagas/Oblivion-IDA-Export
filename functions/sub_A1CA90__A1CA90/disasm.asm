0xA1CA90: push    offset off_B11ACC; "Bip01 Head"
0xA1CA95: mov     ecx, offset unk_B11D4C
0xA1CA9A: call    BSSimpleList_Remove
0xA1CA9F: mov     eax, off_B11AD0; "sHitStart:QUADHIT"
0xA1CAA4: test    eax, eax
0xA1CAA6: jz      short locret_A1CAB4
0xA1CAA8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CAAB: jnz     short locret_A1CAB4
0xA1CAAD: push    eax
0xA1CAAE: call    FormHeapFree
0xA1CAB3: pop     ecx
0xA1CAB4: retn
