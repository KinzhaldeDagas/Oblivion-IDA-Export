0x980E7B: mov     eax, [ebp+0Ch]
0x980E7E: mov     eax, [eax+4]
0x980E81: and     eax, 0FFFFFFFDh
0x980E84: mov     ecx, [ebp+0Ch]
0x980E87: mov     [ecx+4], eax
0x980E8A: mov     edi, large fs:0
0x980E91: mov     ebx, [ebp-4]
0x980E94: mov     [ebx], edi
0x980E96: mov     large fs:0, ebx
0x980E9D: pop     edi
0x980E9E: pop     esi
0x980E9F: pop     ebx
0x980EA0: leave
0x980EA1: retn    8
