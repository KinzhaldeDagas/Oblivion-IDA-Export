0xA17E70: push    offset fMoveMassLimit
0xA17E75: mov     ecx, offset dword_B07CFC
0xA17E7A: call    BSSimpleList_Remove
0xA17E7F: mov     eax, off_B05218; "fMoveLimitMass:HAVOK"
0xA17E84: test    eax, eax
0xA17E86: jz      short locret_A17E94
0xA17E88: cmp     byte ptr [eax], 53h ; 'S'
0xA17E8B: jnz     short locret_A17E94
0xA17E8D: push    eax
0xA17E8E: call    FormHeapFree
0xA17E93: pop     ecx
0xA17E94: retn
