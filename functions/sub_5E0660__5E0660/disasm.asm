0x5E0660: sub     esp, 20h
0x5E0663: push    esi
0x5E0664: mov     esi, ecx
0x5E0666: mov     eax, [esi]
0x5E0668: mov     edx, [eax+15Ch]
0x5E066E: lea     ecx, [esp+24h+var_18]
0x5E0672: push    ecx
0x5E0673: mov     ecx, esi
0x5E0675: call    edx
0x5E0677: fld     dword ptr [eax+8]
0x5E067A: mov     eax, [esi]
0x5E067C: fstp    [esp+24h+var_24+4]
0x5E0680: mov     edx, [eax+158h]
0x5E0686: lea     ecx, [esp+24h+var_C]
0x5E068A: push    ecx
0x5E068B: mov     ecx, esi
0x5E068D: call    edx
0x5E068F: fld     dword ptr [eax+8]
0x5E0692: fsubr   [esp+24h+var_24+4]
0x5E0696: mov     eax, [esi]
0x5E0698: mov     edx, [eax+0ECh]
0x5E069E: mov     ecx, esi
0x5E06A0: fstp    [esp+24h+var_24+4]
0x5E06A4: call    edx
0x5E06A6: fmul    [esp+24h+var_24+4]
0x5E06AA: pop     esi
0x5E06AB: fstp    dword ptr [esp+20h+var_24+4]
0x5E06AE: fld     dword ptr [esp+20h+var_24+4]
0x5E06B1: add     esp, 20h
0x5E06B4: retn
