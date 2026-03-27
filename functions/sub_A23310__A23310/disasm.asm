0xA23310: push    offset useFaceGenHeads
0xA23315: mov     ecx, offset dword_B07CFC
0xA2331A: call    BSSimpleList_Remove
0xA2331F: mov     eax, off_B120B8; "bUseFaceGenHeads:General"
0xA23324: test    eax, eax
0xA23326: jz      short locret_A23334
0xA23328: cmp     byte ptr [eax], 53h ; 'S'
0xA2332B: jnz     short locret_A23334
0xA2332D: push    eax
0xA2332E: call    FormHeapFree
0xA23333: pop     ecx
0xA23334: retn
