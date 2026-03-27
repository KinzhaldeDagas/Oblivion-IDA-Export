0xA25B90: push    offset unk_B14F10
0xA25B95: mov     ecx, offset dword_B07CFC
0xA25B9A: call    BSSimpleList_Remove
0xA25B9F: mov     eax, off_B14F14; "fDlgFocus:Interface"
0xA25BA4: test    eax, eax
0xA25BA6: jz      short locret_A25BB4
0xA25BA8: cmp     byte ptr [eax], 53h ; 'S'
0xA25BAB: jnz     short locret_A25BB4
0xA25BAD: push    eax
0xA25BAE: call    FormHeapFree
0xA25BB3: pop     ecx
0xA25BB4: retn
