0xA25140: push    offset dword_B1486C
0xA25145: mov     ecx, offset dword_B07CFC
0xA2514A: call    BSSimpleList_Remove
0xA2514F: mov     eax, off_B14870; "iActorShadowExtMin:Display"
0xA25154: test    eax, eax
0xA25156: jz      short locret_A25164
0xA25158: cmp     byte ptr [eax], 53h ; 'S'
0xA2515B: jnz     short locret_A25164
0xA2515D: push    eax
0xA2515E: call    FormHeapFree
0xA25163: pop     ecx
0xA25164: retn
