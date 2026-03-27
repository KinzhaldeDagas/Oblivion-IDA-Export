0xA25700: push    offset flt_B14CCC
0xA25705: mov     ecx, offset dword_B07CFC
0xA2570A: call    BSSimpleList_Remove
0xA2570F: mov     eax, off_B14CD0; "fHealthBarFadeOutSpeed:GamePlay"
0xA25714: test    eax, eax
0xA25716: jz      short locret_A25724
0xA25718: cmp     byte ptr [eax], 53h ; 'S'
0xA2571B: jnz     short locret_A25724
0xA2571D: push    eax
0xA2571E: call    FormHeapFree
0xA25723: pop     ecx
0xA25724: retn
