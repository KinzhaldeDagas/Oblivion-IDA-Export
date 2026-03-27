0x90EF80: sub     esp, 5Ch
0x90EF83: push    ebx
0x90EF84: push    esi
0x90EF85: mov     esi, [esp+64h+arg_4]
0x90EF89: push    edi
0x90EF8A: mov     edi, ecx
0x90EF8C: push    esi
0x90EF8D: lea     ecx, [esp+6Ch+var_4C]
0x90EF91: call    sub_90D960
0x90EF96: mov     ecx, [esp+68h+arg_0]
0x90EF9A: mov     [esp+68h+var_56], 1
0x90EFA1: mov     [esp+68h+var_5C], offset off_A9C9B0
0x90EFA9: mov     [esp+68h+var_54], ecx
0x90EFAD: mov     eax, [ecx]
0x90EFAF: call    dword ptr [eax+1Ch]
0x90EFB2: lea     ecx, [esp+68h+var_5C]
0x90EFB6: lea     edx, [esp+68h+var_4C]
0x90EFBA: mov     [esp+68h+var_30], ecx
0x90EFBE: push    edx
0x90EFBF: mov     ecx, edi
0x90EFC1: mov     [esp+6Ch+var_50], eax
0x90EFC5: call    sub_90D9C0
0x90EFCA: mov     eax, [esp+68h+var_44]
0x90EFCE: mov     ecx, [esi]
0x90EFD0: mov     edx, [esp+68h+var_30]
0x90EFD4: push    eax
0x90EFD5: push    ecx
0x90EFD6: add     esi, 4
0x90EFD9: push    esi
0x90EFDA: push    edx
0x90EFDB: lea     esi, [esp+78h+var_2C]
0x90EFDF: call    sub_90DA40
0x90EFE4: mov     eax, [esp+78h+var_5C]
0x90EFE8: add     esp, 10h
0x90EFEB: lea     ecx, [esp+68h+var_5C]
0x90EFEF: call    dword ptr [eax+1Ch]
0x90EFF2: mov     edx, [esp+68h+var_5C]
0x90EFF6: mov     esi, eax
0x90EFF8: mov     eax, [esp+68h+var_44]
0x90EFFC: lea     ecx, [eax+eax*2]
0x90EFFF: shl     ecx, 4
0x90F002: push    1
0x90F004: push    ecx
0x90F005: lea     ecx, [esp+70h+var_5C]
0x90F009: call    dword ptr [edx+18h]
0x90F00C: lea     eax, [esp+68h+var_4C]
0x90F010: push    eax
0x90F011: mov     ecx, edi
0x90F013: call    sub_90DC60
0x90F018: mov     edx, [esp+68h+var_5C]
0x90F01C: lea     ecx, [esp+68h+var_5C]
0x90F020: call    dword ptr [edx+1Ch]
0x90F023: mov     ebx, eax
0x90F025: push    esi
0x90F026: lea     eax, [esp+6Ch+var_4C]
0x90F02A: push    eax
0x90F02B: mov     ecx, edi
0x90F02D: call    sub_90E860
0x90F032: mov     edx, [esp+68h+var_5C]
0x90F036: push    0
0x90F038: push    ebx
0x90F039: lea     ecx, [esp+70h+var_5C]
0x90F03D: call    dword ptr [edx+18h]
0x90F040: lea     ecx, [esp+68h+var_4C]
0x90F044: mov     [esp+68h+var_5C], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90F04C: call    sub_90DB10
0x90F051: pop     edi
0x90F052: pop     esi
0x90F053: xor     eax, eax
0x90F055: pop     ebx
0x90F056: add     esp, 5Ch
0x90F059: retn    8
