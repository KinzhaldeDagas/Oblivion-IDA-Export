0x65DFA0: sub     esp, 14h
0x65DFA3: push    esi
0x65DFA4: mov     esi, ecx
0x65DFA6: call    Actor_GetBaseEncumberance
0x65DFAB: fstp    [esp+18h+var_10]
0x65DFAF: mov     ecx, esi
0x65DFB1: call    sub_4D8FB0
0x65DFB6: fstp    [esp+18h+var_14]
0x65DFBA: fld     dword ptr [esi+230h]
0x65DFC0: fstp    [esp+18h+var_8]
0x65DFC4: fld     dword ptr [esi+350h]
0x65DFCA: fstp    [esp+18h+var_C]
0x65DFCE: fld     dword ptr [esi+47Ch]
0x65DFD4: pop     esi
0x65DFD5: fstp    [esp+14h+var_4]
0x65DFD9: fld     [esp+14h+var_C]
0x65DFDD: fadd    [esp+14h+var_8]
0x65DFE1: fadd    [esp+14h+var_4]
0x65DFE5: fstp    [esp+14h+var_4]
0x65DFE9: fldz
0x65DFEB: fld     [esp+14h+var_4]
0x65DFEF: fcom    st(1)
0x65DFF1: fnstsw  ax
0x65DFF3: fstp    st(1)
0x65DFF5: test    ah, 1
0x65DFF8: jnz     short loc_65E013
0x65DFFA: fadd    [esp+14h+var_14]
0x65DFFD: mov     eax, [esp+14h+arg_0]
0x65E001: mov     ecx, [esp+14h+arg_4]
0x65E005: fstp    dword ptr [eax]
0x65E007: fld     [esp+14h+var_10]
0x65E00B: fstp    dword ptr [ecx]
0x65E00D: add     esp, 14h
0x65E010: retn    8
0x65E013: fld     [esp+14h+var_14]
0x65E016: mov     edx, [esp+14h+arg_0]
0x65E01A: mov     eax, [esp+14h+arg_4]
0x65E01E: fstp    dword ptr [edx]
0x65E020: fchs
0x65E022: fadd    [esp+14h+var_10]
0x65E026: fstp    dword ptr [eax]
0x65E028: add     esp, 14h
0x65E02B: retn    8
