0xA1CDC0: push    offset off_B11B54; "1.0, 1.0"
0xA1CDC5: mov     ecx, offset unk_B11D4C
0xA1CDCA: call    BSSimpleList_Remove
0xA1CDCF: mov     eax, off_B11B58; "sLUpperArm:DEFAULT"
0xA1CDD4: test    eax, eax
0xA1CDD6: jz      short locret_A1CDE4
0xA1CDD8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CDDB: jnz     short locret_A1CDE4
0xA1CDDD: push    eax
0xA1CDDE: call    FormHeapFree
0xA1CDE3: pop     ecx
0xA1CDE4: retn
