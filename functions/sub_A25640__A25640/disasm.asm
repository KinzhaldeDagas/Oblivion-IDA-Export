0xA25640: push    offset unk_B14BCC
0xA25645: mov     ecx, offset dword_B07CFC
0xA2564A: call    BSSimpleList_Remove
0xA2564F: mov     eax, off_B14BD0; "bDebugCombatAvoidance:Combat"
0xA25654: test    eax, eax
0xA25656: jz      short locret_A25664
0xA25658: cmp     byte ptr [eax], 53h ; 'S'
0xA2565B: jnz     short locret_A25664
0xA2565D: push    eax
0xA2565E: call    FormHeapFree
0xA25663: pop     ecx
0xA25664: retn
