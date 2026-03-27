0x4BD750: push    ecx
0x4BD751: test    ecx, ecx
0x4BD753: push    esi
0x4BD754: mov     esi, ds:0B33A10h
0x4BD75A: push    ecx
0x4BD75B: mov     eax, esp
0x4BD75D: mov     [esp+0Ch+var_4], esp
0x4BD761: mov     [eax], ecx
0x4BD763: jz      short loc_4BD76F
0x4BD765: add     ecx, 8
0x4BD768: push    ecx; lpAddend
0x4BD769: call    dword ptr ds:0A28078h
0x4BD76F: mov     ecx, [esi+34h]
0x4BD772: call    sub_43A5F0
0x4BD777: pop     esi
0x4BD778: pop     ecx
0x4BD779: retn
