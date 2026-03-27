0x683B90: fld     [esp+arg_4]
0x683B94: push    esi
0x683B95: mov     esi, ecx
0x683B97: fstp    [esp+4+arg_4]
0x683B9B: lea     ecx, [esi+14h]
0x683B9E: call    sub_42B410
0x683BA3: cmp     [esp+4+arg_0], 0
0x683BA8: jz      short loc_683BCE
0x683BAA: test    eax, eax
0x683BAC: jz      short loc_683BCE
0x683BAE: mov     ecx, [esi+30h]
0x683BB1: test    ecx, ecx
0x683BB3: jz      short loc_683BCE
0x683BB5: call    sub_680CB0
0x683BBA: add     eax, 0FFFFFFFFh
0x683BBD: cmp     eax, 3
0x683BC0: ja      short loc_683BCE
0x683BC2: mov     ecx, [esi+30h]
0x683BC5: call    sub_680D10
0x683BCA: fstp    [esp+4+arg_4]
0x683BCE: fld     [esp+4+arg_4]
0x683BD2: pop     esi
0x683BD3: retn    8
