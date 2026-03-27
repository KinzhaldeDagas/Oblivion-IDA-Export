0xA19350: push    offset byte_B06DB4
0xA19355: mov     ecx, offset dword_B07CFC
0xA1935A: call    BSSimpleList_Remove
0xA1935F: mov     eax, off_B06DB8; "bForce1XShaders:Display"
0xA19364: test    eax, eax
0xA19366: jz      short locret_A19374
0xA19368: cmp     byte ptr [eax], 53h ; 'S'
0xA1936B: jnz     short locret_A19374
0xA1936D: push    eax
0xA1936E: call    FormHeapFree
0xA19373: pop     ecx
0xA19374: retn
