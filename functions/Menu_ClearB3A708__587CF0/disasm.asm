0x587CF0: mov     eax, ds:0B3A708h
0x587CF5: test    eax, eax
0x587CF7: jz      short locret_587D16
0x587CF9: push    eax
0x587CFA: mov     dword ptr ds:0B3A708h, 0
0x587D04: call    FormHeapFree
0x587D09: add     esp, 4
0x587D0C: mov     dword ptr ds:0B3A708h, 0
0x587D16: retn
