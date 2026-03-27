0x6E44E0: push    ecx
0x6E44E1: fld     [esp+4+arg_4]
0x6E44E5: push    esi
0x6E44E6: sub     esp, 8
0x6E44E9: fstp    [esp+10h+var_C]; float
0x6E44ED: mov     esi, ecx
0x6E44EF: mov     eax, [esi+0Ch]
0x6E44F2: fld     [esp+10h+arg_0]
0x6E44F6: fstp    [esp+10h+var_10]; float
0x6E44F9: lea     ecx, [esi+8]
0x6E44FC: push    ecx; int
0x6E44FD: lea     edx, [esp+14h+var_4]
0x6E4501: mov     [esp+14h+var_4], eax
0x6E4505: mov     eax, [esi+10h]
0x6E4508: push    edx; int
0x6E4509: push    eax; int
0x6E450A: push    3; int
0x6E450C: call    sub_6D3540
0x6E4511: mov     ecx, [esp+20h+var_4]
0x6E4515: add     esp, 18h
0x6E4518: mov     [esi+0Ch], ecx
0x6E451B: pop     esi
0x6E451C: pop     ecx
0x6E451D: retn    8
