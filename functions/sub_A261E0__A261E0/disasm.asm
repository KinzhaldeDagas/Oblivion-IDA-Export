0xA261E0: push    offset flt_B161D0
0xA261E5: mov     ecx, offset dword_B07CFC
0xA261EA: call    BSSimpleList_Remove
0xA261EF: mov     eax, off_B161D4; "fDialogAttenuationMax:Audio"
0xA261F4: test    eax, eax
0xA261F6: jz      short locret_A26204
0xA261F8: cmp     byte ptr [eax], 53h ; 'S'
0xA261FB: jnz     short locret_A26204
0xA261FD: push    eax
0xA261FE: call    FormHeapFree
0xA26203: pop     ecx
0xA26204: retn
