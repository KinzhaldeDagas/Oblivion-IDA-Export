0xA192C0: push    offset flt_B06D9C
0xA192C5: mov     ecx, offset dword_B07CFC
0xA192CA: call    BSSimpleList_Remove
0xA192CF: mov     eax, off_B06DA0; "fBlurAmmount:GethitShader"
0xA192D4: test    eax, eax
0xA192D6: jz      short locret_A192E4
0xA192D8: cmp     byte ptr [eax], 53h ; 'S'
0xA192DB: jnz     short locret_A192E4
0xA192DD: push    eax
0xA192DE: call    FormHeapFree
0xA192E3: pop     ecx
0xA192E4: retn
