0xA256A0: push    offset flt_B14CBC
0xA256A5: mov     ecx, offset dword_B07CFC
0xA256AA: call    BSSimpleList_Remove
0xA256AF: mov     eax, off_B14CC0; "fHealthBarHeight:GamePlay"
0xA256B4: test    eax, eax
0xA256B6: jz      short locret_A256C4
0xA256B8: cmp     byte ptr [eax], 53h ; 'S'
0xA256BB: jnz     short locret_A256C4
0xA256BD: push    eax
0xA256BE: call    FormHeapFree
0xA256C3: pop     ecx
0xA256C4: retn
