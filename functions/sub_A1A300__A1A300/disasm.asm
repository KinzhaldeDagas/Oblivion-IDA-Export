0xA1A300: push    offset byte_B07070
0xA1A305: mov     ecx, offset dword_B07CFC
0xA1A30A: call    BSSimpleList_Remove
0xA1A30F: mov     eax, off_B07074; "bUseWaterReflectionsTrees:Water"
0xA1A314: test    eax, eax
0xA1A316: jz      short locret_A1A324
0xA1A318: cmp     byte ptr [eax], 53h ; 'S'
0xA1A31B: jnz     short locret_A1A324
0xA1A31D: push    eax
0xA1A31E: call    FormHeapFree
0xA1A323: pop     ecx
0xA1A324: retn
