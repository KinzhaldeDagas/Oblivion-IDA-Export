0xA17150: push    offset flt_B030AC
0xA17155: mov     ecx, offset dword_B07CFC
0xA1715A: call    BSSimpleList_Remove
0xA1715F: mov     eax, off_B030B0; "fStaticScreenWaitTime:General"
0xA17164: test    eax, eax
0xA17166: jz      short locret_A17174
0xA17168: cmp     byte ptr [eax], 53h ; 'S'
0xA1716B: jnz     short locret_A17174
0xA1716D: push    eax
0xA1716E: call    FormHeapFree
0xA17173: pop     ecx
0xA17174: retn
