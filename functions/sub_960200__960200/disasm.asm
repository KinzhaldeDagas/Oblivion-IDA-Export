0x960200: sub     esp, 18h
0x960203: push    ebx
0x960204: mov     ebx, [esp+1Ch+arg_0]
0x960208: push    esi
0x960209: push    edi
0x96020A: mov     edi, [esp+24h+arg_4]
0x96020E: mov     esi, ecx
0x960210: lea     eax, [ebx+4]
0x960213: push    eax
0x960214: lea     ecx, [esp+28h+var_C]
0x960218: push    ecx
0x960219: mov     ecx, edi
0x96021B: call    sub_7101F0
0x960220: fld     dword ptr [edi+30h]
0x960223: fstp    [esp+24h+arg_0]
0x960227: fld     dword ptr [eax]
0x960229: fld     [esp+24h+arg_0]
0x96022D: fld     st
0x96022F: fmulp   st(2), st
0x960231: fxch    st(1)
0x960233: fstp    [esp+24h+var_18]
0x960237: fld     dword ptr [eax+4]
0x96023A: fmul    st, st(1)
0x96023C: fstp    [esp+24h+var_14]
0x960240: fmul    dword ptr [eax+8]
0x960243: fstp    [esp+24h+var_10]
0x960247: fld     dword ptr [edi+24h]
0x96024A: fadd    [esp+24h+var_18]
0x96024E: fstp    [esp+24h+var_C]
0x960252: mov     edx, [esp+24h+var_C]
0x960256: fld     dword ptr [edi+28h]
0x960259: fadd    [esp+24h+var_14]
0x96025D: fstp    [esp+24h+var_8]
0x960261: mov     eax, [esp+24h+var_8]
0x960265: fld     dword ptr [edi+2Ch]
0x960268: mov     [esi+4], edx
0x96026B: fadd    [esp+24h+var_10]
0x96026F: mov     [esi+8], eax
0x960272: lea     edx, [ebx+10h]
0x960275: push    edx
0x960276: fstp    [esp+28h+var_4]
0x96027A: mov     ecx, [esp+28h+var_4]
0x96027E: lea     eax, [esp+28h+var_C]
0x960282: mov     [esi+0Ch], ecx
0x960285: push    eax
0x960286: mov     ecx, edi
0x960288: call    sub_7101F0
0x96028D: mov     ecx, [eax]
0x96028F: mov     [esi+10h], ecx
0x960292: mov     edx, [eax+4]
0x960295: mov     [esi+14h], edx
0x960298: mov     eax, [eax+8]
0x96029B: mov     [esi+18h], eax
0x96029E: fld     dword ptr [ebx+1Ch]
0x9602A1: fmul    dword ptr [edi+30h]
0x9602A4: mov     ecx, esi
0x9602A6: fstp    dword ptr [esi+1Ch]
0x9602A9: fld     dword ptr [ebx+38h]
0x9602AC: fmul    dword ptr [edi+30h]
0x9602AF: fstp    dword ptr [esi+38h]
0x9602B2: call    sub_9600B0
0x9602B7: pop     edi
0x9602B8: pop     esi
0x9602B9: pop     ebx
0x9602BA: add     esp, 18h
0x9602BD: retn    8
