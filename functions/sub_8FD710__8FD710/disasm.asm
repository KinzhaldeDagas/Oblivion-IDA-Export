0x8FD710: push    esi
0x8FD711: mov     esi, [esp+4+arg_4]
0x8FD715: movzx   edx, byte ptr [esi+21h]
0x8FD719: xor     eax, eax
0x8FD71B: test    edx, edx
0x8FD71D: jle     short loc_8FD73D
0x8FD71F: lea     ecx, [esi+2]
0x8FD722: cmp     word ptr [ecx], 0FFFFh
0x8FD727: jz      short loc_8FD733
0x8FD729: inc     eax
0x8FD72A: add     ecx, 4
0x8FD72D: cmp     eax, edx
0x8FD72F: jl      short loc_8FD722
0x8FD731: pop     esi
0x8FD732: retn
0x8FD733: mov     cx, [esp+4+arg_8]
0x8FD738: mov     [esi+eax*4+2], cx
0x8FD73D: pop     esi
0x8FD73E: retn
