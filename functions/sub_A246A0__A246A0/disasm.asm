0xA246A0: push    offset flt_B135B8
0xA246A5: mov     ecx, offset dword_B07CFC
0xA246AA: call    BSSimpleList_Remove
0xA246AF: mov     eax, off_B135BC; "fKeyRepeatInterval:Interface"
0xA246B4: test    eax, eax
0xA246B6: jz      short locret_A246C4
0xA246B8: cmp     byte ptr [eax], 53h ; 'S'
0xA246BB: jnz     short locret_A246C4
0xA246BD: push    eax
0xA246BE: call    FormHeapFree
0xA246C3: pop     ecx
0xA246C4: retn
