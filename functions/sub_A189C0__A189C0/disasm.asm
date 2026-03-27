0xA189C0: push    offset bAllowYesToAll_MESSAGES
0xA189C5: mov     ecx, offset dword_B07CFC
0xA189CA: call    BSSimpleList_Remove
0xA189CF: mov     eax, off_B06B24; "bAllowYesToAll:MESSAGES"
0xA189D4: test    eax, eax
0xA189D6: jz      short locret_A189E4
0xA189D8: cmp     byte ptr [eax], 53h ; 'S'
0xA189DB: jnz     short locret_A189E4
0xA189DD: push    eax
0xA189DE: call    FormHeapFree
0xA189E3: pop     ecx
0xA189E4: retn
