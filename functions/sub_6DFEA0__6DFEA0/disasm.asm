0x6DFEA0: push    ebx
0x6DFEA1: push    esi
0x6DFEA2: mov     esi, [esp+8+arg_0]
0x6DFEA6: push    edi
0x6DFEA7: push    esi
0x6DFEA8: mov     edi, ecx
0x6DFEAA: call    j_nullsub_3
0x6DFEAF: mov     eax, [esi+220h]
0x6DFEB5: push    1
0x6DFEB7: lea     ecx, [esp+10h+arg_0]
0x6DFEBB: push    ecx
0x6DFEBC: push    2
0x6DFEBE: lea     edx, [edi+0Ch]
0x6DFEC1: push    edx
0x6DFEC2: push    eax
0x6DFEC3: mov     eax, [eax+8]
0x6DFEC6: mov     [esp+20h+arg_0], 2
0x6DFECE: call    eax
0x6DFED0: mov     edx, [esi]
0x6DFED2: mov     eax, [edi+10h]
0x6DFED5: mov     edx, [edx+2Ch]
0x6DFED8: add     esp, 14h
0x6DFEDB: push    eax
0x6DFEDC: mov     ecx, esi
0x6DFEDE: call    edx
0x6DFEE0: mov     eax, [edi+14h]
0x6DFEE3: push    eax
0x6DFEE4: mov     ecx, esi
0x6DFEE6: call    sub_713720
0x6DFEEB: push    esi
0x6DFEEC: lea     ecx, [edi+18h]
0x6DFEEF: call    sub_6CBA90
0x6DFEF4: add     edi, 38h ; '8'
0x6DFEF7: mov     ebx, 3
0x6DFEFC: lea     esp, [esp+0]
0x6DFF00: mov     edx, [esi]
0x6DFF02: mov     eax, [edi]
0x6DFF04: mov     edx, [edx+2Ch]
0x6DFF07: push    eax
0x6DFF08: mov     ecx, esi
0x6DFF0A: call    edx
0x6DFF0C: add     edi, 4
0x6DFF0F: sub     ebx, 1
0x6DFF12: jnz     short loc_6DFF00
0x6DFF14: pop     edi
0x6DFF15: pop     esi
0x6DFF16: pop     ebx
0x6DFF17: retn    4
