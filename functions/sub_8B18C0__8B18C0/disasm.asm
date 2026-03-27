0x8B18C0: mov     al, [esp+arg_4]
0x8B18C4: mov     ecx, [esp+arg_8]
0x8B18C8: push    ebx
0x8B18C9: mov     bl, al
0x8B18CB: mov     bh, bl
0x8B18CD: mov     edx, ecx
0x8B18CF: push    edi
0x8B18D0: mov     edi, [esp+8+arg_0]
0x8B18D4: shr     ecx, 2
0x8B18D7: mov     eax, ebx
0x8B18D9: shl     eax, 10h
0x8B18DC: mov     ax, bx
0x8B18DF: rep stosd
0x8B18E1: mov     ecx, edx
0x8B18E3: and     ecx, 3
0x8B18E6: rep stosb
0x8B18E8: pop     edi
0x8B18E9: pop     ebx
0x8B18EA: retn
