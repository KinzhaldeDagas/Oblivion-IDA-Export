0xA24B90: push    offset byte_B14130
0xA24B95: mov     ecx, offset dword_B07CFC
0xA24B9A: call    BSSimpleList_Remove
0xA24B9F: mov     eax, off_B14134; "bShowSectionTimes:LoadingBar"
0xA24BA4: test    eax, eax
0xA24BA6: jz      short locret_A24BB4
0xA24BA8: cmp     byte ptr [eax], 53h ; 'S'
0xA24BAB: jnz     short locret_A24BB4
0xA24BAD: push    eax
0xA24BAE: call    FormHeapFree
0xA24BB3: pop     ecx
0xA24BB4: retn
