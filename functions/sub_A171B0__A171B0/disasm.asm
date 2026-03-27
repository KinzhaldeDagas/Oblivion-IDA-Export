0xA171B0: push    offset dword_B030BC
0xA171B5: mov     ecx, offset dword_B07CFC
0xA171BA: call    BSSimpleList_Remove
0xA171BF: mov     eax, off_B030C0; "iPreloadSizeLimit:General"
0xA171C4: test    eax, eax
0xA171C6: jz      short locret_A171D4
0xA171C8: cmp     byte ptr [eax], 53h ; 'S'
0xA171CB: jnz     short locret_A171D4
0xA171CD: push    eax
0xA171CE: call    FormHeapFree
0xA171D3: pop     ecx
0xA171D4: retn
