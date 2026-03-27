0x96E220: push    esi
0x96E221: push    edi
0x96E222: mov     edi, [esp+8+arg_0]
0x96E226: push    edi
0x96E227: mov     esi, ecx
0x96E229: call    sub_711CB0
0x96E22E: cmp     dword ptr [edi+0D8h], 0A000110h
0x96E238: jnb     short loc_96E24A
0x96E23A: mov     eax, [esi+28h]
0x96E23D: mov     ecx, [esi+8]
0x96E240: push    eax
0x96E241: push    ecx
0x96E242: call    sub_96DE20
0x96E247: add     esp, 8
0x96E24A: pop     edi
0x96E24B: pop     esi
0x96E24C: retn    4
