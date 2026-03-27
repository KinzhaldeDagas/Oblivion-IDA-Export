0xA185E0: push    offset flt_B06540
0xA185E5: mov     ecx, offset dword_B07CFC
0xA185EA: call    BSSimpleList_Remove
0xA185EF: mov     eax, off_B06544; "fMenuModeAnimBlend:Interface"
0xA185F4: test    eax, eax
0xA185F6: jz      short locret_A18604
0xA185F8: cmp     byte ptr [eax], 53h ; 'S'
0xA185FB: jnz     short locret_A18604
0xA185FD: push    eax
0xA185FE: call    FormHeapFree
0xA18603: pop     ecx
0xA18604: retn
