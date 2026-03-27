0x8ED000: push    esi
0x8ED001: mov     esi, ecx
0x8ED003: mov     dword ptr [esi], offset off_A9AFFC
0x8ED009: mov     eax, [esi+128h]
0x8ED00F: test    eax, eax
0x8ED011: js      short loc_8ED04A
0x8ED013: mov     ecx, ds:0BA9DE4h
0x8ED019: mov     edx, large fs:2Ch
0x8ED020: mov     ecx, [edx+ecx*4]
0x8ED023: mov     ecx, [ecx+19Ch]
0x8ED029: test    ecx, ecx
0x8ED02B: jnz     short loc_8ED033
0x8ED02D: mov     ecx, ds:0BA7D9Ch
0x8ED033: mov     edx, [esi+120h]
0x8ED039: and     eax, 3FFFFFFFh
0x8ED03E: push    14h
0x8ED040: shl     eax, 2
0x8ED043: push    eax
0x8ED044: push    edx
0x8ED045: call    sub_8A75D0
0x8ED04A: mov     ecx, esi
0x8ED04C: pop     esi
0x8ED04D: jmp     sub_8DE8B0
