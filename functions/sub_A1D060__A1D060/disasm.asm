0xA1D060: push    offset off_B11BC4; "1.0, 1.0"
0xA1D065: mov     ecx, offset unk_B11D4C
0xA1D06A: call    BSSimpleList_Remove
0xA1D06F: mov     eax, off_B11BC8; "sShield:DEFAULT"
0xA1D074: test    eax, eax
0xA1D076: jz      short locret_A1D084
0xA1D078: cmp     byte ptr [eax], 53h ; 'S'
0xA1D07B: jnz     short locret_A1D084
0xA1D07D: push    eax
0xA1D07E: call    FormHeapFree
0xA1D083: pop     ecx
0xA1D084: retn
