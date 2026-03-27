0x65D6F0: fld     [esp+arg_4]
0x65D6F4: mov     eax, [esp+arg_0]
0x65D6F8: push    esi
0x65D6F9: push    ecx
0x65D6FA: fstp    [esp+8+var_8]; int
0x65D6FD: push    eax; int
0x65D6FE: mov     esi, ecx
0x65D700: call    Actor_OnHealthDamage
0x65D705: mov     edx, [esi]
0x65D707: mov     eax, [edx+198h]
0x65D70D: push    0
0x65D70F: mov     ecx, esi
0x65D711: call    eax
0x65D713: pop     esi
0x65D714: retn    8
