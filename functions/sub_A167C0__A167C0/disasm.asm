0xA167C0: push    offset off_B02CB0
0xA167C5: mov     ecx, offset dword_B07CFC
0xA167CA: call    BSSimpleList_Remove
0xA167CF: mov     eax, off_B02CB4; "sTestFile5:General"
0xA167D4: test    eax, eax
0xA167D6: jz      short locret_A167E4
0xA167D8: cmp     byte ptr [eax], 53h ; 'S'
0xA167DB: jnz     short locret_A167E4
0xA167DD: push    eax
0xA167DE: call    FormHeapFree
0xA167E3: pop     ecx
0xA167E4: retn
