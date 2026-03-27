0x7492B0: push    esi
0x7492B1: mov     esi, ecx
0x7492B3: mov     eax, [esi]
0x7492B5: mov     edx, [eax+74h]
0x7492B8: call    edx
0x7492BA: fld     [esp+4+arg_0]
0x7492BE: mov     eax, dword ptr [esp+4+arg_4]
0x7492C2: push    eax; char
0x7492C3: push    ecx
0x7492C4: mov     ecx, esi
0x7492C6: fstp    [esp+0Ch+var_C]; float
0x7492C9: call    sub_707580
0x7492CE: pop     esi
0x7492CF: retn    8
