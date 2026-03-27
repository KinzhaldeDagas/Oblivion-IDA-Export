0x7099A0: push    esi
0x7099A1: push    edi
0x7099A2: mov     edi, [esp+8+arg_0]
0x7099A6: push    edi
0x7099A7: mov     esi, ecx
0x7099A9: call    sub_700AC0
0x7099AE: push    edi
0x7099AF: lea     ecx, [esi+1Ch]
0x7099B2: call    sub_709430
0x7099B7: push    edi
0x7099B8: lea     ecx, [esi+28h]
0x7099BB: call    sub_709430
0x7099C0: push    edi
0x7099C1: lea     ecx, [esi+34h]
0x7099C4: call    sub_709430
0x7099C9: push    edi
0x7099CA: lea     ecx, [esi+40h]
0x7099CD: call    sub_709430
0x7099D2: mov     eax, [edi+21Ch]
0x7099D8: push    1
0x7099DA: lea     ecx, [esp+0Ch+arg_0]
0x7099DE: push    ecx
0x7099DF: push    4
0x7099E1: lea     edx, [esi+4Ch]
0x7099E4: push    edx
0x7099E5: push    eax
0x7099E6: mov     eax, [eax+4]
0x7099E9: mov     [esp+1Ch+arg_0], 4
0x7099F1: call    eax
0x7099F3: mov     edi, [edi+21Ch]
0x7099F9: mov     edx, [edi+4]
0x7099FC: push    1
0x7099FE: lea     ecx, [esp+20h+arg_0]
0x709A02: push    ecx
0x709A03: push    4
0x709A05: add     esi, 50h ; 'P'
0x709A08: push    esi
0x709A09: push    edi
0x709A0A: mov     [esp+30h+arg_0], 4
0x709A12: call    edx
0x709A14: add     esp, 28h
0x709A17: pop     edi
0x709A18: pop     esi
0x709A19: retn    4
