0x6E4E60: push    esi
0x6E4E61: push    edi
0x6E4E62: mov     edi, [esp+8+arg_0]
0x6E4E66: push    edi
0x6E4E67: mov     esi, ecx
0x6E4E69: call    sub_6ED420
0x6E4E6E: push    edi
0x6E4E6F: lea     ecx, [esi+1Ch]
0x6E4E72: call    sub_6CB990
0x6E4E77: mov     eax, [edi+21Ch]
0x6E4E7D: push    1
0x6E4E7F: lea     ecx, [esp+0Ch+arg_0]
0x6E4E83: push    ecx
0x6E4E84: push    4
0x6E4E86: lea     edx, [esi+3Ch]
0x6E4E89: push    edx
0x6E4E8A: push    eax
0x6E4E8B: mov     eax, [eax+4]
0x6E4E8E: mov     [esp+1Ch+arg_0], 4
0x6E4E96: call    eax
0x6E4E98: mov     eax, [edi+21Ch]
0x6E4E9E: push    1
0x6E4EA0: lea     ecx, [esp+20h+arg_0]
0x6E4EA4: push    ecx
0x6E4EA5: push    4
0x6E4EA7: lea     edx, [esi+40h]
0x6E4EAA: push    edx
0x6E4EAB: push    eax
0x6E4EAC: mov     eax, [eax+4]
0x6E4EAF: mov     [esp+30h+arg_0], 4
0x6E4EB7: call    eax
0x6E4EB9: mov     edi, [edi+21Ch]
0x6E4EBF: mov     edx, [edi+4]
0x6E4EC2: push    1
0x6E4EC4: lea     ecx, [esp+34h+arg_0]
0x6E4EC8: push    ecx
0x6E4EC9: push    4
0x6E4ECB: add     esi, 44h ; 'D'
0x6E4ECE: push    esi
0x6E4ECF: push    edi
0x6E4ED0: mov     [esp+44h+arg_0], 4
0x6E4ED8: call    edx
0x6E4EDA: add     esp, 3Ch
0x6E4EDD: pop     edi
0x6E4EDE: pop     esi
0x6E4EDF: retn    4
