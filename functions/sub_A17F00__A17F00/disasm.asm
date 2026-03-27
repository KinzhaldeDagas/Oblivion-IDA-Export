0xA17F00: push    offset iIdentityBatchRemove
0xA17F05: mov     ecx, offset dword_B07CFC
0xA17F0A: call    BSSimpleList_Remove
0xA17F0F: mov     eax, off_B05230; "iEntityBatchRemoveRate:HAVOK"
0xA17F14: test    eax, eax
0xA17F16: jz      short locret_A17F24
0xA17F18: cmp     byte ptr [eax], 53h ; 'S'
0xA17F1B: jnz     short locret_A17F24
0xA17F1D: push    eax
0xA17F1E: call    FormHeapFree
0xA17F23: pop     ecx
0xA17F24: retn
