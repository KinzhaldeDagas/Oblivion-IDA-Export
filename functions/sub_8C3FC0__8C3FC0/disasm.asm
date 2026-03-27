0x8C3FC0: push    esi
0x8C3FC1: mov     esi, ecx
0x8C3FC3: cmp     dword ptr [esi+0Ch], 0
0x8C3FC7: jnz     short loc_8C4001
0x8C3FC9: push    40h ; '@'; Size
0x8C3FCB: call    FormHeapAlloc
0x8C3FD0: add     esp, 4
0x8C3FD3: test    eax, eax
0x8C3FD5: jz      short loc_8C3FE0
0x8C3FD7: mov     ecx, eax
0x8C3FD9: call    sub_8C3F40
0x8C3FDE: jmp     short loc_8C3FE2
0x8C3FE0: xor     eax, eax
0x8C3FE2: cmp     dword ptr [esi+8], 0
0x8C3FE6: mov     [esi+0Ch], eax
0x8C3FE9: jz      short loc_8C3FF3
0x8C3FEB: push    eax
0x8C3FEC: mov     ecx, esi
0x8C3FEE: call    sub_8C3CD0
0x8C3FF3: mov     eax, [esp+4+arg_0]
0x8C3FF7: mov     byte ptr [eax], 1
0x8C3FFA: mov     eax, [esi+0Ch]
0x8C3FFD: pop     esi
0x8C3FFE: retn    4
0x8C4001: mov     ecx, [esp+4+arg_0]
0x8C4005: mov     byte ptr [ecx], 0
0x8C4008: mov     eax, [esi+0Ch]
0x8C400B: pop     esi
0x8C400C: retn    4
