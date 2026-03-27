0xA264C0: push    offset dword_B162A4
0xA264C5: mov     ecx, offset dword_B07CFC
0xA264CA: call    BSSimpleList_Remove
0xA264CF: mov     eax, off_B162A8; "fMetalLargeMassMin:Audio"
0xA264D4: test    eax, eax
0xA264D6: jz      short locret_A264E4
0xA264D8: cmp     byte ptr [eax], 53h ; 'S'
0xA264DB: jnz     short locret_A264E4
0xA264DD: push    eax
0xA264DE: call    FormHeapFree
0xA264E3: pop     ecx
0xA264E4: retn
