0x9580D0: push    ebx
0x9580D1: push    esi
0x9580D2: mov     esi, [esp+8+arg_0]
0x9580D6: push    edi
0x9580D7: push    esi
0x9580D8: mov     ebx, ecx
0x9580DA: call    sub_957E90
0x9580DF: mov     edi, [esp+0Ch+arg_4]
0x9580E3: push    esi
0x9580E4: fstp    dword ptr [edi+4]
0x9580E7: mov     ecx, ebx
0x9580E9: call    sub_957F30
0x9580EE: fstp    dword ptr [edi+0Ch]
0x9580F1: push    esi
0x9580F2: mov     ecx, ebx
0x9580F4: call    sub_957E30
0x9580F9: fstp    dword ptr [edi+10h]
0x9580FC: fild    dword ptr [esi+30h]
0x9580FF: fmul    dword ptr [esi+1Ch]
0x958102: fmul    dword ptr [ebx+8]
0x958105: fmul    dword ptr ds:0A31E2Ch
0x95810B: fstp    dword ptr [edi]
0x95810D: fld     dword ptr [esi+38h]
0x958110: fsub    dword ptr [esi+20h]
0x958113: fmul    dword ptr [esi+10h]
0x958116: fmul    dword ptr [ebx+0Ch]
0x958119: fstp    dword ptr [edi+14h]
0x95811C: mov     eax, [esi+8]
0x95811F: mov     [edi+18h], eax
0x958122: mov     ecx, [esi+0Ch]
0x958125: mov     [edi+1Ch], ecx
0x958128: pop     edi
0x958129: pop     esi
0x95812A: pop     ebx
0x95812B: retn    8
