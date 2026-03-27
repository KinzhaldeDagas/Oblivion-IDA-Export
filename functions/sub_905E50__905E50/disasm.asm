0x905E50: sub     esp, 18h
0x905E53: push    esi
0x905E54: mov     esi, [esp+1Ch+arg_0]
0x905E58: push    2
0x905E5A: push    0FFFFFFFFh
0x905E5C: lea     eax, [esp+24h+var_18]
0x905E60: push    eax
0x905E61: mov     ecx, esi
0x905E63: mov     [esp+28h+var_18], offset sub_905E10
0x905E6B: mov     [esp+28h+var_14], offset sub_901DC0
0x905E73: mov     [esp+28h+var_10], offset sub_901E00
0x905E7B: mov     [esp+28h+var_C], offset sub_901E40
0x905E83: mov     [esp+28h+var_8], 1
0x905E88: mov     [esp+28h+var_7], 1
0x905E8D: call    sub_8DADD0
0x905E92: push    0FFFFFFFFh
0x905E94: push    2
0x905E96: lea     ecx, [esp+24h+var_18]
0x905E9A: push    ecx
0x905E9B: mov     ecx, esi
0x905E9D: mov     [esp+28h+var_18], offset sub_905C90
0x905EA5: mov     [esp+28h+var_14], offset sub_905630
0x905EAD: mov     [esp+28h+var_10], offset sub_9050F0
0x905EB5: mov     [esp+28h+var_C], offset sub_905370
0x905EBD: mov     [esp+28h+var_8], 0
0x905EC2: mov     [esp+28h+var_7], 1
0x905EC7: call    sub_8DADD0
0x905ECC: pop     esi
0x905ECD: add     esp, 18h
0x905ED0: retn
