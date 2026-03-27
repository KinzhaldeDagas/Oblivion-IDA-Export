0xA18DE0: push    offset byte_B06CCC
0xA18DE5: mov     ecx, offset dword_B07CFC
0xA18DEA: call    BSSimpleList_Remove
0xA18DEF: mov     eax, off_B06CD0; "bDoAmbientPass:Display"
0xA18DF4: test    eax, eax
0xA18DF6: jz      short locret_A18E04
0xA18DF8: cmp     byte ptr [eax], 53h ; 'S'
0xA18DFB: jnz     short locret_A18E04
0xA18DFD: push    eax
0xA18DFE: call    FormHeapFree
0xA18E03: pop     ecx
0xA18E04: retn
