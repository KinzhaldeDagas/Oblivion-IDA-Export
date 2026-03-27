0xA247C0: push    offset flt_B135E8
0xA247C5: mov     ecx, offset dword_B07CFC
0xA247CA: call    BSSimpleList_Remove
0xA247CF: mov     eax, off_B135EC; "fMenuPlayerLightDiffuseGreen:Interface"
0xA247D4: test    eax, eax
0xA247D6: jz      short locret_A247E4
0xA247D8: cmp     byte ptr [eax], 53h ; 'S'
0xA247DB: jnz     short locret_A247E4
0xA247DD: push    eax
0xA247DE: call    FormHeapFree
0xA247E3: pop     ecx
0xA247E4: retn
