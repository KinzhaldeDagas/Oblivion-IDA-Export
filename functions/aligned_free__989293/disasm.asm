0x989293: mov     eax, [esp+Memory]
0x989297: test    eax, eax
0x989299: jz      short locret_9892A7
0x98929B: and     eax, 0FFFFFFFCh
0x98929E: push    dword ptr [eax-4]; Memory
0x9892A1: call    _free
0x9892A6: pop     ecx
0x9892A7: retn
