0x4944F0: xor     eax, eax
0x4944F2: jmp     short loc_494500
0x4944F4: db 8Dh, 0A4h, 24h, 4 dup(0)
0x4944FB: jmp     short loc_494500
0x4944FD: align 10h
0x494500: mov     cl, byte ptr ds:word_B3F280[eax]
0x494506: mov     ds:byte_B34C80[eax], cl
0x49450C: add     eax, 1
0x49450F: test    cl, cl
0x494511: jnz     short loc_494500
0x494513: mov     eax, offset byte_B34C80
0x494518: add     eax, 0FFFFFFFFh
0x49451B: jmp     short loc_494520
0x49451D: align 10h
0x494520: mov     cl, [eax+1]
0x494523: add     eax, 1
0x494526: test    cl, cl
0x494528: jnz     short loc_494520
0x49452A: mov     ecx, ds:0A3D9CCh
0x494530: mov     edx, ds:0A3D9D0h
0x494536: mov     [eax], ecx
0x494538: mov     ecx, ds:0A3D9D4h
0x49453E: mov     [eax+4], edx
0x494541: mov     edx, ds:0A3D9D8h
0x494547: mov     [eax+8], ecx
0x49454A: mov     [eax+0Ch], edx
0x49454D: mov     eax, offset byte_B34C80
0x494552: retn
