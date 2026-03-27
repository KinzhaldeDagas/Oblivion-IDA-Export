0xA199B0: push    offset flt_B06EC4
0xA199B5: mov     ecx, offset dword_B07CFC
0xA199BA: call    BSSimpleList_Remove
0xA199BF: mov     eax, off_B06EC8; "fShadowLOD2:Display"
0xA199C4: test    eax, eax
0xA199C6: jz      short locret_A199D4
0xA199C8: cmp     byte ptr [eax], 53h ; 'S'
0xA199CB: jnz     short locret_A199D4
0xA199CD: push    eax
0xA199CE: call    FormHeapFree
0xA199D3: pop     ecx
0xA199D4: retn
