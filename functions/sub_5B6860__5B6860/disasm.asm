0x5B6860: sub     esp, 24h
0x5B6863: mov     edx, [esp+24h+arg_0]
0x5B6867: mov     eax, [esp+24h+arg_4]
0x5B686B: push    ebx
0x5B686C: push    esi
0x5B686D: mov     ebx, ecx
0x5B686F: push    edi
0x5B6870: mov     esi, edx
0x5B6872: lea     edi, [ebx+30h]
0x5B6875: mov     ecx, 9
0x5B687A: rep movsd
0x5B687C: fld     dword ptr [eax]
0x5B687E: mov     ecx, [esp+30h+arg_8]
0x5B6882: push    eax
0x5B6883: fadd    dword ptr [ecx]
0x5B6885: fstp    [esp+34h+var_24]
0x5B6889: fld     dword ptr [eax+4]
0x5B688C: fadd    dword ptr [ecx+4]
0x5B688F: fstp    [esp+34h+var_20]
0x5B6893: fld     dword ptr [eax+8]
0x5B6896: lea     eax, [esp+34h+var_C]
0x5B689A: fadd    dword ptr [ecx+8]
0x5B689D: push    eax
0x5B689E: mov     ecx, edx
0x5B68A0: fstp    [esp+38h+var_1C]
0x5B68A4: call    sub_7101F0
0x5B68A9: fld     [esp+30h+var_24]
0x5B68AD: pop     edi
0x5B68AE: fsub    dword ptr [eax]
0x5B68B0: pop     esi
0x5B68B1: fstp    [esp+28h+var_18]
0x5B68B5: mov     ecx, [esp+28h+var_18]
0x5B68B9: fld     [esp+28h+var_20]
0x5B68BD: fsub    dword ptr [eax+4]
0x5B68C0: fstp    [esp+28h+var_14]
0x5B68C4: mov     edx, [esp+28h+var_14]
0x5B68C8: fld     [esp+28h+var_1C]
0x5B68CC: fsub    dword ptr [eax+8]
0x5B68CF: mov     [ebx+54h], ecx
0x5B68D2: mov     [ebx+58h], edx
0x5B68D5: fstp    [esp+28h+var_10]
0x5B68D9: mov     eax, [esp+28h+var_10]
0x5B68DD: mov     [ebx+5Ch], eax
0x5B68E0: pop     ebx
0x5B68E1: add     esp, 24h
0x5B68E4: retn    0Ch
