0xA186E0: push    offset aHsz?fG
0xA186E5: mov     ecx, offset dword_B07CFC
0xA186EA: call    BSSimpleList_Remove
0xA186EF: mov     eax, off_B068CC; "fSD:HAVOK"
0xA186F4: test    eax, eax
0xA186F6: jz      short locret_A18704
0xA186F8: cmp     byte ptr [eax], 53h ; 'S'
0xA186FB: jnz     short locret_A18704
0xA186FD: push    eax
0xA186FE: call    FormHeapFree
0xA18703: pop     ecx
0xA18704: retn
