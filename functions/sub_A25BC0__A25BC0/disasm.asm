0xA25BC0: push    offset flt_B14F18
0xA25BC5: mov     ecx, offset dword_B07CFC
0xA25BCA: call    BSSimpleList_Remove
0xA25BCF: mov     eax, off_B14F1C; "fDlgLookDegStart:Interface"
0xA25BD4: test    eax, eax
0xA25BD6: jz      short locret_A25BE4
0xA25BD8: cmp     byte ptr [eax], 53h ; 'S'
0xA25BDB: jnz     short locret_A25BE4
0xA25BDD: push    eax
0xA25BDE: call    FormHeapFree
0xA25BE3: pop     ecx
0xA25BE4: retn
