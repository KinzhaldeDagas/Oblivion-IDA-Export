0x715340: sub     esp, 14h
0x715343: push    esi
0x715344: mov     esi, ecx
0x715346: fld     dword ptr [esi+4]
0x715349: fld     dword ptr [esi]
0x71534B: fld     dword ptr [esi+8]
0x71534E: fld     dword ptr [esi+0Ch]
0x715351: fld     st(2)
0x715353: fmulp   st(3), st
0x715355: fld     st(3)
0x715357: fmulp   st(4), st
0x715359: fxch    st(2)
0x71535B: faddp   st(3), st
0x71535D: fmul    st, st
0x71535F: faddp   st(2), st
0x715361: fmul    st, st
0x715363: faddp   st(1), st
0x715365: fstp    [esp+18h+var_14]
0x715369: fld     [esp+18h+var_14]
0x71536D: call    __CIsqrt
0x715372: fstp    [esp+18h+var_14]
0x715376: fld     [esp+18h+var_14]
0x71537A: push    ecx
0x71537B: fld1
0x71537D: lea     eax, [esp+1Ch+var_10]
0x715381: fdivrp  st(1), st
0x715383: mov     ecx, esi
0x715385: fstp    [esp+1Ch+var_14]
0x715389: fld     [esp+1Ch+var_14]
0x71538D: fstp    [esp+1Ch+var_1C]; float
0x715390: push    eax; int
0x715391: call    sub_72F930
0x715396: mov     ecx, [eax]
0x715398: mov     [esi], ecx
0x71539A: mov     edx, [eax+4]
0x71539D: mov     [esi+4], edx
0x7153A0: mov     ecx, [eax+8]
0x7153A3: mov     [esi+8], ecx
0x7153A6: mov     edx, [eax+0Ch]
0x7153A9: mov     [esi+0Ch], edx
0x7153AC: pop     esi
0x7153AD: add     esp, 14h
0x7153B0: retn
