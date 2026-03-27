0x480C50: sub     esp, 1Ch
0x480C53: xor     ecx, ecx
0x480C55: cmp     [esp+1Ch+arg_4], cl
0x480C59: mov     eax, 1
0x480C5E: mov     [esp+1Ch+var_14], 0Fh
0x480C66: mov     [esp+1Ch+var_18], al
0x480C6A: mov     [esp+1Ch+var_10], ecx
0x480C6E: mov     [esp+1Ch+var_4], ecx
0x480C72: jz      short loc_480C78
0x480C74: mov     [esp+1Ch+var_4], eax
0x480C78: cmp     [esp+1Ch+arg_8], cl
0x480C7C: jz      short loc_480C83
0x480C7E: or      [esp+1Ch+var_4], 2
0x480C83: cmp     [esp+1Ch+arg_C], cl
0x480C87: jz      short loc_480C8E
0x480C89: or      [esp+1Ch+var_4], 4
0x480C8E: mov     ecx, [esp+1Ch+arg_0]
0x480C92: push    offset sub_480BB0
0x480C97: lea     eax, [esp+20h+var_1C]
0x480C9B: push    eax
0x480C9C: push    ecx
0x480C9D: call    sub_88A7D0
0x480CA2: mov     eax, [esp+28h+var_10]
0x480CA6: add     esp, 28h
0x480CA9: retn
