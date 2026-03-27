0x615F70: sub     esp, 18h
0x615F73: push    ebx
0x615F74: push    ebp
0x615F75: mov     ebp, [esp+20h+arg_0]
0x615F79: xor     bl, bl
0x615F7B: test    ebp, ebp
0x615F7D: jnz     short loc_615F87
0x615F7F: pop     ebp
0x615F80: xor     al, al
0x615F82: pop     ebx
0x615F83: add     esp, 18h
0x615F86: retn
0x615F87: mov     eax, ds:0B3F9A8h
0x615F8C: push    esi
0x615F8D: mov     esi, [esp+24h+arg_8]
0x615F91: mov     [esi], eax
0x615F93: mov     ecx, ds:0B3F9ACh
0x615F99: mov     eax, [esp+24h+arg_4]
0x615F9D: push    edi
0x615F9E: push    0
0x615FA0: mov     [esi+4], ecx
0x615FA3: mov     edx, ds:0B3F9B0h
0x615FA9: push    0
0x615FAB: push    eax
0x615FAC: mov     ecx, ebp
0x615FAE: mov     [esi+8], edx
0x615FB1: call    Actor_LoadAnimGroup?
0x615FB6: movzx   edi, ax
0x615FB9: push    edi
0x615FBA: call    sub_51ACC0
0x615FBF: add     esp, 4
0x615FC2: test    al, al
0x615FC4: jz      loc_616097
0x615FCA: mov     edx, [ebp+0]
0x615FCD: mov     eax, [edx+164h]
0x615FD3: mov     ecx, ebp
0x615FD5: call    eax
0x615FD7: mov     eax, [eax+9Ch]
0x615FDD: lea     ecx, [esp+28h+arg_0]
0x615FE1: push    ecx
0x615FE2: push    edi
0x615FE3: mov     ecx, eax
0x615FE5: call    sub_470960
0x615FEA: test    al, al
0x615FEC: jz      loc_616097
0x615FF2: mov     ecx, [esp+28h+arg_0]
0x615FF6: mov     edx, [ecx]
0x615FF8: mov     eax, [edx+10h]
0x615FFB: push    0FFFFFFFFh
0x615FFD: call    eax
0x615FFF: mov     edi, [eax+68h]
0x616002: push    2; ArgList
0x616004: mov     ecx, edi
0x616006: call    sub_51AE20
0x61600B: fstp    [esp+28h+var_1C+4]
0x61600F: push    0; ArgList
0x616011: mov     ecx, edi
0x616013: call    sub_51AE20
0x616018: fsubr   [esp+28h+var_1C+4]
0x61601C: lea     ecx, [esp+28h+var_C]
0x616020: push    ecx
0x616021: mov     ecx, edi
0x616023: fstp    [esp+2Ch+arg_0]
0x616027: call    sub_51AAB0
0x61602C: fld     dword ptr [eax]
0x61602E: fld     [esp+28h+arg_0]
0x616032: mov     edx, [ebp+0]
0x616035: fld     st
0x616037: mov     ecx, ebp
0x616039: fmulp   st(2), st
0x61603B: fxch    st(1)
0x61603D: fstp    dword ptr [esp+28h+var_1C+4]
0x616041: fld     dword ptr [eax+4]
0x616044: fmul    st, st(1)
0x616046: fstp    [esp+28h+var_14]
0x61604A: fmul    dword ptr [eax+8]
0x61604D: mov     eax, [edx+0ECh]
0x616053: fstp    [esp+28h+var_10]
0x616057: call    eax
0x616059: fstp    [esp+28h+arg_0]
0x61605D: mov     bl, 1
0x61605F: fld     dword ptr [esp+28h+var_1C+4]
0x616063: fld     [esp+28h+arg_0]
0x616067: fld     st
0x616069: fmulp   st(2), st
0x61606B: fxch    st(1)
0x61606D: fstp    [esp+28h+var_C]
0x616071: mov     ecx, [esp+28h+var_C]
0x616075: fld     [esp+28h+var_14]
0x616079: mov     [esi], ecx
0x61607B: fmul    st, st(1)
0x61607D: fstp    [esp+28h+var_8]
0x616081: mov     edx, [esp+28h+var_8]
0x616085: mov     [esi+4], edx
0x616088: fmul    [esp+28h+var_10]
0x61608C: fstp    [esp+28h+var_4]
0x616090: mov     eax, [esp+28h+var_4]
0x616094: mov     [esi+8], eax
0x616097: pop     edi
0x616098: pop     esi
0x616099: pop     ebp
0x61609A: mov     al, bl
0x61609C: pop     ebx
0x61609D: add     esp, 18h
0x6160A0: retn
