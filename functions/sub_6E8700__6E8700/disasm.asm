0x6E8700: push    ecx
0x6E8701: fld     [esp+4+arg_4]
0x6E8705: push    esi
0x6E8706: sub     esp, 8
0x6E8709: fstp    [esp+10h+var_C]; float
0x6E870D: mov     esi, ecx
0x6E870F: mov     eax, [esi+0Ch]
0x6E8712: fld     [esp+10h+arg_0]
0x6E8716: fstp    [esp+10h+var_10]; float
0x6E8719: lea     ecx, [esi+8]
0x6E871C: push    ecx; int
0x6E871D: lea     edx, [esp+14h+var_4]
0x6E8721: mov     [esp+14h+var_4], eax
0x6E8725: mov     eax, [esi+10h]
0x6E8728: push    edx; int
0x6E8729: push    eax; int
0x6E872A: push    5; int
0x6E872C: call    sub_6D3540
0x6E8731: mov     ecx, [esp+20h+var_4]
0x6E8735: add     esp, 18h
0x6E8738: mov     [esi+0Ch], ecx
0x6E873B: pop     esi
0x6E873C: pop     ecx
0x6E873D: retn    8
