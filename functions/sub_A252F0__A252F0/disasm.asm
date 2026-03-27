0xA252F0: push    offset dword_B148CC
0xA252F5: mov     ecx, offset dword_B07CFC
0xA252FA: call    BSSimpleList_Remove
0xA252FF: mov     eax, off_B148D0; "iShowHitVector:Combat"
0xA25304: test    eax, eax
0xA25306: jz      short locret_A25314
0xA25308: cmp     byte ptr [eax], 53h ; 'S'
0xA2530B: jnz     short locret_A25314
0xA2530D: push    eax
0xA2530E: call    FormHeapFree
0xA25313: pop     ecx
0xA25314: retn
