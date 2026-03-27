0xA1A970: push    offset unk_B0764C
0xA1A975: mov     ecx, offset dword_B07CFC
0xA1A97A: call    BSSimpleList_Remove
0xA1A97F: mov     eax, off_B07650; "bLODPopTrees:LOD"
0xA1A984: test    eax, eax
0xA1A986: jz      short locret_A1A994
0xA1A988: cmp     byte ptr [eax], 53h ; 'S'
0xA1A98B: jnz     short locret_A1A994
0xA1A98D: push    eax
0xA1A98E: call    FormHeapFree
0xA1A993: pop     ecx
0xA1A994: retn
