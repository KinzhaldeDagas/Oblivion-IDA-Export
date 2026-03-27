0xA27000: mov     eax, dword_B42A00
0xA27005: test    eax, eax
0xA27007: jz      short loc_A27012
0xA27009: push    eax
0xA2700A: call    FormHeapFree
0xA2700F: add     esp, 4
0xA27012: mov     dword_B42A00, 0
0xA2701C: mov     Src, 0
0xA27026: mov     dword_B42A08, 0
0xA27030: retn
