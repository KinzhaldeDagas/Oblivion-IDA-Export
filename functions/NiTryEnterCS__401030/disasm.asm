0x401030: push    ecx; lpCriticalSection
0x401031: call    ds:TryEnterCriticalSection
0x401037: test    eax, eax
0x401039: setnz   al
0x40103C: retn    4
