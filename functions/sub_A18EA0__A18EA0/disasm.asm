0xA18EA0: push    offset byte_B06CEC
0xA18EA5: mov     ecx, offset dword_B07CFC
0xA18EAA: call    BSSimpleList_Remove
0xA18EAF: mov     eax, off_B06CF0; "bDoActorShadows:Display"
0xA18EB4: test    eax, eax
0xA18EB6: jz      short locret_A18EC4
0xA18EB8: cmp     byte ptr [eax], 53h ; 'S'
0xA18EBB: jnz     short locret_A18EC4
0xA18EBD: push    eax
0xA18EBE: call    FormHeapFree
0xA18EC3: pop     ecx
0xA18EC4: retn
