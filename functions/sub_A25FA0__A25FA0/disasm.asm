0xA25FA0: push    offset byte_B15A68
0xA25FA5: mov     ecx, offset dword_B07CFC
0xA25FAA: call    BSSimpleList_Remove
0xA25FAF: mov     eax, off_B15A6C; "bDrawSpellContact:General"
0xA25FB4: test    eax, eax
0xA25FB6: jz      short locret_A25FC4
0xA25FB8: cmp     byte ptr [eax], 53h ; 'S'
0xA25FBB: jnz     short locret_A25FC4
0xA25FBD: push    eax
0xA25FBE: call    FormHeapFree
0xA25FC3: pop     ecx
0xA25FC4: retn
