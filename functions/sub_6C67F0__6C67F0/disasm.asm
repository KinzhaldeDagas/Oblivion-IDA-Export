0x6C67F0: push    ebx
0x6C67F1: push    esi
0x6C67F2: mov     esi, ecx
0x6C67F4: mov     ebx, [esi]
0x6C67F6: push    edi
0x6C67F7: mov     edi, [esp+0Ch+arg_0]
0x6C67FB: cmp     ebx, [edi]
0x6C67FD: jz      short loc_6C6831
0x6C67FF: test    ebx, ebx
0x6C6801: jz      short loc_6C681F
0x6C6803: lea     eax, [ebx+4]
0x6C6806: push    eax; lpAddend
0x6C6807: call    dword ptr ds:0A2807Ch
0x6C680D: test    eax, eax
0x6C680F: jnz     short loc_6C681F
0x6C6811: test    ebx, ebx
0x6C6813: jz      short loc_6C681F
0x6C6815: mov     edx, [ebx]
0x6C6817: mov     eax, [edx]
0x6C6819: push    1
0x6C681B: mov     ecx, ebx
0x6C681D: call    eax
0x6C681F: mov     eax, [edi]
0x6C6821: test    eax, eax
0x6C6823: mov     [esi], eax
0x6C6825: jz      short loc_6C6831
0x6C6827: add     eax, 4
0x6C682A: push    eax; lpAddend
0x6C682B: call    dword ptr ds:0A28078h
0x6C6831: movzx   ecx, word ptr [edi+4]
0x6C6835: mov     [esi+4], cx
0x6C6839: movzx   edx, word ptr [edi+6]
0x6C683D: mov     [esi+6], dx
0x6C6841: mov     ax, [edi+8]
0x6C6845: mov     [esi+8], ax
0x6C6849: movzx   ecx, word ptr [edi+0Ah]
0x6C684D: mov     [esi+0Ah], cx
0x6C6851: movzx   edx, word ptr [edi+0Ch]
0x6C6855: pop     edi
0x6C6856: mov     [esi+0Ch], dx
0x6C685A: mov     eax, esi
0x6C685C: pop     esi
0x6C685D: pop     ebx
0x6C685E: retn    4
