0xA1D1E0: push    offset flt_B11C04
0xA1D1E5: mov     ecx, offset unk_B11D4C
0xA1D1EA: call    BSSimpleList_Remove
0xA1D1EF: mov     eax, off_B11C08; "fPassOutTime:DEFAULT"
0xA1D1F4: test    eax, eax
0xA1D1F6: jz      short locret_A1D204
0xA1D1F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D1FB: jnz     short locret_A1D204
0xA1D1FD: push    eax
0xA1D1FE: call    FormHeapFree
0xA1D203: pop     ecx
0xA1D204: retn
