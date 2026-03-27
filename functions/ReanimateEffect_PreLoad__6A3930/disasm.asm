0x6A3930: push    esi
0x6A3931: push    edi
0x6A3932: mov     edi, [esp+8+arg_0]
0x6A3936: push    edi
0x6A3937: mov     esi, ecx
0x6A3939: call    nullsub_returnvVoid_1arg
0x6A393E: cmp     dword ptr [esi+3Ch], 32h ; '2'
0x6A3942: jge     short loc_6A3975
0x6A3944: test    edi, edi
0x6A3946: jz      short loc_6A3975
0x6A3948: mov     eax, [edi]
0x6A394A: mov     edx, [eax+154h]
0x6A3950: mov     ecx, edi
0x6A3952: call    edx
0x6A3954: test    eax, eax
0x6A3956: jz      short loc_6A3975
0x6A3958: cmp     dword ptr [esi+38h], 0
0x6A395C: jz      short loc_6A3975
0x6A395E: mov     ecx, [esi+38h]
0x6A3961: mov     eax, [ecx]
0x6A3963: pop     edi
0x6A3964: pop     esi
0x6A3965: mov     [esp+arg_0], 1
0x6A396D: mov     edx, [eax+9Ch]
0x6A3973: jmp     edx
0x6A3975: pop     edi
0x6A3976: pop     esi
0x6A3977: retn    4
