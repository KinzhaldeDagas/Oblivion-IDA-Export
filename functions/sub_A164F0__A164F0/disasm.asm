0xA164F0: push    offset flt_B02C4C
0xA164F5: mov     ecx, offset dword_B07CFC
0xA164FA: call    BSSimpleList_Remove
0xA164FF: mov     eax, off_B02C50; "fVersion:Controls"
0xA16504: test    eax, eax
0xA16506: jz      short locret_A16514
0xA16508: cmp     byte ptr [eax], 53h ; 'S'
0xA1650B: jnz     short locret_A16514
0xA1650D: push    eax
0xA1650E: call    FormHeapFree
0xA16513: pop     ecx
0xA16514: retn
