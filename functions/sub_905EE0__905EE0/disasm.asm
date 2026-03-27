0x905EE0: push    ebp
0x905EE1: mov     ebp, esp
0x905EE3: and     esp, 0FFFFFFF0h
0x905EE6: sub     esp, 98h
0x905EEC: mov     eax, [ebp+arg_8]
0x905EEF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x905EF6: movaps  xmm1, xmmword ptr [eax+10h]
0x905EFA: push    esi
0x905EFB: push    edi
0x905EFC: mov     esi, eax
0x905EFE: add     eax, 10h
0x905F01: mov     ecx, 0Ch
0x905F06: lea     edi, [esp+0A0h+var_30]
0x905F0A: rep movsd
0x905F0C: mov     ecx, eax
0x905F0E: mov     esi, [ecx]
0x905F10: mov     [esp+0A0h+var_80], esi
0x905F14: mov     esi, [ecx+4]
0x905F17: mov     [esp+0A0h+var_7C], esi
0x905F1B: mov     esi, [ecx+8]
0x905F1E: mov     ecx, [ecx+0Ch]
0x905F21: mov     [esp+0A0h+var_74], ecx
0x905F25: mov     ecx, [ebp+arg_C]
0x905F28: mov     [esp+0A0h+var_70], ecx
0x905F2C: mov     ecx, [ebp+arg_10]
0x905F2F: test    ecx, ecx
0x905F31: mov     edx, offset off_A9B4E8
0x905F36: xorps   xmm1, xmm0
0x905F39: movaps  [esp+0A0h+var_20], xmm1
0x905F41: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x905F49: mov     [esp+0A0h+var_90], edx
0x905F4D: mov     [esp+0A0h+var_78], esi
0x905F51: jz      short loc_905FA3
0x905F53: mov     [esp+0A0h+var_60], edx
0x905F57: mov     edx, [eax]
0x905F59: mov     [esp+0A0h+var_50], edx
0x905F5D: mov     edx, [eax+4]
0x905F60: mov     [esp+0A0h+var_4C], edx
0x905F64: mov     edx, [eax+8]
0x905F67: mov     eax, [eax+0Ch]
0x905F6A: mov     [esp+0A0h+var_40], ecx
0x905F6E: mov     [esp+0A0h+var_48], edx
0x905F72: lea     ecx, [esp+0A0h+var_60]
0x905F76: push    ecx
0x905F77: mov     ecx, [ebp+arg_0]
0x905F7A: lea     edx, [esp+0A4h+var_90]
0x905F7E: push    edx
0x905F7F: mov     edx, [ebp+arg_4]
0x905F82: mov     [esp+0A8h+var_44], eax
0x905F86: lea     eax, [esp+0A8h+var_30]
0x905F8A: push    eax
0x905F8B: push    ecx
0x905F8C: push    edx
0x905F8D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x905F95: call    sub_906090
0x905F9A: add     esp, 14h
0x905F9D: pop     edi
0x905F9E: pop     esi
0x905F9F: mov     esp, ebp
0x905FA1: pop     ebp
0x905FA2: retn
0x905FA3: mov     edx, [ebp+arg_0]
0x905FA6: push    0
0x905FA8: lea     eax, [esp+0A4h+var_90]
0x905FAC: push    eax
0x905FAD: mov     eax, [ebp+arg_4]
0x905FB0: lea     ecx, [esp+0A8h+var_30]
0x905FB4: push    ecx
0x905FB5: push    edx
0x905FB6: push    eax
0x905FB7: call    sub_906090
0x905FBC: add     esp, 14h
0x905FBF: pop     edi
0x905FC0: pop     esi
0x905FC1: mov     esp, ebp
0x905FC3: pop     ebp
0x905FC4: retn
