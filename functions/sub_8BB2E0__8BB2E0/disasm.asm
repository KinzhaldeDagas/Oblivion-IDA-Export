0x8BB2E0: push    edi; File
0x8BB2E1: mov     edi, ecx
0x8BB2E3: mov     eax, [edi+8]
0x8BB2E6: test    eax, eax
0x8BB2E8: jz      short loc_8BB314
0x8BB2EA: mov     ecx, [esp+4+Str]
0x8BB2EE: push    esi
0x8BB2EF: push    eax; Count
0x8BB2F0: mov     eax, [esp+0Ch+Count]
0x8BB2F4: push    eax; Count
0x8BB2F5: push    1; Size
0x8BB2F7: push    ecx; Str
0x8BB2F8: call    _fwrite
0x8BB2FD: mov     esi, eax
0x8BB2FF: add     esp, 10h
0x8BB302: test    esi, esi
0x8BB304: jg      short loc_8BB30D
0x8BB306: mov     ecx, edi
0x8BB308: call    sub_8BB320
0x8BB30D: mov     eax, esi
0x8BB30F: pop     esi
0x8BB310: pop     edi
0x8BB311: retn    8
0x8BB314: xor     eax, eax
0x8BB316: pop     edi
0x8BB317: retn    8
