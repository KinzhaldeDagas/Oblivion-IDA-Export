0x6805C0: mov     ecx, ds:0B3BF00h
0x6805C6: test    ecx, ecx
0x6805C8: jz      short locret_6805E7
0x6805CA: mov     ax, ds:0B3BF04h
0x6805D0: test    ax, ax
0x6805D3: jz      short locret_6805E7
0x6805D5: movzx   eax, ax
0x6805D8: shl     eax, 4
0x6805DB: push    eax
0x6805DC: push    0
0x6805DE: push    ecx
0x6805DF: call    __memset
0x6805E4: add     esp, 0Ch
0x6805E7: retn
