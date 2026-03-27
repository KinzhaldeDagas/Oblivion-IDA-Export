0xA25580: push    offset flt_B14BAC
0xA25585: mov     ecx, offset dword_B07CFC
0xA2558A: call    BSSimpleList_Remove
0xA2558F: mov     eax, off_B14BB0; "fLowPerfCombatantVoiceDistance"
0xA25594: test    eax, eax
0xA25596: jz      short locret_A255A4
0xA25598: cmp     byte ptr [eax], 53h ; 'S'
0xA2559B: jnz     short locret_A255A4
0xA2559D: push    eax
0xA2559E: call    FormHeapFree
0xA255A3: pop     ecx
0xA255A4: retn
