0xA24640: push    offset bActivateGamebyroPicks
0xA24645: mov     ecx, offset dword_B07CFC
0xA2464A: call    BSSimpleList_Remove
0xA2464F: mov     eax, off_B135AC; "bActivatePickUseGamebryoPick:Interface"
0xA24654: test    eax, eax
0xA24656: jz      short locret_A24664
0xA24658: cmp     byte ptr [eax], 53h ; 'S'
0xA2465B: jnz     short locret_A24664
0xA2465D: push    eax
0xA2465E: call    FormHeapFree
0xA24663: pop     ecx
0xA24664: retn
