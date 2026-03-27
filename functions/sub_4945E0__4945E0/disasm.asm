0x4945E0: xor     eax, eax
0x4945E2: jmp     short loc_4945F0
0x4945E4: db 8Dh, 0A4h, 24h, 4 dup(0)
0x4945EB: jmp     short loc_4945F0
0x4945ED: align 10h
0x4945F0: mov     cl, byte ptr ds:word_B3F280[eax]
0x4945F6: mov     ds:byte_B34C80[eax], cl
0x4945FC: add     eax, 1
0x4945FF: test    cl, cl
0x494601: jnz     short loc_4945F0
0x494603: mov     eax, offset byte_B34C80
0x494608: add     eax, 0FFFFFFFFh
0x49460B: jmp     short loc_494610
0x49460D: align 10h
0x494610: mov     cl, [eax+1]
0x494613: add     eax, 1
0x494616: test    cl, cl
0x494618: jnz     short loc_494610
0x49461A: mov     ecx, ds:0A3D9F4h
0x494620: mov     edx, ds:0A3D9F8h
0x494626: mov     [eax], ecx
0x494628: mov     ecx, ds:0A3D9FCh
0x49462E: mov     [eax+4], edx
0x494631: mov     dx, ds:0A3DA00h
0x494638: mov     [eax+8], ecx
0x49463B: mov     cl, ds:0A3DA02h
0x494641: mov     [eax+0Ch], dx
0x494645: mov     [eax+0Eh], cl
0x494648: mov     eax, offset byte_B34C80
0x49464D: retn
