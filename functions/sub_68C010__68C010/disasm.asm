0x68C010: mov     eax, [ecx]
0x68C012: push    esi
0x68C013: xor     esi, esi
0x68C015: test    eax, eax
0x68C017: push    edi
0x68C018: jz      short loc_68C039
0x68C01A: mov     edi, [esp+8+arg_0]
0x68C01E: mov     edi, edi
0x68C020: mov     ecx, eax
0x68C022: add     esi, 1
0x68C025: call    NiDX92DBufferData__GetSurfaceData
0x68C02A: test    eax, eax
0x68C02C: jz      short loc_68C039
0x68C02E: cmp     esi, edi
0x68C030: jb      short loc_68C020
0x68C032: pop     edi
0x68C033: xor     al, al
0x68C035: pop     esi
0x68C036: retn    4
0x68C039: pop     edi
0x68C03A: mov     al, 1
0x68C03C: pop     esi
0x68C03D: retn    4
