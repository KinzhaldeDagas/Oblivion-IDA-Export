0xA18DB0: push    offset bDoImageSpaceEffect
0xA18DB5: mov     ecx, offset dword_B07CFC
0xA18DBA: call    BSSimpleList_Remove
0xA18DBF: mov     eax, off_B06CC8; "bDoImageSpaceEffects:Display"
0xA18DC4: test    eax, eax
0xA18DC6: jz      short locret_A18DD4
0xA18DC8: cmp     byte ptr [eax], 53h ; 'S'
0xA18DCB: jnz     short locret_A18DD4
0xA18DCD: push    eax
0xA18DCE: call    FormHeapFree
0xA18DD3: pop     ecx
0xA18DD4: retn
