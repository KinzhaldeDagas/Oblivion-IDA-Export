0xA17F80: push    offset unk_B0523C
0xA17F85: mov     ecx, offset dword_B07CFC
0xA17F8A: call    BSSimpleList_Remove
0xA17F8F: mov     eax, off_B05240; "bUseMultiThreadedTrees:BackgroundLoad"
0xA17F94: test    eax, eax
0xA17F96: jz      short locret_A17FA4
0xA17F98: cmp     byte ptr [eax], 53h ; 'S'
0xA17F9B: jnz     short locret_A17FA4
0xA17F9D: push    eax
0xA17F9E: call    FormHeapFree
0xA17FA3: pop     ecx
0xA17FA4: retn
