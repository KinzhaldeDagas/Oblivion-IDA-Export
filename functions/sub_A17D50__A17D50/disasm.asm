0xA17D50: push    offset off_B051E4; "255,255,255,255"
0xA17D55: mov     ecx, offset dword_B07CFC
0xA17D5A: call    BSSimpleList_Remove
0xA17D5F: mov     eax, off_B051E8; "sEnvReduceColor:Weather"
0xA17D64: test    eax, eax
0xA17D66: jz      short locret_A17D74
0xA17D68: cmp     byte ptr [eax], 53h ; 'S'
0xA17D6B: jnz     short locret_A17D74
0xA17D6D: push    eax
0xA17D6E: call    FormHeapFree
0xA17D73: pop     ecx
0xA17D74: retn
