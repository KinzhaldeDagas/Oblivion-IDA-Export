0x7F0100: sub     esp, 34h
0x7F0103: fld     dword ptr ds:0B465A8h
0x7F0109: push    esi
0x7F010A: mov     esi, [esp+38h+arg_4]
0x7F010E: fchs
0x7F0110: fstp    [esp+38h+var_34]
0x7F0114: push    esi
0x7F0115: fld     dword ptr ds:0B465ACh
0x7F011B: lea     eax, [esp+3Ch+var_34]
0x7F011F: fchs
0x7F0121: push    eax
0x7F0122: fstp    [esp+40h+var_30]
0x7F0126: lea     ecx, [esp+40h+var_C]
0x7F012A: fld     dword ptr ds:0B465B0h
0x7F0130: push    ecx
0x7F0131: fchs
0x7F0133: fstp    [esp+44h+var_2C]
0x7F0137: call    D3DXVec3TransformNormal_0
0x7F013C: lea     edx, [esp+38h+var_C]
0x7F0140: push    edx
0x7F0141: lea     eax, [esp+3Ch+var_34]
0x7F0145: push    eax
0x7F0146: call    D3DXVec3Normalize_0
0x7F014B: fld     [esp+38h+var_34]
0x7F014F: fstp    [esp+38h+var_1C]
0x7F0153: mov     ecx, [esp+38h+var_1C]
0x7F0157: fld     [esp+38h+var_30]
0x7F015B: mov     ds:0B46738h, ecx
0x7F0161: fstp    [esp+38h+var_18]
0x7F0165: mov     edx, [esp+38h+var_18]
0x7F0169: fld     [esp+38h+var_2C]
0x7F016D: mov     ds:0B4673Ch, edx
0x7F0173: fstp    [esp+38h+var_14]
0x7F0177: mov     eax, [esp+38h+var_14]
0x7F017B: fldz
0x7F017D: mov     ds:0B46740h, eax
0x7F0182: fstp    [esp+38h+var_10]
0x7F0186: mov     ecx, [esp+38h+var_10]
0x7F018A: mov     ds:0B46744h, ecx
0x7F0190: mov     ecx, [esp+38h+arg_0]
0x7F0194: call    sub_7ED5D0
0x7F0199: test    ax, ax
0x7F019C: jbe     short loc_7F01FA
0x7F019E: fld     dword ptr ds:0B46538h
0x7F01A4: push    esi
0x7F01A5: fstp    [esp+3Ch+var_28]
0x7F01A9: lea     edx, [esp+3Ch+var_28]
0x7F01AD: fld     dword ptr ds:0B4653Ch
0x7F01B3: push    edx
0x7F01B4: fstp    [esp+40h+var_24]
0x7F01B8: lea     eax, [esp+40h+var_1C]
0x7F01BC: fld     dword ptr ds:0B46540h
0x7F01C2: push    eax
0x7F01C3: fstp    [esp+44h+var_20]
0x7F01C7: call    D3DXVec3TransformCoord_0
0x7F01CC: fld     [esp+38h+var_1C]
0x7F01D0: fstp    dword ptr ds:0B46748h
0x7F01D6: fld     [esp+38h+var_18]
0x7F01DA: fstp    dword ptr ds:0B4674Ch
0x7F01E0: fld     [esp+38h+var_14]
0x7F01E4: fstp    dword ptr ds:0B46750h
0x7F01EA: fld     dword ptr ds:0B465B8h
0x7F01F0: fdiv    [esp+38h+arg_8]
0x7F01F4: fstp    dword ptr ds:0B46754h
0x7F01FA: pop     esi
0x7F01FB: add     esp, 34h
0x7F01FE: retn    0Ch
