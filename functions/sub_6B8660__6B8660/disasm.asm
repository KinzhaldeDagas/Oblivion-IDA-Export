0x6B8660: mov     eax, ds:0B3C218h
0x6B8665: test    eax, eax
0x6B8667: jnz     short locret_6B869F
0x6B8669: push    10h; Size
0x6B866B: call    FormHeapAlloc
0x6B8670: add     esp, 4
0x6B8673: test    eax, eax
0x6B8675: jz      short loc_6B8698
0x6B8677: mov     dword ptr [eax+4], 0
0x6B867E: mov     dword ptr [eax+8], 0
0x6B8685: mov     dword ptr [eax], 0
0x6B868B: mov     dword ptr [eax+0Ch], 0
0x6B8692: mov     ds:0B3C218h, eax
0x6B8697: retn
0x6B8698: xor     eax, eax
0x6B869A: mov     ds:0B3C218h, eax
0x6B869F: retn
