0x77DD20: push    1Ch; Size
0x77DD22: call    FormHeapAlloc
0x77DD27: add     esp, 4
0x77DD2A: test    eax, eax
0x77DD2C: jz      short loc_77DD35
0x77DD2E: mov     ecx, eax
0x77DD30: jmp     loc_77DC80
0x77DD35: xor     eax, eax
0x77DD37: retn
