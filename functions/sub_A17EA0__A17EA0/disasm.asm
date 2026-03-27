0xA17EA0: push    offset bBipedWhenKeyframed
0xA17EA5: mov     ecx, offset dword_B07CFC
0xA17EAA: call    BSSimpleList_Remove
0xA17EAF: mov     eax, off_B05220; "bAddBipedWhenKeyframed:HAVOK"
0xA17EB4: test    eax, eax
0xA17EB6: jz      short locret_A17EC4
0xA17EB8: cmp     byte ptr [eax], 53h ; 'S'
0xA17EBB: jnz     short locret_A17EC4
0xA17EBD: push    eax
0xA17EBE: call    FormHeapFree
0xA17EC3: pop     ecx
0xA17EC4: retn
