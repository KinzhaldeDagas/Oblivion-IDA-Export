0xA233D0: push    offset flt_B120D4
0xA233D5: mov     ecx, offset dword_B07CFC
0xA233DA: call    BSSimpleList_Remove
0xA233DF: mov     eax, off_B120D8; "fTalkingDistance:LOD"
0xA233E4: test    eax, eax
0xA233E6: jz      short locret_A233F4
0xA233E8: cmp     byte ptr [eax], 53h ; 'S'
0xA233EB: jnz     short locret_A233F4
0xA233ED: push    eax
0xA233EE: call    FormHeapFree
0xA233F3: pop     ecx
0xA233F4: retn
