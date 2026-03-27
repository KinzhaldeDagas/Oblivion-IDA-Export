0x4134C0: push    ecx
0x4134C1: push    esi
0x4134C2: mov     esi, [esp+8+arg_0]
0x4134C6: push    esi
0x4134C7: add     ecx, 38h ; '8'
0x4134CA: mov     [esp+0Ch+var_4], 0
0x4134D2: call    TESFullName_GetName
0x4134D7: mov     eax, esi
0x4134D9: pop     esi
0x4134DA: pop     ecx
0x4134DB: retn    4
