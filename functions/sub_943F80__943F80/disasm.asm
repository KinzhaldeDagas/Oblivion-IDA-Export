0x943F80: sub     esp, 28h
0x943F83: mov     eax, [esp+28h+arg_0]
0x943F87: mov     edx, [esp+28h+arg_8]
0x943F8B: push    esi
0x943F8C: mov     esi, [eax+20h]
0x943F8F: mov     [ecx], edx
0x943F91: mov     edx, [esp+2Ch+arg_4]
0x943F95: fld     dword ptr [edx]
0x943F97: push    edi
0x943F98: fsub    dword ptr [eax+10h]
0x943F9B: fmul    dword ptr [eax+1Ch]
0x943F9E: fstp    [esp+30h+arg_0]
0x943FA2: fld     [esp+30h+arg_0]
0x943FA6: fistp   [esp+30h+arg_8]
0x943FAA: mov     edi, [esp+30h+arg_8]
0x943FAE: dec     edi
0x943FAF: mov     [ecx+10h], edi
0x943FB2: fld     dword ptr [edx+4]
0x943FB5: fsub    dword ptr [eax+14h]
0x943FB8: fmul    dword ptr [eax+1Ch]
0x943FBB: fstp    [esp+30h+arg_0]
0x943FBF: fld     [esp+30h+arg_0]
0x943FC3: fistp   [esp+30h+arg_8]
0x943FC7: mov     edi, [esp+30h+arg_8]
0x943FCB: dec     edi
0x943FCC: mov     [ecx+14h], edi
0x943FCF: fld     dword ptr [edx+8]
0x943FD2: fsub    dword ptr [eax+18h]
0x943FD5: fmul    dword ptr [eax+1Ch]
0x943FD8: fstp    [esp+30h+arg_0]
0x943FDC: fld     [esp+30h+arg_0]
0x943FE0: fistp   [esp+30h+arg_8]
0x943FE4: mov     edi, [esp+30h+arg_8]
0x943FE8: dec     edi
0x943FE9: mov     [ecx+18h], edi
0x943FEC: fld     dword ptr [edx+0Ch]
0x943FEF: fmul    dword ptr [eax+1Ch]
0x943FF2: fstp    [esp+30h+arg_0]
0x943FF6: fld     [esp+30h+arg_0]
0x943FFA: fistp   [esp+30h+arg_8]
0x943FFE: mov     eax, [esp+30h+arg_8]
0x944002: movsx   edx, word ptr [ecx+12h]
0x944006: add     eax, 2
0x944009: mov     [ecx+1Ch], eax
0x94400C: sar     eax, 10h
0x94400F: mov     [esp+30h+var_28], edx
0x944013: movsx   edx, word ptr [ecx+16h]
0x944017: inc     eax
0x944018: mov     [esp+30h+var_1C], eax
0x94401C: xor     eax, eax
0x94401E: mov     [esp+30h+var_24], edx
0x944022: movsx   edx, word ptr [ecx+1Ah]
0x944026: mov     [esp+30h+var_18], eax
0x94402A: mov     [esp+30h+var_14], eax
0x94402E: mov     [esp+30h+var_10], eax
0x944032: mov     [esp+30h+var_C], eax
0x944036: mov     [esp+30h+var_4], eax
0x94403A: push    esi
0x94403B: lea     eax, [esp+34h+var_28]
0x94403F: push    eax
0x944040: mov     [esp+38h+var_20], edx
0x944044: mov     [esp+38h+var_8], 10h
0x94404C: call    sub_943900
0x944051: pop     edi
0x944052: pop     esi
0x944053: add     esp, 28h
0x944056: retn    0Ch
