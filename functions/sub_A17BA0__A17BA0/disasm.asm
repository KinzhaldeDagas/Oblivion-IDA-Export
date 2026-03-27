0xA17BA0: push    offset dword_B048E4
0xA17BA5: mov     ecx, offset dword_B07CFC
0xA17BAA: call    BSSimpleList_Remove
0xA17BAF: mov     eax, off_B048E8; "iPostProcessMilliseconds:BackgroundLoad"
0xA17BB4: test    eax, eax
0xA17BB6: jz      short locret_A17BC4
0xA17BB8: cmp     byte ptr [eax], 53h ; 'S'
0xA17BBB: jnz     short locret_A17BC4
0xA17BBD: push    eax
0xA17BBE: call    FormHeapFree
0xA17BC3: pop     ecx
0xA17BC4: retn
