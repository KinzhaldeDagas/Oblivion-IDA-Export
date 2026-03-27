0x7F5B50: mov     eax, ds:0B28CB0h
0x7F5B55: push    esi
0x7F5B56: mov     esi, ecx
0x7F5B58: xor     ecx, ecx
0x7F5B5A: mov     edx, 4
0x7F5B5F: mul     edx
0x7F5B61: seto    cl
0x7F5B64: neg     ecx
0x7F5B66: or      ecx, eax
0x7F5B68: push    ecx; Size
0x7F5B69: call    FormHeapAlloc
0x7F5B6E: mov     [esi], eax
0x7F5B70: add     esp, 4
0x7F5B73: mov     eax, esi
0x7F5B75: pop     esi
0x7F5B76: retn
