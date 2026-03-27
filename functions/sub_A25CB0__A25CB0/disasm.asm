0xA25CB0: push    offset byte_B14F40
0xA25CB5: mov     ecx, offset dword_B07CFC
0xA25CBA: call    BSSimpleList_Remove
0xA25CBF: mov     eax, off_B14F44; "bDisablePlayerCollision:HAVOK"
0xA25CC4: test    eax, eax
0xA25CC6: jz      short locret_A25CD4
0xA25CC8: cmp     byte ptr [eax], 53h ; 'S'
0xA25CCB: jnz     short locret_A25CD4
0xA25CCD: push    eax
0xA25CCE: call    FormHeapFree
0xA25CD3: pop     ecx
0xA25CD4: retn
