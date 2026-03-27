0x5E40C0: sub     esp, 20h
0x5E40C3: push    esi
0x5E40C4: mov     esi, ecx
0x5E40C6: mov     eax, [esi]
0x5E40C8: mov     edx, [eax+27Ch]
0x5E40CE: call    edx
0x5E40D0: test    eax, eax
0x5E40D2: jnz     short loc_5E4115
0x5E40D4: mov     eax, [esi]
0x5E40D6: mov     edx, [eax+15Ch]
0x5E40DC: lea     ecx, [esp+24h+var_18]
0x5E40E0: push    ecx
0x5E40E1: mov     ecx, esi
0x5E40E3: call    edx
0x5E40E5: fld     dword ptr [eax+8]
0x5E40E8: mov     eax, [esi]
0x5E40EA: fstp    [esp+24h+var_24+4]
0x5E40EE: mov     edx, [eax+158h]
0x5E40F4: lea     ecx, [esp+24h+var_C]
0x5E40F8: push    ecx
0x5E40F9: mov     ecx, esi
0x5E40FB: call    edx
0x5E40FD: fld     dword ptr [eax+8]
0x5E4100: fsubr   [esp+24h+var_24+4]
0x5E4104: pop     esi
0x5E4105: fmul    qword ptr ds:0A31C70h
0x5E410B: fstp    dword ptr [esp+20h+var_24+4]
0x5E410E: fld     dword ptr [esp+20h+var_24+4]
0x5E4111: add     esp, 20h
0x5E4114: retn
0x5E4115: mov     eax, ds:0B333C4h
0x5E411A: fld     dword ptr [eax+5D4h]
0x5E4120: mov     edx, [esi]
0x5E4122: mov     eax, [edx+0ECh]
0x5E4128: fstp    dword ptr [esp+24h+var_24+4]
0x5E412C: mov     ecx, esi
0x5E412E: call    eax
0x5E4130: fmul    dword ptr [esp+24h+var_24+4]
0x5E4134: pop     esi
0x5E4135: fstp    dword ptr [esp+20h+var_24+4]
0x5E4138: fld     dword ptr [esp+20h+var_24+4]
0x5E413B: add     esp, 20h
0x5E413E: retn
