0xA17E10: push    offset unk_B05204
0xA17E15: mov     ecx, offset dword_B07CFC
0xA17E1A: call    BSSimpleList_Remove
0xA17E1F: mov     eax, off_B05208; "bHavokPick:HAVOK"
0xA17E24: test    eax, eax
0xA17E26: jz      short locret_A17E34
0xA17E28: cmp     byte ptr [eax], 53h ; 'S'
0xA17E2B: jnz     short locret_A17E34
0xA17E2D: push    eax
0xA17E2E: call    FormHeapFree
0xA17E33: pop     ecx
0xA17E34: retn
