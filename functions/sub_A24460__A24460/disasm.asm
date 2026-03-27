0xA24460: push    offset byte_B13218
0xA24465: mov     ecx, offset dword_B07CFC
0xA2446A: call    BSSimpleList_Remove
0xA2446F: mov     eax, off_B1321C; "bSaveOnRest:GamePlay"
0xA24474: test    eax, eax
0xA24476: jz      short locret_A24484
0xA24478: cmp     byte ptr [eax], 53h ; 'S'
0xA2447B: jnz     short locret_A24484
0xA2447D: push    eax
0xA2447E: call    FormHeapFree
0xA24483: pop     ecx
0xA24484: retn
