0xA184A0: push    offset bFixAIOnLoad
0xA184A5: mov     ecx, offset dword_B07CFC
0xA184AA: call    BSSimpleList_Remove
0xA184AF: mov     eax, off_B05DC4; "bFixAIPackagesOnLoad:General"
0xA184B4: test    eax, eax
0xA184B6: jz      short locret_A184C4
0xA184B8: cmp     byte ptr [eax], 53h ; 'S'
0xA184BB: jnz     short locret_A184C4
0xA184BD: push    eax
0xA184BE: call    FormHeapFree
0xA184C3: pop     ecx
0xA184C4: retn
