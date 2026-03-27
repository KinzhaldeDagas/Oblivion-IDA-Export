0xA19CE0: push    offset unk_B06F4C
0xA19CE5: mov     ecx, offset dword_B07CFC
0xA19CEA: call    BSSimpleList_Remove
0xA19CEF: mov     eax, off_B06F50; "uVideoDeviceIdentifierPart4:Display"
0xA19CF4: test    eax, eax
0xA19CF6: jz      short locret_A19D04
0xA19CF8: cmp     byte ptr [eax], 53h ; 'S'
0xA19CFB: jnz     short locret_A19D04
0xA19CFD: push    eax
0xA19CFE: call    FormHeapFree
0xA19D03: pop     ecx
0xA19D04: retn
