0x6805F0: mov     eax, ds:0B3BF00h
0x6805F5: test    eax, eax
0x6805F7: jz      short locret_68061E
0x6805F9: push    eax
0x6805FA: call    FormHeapFree
0x6805FF: add     esp, 4
0x680602: mov     dword ptr ds:0B3BF00h, 0
0x68060C: mov     word ptr ds:0B3BF04h, 0
0x680615: mov     word ptr ds:0B3BF08h, 0
0x68061E: retn
