0xA23750: push    offset flt_B12620
0xA23755: mov     ecx, offset dword_B07CFC
0xA2375A: call    BSSimpleList_Remove
0xA2375F: mov     eax, off_B12624; "fTreeForceMinBudAngle:SpeedTree"
0xA23764: test    eax, eax
0xA23766: jz      short locret_A23774
0xA23768: cmp     byte ptr [eax], 53h ; 'S'
0xA2376B: jnz     short locret_A23774
0xA2376D: push    eax
0xA2376E: call    FormHeapFree
0xA23773: pop     ecx
0xA23774: retn
