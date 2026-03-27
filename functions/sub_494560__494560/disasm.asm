0x494560: xor     eax, eax
0x494562: jmp     short loc_494570
0x494564: db 8Dh, 0A4h, 24h, 4 dup(0)
0x49456B: jmp     short loc_494570
0x49456D: align 10h
0x494570: mov     cl, byte ptr ds:word_B3F280[eax]
0x494576: mov     ds:byte_B34C80[eax], cl
0x49457C: add     eax, 1
0x49457F: test    cl, cl
0x494581: jnz     short loc_494570
0x494583: mov     eax, offset byte_B34C80
0x494588: add     eax, 0FFFFFFFFh
0x49458B: jmp     short loc_494590
0x49458D: align 10h
0x494590: mov     cl, [eax+1]
0x494593: add     eax, 1
0x494596: test    cl, cl
0x494598: jnz     short loc_494590
0x49459A: mov     ecx, ds:0A3D9DCh
0x4945A0: mov     edx, ds:0A3D9E0h
0x4945A6: mov     [eax], ecx
0x4945A8: mov     ecx, ds:0A3D9E4h
0x4945AE: mov     [eax+4], edx
0x4945B1: mov     edx, ds:0A3D9E8h
0x4945B7: mov     [eax+8], ecx
0x4945BA: mov     ecx, ds:0A3D9ECh
0x4945C0: mov     [eax+0Ch], edx
0x4945C3: mov     dl, ds:0A3D9F0h
0x4945C9: mov     [eax+10h], ecx
0x4945CC: mov     [eax+14h], dl
0x4945CF: mov     eax, offset byte_B34C80
0x4945D4: retn
