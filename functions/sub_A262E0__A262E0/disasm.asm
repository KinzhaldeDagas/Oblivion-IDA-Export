0xA262E0: push    offset dword_B16254
0xA262E5: mov     ecx, offset dword_B07CFC
0xA262EA: call    BSSimpleList_Remove
0xA262EF: mov     eax, off_B16258; "fWoodLargeMassMin:Audio"
0xA262F4: test    eax, eax
0xA262F6: jz      short locret_A26304
0xA262F8: cmp     byte ptr [eax], 53h ; 'S'
0xA262FB: jnz     short locret_A26304
0xA262FD: push    eax
0xA262FE: call    FormHeapFree
0xA26303: pop     ecx
0xA26304: retn
