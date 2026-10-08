0x671600: call    InterfaceManager_ConsumeMessageButton
0x671605: cmp     al, 1
0x671607: jnz     short locret_671614
0x671609: mov     ecx, ds:0B333C4h
0x67160F: jmp     ServeSentence; Medium Armor sidecar boundary: prison message-box callback returns from native ServeSentence path; apply plugin-owned Medium Armor loss without extending native skill arrays.
0x671614: retn
