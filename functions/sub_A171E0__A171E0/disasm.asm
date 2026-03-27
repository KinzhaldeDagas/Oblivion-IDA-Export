0xA171E0: push    offset dword_B030C4
0xA171E5: mov     ecx, offset dword_B07CFC
0xA171EA: call    BSSimpleList_Remove
0xA171EF: mov     eax, off_B030C8; "iIntroSequencePriority:General"
0xA171F4: test    eax, eax
0xA171F6: jz      short locret_A17204
0xA171F8: cmp     byte ptr [eax], 53h ; 'S'
0xA171FB: jnz     short locret_A17204
0xA171FD: push    eax
0xA171FE: call    FormHeapFree
0xA17203: pop     ecx
0xA17204: retn
