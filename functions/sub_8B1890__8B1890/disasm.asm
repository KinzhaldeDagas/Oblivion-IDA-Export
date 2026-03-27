0x8B1890: mov     ecx, [esp+arg_8]
0x8B1894: push    esi
0x8B1895: mov     esi, [esp+4+arg_4]
0x8B1899: mov     eax, ecx
0x8B189B: push    edi
0x8B189C: mov     edi, [esp+8+arg_0]
0x8B18A0: shr     ecx, 2
0x8B18A3: rep movsd
0x8B18A5: mov     ecx, eax
0x8B18A7: and     ecx, 3
0x8B18AA: rep movsb
0x8B18AC: pop     edi
0x8B18AD: pop     esi
0x8B18AE: retn
