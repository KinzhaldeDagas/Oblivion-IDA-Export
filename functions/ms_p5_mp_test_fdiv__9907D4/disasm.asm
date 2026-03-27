0x9907D4: push    offset aKernel32
0x9907D9: call    ds:GetModuleHandleA
0x9907DF: test    eax, eax
0x9907E1: jz      short loc_9907F8
0x9907E3: push    offset aIsprocessorfea
0x9907E8: push    eax; hModule
0x9907E9: call    ds:GetProcAddress
0x9907EF: test    eax, eax
0x9907F1: jz      short loc_9907F8
0x9907F3: push    0
0x9907F5: call    eax
0x9907F7: retn
0x9907F8: jmp     __ms_p5_test_fdiv
