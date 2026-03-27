0xA19CB0: push    offset unk_B06F44
0xA19CB5: mov     ecx, offset dword_B07CFC
0xA19CBA: call    BSSimpleList_Remove
0xA19CBF: mov     eax, off_B06F48; "uVideoDeviceIdentifierPart3:Display"
0xA19CC4: test    eax, eax
0xA19CC6: jz      short locret_A19CD4
0xA19CC8: cmp     byte ptr [eax], 53h ; 'S'
0xA19CCB: jnz     short locret_A19CD4
0xA19CCD: push    eax
0xA19CCE: call    FormHeapFree
0xA19CD3: pop     ecx
0xA19CD4: retn
