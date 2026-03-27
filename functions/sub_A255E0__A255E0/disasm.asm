0xA255E0: push    offset unk_B14BBC
0xA255E5: mov     ecx, offset dword_B07CFC
0xA255EA: call    BSSimpleList_Remove
0xA255EF: mov     eax, off_B14BC0; "fHiPerfNPCTargetLOSTimer:Combat"
0xA255F4: test    eax, eax
0xA255F6: jz      short locret_A25604
0xA255F8: cmp     byte ptr [eax], 53h ; 'S'
0xA255FB: jnz     short locret_A25604
0xA255FD: push    eax
0xA255FE: call    FormHeapFree
0xA25603: pop     ecx
0xA25604: retn
