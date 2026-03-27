0x7ABBC0: push    ebp
0x7ABBC1: push    edi
0x7ABBC2: mov     edi, [esp+8+arg_0]
0x7ABBC6: test    edi, edi
0x7ABBC8: mov     ebp, ecx
0x7ABBCA: jz      short loc_7ABC2D
0x7ABBCC: cmp     dword ptr [edi+10h], 0
0x7ABBD0: jz      short loc_7ABC20
0x7ABBD2: push    esi
0x7ABBD3: mov     esi, [edi+4]
0x7ABBD6: test    esi, esi
0x7ABBD8: jz      short loc_7ABBFD
0x7ABBDA: lea     ebx, [ebx+0]
0x7ABBE0: mov     ecx, [esi+8]
0x7ABBE3: mov     edx, ds:0B3F928h
0x7ABBE9: lea     eax, [esi+8]
0x7ABBEC: mov     eax, [ecx]
0x7ABBEE: mov     eax, [eax+84h]
0x7ABBF4: mov     esi, [esi]
0x7ABBF6: push    edx
0x7ABBF7: call    eax
0x7ABBF9: test    esi, esi
0x7ABBFB: jnz     short loc_7ABBE0
0x7ABBFD: mov     ecx, edi
0x7ABBFF: call    sub_7A9C30
0x7ABC04: mov     ecx, [edi+4]
0x7ABC07: mov     [edi+0Ch], ecx
0x7ABC0A: mov     dword ptr [edi+4], 0
0x7ABC11: mov     dword ptr [edi+8], 0
0x7ABC18: mov     dword ptr [edi+10h], 0
0x7ABC1F: pop     esi
0x7ABC20: push    0
0x7ABC22: add     edi, 14h
0x7ABC25: push    edi
0x7ABC26: mov     ecx, ebp
0x7ABC28: call    sub_7ABAC0
0x7ABC2D: pop     edi
0x7ABC2E: pop     ebp
0x7ABC2F: retn    4
