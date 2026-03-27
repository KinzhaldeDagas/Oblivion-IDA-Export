0x79A9B0: mov     edx, [esp+arg_0]
0x79A9B4: mov     eax, [esp+arg_8]
0x79A9B8: push    ebx
0x79A9B9: mov     ebx, [esp+4+arg_4]
0x79A9BD: cmp     edx, ebx
0x79A9BF: jz      short loc_79A9DE
0x79A9C1: push    esi
0x79A9C2: push    edi
0x79A9C3: test    eax, eax
0x79A9C5: jz      short loc_79A9D2
0x79A9C7: mov     ecx, 0Eh
0x79A9CC: mov     esi, edx
0x79A9CE: mov     edi, eax
0x79A9D0: rep movsd
0x79A9D2: add     edx, 38h ; '8'
0x79A9D5: add     eax, 38h ; '8'
0x79A9D8: cmp     edx, ebx
0x79A9DA: jnz     short loc_79A9C3
0x79A9DC: pop     edi
0x79A9DD: pop     esi
0x79A9DE: pop     ebx
0x79A9DF: retn
