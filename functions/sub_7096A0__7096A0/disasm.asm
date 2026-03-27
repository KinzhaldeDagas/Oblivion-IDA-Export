0x7096A0: mov     eax, [esp+arg_4]
0x7096A4: push    esi
0x7096A5: push    edi
0x7096A6: mov     edi, [esp+8+arg_0]
0x7096AA: push    eax
0x7096AB: push    edi
0x7096AC: mov     esi, ecx
0x7096AE: call    sub_700A60
0x7096B3: mov     ecx, [esi+1Ch]
0x7096B6: mov     [edi+1Ch], ecx
0x7096B9: mov     edx, [esi+20h]
0x7096BC: mov     [edi+20h], edx
0x7096BF: mov     eax, [esi+24h]
0x7096C2: mov     [edi+24h], eax
0x7096C5: mov     ecx, [esi+28h]
0x7096C8: mov     [edi+28h], ecx
0x7096CB: mov     edx, [esi+2Ch]
0x7096CE: mov     [edi+2Ch], edx
0x7096D1: mov     eax, [esi+30h]
0x7096D4: mov     [edi+30h], eax
0x7096D7: mov     ecx, [esi+34h]
0x7096DA: mov     [edi+34h], ecx
0x7096DD: mov     edx, [esi+38h]
0x7096E0: mov     [edi+38h], edx
0x7096E3: mov     eax, [esi+3Ch]
0x7096E6: mov     [edi+3Ch], eax
0x7096E9: mov     ecx, [esi+40h]
0x7096EC: mov     [edi+40h], ecx
0x7096EF: mov     edx, [esi+44h]
0x7096F2: mov     [edi+44h], edx
0x7096F5: mov     eax, [esi+48h]
0x7096F8: mov     [edi+48h], eax
0x7096FB: fld     dword ptr [esi+4Ch]
0x7096FE: fstp    dword ptr [edi+4Ch]
0x709701: fld     dword ptr [esi+50h]
0x709704: fstp    dword ptr [edi+50h]
0x709707: pop     edi
0x709708: pop     esi
0x709709: retn    8
