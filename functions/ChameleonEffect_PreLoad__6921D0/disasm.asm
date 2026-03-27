0x6921D0: push    esi
0x6921D1: mov     esi, [esp+4+arg_0]
0x6921D5: push    esi
0x6921D6: call    nullsub_returnvVoid_1arg
0x6921DB: cmp     byte ptr ds:0B42F3Eh, 0
0x6921E2: jz      short loc_69220E
0x6921E4: cmp     byte ptr ds:0B42E84h, 0
0x6921EB: jz      short loc_69220E
0x6921ED: cmp     dword ptr ds:0B42F48h, 2
0x6921F4: jl      short loc_69220E
0x6921F6: fldz
0x6921F8: mov     eax, [esi]
0x6921FA: mov     edx, [eax+270h]
0x692200: push    ecx
0x692201: fstp    [esp+8+var_8]
0x692204: push    1
0x692206: mov     ecx, esi
0x692208: call    edx
0x69220A: pop     esi
0x69220B: retn    4
0x69220E: mov     ecx, esi; a1
0x692210: call    sub_5EE1B0
0x692215: pop     esi
0x692216: retn    4
