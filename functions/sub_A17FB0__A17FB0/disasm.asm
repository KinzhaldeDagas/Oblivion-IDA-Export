0xA17FB0: push    offset byte_B05244
0xA17FB5: mov     ecx, offset dword_B07CFC
0xA17FBA: call    BSSimpleList_Remove
0xA17FBF: mov     eax, off_B05248; "bTintMipMaps:General"
0xA17FC4: test    eax, eax
0xA17FC6: jz      short locret_A17FD4
0xA17FC8: cmp     byte ptr [eax], 53h ; 'S'
0xA17FCB: jnz     short locret_A17FD4
0xA17FCD: push    eax
0xA17FCE: call    FormHeapFree
0xA17FD3: pop     ecx
0xA17FD4: retn
