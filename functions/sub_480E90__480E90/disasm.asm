0x480E90: sub     esp, 1Ch
0x480E93: mov     edx, [esp+1Ch+arg_4]
0x480E97: xor     eax, eax
0x480E99: cmp     [esp+1Ch+arg_8], al
0x480E9D: mov     ecx, 1
0x480EA2: mov     [esp+1Ch+var_14], 0Fh
0x480EAA: mov     [esp+1Ch+var_18], cl
0x480EAE: mov     [esp+1Ch+var_10], eax
0x480EB2: mov     [esp+1Ch+var_C], eax
0x480EB6: mov     [esp+1Ch+var_8], edx
0x480EBA: mov     [esp+1Ch+var_4], eax
0x480EBE: jz      short loc_480EC4
0x480EC0: mov     [esp+1Ch+var_4], ecx
0x480EC4: cmp     [esp+1Ch+arg_C], al
0x480EC8: jz      short loc_480ECF
0x480ECA: or      [esp+1Ch+var_4], 2
0x480ECF: cmp     [esp+1Ch+arg_10], al
0x480ED3: jz      short loc_480EDA
0x480ED5: or      [esp+1Ch+var_4], 4
0x480EDA: mov     ecx, [esp+1Ch+arg_0]
0x480EDE: push    offset sub_480DE0
0x480EE3: lea     eax, [esp+20h+var_1C]
0x480EE7: push    eax
0x480EE8: push    ecx
0x480EE9: call    sub_88A7D0
0x480EEE: mov     eax, [esp+28h+var_C]
0x480EF2: add     esp, 28h
0x480EF5: retn
