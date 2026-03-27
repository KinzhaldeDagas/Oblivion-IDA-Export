0xA1CE80: push    offset off_B11B74; "1.0, 1.0"
0xA1CE85: mov     ecx, offset unk_B11D4C
0xA1CE8A: call    BSSimpleList_Remove
0xA1CE8F: mov     eax, off_B11B78; "sLCalf:DEFAULT"
0xA1CE94: test    eax, eax
0xA1CE96: jz      short locret_A1CEA4
0xA1CE98: cmp     byte ptr [eax], 53h ; 'S'
0xA1CE9B: jnz     short locret_A1CEA4
0xA1CE9D: push    eax
0xA1CE9E: call    FormHeapFree
0xA1CEA3: pop     ecx
0xA1CEA4: retn
