0x8CDB00: push    esi
0x8CDB01: push    edi
0x8CDB02: mov     edi, [esp+8+arg_0]
0x8CDB06: push    edi
0x8CDB07: mov     esi, ecx
0x8CDB09: call    sub_88D780
0x8CDB0E: test    eax, eax
0x8CDB10: jnz     short loc_8CDB43
0x8CDB12: mov     eax, [esi+98h]
0x8CDB18: mov     ecx, [esi+94h]
0x8CDB1E: add     esi, 90h
0x8CDB24: and     eax, 3FFFFFFFh
0x8CDB29: cmp     ecx, eax
0x8CDB2B: jnz     short loc_8CDB38
0x8CDB2D: push    4
0x8CDB2F: push    esi
0x8CDB30: call    sub_8A6EE0
0x8CDB35: add     esp, 8
0x8CDB38: mov     ecx, [esi+4]
0x8CDB3B: mov     edx, [esi]
0x8CDB3D: mov     [edx+ecx*4], edi
0x8CDB40: inc     dword ptr [esi+4]
0x8CDB43: pop     edi
0x8CDB44: pop     esi
0x8CDB45: retn    4
