0xA236C0: push    offset flt_B12608
0xA236C5: mov     ecx, offset dword_B07CFC
0xA236CA: call    BSSimpleList_Remove
0xA236CF: mov     eax, off_B1260C; "fTreeForceCS:SpeedTree"
0xA236D4: test    eax, eax
0xA236D6: jz      short locret_A236E4
0xA236D8: cmp     byte ptr [eax], 53h ; 'S'
0xA236DB: jnz     short locret_A236E4
0xA236DD: push    eax
0xA236DE: call    FormHeapFree
0xA236E3: pop     ecx
0xA236E4: retn
