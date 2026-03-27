0xA1B870: push    offset unk_B08B4C
0xA1B875: mov     ecx, offset dword_B07CFC
0xA1B87A: call    BSSimpleList_Remove
0xA1B87F: mov     eax, off_B08B50; "bPreventSafetyCheck:Landscape"
0xA1B884: test    eax, eax
0xA1B886: jz      short locret_A1B894
0xA1B888: cmp     byte ptr [eax], 53h ; 'S'
0xA1B88B: jnz     short locret_A1B894
0xA1B88D: push    eax
0xA1B88E: call    FormHeapFree
0xA1B893: pop     ecx
0xA1B894: retn
