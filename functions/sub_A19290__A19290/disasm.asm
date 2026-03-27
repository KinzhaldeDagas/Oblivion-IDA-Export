0xA19290: push    offset flt_B06D94
0xA19295: mov     ecx, offset dword_B07CFC
0xA1929A: call    BSSimpleList_Remove
0xA1929F: mov     eax, off_B06D98; "fBlockedTexOffset:GethitShader"
0xA192A4: test    eax, eax
0xA192A6: jz      short locret_A192B4
0xA192A8: cmp     byte ptr [eax], 53h ; 'S'
0xA192AB: jnz     short locret_A192B4
0xA192AD: push    eax
0xA192AE: call    FormHeapFree
0xA192B3: pop     ecx
0xA192B4: retn
