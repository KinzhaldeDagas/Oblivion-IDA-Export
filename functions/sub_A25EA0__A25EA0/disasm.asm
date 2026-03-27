0xA25EA0: push    offset bDebugSmoothing
0xA25EA5: mov     ecx, offset dword_B07CFC
0xA25EAA: call    BSSimpleList_Remove
0xA25EAF: mov     eax, off_B15820; "bDebugSmoothing:Pathfinding"
0xA25EB4: test    eax, eax
0xA25EB6: jz      short locret_A25EC4
0xA25EB8: cmp     byte ptr [eax], 53h ; 'S'
0xA25EBB: jnz     short locret_A25EC4
0xA25EBD: push    eax
0xA25EBE: call    FormHeapFree
0xA25EC3: pop     ecx
0xA25EC4: retn
