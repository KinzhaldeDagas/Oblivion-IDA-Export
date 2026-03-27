0x678D30: push    esi
0x678D31: mov     esi, [esp+4+arg_0]
0x678D35: test    esi, esi
0x678D37: push    edi
0x678D38: mov     edi, ecx
0x678D3A: jz      short loc_678D7F
0x678D3C: mov     eax, [esi]
0x678D3E: mov     edx, [eax+54h]
0x678D41: mov     ecx, esi
0x678D43: call    edx
0x678D45: add     eax, 0FFFFFFFCh
0x678D48: push    ecx
0x678D49: cmp     eax, 2
0x678D4C: mov     eax, esp
0x678D4E: mov     [esp+0Ch+arg_0], esp
0x678D52: mov     [eax], esi
0x678D54: ja      short loc_678D6D
0x678D56: add     esi, 4
0x678D59: push    esi; lpAddend
0x678D5A: call    dword ptr ds:0A28078h
0x678D60: lea     ecx, [edi+48h]
0x678D63: call    sub_677CF0
0x678D68: pop     edi
0x678D69: pop     esi
0x678D6A: retn    4
0x678D6D: add     esi, 4
0x678D70: push    esi; lpAddend
0x678D71: call    dword ptr ds:0A28078h
0x678D77: lea     ecx, [edi+40h]
0x678D7A: call    sub_677CF0
0x678D7F: pop     edi
0x678D80: pop     esi
0x678D81: retn    4
