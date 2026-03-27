0x8A05B0: test    ecx, ecx
0x8A05B2: mov     edx, [esp+arg_0]
0x8A05B6: jz      short loc_8A05CC
0x8A05B8: mov     eax, [ecx+8]
0x8A05BB: test    eax, eax
0x8A05BD: jz      short loc_8A05CC
0x8A05BF: push    ebx
0x8A05C0: mov     bl, dl
0x8A05C2: neg     bl
0x8A05C4: sbb     ebx, ebx
0x8A05C6: and     ebx, ecx
0x8A05C8: mov     [eax+20h], ebx
0x8A05CB: pop     ebx
0x8A05CC: mov     [esp+arg_0], edx
0x8A05D0: jmp     sub_89D430
