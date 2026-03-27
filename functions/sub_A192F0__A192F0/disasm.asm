0xA192F0: push    offset bAllowSM20Hair
0xA192F5: mov     ecx, offset dword_B07CFC
0xA192FA: call    BSSimpleList_Remove
0xA192FF: mov     eax, off_B06DA8; "bAllow20HairShader:Display"
0xA19304: test    eax, eax
0xA19306: jz      short locret_A19314
0xA19308: cmp     byte ptr [eax], 53h ; 'S'
0xA1930B: jnz     short locret_A19314
0xA1930D: push    eax
0xA1930E: call    FormHeapFree
0xA19313: pop     ecx
0xA19314: retn
