0x577690: sub     esp, 10h
0x577693: fld     dword ptr ds:0A68A90h
0x577699: push    esi
0x57769A: fstp    [esp+14h+var_10]
0x57769E: mov     eax, [esp+14h+var_10]
0x5776A2: fld     dword ptr ds:0A68A8Ch
0x5776A8: mov     esi, ecx
0x5776AA: fstp    [esp+14h+var_C]
0x5776AE: mov     ecx, [esp+14h+var_C]
0x5776B2: fld     dword ptr ds:0A68A88h
0x5776B8: mov     [esi+8], eax
0x5776BB: fstp    [esp+14h+var_8]
0x5776BF: mov     edx, [esp+14h+var_8]
0x5776C3: fld1
0x5776C5: mov     [esi+0Ch], ecx
0x5776C8: fstp    [esp+14h+var_4]
0x5776CC: mov     [esi+10h], edx
0x5776CF: mov     eax, [esp+14h+var_4]
0x5776D3: mov     dword ptr [esi], 0
0x5776D9: mov     [esi+14h], eax
0x5776DC: mov     dword ptr [esi+18h], 1
0x5776E3: mov     ecx, [esi+1Ch]
0x5776E6: push    ecx
0x5776E7: call    FormHeapFree
0x5776EC: add     esp, 4
0x5776EF: push    20h ; ' '
0x5776F1: mov     ecx, esi
0x5776F3: mov     dword ptr [esi+1Ch], 0
0x5776FA: mov     word ptr [esi+22h], 0
0x577700: mov     word ptr [esi+20h], 0
0x577706: call    sub_577120
0x57770B: pop     esi
0x57770C: add     esp, 10h
0x57770F: retn
