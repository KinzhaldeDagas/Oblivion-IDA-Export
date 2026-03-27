0xA167F0: push    offset off_B02CB8
0xA167F5: mov     ecx, offset dword_B07CFC
0xA167FA: call    BSSimpleList_Remove
0xA167FF: mov     eax, off_B02CBC; "sTestFile6:General"
0xA16804: test    eax, eax
0xA16806: jz      short locret_A16814
0xA16808: cmp     byte ptr [eax], 53h ; 'S'
0xA1680B: jnz     short locret_A16814
0xA1680D: push    eax
0xA1680E: call    FormHeapFree
0xA16813: pop     ecx
0xA16814: retn
