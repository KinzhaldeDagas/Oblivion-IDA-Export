0x96C4C0: sub     esp, 18h
0x96C4C3: push    ebx
0x96C4C4: mov     ebx, [esp+1Ch+arg_0]
0x96C4C8: push    esi
0x96C4C9: mov     esi, [esp+20h+arg_4]
0x96C4CD: push    edi
0x96C4CE: mov     edi, ecx
0x96C4D0: lea     eax, [ebx+4]
0x96C4D3: push    eax
0x96C4D4: lea     ecx, [esp+28h+var_C]
0x96C4D8: push    ecx
0x96C4D9: mov     ecx, esi
0x96C4DB: call    sub_7101F0
0x96C4E0: fld     dword ptr [esi+30h]
0x96C4E3: fstp    [esp+24h+arg_0]
0x96C4E7: fld     [esp+24h+arg_0]
0x96C4EB: fld     st
0x96C4ED: fmul    dword ptr [eax]
0x96C4EF: fstp    [esp+24h+var_18]
0x96C4F3: fld     dword ptr [eax+4]
0x96C4F6: fmul    st, st(1)
0x96C4F8: fstp    [esp+24h+var_14]
0x96C4FC: fmul    dword ptr [eax+8]
0x96C4FF: fstp    [esp+24h+var_10]
0x96C503: fld     dword ptr [esi+24h]
0x96C506: fadd    [esp+24h+var_18]
0x96C50A: fstp    [esp+24h+var_C]
0x96C50E: mov     edx, [esp+24h+var_C]
0x96C512: fld     dword ptr [esi+28h]
0x96C515: fadd    [esp+24h+var_14]
0x96C519: fstp    [esp+24h+var_8]
0x96C51D: mov     eax, [esp+24h+var_8]
0x96C521: fld     dword ptr [esi+2Ch]
0x96C524: mov     [edi+4], edx
0x96C527: fadd    [esp+24h+var_10]
0x96C52B: mov     [edi+8], eax
0x96C52E: fstp    [esp+24h+var_4]
0x96C532: mov     ecx, [esp+24h+var_4]
0x96C536: mov     [edi+0Ch], ecx
0x96C539: fld     dword ptr [ebx+10h]
0x96C53C: fmul    dword ptr [esi+30h]
0x96C53F: fstp    dword ptr [edi+10h]
0x96C542: pop     edi
0x96C543: pop     esi
0x96C544: pop     ebx
0x96C545: add     esp, 18h
0x96C548: retn    8
