0x718A80: sub     esp, 48h
0x718A83: push    ebx
0x718A84: push    ebp
0x718A85: push    esi
0x718A86: push    edi
0x718A87: lea     eax, [esp+58h+var_24]
0x718A8B: push    eax
0x718A8C: mov     ebp, ecx
0x718A8E: call    sub_710400
0x718A93: mov     ebx, [esp+58h+arg_0]
0x718A97: mov     esi, eax
0x718A99: mov     ecx, 9
0x718A9E: mov     edi, ebx
0x718AA0: rep movsd
0x718AA2: fld     dword ptr [ebp+30h]
0x718AA5: fld1
0x718AA7: fdivrp  st(1), st
0x718AA9: lea     ecx, [esp+58h+var_3C]
0x718AAD: push    ecx
0x718AAE: lea     edx, [esp+5Ch+var_30]
0x718AB2: push    edx
0x718AB3: mov     ecx, ebx
0x718AB5: fstp    dword ptr [ebx+30h]
0x718AB8: fld     dword ptr [ebp+24h]
0x718ABB: fchs
0x718ABD: fstp    [esp+60h+var_3C]
0x718AC1: fld     dword ptr [ebp+28h]
0x718AC4: fchs
0x718AC6: fstp    [esp+60h+var_38]
0x718ACA: fld     dword ptr [ebp+2Ch]
0x718ACD: fchs
0x718ACF: fstp    [esp+60h+var_34]
0x718AD3: call    sub_7101F0
0x718AD8: fld     dword ptr [ebx+30h]
0x718ADB: fstp    [esp+58h+arg_0]
0x718ADF: pop     edi
0x718AE0: fld     [esp+54h+arg_0]
0x718AE4: pop     esi
0x718AE5: fld     st
0x718AE7: pop     ebp
0x718AE8: fmul    dword ptr [eax]
0x718AEA: fstp    [esp+4Ch+var_48]
0x718AEE: fld     dword ptr [eax+4]
0x718AF1: fmul    st, st(1)
0x718AF3: fstp    [esp+4Ch+var_44]
0x718AF7: mov     ecx, [esp+4Ch+var_44]
0x718AFB: fmul    dword ptr [eax+8]
0x718AFE: mov     eax, [esp+4Ch+var_48]
0x718B02: mov     [ebx+24h], eax
0x718B05: mov     [ebx+28h], ecx
0x718B08: fstp    [esp+4Ch+var_40]
0x718B0C: mov     edx, [esp+4Ch+var_40]
0x718B10: mov     [ebx+2Ch], edx
0x718B13: pop     ebx
0x718B14: add     esp, 48h
0x718B17: retn    4
