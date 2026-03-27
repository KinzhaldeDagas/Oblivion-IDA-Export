0x494480: xor     eax, eax
0x494482: jmp     short loc_494490
0x494484: db 8Dh, 0A4h, 24h, 4 dup(0)
0x49448B: jmp     short loc_494490
0x49448D: align 10h
0x494490: mov     cl, byte ptr ds:word_B3F280[eax]
0x494496: mov     ds:byte_B34C80[eax], cl
0x49449C: add     eax, 1
0x49449F: test    cl, cl
0x4944A1: jnz     short loc_494490
0x4944A3: mov     eax, offset byte_B34C80
0x4944A8: add     eax, 0FFFFFFFFh
0x4944AB: jmp     short loc_4944B0
0x4944AD: align 10h
0x4944B0: mov     cl, [eax+1]
0x4944B3: add     eax, 1
0x4944B6: test    cl, cl
0x4944B8: jnz     short loc_4944B0
0x4944BA: mov     ecx, ds:0A3D9BCh
0x4944C0: mov     edx, ds:0A3D9C0h
0x4944C6: mov     [eax], ecx
0x4944C8: mov     ecx, ds:0A3D9C4h
0x4944CE: mov     [eax+4], edx
0x4944D1: mov     dl, ds:0A3D9C8h
0x4944D7: mov     [eax+8], ecx
0x4944DA: mov     [eax+0Ch], dl
0x4944DD: mov     eax, offset byte_B34C80
0x4944E2: retn
