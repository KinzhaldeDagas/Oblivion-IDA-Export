0xA17180: push    offset byte_B030B4
0xA17185: mov     ecx, offset dword_B07CFC
0xA1718A: call    BSSimpleList_Remove
0xA1718F: mov     eax, off_B030B8; "bPreloadIntroSequence:General"
0xA17194: test    eax, eax
0xA17196: jz      short locret_A171A4
0xA17198: cmp     byte ptr [eax], 53h ; 'S'
0xA1719B: jnz     short locret_A171A4
0xA1719D: push    eax
0xA1719E: call    FormHeapFree
0xA171A3: pop     ecx
0xA171A4: retn
