0xA1C970: push    offset off_B11A9C; "0.2, 0.5"
0xA1C975: mov     ecx, offset unk_B11D4C
0xA1C97A: call    BSSimpleList_Remove
0xA1C97F: mov     eax, off_B11AA0; "sLUpperArm:HIT"
0xA1C984: test    eax, eax
0xA1C986: jz      short locret_A1C994
0xA1C988: cmp     byte ptr [eax], 53h ; 'S'
0xA1C98B: jnz     short locret_A1C994
0xA1C98D: push    eax
0xA1C98E: call    FormHeapFree
0xA1C993: pop     ecx
0xA1C994: retn
