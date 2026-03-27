0x931AF0: push    ebp
0x931AF1: mov     ebp, esp
0x931AF3: and     esp, 0FFFFFFF0h
0x931AF6: sub     esp, 2Ch
0x931AF9: mov     ecx, [ebp+arg_10]
0x931AFC: xor     eax, eax
0x931AFE: push    esi
0x931AFF: mov     [esp+30h+var_1C], eax
0x931B03: mov     [esp+30h+var_18], eax
0x931B07: lea     eax, [esp+30h+var_1C]
0x931B0B: push    eax
0x931B0C: push    ecx
0x931B0D: mov     ecx, [ebp+arg_C]
0x931B10: lea     edx, [esp+38h+var_20]
0x931B14: push    edx
0x931B15: mov     edx, [ebp+arg_8]
0x931B18: lea     eax, [esp+3Ch+var_10]
0x931B1C: push    eax
0x931B1D: mov     eax, [ebp+arg_4]
0x931B20: push    ecx
0x931B21: push    edx
0x931B22: push    eax
0x931B23: lea     ecx, [esp+4Ch+var_21]
0x931B27: push    ecx
0x931B28: mov     [esp+50h+var_14], 80000000h
0x931B30: call    sub_930040
0x931B35: mov     eax, [esp+50h+var_14]
0x931B39: mov     esi, [ebp+arg_0]
0x931B3C: mov     dl, [esp+50h+var_20]
0x931B40: add     esp, 20h
0x931B43: test    eax, eax
0x931B45: mov     [esi], dl
0x931B47: js      short loc_931B74
0x931B49: mov     ecx, ds:0BA9DE4h
0x931B4F: mov     edx, large fs:2Ch
0x931B56: and     eax, 3FFFFFFFh
0x931B5B: shl     eax, 5
0x931B5E: push    14h
0x931B60: push    eax
0x931B61: mov     eax, [esp+38h+var_1C]
0x931B65: push    eax
0x931B66: mov     eax, [edx+ecx*4]
0x931B69: mov     ecx, [eax+19Ch]
0x931B6F: call    sub_8A75D0
0x931B74: mov     eax, esi
0x931B76: pop     esi
0x931B77: mov     esp, ebp
0x931B79: pop     ebp
0x931B7A: retn
