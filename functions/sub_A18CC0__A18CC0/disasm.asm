0xA18CC0: push    offset unk_B06C9C
0xA18CC5: mov     ecx, offset dword_B07CFC
0xA18CCA: call    BSSimpleList_Remove
0xA18CCF: mov     eax, off_B06CA0; "iNPatchNOrder:Display"
0xA18CD4: test    eax, eax
0xA18CD6: jz      short locret_A18CE4
0xA18CD8: cmp     byte ptr [eax], 53h ; 'S'
0xA18CDB: jnz     short locret_A18CE4
0xA18CDD: push    eax
0xA18CDE: call    FormHeapFree
0xA18CE3: pop     ecx
0xA18CE4: retn
