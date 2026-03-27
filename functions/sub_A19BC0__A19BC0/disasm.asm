0xA19BC0: push    offset word_B06F1C
0xA19BC5: mov     ecx, offset dword_B07CFC
0xA19BCA: call    BSSimpleList_Remove
0xA19BCF: mov     eax, off_B06F20; "iShadowMapResolution:Display"
0xA19BD4: test    eax, eax
0xA19BD6: jz      short locret_A19BE4
0xA19BD8: cmp     byte ptr [eax], 53h ; 'S'
0xA19BDB: jnz     short locret_A19BE4
0xA19BDD: push    eax
0xA19BDE: call    FormHeapFree
0xA19BE3: pop     ecx
0xA19BE4: retn
