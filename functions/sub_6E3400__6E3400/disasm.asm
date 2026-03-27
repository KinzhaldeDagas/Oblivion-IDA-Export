0x6E3400: push    ecx
0x6E3401: fld     [esp+4+arg_4]
0x6E3405: push    esi
0x6E3406: sub     esp, 8
0x6E3409: fstp    [esp+10h+var_C]; float
0x6E340D: mov     esi, ecx
0x6E340F: mov     eax, [esi+0Ch]
0x6E3412: fld     [esp+10h+arg_0]
0x6E3416: fstp    [esp+10h+var_10]; float
0x6E3419: lea     ecx, [esi+8]
0x6E341C: push    ecx; int
0x6E341D: lea     edx, [esp+14h+var_4]
0x6E3421: mov     [esp+14h+var_4], eax
0x6E3425: mov     eax, [esi+10h]
0x6E3428: push    edx; int
0x6E3429: push    eax; int
0x6E342A: push    0; int
0x6E342C: call    sub_6D3540
0x6E3431: mov     ecx, [esp+20h+var_4]
0x6E3435: add     esp, 18h
0x6E3438: mov     [esi+0Ch], ecx
0x6E343B: pop     esi
0x6E343C: pop     ecx
0x6E343D: retn    8
