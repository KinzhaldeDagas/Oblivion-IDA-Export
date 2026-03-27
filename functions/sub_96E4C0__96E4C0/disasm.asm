0x96E4C0: sub     esp, 1Ch
0x96E4C3: mov     eax, [esp+1Ch+arg_0]
0x96E4C7: mov     ecx, [eax+20h]
0x96E4CA: mov     edx, [eax+24h]
0x96E4CD: mov     [esp+1Ch+var_10], ecx
0x96E4D1: mov     ecx, [eax+28h]
0x96E4D4: mov     [esp+1Ch+var_C], edx
0x96E4D8: mov     edx, [eax+2Ch]
0x96E4DB: mov     eax, [esp+1Ch+arg_4]
0x96E4DF: fld     dword ptr [eax]
0x96E4E1: mov     [esp+1Ch+var_8], ecx
0x96E4E5: fsub    [esp+1Ch+var_10]
0x96E4E9: mov     [esp+1Ch+var_4], edx
0x96E4ED: fstp    [esp+1Ch+var_1C]
0x96E4F0: fld     dword ptr [eax+4]
0x96E4F3: fsub    [esp+1Ch+var_C]
0x96E4F7: fstp    [esp+1Ch+var_18]
0x96E4FB: fld     dword ptr [eax+8]
0x96E4FE: fsub    [esp+1Ch+var_8]
0x96E502: fstp    [esp+1Ch+var_14]
0x96E506: fld     [esp+1Ch+var_1C]
0x96E509: fld     st
0x96E50B: fld     [esp+1Ch+var_18]
0x96E50F: fld     st
0x96E511: fld     [esp+1Ch+var_14]
0x96E515: fld     st
0x96E517: fld     [esp+1Ch+var_4]
0x96E51B: fld     st(3)
0x96E51D: fmulp   st(4), st
0x96E51F: fld     st(5)
0x96E521: fmulp   st(6), st
0x96E523: fxch    st(3)
0x96E525: faddp   st(5), st
0x96E527: fmul    st, st
0x96E529: faddp   st(4), st
0x96E52B: fxch    st(3)
0x96E52D: fstp    [esp+1Ch+arg_0]
0x96E531: fld     st
0x96E533: fmulp   st(1), st
0x96E535: fsubr   [esp+1Ch+arg_0]
0x96E539: fstp    [esp+1Ch+arg_0]
0x96E53D: fldz
0x96E53F: fld     [esp+1Ch+arg_0]
0x96E543: fcom    st(1)
0x96E545: fnstsw  ax
0x96E547: test    ah, 41h
0x96E54A: jp      short loc_96E55C
0x96E54C: fstp    st(1)
0x96E54E: mov     al, 1
0x96E550: fstp    st(3)
0x96E552: fstp    st
0x96E554: fstp    st
0x96E556: fstp    st
0x96E558: add     esp, 1Ch
0x96E55B: retn
0x96E55C: mov     ecx, [esp+1Ch+arg_8]
0x96E560: fld     dword ptr [ecx+4]
0x96E563: fmulp   st(3), st
0x96E565: fld     dword ptr [ecx]
0x96E567: fmulp   st(5), st
0x96E569: fxch    st(2)
0x96E56B: faddp   st(4), st
0x96E56D: fld     dword ptr [ecx+8]
0x96E570: fmulp   st(3), st
0x96E572: fxch    st(3)
0x96E574: faddp   st(2), st
0x96E576: fxch    st(1)
0x96E578: fstp    [esp+1Ch+arg_0]
0x96E57C: fld     [esp+1Ch+arg_0]
0x96E580: fcom    st(2)
0x96E582: fnstsw  ax
0x96E584: fstp    st(2)
0x96E586: test    ah, 1
0x96E589: jnz     short loc_96E595
0x96E58B: fstp    st(1)
0x96E58D: xor     al, al
0x96E58F: fstp    st
0x96E591: add     esp, 1Ch
0x96E594: retn
0x96E595: fld     dword ptr [ecx+4]
0x96E598: fld     dword ptr [ecx]
0x96E59A: fld     dword ptr [ecx+8]
0x96E59D: fld     st(4)
0x96E59F: fmulp   st(5), st
0x96E5A1: fld     st(2)
0x96E5A3: fmulp   st(3), st
0x96E5A5: fld     st(1)
0x96E5A7: fmulp   st(2), st
0x96E5A9: fxch    st(2)
0x96E5AB: faddp   st(1), st
0x96E5AD: fld     st(1)
0x96E5AF: fmulp   st(2), st
0x96E5B1: faddp   st(1), st
0x96E5B3: fstp    [esp+1Ch+arg_0]
0x96E5B7: fmul    [esp+1Ch+arg_0]
0x96E5BB: fcompp
0x96E5BD: fnstsw  ax
0x96E5BF: test    ah, 41h
0x96E5C2: jp      short loc_96E5CD
0x96E5C4: mov     eax, 1
0x96E5C9: add     esp, 1Ch
0x96E5CC: retn
0x96E5CD: xor     eax, eax
0x96E5CF: add     esp, 1Ch
0x96E5D2: retn
