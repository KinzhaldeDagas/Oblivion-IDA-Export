0x78F050: sub     esp, 58h
0x78F053: fld     [esp+58h+arg_0]
0x78F057: push    esi
0x78F058: fdiv    qword ptr ds:0A8BA48h
0x78F05E: push    edi
0x78F05F: mov     edi, ecx
0x78F061: fstp    dword ptr [esp+60h+var_58]
0x78F065: fld     dword ptr [esp+60h+var_58]
0x78F069: call    __CIsin
0x78F06E: fstp    [esp+60h+arg_0]
0x78F072: fld     [esp+60h+arg_0]
0x78F076: fstp    [esp+60h+arg_0]
0x78F07A: fld     dword ptr [esp+60h+var_58]
0x78F07E: call    __CIcos
0x78F083: fstp    dword ptr [esp+60h+var_58]
0x78F087: fld     dword ptr [esp+60h+var_58]
0x78F08B: push    edi
0x78F08C: fstp    dword ptr [esp+64h+var_58]
0x78F090: lea     eax, [esp+64h+var_24]
0x78F094: fld     dword ptr [esp+64h+var_58]
0x78F098: push    eax
0x78F099: fld     st
0x78F09B: lea     ecx, [esp+68h+var_48]
0x78F09F: fld1
0x78F0A1: fsubrp  st(1), st
0x78F0A3: fstp    dword ptr [esp+68h+var_58]
0x78F0A7: fld     dword ptr [esp+68h+arg_4]
0x78F0AB: fld     st
0x78F0AD: fld     dword ptr [esp+68h+var_58]
0x78F0B1: fld     st
0x78F0B3: fmulp   st(2), st
0x78F0B5: fld     st(2)
0x78F0B7: fmul    st, st(2)
0x78F0B9: fadd    st, st(4)
0x78F0BB: fstp    [esp+68h+var_48]
0x78F0BF: fld     dword ptr [esp+68h+arg_4+4]
0x78F0C3: fld     st
0x78F0C5: fmul    st, st(3)
0x78F0C7: fstp    [esp+68h+var_58]
0x78F0CB: fld     [esp+68h+arg_C]
0x78F0CF: fld     st
0x78F0D1: fmul    [esp+68h+arg_0]
0x78F0D5: fst     [esp+68h+arg_4]
0x78F0D9: fadd    [esp+68h+var_58]
0x78F0DD: fstp    [esp+68h+var_44]
0x78F0E1: fld     st
0x78F0E3: fmulp   st(4), st
0x78F0E5: fld     st(1)
0x78F0E7: fmul    [esp+68h+arg_0]
0x78F0EB: fst     [esp+68h+var_50]
0x78F0EF: fsubr   st, st(4)
0x78F0F1: fstp    [esp+68h+var_40]
0x78F0F5: fld     [esp+68h+var_58]
0x78F0F9: fsub    [esp+68h+arg_4]
0x78F0FD: fstp    [esp+68h+var_3C]
0x78F101: fld     st(1)
0x78F103: fmul    st, st(3)
0x78F105: fmul    st(2), st
0x78F107: fld     st(6)
0x78F109: faddp   st(3), st
0x78F10B: fxch    st(2)
0x78F10D: fstp    [esp+68h+var_38]
0x78F111: fld     st
0x78F113: fmulp   st(2), st
0x78F115: fld     [esp+68h+arg_0]
0x78F119: fmulp   st(5), st
0x78F11B: fld     st(4)
0x78F11D: fadd    st, st(2)
0x78F11F: fstp    [esp+68h+var_34]
0x78F123: fld     [esp+68h+var_50]
0x78F127: faddp   st(4), st
0x78F129: fxch    st(3)
0x78F12B: fstp    [esp+68h+var_30]
0x78F12F: fsubrp  st(3), st
0x78F131: fxch    st(2)
0x78F133: fstp    [esp+68h+var_2C]
0x78F137: fld     st
0x78F139: fmulp   st(2), st
0x78F13B: fmulp   st(1), st
0x78F13D: faddp   st(1), st
0x78F13F: fstp    [esp+68h+var_28]
0x78F143: call    sub_78EDD0
0x78F148: mov     ecx, 9
0x78F14D: mov     esi, eax
0x78F14F: rep movsd
0x78F151: pop     edi
0x78F152: pop     esi
0x78F153: add     esp, 58h
0x78F156: retn    10h
