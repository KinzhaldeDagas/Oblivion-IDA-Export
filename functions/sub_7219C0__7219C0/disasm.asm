0x7219C0: mov     eax, [esp+arg_4]
0x7219C4: fld     [esp+arg_0]
0x7219C8: push    esi
0x7219C9: mov     esi, ecx
0x7219CB: or      word ptr [esi+0DCh], 8
0x7219D3: fst     dword ptr [esi+0E0h]
0x7219D9: push    eax; int
0x7219DA: push    ecx
0x7219DB: fstp    [esp+0Ch+var_C]; float
0x7219DE: call    sub_70A0D0
0x7219E3: mov     edx, [esi]
0x7219E5: mov     eax, [edx+78h]
0x7219E8: mov     ecx, esi
0x7219EA: call    eax
0x7219EC: pop     esi
0x7219ED: retn    8
