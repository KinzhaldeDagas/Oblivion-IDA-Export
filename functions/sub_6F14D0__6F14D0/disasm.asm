0x6F14D0: push    ebx
0x6F14D1: mov     ebx, [esp+4+arg_4]
0x6F14D5: test    ebx, ebx
0x6F14D7: push    esi
0x6F14D8: push    edi
0x6F14D9: mov     esi, ecx
0x6F14DB: jz      short loc_6F14E3
0x6F14DD: cmp     ebx, [esp+0Ch+arg_C]
0x6F14E1: jz      short loc_6F14E8
0x6F14E3: call    __invalid_parameter_noinfo
0x6F14E8: mov     edi, [esp+0Ch+arg_8]
0x6F14EC: mov     ecx, [esp+0Ch+arg_10]
0x6F14F0: cmp     edi, ecx
0x6F14F2: jz      short loc_6F1519
0x6F14F4: mov     eax, [esi+8]
0x6F14F7: mov     byte ptr [esp+0Ch+arg_4], 0
0x6F14FC: mov     edx, [esp+0Ch+arg_4]
0x6F1500: push    edx
0x6F1501: mov     edx, [esp+10h+arg_0]
0x6F1505: push    edx
0x6F1506: mov     edx, [esp+14h+arg_0]
0x6F150A: push    edx
0x6F150B: push    edi
0x6F150C: push    eax
0x6F150D: push    ecx
0x6F150E: call    sub_54D950
0x6F1513: add     esp, 18h
0x6F1516: mov     [esi+8], eax
0x6F1519: mov     eax, [esp+0Ch+arg_0]
0x6F151D: mov     [eax+4], edi
0x6F1520: pop     edi
0x6F1521: pop     esi
0x6F1522: mov     [eax], ebx
0x6F1524: pop     ebx
0x6F1525: retn    14h
