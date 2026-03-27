0xA18770: push    offset unk_B068E0
0xA18775: mov     ecx, offset dword_B07CFC
0xA1877A: call    BSSimpleList_Remove
0xA1877F: mov     eax, off_B068E4; "fRF:HAVOK"
0xA18784: test    eax, eax
0xA18786: jz      short locret_A18794
0xA18788: cmp     byte ptr [eax], 53h ; 'S'
0xA1878B: jnz     short locret_A18794
0xA1878D: push    eax
0xA1878E: call    FormHeapFree
0xA18793: pop     ecx
0xA18794: retn
