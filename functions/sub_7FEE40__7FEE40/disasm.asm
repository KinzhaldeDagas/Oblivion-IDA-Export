0x7FEE40: mov     eax, [esp+arg_4]
0x7FEE44: sub     esp, 20h
0x7FEE47: test    eax, eax
0x7FEE49: jz      loc_7FF04F
0x7FEE4F: mov     eax, [eax+0E0h]
0x7FEE55: test    eax, eax
0x7FEE57: jz      short loc_7FEEC4
0x7FEE59: mov     ecx, [eax+0Ch]
0x7FEE5C: mov     ds:0B46B48h, ecx
0x7FEE62: mov     edx, [eax+10h]
0x7FEE65: mov     ds:0B46B4Ch, edx
0x7FEE6B: mov     ecx, [eax+14h]
0x7FEE6E: mov     ds:0B46B50h, ecx
0x7FEE74: mov     edx, [eax+18h]
0x7FEE77: mov     ds:0B46B54h, edx
0x7FEE7D: mov     ecx, [eax+1Ch]
0x7FEE80: mov     ds:0B46B58h, ecx
0x7FEE86: mov     edx, [eax+20h]
0x7FEE89: mov     ds:0B46B5Ch, edx
0x7FEE8F: mov     ecx, [eax+24h]
0x7FEE92: mov     ds:0B46B60h, ecx
0x7FEE98: mov     edx, [eax+28h]
0x7FEE9B: mov     ds:0B46B64h, edx
0x7FEEA1: fld     dword ptr [eax+4Ch]
0x7FEEA4: fstp    dword ptr ds:0B46B3Ch
0x7FEEAA: fld     dword ptr [eax+50h]
0x7FEEAD: fstp    dword ptr ds:0B46B40h
0x7FEEB3: fld     dword ptr [eax+54h]
0x7FEEB6: fstp    dword ptr ds:0B46B68h
0x7FEEBC: fld1
0x7FEEBE: fstp    dword ptr ds:0B46B6Ch
0x7FEEC4: fldz
0x7FEEC6: fst     [esp+20h+var_20]
0x7FEEC9: mov     eax, [esp+20h+var_20]
0x7FEECC: fst     [esp+20h+var_1C]
0x7FEED0: mov     ecx, [esp+20h+var_1C]
0x7FEED4: fst     [esp+20h+var_18]
0x7FEED8: mov     edx, [esp+20h+var_18]
0x7FEEDC: fst     [esp+20h+var_14]
0x7FEEE0: fst     [esp+20h+var_20]
0x7FEEE3: mov     ds:0B46B7Ch, ecx
0x7FEEE9: mov     ecx, [esp+20h+var_20]
0x7FEEEC: fst     [esp+20h+var_1C]
0x7FEEF0: mov     ds:0B46B78h, eax
0x7FEEF5: fst     [esp+20h+var_18]
0x7FEEF9: mov     eax, [esp+20h+var_14]
0x7FEEFD: fstp    [esp+20h+var_14]
0x7FEF01: mov     ds:0B46B88h, ecx
0x7FEF07: mov     ecx, [esp+20h+var_14]
0x7FEF0B: mov     ds:0B46B94h, ecx
0x7FEF11: mov     ecx, [esp+20h+arg_0]
0x7FEF15: test    ecx, ecx
0x7FEF17: mov     ds:0B46B80h, edx
0x7FEF1D: mov     edx, [esp+20h+var_1C]
0x7FEF21: mov     ds:0B46B84h, eax
0x7FEF26: mov     eax, [esp+20h+var_18]
0x7FEF2A: mov     ds:0B46B8Ch, edx
0x7FEF30: mov     ds:0B46B90h, eax
0x7FEF35: jz      loc_7FF04F
0x7FEF3B: push    edi
0x7FEF3C: lea     edx, [esp+24h+arg_4]
0x7FEF40: push    edx
0x7FEF41: call    sub_405760
0x7FEF46: mov     edi, [eax]
0x7FEF48: mov     eax, [esp+24h+arg_4]
0x7FEF4C: test    eax, eax
0x7FEF4E: jz      short loc_7FEF70
0x7FEF50: push    esi
0x7FEF51: mov     esi, eax
0x7FEF53: add     eax, 4
0x7FEF56: push    eax; lpAddend
0x7FEF57: call    dword ptr ds:0A2807Ch
0x7FEF5D: test    eax, eax
0x7FEF5F: jnz     short loc_7FEF6F
0x7FEF61: test    esi, esi
0x7FEF63: jz      short loc_7FEF6F
0x7FEF65: mov     eax, [esi]
0x7FEF67: mov     edx, [eax]
0x7FEF69: push    1
0x7FEF6B: mov     ecx, esi
0x7FEF6D: call    edx
0x7FEF6F: pop     esi
0x7FEF70: mov     ecx, [edi+0Ch]
0x7FEF73: test    ecx, ecx
0x7FEF75: pop     edi
0x7FEF76: jz      loc_7FF04F
0x7FEF7C: fld     dword ptr [ecx+2Ch]
0x7FEF7F: fstp    [esp+20h+arg_0]
0x7FEF83: fld     dword ptr [ecx+30h]
0x7FEF86: fstp    [esp+20h+arg_4]
0x7FEF8A: fldz
0x7FEF8C: fld     st
0x7FEF8E: fld     [esp+20h+arg_4]
0x7FEF92: fucom   st(1)
0x7FEF94: fnstsw  ax
0x7FEF96: fstp    st(1)
0x7FEF98: test    ah, 44h
0x7FEF9B: fld     [esp+20h+arg_0]
0x7FEF9F: jp      short loc_7FEFB0
0x7FEFA1: fld     st(2)
0x7FEFA3: fucomp  st(1)
0x7FEFA5: fnstsw  ax
0x7FEFA7: test    ah, 44h
0x7FEFAA: jnp     loc_7FF049
0x7FEFB0: mov     eax, [ecx+20h]
0x7FEFB3: fxch    st(1)
0x7FEFB5: mov     edx, [ecx+24h]
0x7FEFB8: fst     [esp+20h+var_10]
0x7FEFBC: fsubrp  st(1), st
0x7FEFBE: mov     [esp+20h+var_20], eax
0x7FEFC1: mov     eax, [ecx+28h]
0x7FEFC4: mov     ecx, [esp+20h+var_10]
0x7FEFC8: fstp    [esp+20h+var_C]
0x7FEFCC: mov     [esp+20h+var_1C], edx
0x7FEFD0: fld1
0x7FEFD2: mov     edx, [esp+20h+var_C]
0x7FEFD6: fstp    [esp+20h+var_8]
0x7FEFDA: mov     [esp+20h+var_18], eax
0x7FEFDE: mov     eax, [esp+20h+var_8]
0x7FEFE2: mov     ds:0B46B88h, ecx
0x7FEFE8: fst     [esp+20h+var_4]
0x7FEFEC: mov     ecx, [esp+20h+var_4]
0x7FEFF0: fld     [esp+20h+var_20]
0x7FEFF3: mov     ds:0B46B8Ch, edx
0x7FEFF9: fstp    [esp+20h+var_10]
0x7FEFFD: mov     edx, [esp+20h+var_10]
0x7FF001: fld     [esp+20h+var_1C]
0x7FF005: mov     ds:0B46B90h, eax
0x7FF00A: fstp    [esp+20h+var_C]
0x7FF00E: mov     eax, [esp+20h+var_C]
0x7FF012: fld     [esp+20h+var_18]
0x7FF016: mov     ds:0B46B94h, ecx
0x7FF01C: fstp    [esp+20h+var_8]
0x7FF020: mov     ecx, [esp+20h+var_8]
0x7FF024: mov     ds:0B46B78h, edx
0x7FF02A: fstp    [esp+20h+var_4]
0x7FF02E: mov     edx, [esp+20h+var_4]
0x7FF032: mov     ds:0B46B7Ch, eax
0x7FF037: mov     ds:0B46B80h, ecx
0x7FF03D: mov     ds:0B46B84h, edx
0x7FF043: add     esp, 20h
0x7FF046: retn    0Ch
0x7FF049: fstp    st(2)
0x7FF04B: fstp    st
0x7FF04D: fstp    st
0x7FF04F: add     esp, 20h
0x7FF052: retn    0Ch
