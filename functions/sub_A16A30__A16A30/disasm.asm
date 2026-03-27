0xA16A30: push    offset dword_B02D18
0xA16A35: mov     ecx, offset dword_B07CFC
0xA16A3A: call    BSSimpleList_Remove
0xA16A3F: mov     eax, off_B02D1C; "bUseThreadedParticleSystem:General"
0xA16A44: test    eax, eax
0xA16A46: jz      short locret_A16A54
0xA16A48: cmp     byte ptr [eax], 53h ; 'S'
0xA16A4B: jnz     short locret_A16A54
0xA16A4D: push    eax
0xA16A4E: call    FormHeapFree
0xA16A53: pop     ecx
0xA16A54: retn
