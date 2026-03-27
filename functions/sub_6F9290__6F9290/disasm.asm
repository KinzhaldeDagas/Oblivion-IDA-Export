0x6F9290: sub     esp, 24h
0x6F9293: mov     ecx, [esp+24h+arg_8]
0x6F9297: mov     eax, [esp+24h+arg_4]
0x6F929B: mov     edx, [esp+24h+arg_C]
0x6F929F: mov     [esp+24h+var_20], ecx
0x6F92A3: lea     ecx, [esp+24h+var_24]
0x6F92A6: mov     [esp+24h+var_24], eax
0x6F92A9: mov     [esp+24h+var_1C], edx
0x6F92AD: call    sub_43F350
0x6F92B2: fstp    st
0x6F92B4: fld     [esp+24h+var_24]
0x6F92B7: fld     st
0x6F92B9: fabs
0x6F92BB: fstp    [esp+24h+arg_4]
0x6F92BF: fld     [esp+24h+arg_4]
0x6F92C3: fstp    [esp+24h+var_18]
0x6F92C7: fld     [esp+24h+var_20]
0x6F92CB: fld     st
0x6F92CD: fabs
0x6F92CF: fstp    [esp+24h+arg_4]
0x6F92D3: fld     [esp+24h+arg_4]
0x6F92D7: fstp    [esp+24h+var_14]
0x6F92DB: fld     [esp+24h+var_1C]
0x6F92DF: fld     st
0x6F92E1: fabs
0x6F92E3: fstp    [esp+24h+arg_4]
0x6F92E7: fld     [esp+24h+arg_4]
0x6F92EB: fstp    [esp+24h+var_10]
0x6F92EF: fld     [esp+24h+var_18]
0x6F92F3: fld     [esp+24h+var_14]
0x6F92F7: fcom    st(1)
0x6F92F9: fnstsw  ax
0x6F92FB: fld     [esp+24h+var_10]
0x6F92FF: test    ah, 1
0x6F9302: jnz     short loc_6F9325
0x6F9304: fcom    st(2)
0x6F9306: fnstsw  ax
0x6F9308: test    ah, 1
0x6F930B: jnz     short loc_6F9325
0x6F930D: fstp    st(2)
0x6F930F: fstp    st
0x6F9311: fstp    st(3)
0x6F9313: fstp    st(2)
0x6F9315: fldz
0x6F9317: fstp    [esp+24h+var_18]
0x6F931B: fxch    st(1)
0x6F931D: fchs
0x6F931F: fstp    [esp+24h+var_14]
0x6F9323: jmp     short loc_6F935B
0x6F9325: fxch    st(2)
0x6F9327: fcomp   st(1)
0x6F9329: fnstsw  ax
0x6F932B: test    ah, 1
0x6F932E: jnz     short loc_6F9349
0x6F9330: fcompp
0x6F9332: fnstsw  ax
0x6F9334: test    ah, 41h
0x6F9337: jp      short loc_6F934D
0x6F9339: fstp    st(1)
0x6F933B: fchs
0x6F933D: fstp    [esp+24h+var_18]
0x6F9341: fldz
0x6F9343: fstp    [esp+24h+var_14]
0x6F9347: jmp     short loc_6F935B
0x6F9349: fstp    st
0x6F934B: fstp    st(1)
0x6F934D: fstp    st
0x6F934F: fchs
0x6F9351: fstp    [esp+24h+var_18]
0x6F9355: fstp    [esp+24h+var_14]
0x6F9359: fldz
0x6F935B: mov     ecx, [esp+24h+var_14]
0x6F935F: fstp    [esp+24h+var_10]
0x6F9363: mov     eax, [esp+24h+var_18]
0x6F9367: mov     edx, [esp+24h+var_10]
0x6F936B: mov     [esp+24h+arg_8], ecx
0x6F936F: lea     ecx, [esp+24h+arg_4]
0x6F9373: mov     [esp+24h+arg_4], eax
0x6F9377: mov     [esp+24h+arg_C], edx
0x6F937B: call    sub_43F350
0x6F9380: fstp    st
0x6F9382: fld     [esp+24h+arg_8]
0x6F9386: fld     st
0x6F9388: fld     [esp+24h+var_1C]
0x6F938C: fld     st
0x6F938E: fmulp   st(2), st
0x6F9390: fld     [esp+24h+arg_C]
0x6F9394: fld     st
0x6F9396: fld     [esp+24h+var_20]
0x6F939A: fld     st
0x6F939C: fmulp   st(2), st
0x6F939E: fxch    st(4)
0x6F93A0: fsubrp  st(1), st
0x6F93A2: fstp    [esp+24h+var_C]
0x6F93A6: mov     eax, [esp+24h+var_C]
0x6F93AA: fld     [esp+24h+var_24]
0x6F93AD: mov     [esp+24h+var_18], eax
0x6F93B1: fld     st
0x6F93B3: fmulp   st(2), st
0x6F93B5: fld     [esp+24h+arg_4]
0x6F93B9: fld     st
0x6F93BB: fmulp   st(4), st
0x6F93BD: fxch    st(2)
0x6F93BF: fsubrp  st(3), st
0x6F93C1: fxch    st(2)
0x6F93C3: fstp    [esp+24h+var_8]
0x6F93C7: mov     ecx, [esp+24h+var_8]
0x6F93CB: mov     [esp+24h+var_14], ecx
0x6F93CF: fmulp   st(2), st
0x6F93D1: lea     ecx, [esp+24h+var_18]
0x6F93D5: fmulp   st(2), st
0x6F93D7: fsubrp  st(1), st
0x6F93D9: fstp    [esp+24h+var_4]
0x6F93DD: mov     edx, [esp+24h+var_4]
0x6F93E1: mov     [esp+24h+var_10], edx
0x6F93E5: call    sub_43F350
0x6F93EA: fstp    st
0x6F93EC: fld     [esp+24h+var_14]
0x6F93F0: fld     st
0x6F93F2: fld     [esp+24h+var_1C]
0x6F93F6: fld     st
0x6F93F8: fmulp   st(2), st
0x6F93FA: fld     [esp+24h+var_10]
0x6F93FE: fld     st
0x6F9400: fld     [esp+24h+var_20]
0x6F9404: fld     st
0x6F9406: fmulp   st(2), st
0x6F9408: fxch    st(4)
0x6F940A: fsubrp  st(1), st
0x6F940C: fstp    [esp+24h+var_C]
0x6F9410: mov     eax, [esp+24h+var_C]
0x6F9414: fld     [esp+24h+var_24]
0x6F9417: mov     [esp+24h+arg_4], eax
0x6F941B: fld     st
0x6F941D: fmulp   st(2), st
0x6F941F: fld     [esp+24h+var_18]
0x6F9423: fld     st
0x6F9425: fmulp   st(4), st
0x6F9427: fxch    st(2)
0x6F9429: fsubrp  st(3), st
0x6F942B: fxch    st(2)
0x6F942D: fstp    [esp+24h+var_8]
0x6F9431: mov     ecx, [esp+24h+var_8]
0x6F9435: mov     [esp+24h+arg_8], ecx
0x6F9439: fmulp   st(2), st
0x6F943B: lea     ecx, [esp+24h+arg_4]
0x6F943F: fmulp   st(2), st
0x6F9441: fsubrp  st(1), st
0x6F9443: fstp    [esp+24h+var_4]
0x6F9447: mov     edx, [esp+24h+var_4]
0x6F944B: mov     [esp+24h+arg_C], edx
0x6F944F: call    sub_43F350
0x6F9454: mov     eax, [esp+24h+arg_0]
0x6F9458: fstp    st
0x6F945A: fld     [esp+24h+arg_4]
0x6F945E: fstp    dword ptr [eax]
0x6F9460: fld     [esp+24h+arg_8]
0x6F9464: fstp    dword ptr [eax+4]
0x6F9467: fld     [esp+24h+arg_C]
0x6F946B: fstp    dword ptr [eax+8]
0x6F946E: fld     [esp+24h+var_18]
0x6F9472: fstp    dword ptr [eax+0Ch]
0x6F9475: fld     [esp+24h+var_14]
0x6F9479: fstp    dword ptr [eax+10h]
0x6F947C: fld     [esp+24h+var_10]
0x6F9480: fstp    dword ptr [eax+14h]
0x6F9483: fld     [esp+24h+var_24]
0x6F9486: fstp    dword ptr [eax+18h]
0x6F9489: fld     [esp+24h+var_20]
0x6F948D: fstp    dword ptr [eax+1Ch]
0x6F9490: fld     [esp+24h+var_1C]
0x6F9494: fstp    dword ptr [eax+20h]
0x6F9497: add     esp, 24h
0x6F949A: retn
