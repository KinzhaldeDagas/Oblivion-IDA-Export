0x8C3730: sub     esp, 20h
0x8C3733: push    ebx
0x8C3734: push    ebp
0x8C3735: mov     ebp, [esp+28h+arg_0]
0x8C3739: push    esi
0x8C373A: push    ebp
0x8C373B: mov     esi, ecx
0x8C373D: call    sub_8A1ED0
0x8C3742: mov     bl, al
0x8C3744: test    bl, bl
0x8C3746: jz      short loc_8C379C
0x8C3748: fld1
0x8C374A: push    edi
0x8C374B: xor     edi, edi
0x8C374D: fst     [esp+30h+var_14]
0x8C3751: lea     eax, [esp+30h+var_20]
0x8C3755: fstp    [esp+30h+var_4]
0x8C3759: push    eax
0x8C375A: mov     ecx, esi
0x8C375C: mov     [esp+34h+var_20], edi
0x8C3760: mov     [esp+34h+var_1C], edi
0x8C3764: mov     [esp+34h+var_18], edi
0x8C3768: mov     [esp+34h+var_10], edi
0x8C376C: mov     [esp+34h+var_C], edi
0x8C3770: mov     [esp+34h+var_8], edi
0x8C3774: call    sub_8B0280
0x8C3779: cmp     esi, edi
0x8C377B: jz      short loc_8C3789
0x8C377D: mov     esi, [esi+8]
0x8C3780: cmp     esi, edi
0x8C3782: jz      short loc_8C3789
0x8C3784: mov     esi, [esi+10h]
0x8C3787: jmp     short loc_8C378B
0x8C3789: xor     esi, esi
0x8C378B: lea     ecx, [esp+30h+var_10]
0x8C378F: push    ecx
0x8C3790: mov     ecx, ebp
0x8C3792: mov     [esp+34h+var_18], esi
0x8C3796: call    sub_8B0280
0x8C379B: pop     edi
0x8C379C: pop     esi
0x8C379D: pop     ebp
0x8C379E: mov     al, bl
0x8C37A0: pop     ebx
0x8C37A1: add     esp, 20h
0x8C37A4: retn    4
