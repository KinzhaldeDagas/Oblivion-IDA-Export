0x480D60: sub     esp, 1Ch
0x480D63: mov     edx, [esp+1Ch+arg_4]
0x480D67: xor     ecx, ecx
0x480D69: cmp     [esp+1Ch+arg_8], cl
0x480D6D: mov     eax, 1
0x480D72: mov     [esp+1Ch+var_14], 0Fh
0x480D7A: mov     [esp+1Ch+var_18], al
0x480D7E: mov     [esp+1Ch+var_10], ecx
0x480D82: mov     [esp+1Ch+var_C], edx
0x480D86: mov     [esp+1Ch+var_8], 0FFFFFFFFh
0x480D8E: mov     [esp+1Ch+var_4], ecx
0x480D92: jz      short loc_480D98
0x480D94: mov     [esp+1Ch+var_4], eax
0x480D98: cmp     [esp+1Ch+arg_C], cl
0x480D9C: jz      short loc_480DA3
0x480D9E: or      [esp+1Ch+var_4], 2
0x480DA3: cmp     [esp+1Ch+arg_10], cl
0x480DA7: jz      short loc_480DAE
0x480DA9: or      [esp+1Ch+var_4], 4
0x480DAE: mov     ecx, [esp+1Ch+arg_0]
0x480DB2: push    offset sub_480CB0
0x480DB7: lea     eax, [esp+20h+var_1C]
0x480DBB: push    eax
0x480DBC: push    ecx
0x480DBD: call    sub_88A7D0
0x480DC2: mov     eax, [esp+28h+var_8]
0x480DC6: add     esp, 0Ch
0x480DC9: cmp     eax, 0FFFFFFFFh
0x480DCC: jnz     short loc_480DD0
0x480DCE: or      eax, eax
0x480DD0: add     esp, 1Ch
0x480DD3: retn
