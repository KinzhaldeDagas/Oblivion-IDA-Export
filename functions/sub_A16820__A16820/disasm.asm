0xA16820: push    offset off_B02CC0
0xA16825: mov     ecx, offset dword_B07CFC
0xA1682A: call    BSSimpleList_Remove
0xA1682F: mov     eax, off_B02CC4; "sTestFile7:General"
0xA16834: test    eax, eax
0xA16836: jz      short locret_A16844
0xA16838: cmp     byte ptr [eax], 53h ; 'S'
0xA1683B: jnz     short locret_A16844
0xA1683D: push    eax
0xA1683E: call    FormHeapFree
0xA16843: pop     ecx
0xA16844: retn
