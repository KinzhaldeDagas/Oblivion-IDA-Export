0xA1C8E0: push    offset off_B11A84; "0.2, 0.5"
0xA1C8E5: mov     ecx, offset unk_B11D4C
0xA1C8EA: call    BSSimpleList_Remove
0xA1C8EF: mov     eax, off_B11A88; "sRUpperArm:HIT"
0xA1C8F4: test    eax, eax
0xA1C8F6: jz      short locret_A1C904
0xA1C8F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1C8FB: jnz     short locret_A1C904
0xA1C8FD: push    eax
0xA1C8FE: call    FormHeapFree
0xA1C903: pop     ecx
0xA1C904: retn
