0x6D8CB0: push    ecx
0x6D8CB1: fld     [esp+4+arg_4]
0x6D8CB5: push    esi
0x6D8CB6: sub     esp, 8
0x6D8CB9: fstp    [esp+10h+var_C]; float
0x6D8CBD: mov     esi, ecx
0x6D8CBF: mov     eax, [esi+0Ch]
0x6D8CC2: fld     [esp+10h+arg_0]
0x6D8CC6: fstp    [esp+10h+var_10]; float
0x6D8CC9: lea     ecx, [esi+8]
0x6D8CCC: push    ecx; int
0x6D8CCD: lea     edx, [esp+14h+var_4]
0x6D8CD1: mov     [esp+14h+var_4], eax
0x6D8CD5: mov     eax, [esi+10h]
0x6D8CD8: push    edx; int
0x6D8CD9: push    eax; int
0x6D8CDA: push    1; int
0x6D8CDC: call    sub_6D3540
0x6D8CE1: mov     ecx, [esp+20h+var_4]
0x6D8CE5: add     esp, 18h
0x6D8CE8: mov     [esi+0Ch], ecx
0x6D8CEB: pop     esi
0x6D8CEC: pop     ecx
0x6D8CED: retn    8
