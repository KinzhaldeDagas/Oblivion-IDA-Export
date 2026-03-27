0xA256D0: push    offset flt_B14CC4
0xA256D5: mov     ecx, offset dword_B07CFC
0xA256DA: call    BSSimpleList_Remove
0xA256DF: mov     eax, off_B14CC8; "fHealthBarSpeed:GamePlay"
0xA256E4: test    eax, eax
0xA256E6: jz      short locret_A256F4
0xA256E8: cmp     byte ptr [eax], 53h ; 'S'
0xA256EB: jnz     short locret_A256F4
0xA256ED: push    eax
0xA256EE: call    FormHeapFree
0xA256F3: pop     ecx
0xA256F4: retn
