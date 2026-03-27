0x8C2920: push    ebp
0x8C2921: mov     ebp, esp
0x8C2923: and     esp, 0FFFFFFF0h
0x8C2926: sub     esp, 74h
0x8C2929: fldz
0x8C292B: push    ebx
0x8C292C: mov     ebx, [ebp+arg_0]
0x8C292F: fst     [esp+78h+var_50]
0x8C2933: fst     [esp+78h+var_4C]
0x8C2937: push    esi
0x8C2938: mov     esi, [ebp+arg_4]
0x8C293B: fst     [esp+7Ch+var_48]
0x8C293F: fst     [esp+7Ch+var_44]
0x8C2943: push    edi
0x8C2944: fst     [esp+80h+var_40]
0x8C2948: mov     edi, ecx
0x8C294A: fst     [esp+80h+var_3C]
0x8C294E: xor     ecx, ecx
0x8C2950: cmp     esi, ecx
0x8C2952: fst     [esp+80h+var_38]
0x8C2956: fst     [esp+80h+var_34]
0x8C295A: mov     [esp+80h+var_60], ecx
0x8C295E: fst     [esp+80h+var_30]
0x8C2962: mov     [esp+80h+var_5C], ecx
0x8C2966: fst     [esp+80h+var_2C]
0x8C296A: mov     [esp+80h+var_58], ecx
0x8C296E: fst     [esp+80h+var_28]
0x8C2972: fst     [esp+80h+var_24]
0x8C2976: fst     [esp+80h+var_20]
0x8C297A: fst     [esp+80h+var_1C]
0x8C297E: fst     [esp+80h+var_18]
0x8C2982: fst     [esp+80h+var_14]
0x8C2986: fst     [esp+80h+var_10]
0x8C298A: fst     [esp+80h+var_C]
0x8C298E: fst     [esp+80h+var_8]
0x8C2992: fstp    [esp+80h+var_4]
0x8C2996: jnz     short loc_8C29B2
0x8C2998: mov     eax, [ebx+21Ch]
0x8C299E: mov     edx, [eax+4]
0x8C29A1: push    ecx
0x8C29A2: push    ecx
0x8C29A3: lea     esi, [esp+88h+var_60]
0x8C29A7: push    60h ; '`'
0x8C29A9: mov     ecx, esi
0x8C29AB: push    ecx
0x8C29AC: push    eax
0x8C29AD: call    edx
0x8C29AF: add     esp, 14h
0x8C29B2: push    esi
0x8C29B3: push    ebx
0x8C29B4: mov     ecx, edi
0x8C29B6: call    sub_8A01F0
0x8C29BB: fld     dword ptr [esi+14h]
0x8C29BE: fstp    [esp+80h+var_6C]
0x8C29C2: mov     eax, [edi+4]
0x8C29C5: fld     dword ptr [esi+18h]
0x8C29C8: pop     edi
0x8C29C9: fstp    [esp+7Ch+var_68]
0x8C29CD: fld     dword ptr [esi+1Ch]
0x8C29D0: fstp    [esp+7Ch+var_64]
0x8C29D4: fld     dword ptr [esi+10h]
0x8C29D7: fstp    dword ptr [eax+10h]
0x8C29DA: fld     [esp+7Ch+var_6C]
0x8C29DE: fstp    dword ptr [eax+14h]
0x8C29E1: fld     [esp+7Ch+var_68]
0x8C29E5: fstp    dword ptr [eax+18h]
0x8C29E8: fld     [esp+7Ch+var_64]
0x8C29EC: fstp    dword ptr [eax+1Ch]
0x8C29EF: fld     dword ptr [esi+44h]
0x8C29F2: fstp    [esp+7Ch+var_64]
0x8C29F6: fld     dword ptr [esi+48h]
0x8C29F9: fstp    [esp+7Ch+var_68]
0x8C29FD: fld     dword ptr [esi+4Ch]
0x8C2A00: fstp    [esp+7Ch+var_6C]
0x8C2A04: fld     dword ptr [esi+40h]
0x8C2A07: fstp    dword ptr [eax+20h]
0x8C2A0A: fld     [esp+7Ch+var_64]
0x8C2A0E: fstp    dword ptr [eax+24h]
0x8C2A11: fld     [esp+7Ch+var_68]
0x8C2A15: fstp    dword ptr [eax+28h]
0x8C2A18: fld     [esp+7Ch+var_6C]
0x8C2A1C: fstp    dword ptr [eax+2Ch]
0x8C2A1F: fld     dword ptr [esi+54h]
0x8C2A22: fstp    [esp+7Ch+var_64]
0x8C2A26: fld     dword ptr [esi+58h]
0x8C2A29: fstp    [esp+7Ch+var_68]
0x8C2A2D: fld     dword ptr [esi+5Ch]
0x8C2A30: fstp    [esp+7Ch+var_6C]
0x8C2A34: fld     dword ptr [esi+50h]
0x8C2A37: fstp    dword ptr [eax+30h]
0x8C2A3A: fld     [esp+7Ch+var_64]
0x8C2A3E: fstp    dword ptr [eax+34h]
0x8C2A41: fld     [esp+7Ch+var_68]
0x8C2A45: fstp    dword ptr [eax+38h]
0x8C2A48: fld     [esp+7Ch+var_6C]
0x8C2A4C: fstp    dword ptr [eax+3Ch]
0x8C2A4F: fld     dword ptr [esi+24h]
0x8C2A52: fstp    [esp+7Ch+var_64]
0x8C2A56: fld     dword ptr [esi+28h]
0x8C2A59: fstp    [esp+7Ch+var_68]
0x8C2A5D: fld     dword ptr [esi+2Ch]
0x8C2A60: fstp    [esp+7Ch+var_6C]
0x8C2A64: fld     dword ptr [esi+20h]
0x8C2A67: fstp    dword ptr [eax+40h]
0x8C2A6A: fld     [esp+7Ch+var_64]
0x8C2A6E: fstp    dword ptr [eax+44h]
0x8C2A71: fld     [esp+7Ch+var_68]
0x8C2A75: fstp    dword ptr [eax+48h]
0x8C2A78: fld     [esp+7Ch+var_6C]
0x8C2A7C: fstp    dword ptr [eax+4Ch]
0x8C2A7F: fld     dword ptr [esi+34h]
0x8C2A82: fstp    [esp+7Ch+var_64]
0x8C2A86: fld     dword ptr [esi+38h]
0x8C2A89: fstp    [esp+7Ch+var_68]
0x8C2A8D: fld     dword ptr [esi+3Ch]
0x8C2A90: fstp    [esp+7Ch+var_6C]
0x8C2A94: fld     dword ptr [esi+30h]
0x8C2A97: pop     esi
0x8C2A98: fstp    dword ptr [eax+50h]
0x8C2A9B: pop     ebx
0x8C2A9C: fld     [esp+74h+var_64]
0x8C2AA0: fstp    dword ptr [eax+54h]
0x8C2AA3: fld     [esp+74h+var_68]
0x8C2AA7: fstp    dword ptr [eax+58h]
0x8C2AAA: fld     [esp+74h+var_6C]
0x8C2AAE: fstp    dword ptr [eax+5Ch]
0x8C2AB1: mov     esp, ebp
0x8C2AB3: pop     ebp
0x8C2AB4: retn    8
