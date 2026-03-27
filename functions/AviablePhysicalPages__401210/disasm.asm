0x401210: sub     esp, 20h
0x401213: lea     eax, [esp+20h+Buffer]
0x401216: push    eax; lpBuffer
0x401217: call    ds:GlobalMemoryStatus
0x40121D: mov     eax, [esp+20h+Buffer.dwAvailPhys]
0x401221: add     esp, 20h
0x401224: retn
