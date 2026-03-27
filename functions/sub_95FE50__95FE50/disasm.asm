0x95FE50: push    esi
0x95FE51: push    18h; Size
0x95FE53: mov     esi, ecx
0x95FE55: call    FormHeapAlloc
0x95FE5A: add     esp, 4
0x95FE5D: test    eax, eax
0x95FE5F: jz      short loc_95FE6B
0x95FE61: push    esi
0x95FE62: mov     ecx, eax
0x95FE64: call    sub_95F880
0x95FE69: pop     esi
0x95FE6A: retn
0x95FE6B: xor     eax, eax
0x95FE6D: pop     esi
0x95FE6E: retn
