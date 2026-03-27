0x6C3AC0: sub     esp, 30h
0x6C3AC3: push    ebx
0x6C3AC4: push    esi
0x6C3AC5: mov     esi, [esp+38h+arg_0]
0x6C3AC9: test    esi, esi
0x6C3ACB: push    edi
0x6C3ACC: mov     edi, ecx
0x6C3ACE: jnz     short loc_6C3AD4
0x6C3AD0: xor     ebx, ebx
0x6C3AD2: jmp     short loc_6C3AF9
0x6C3AD4: mov     eax, [esi]
0x6C3AD6: mov     edx, [eax+4]
0x6C3AD9: mov     ecx, esi
0x6C3ADB: call    edx
0x6C3ADD: test    eax, eax
0x6C3ADF: jz      short loc_6C3AEF
0x6C3AE1: cmp     eax, offset dword_B3D91C
0x6C3AE6: jz      short loc_6C3B65
0x6C3AE8: mov     eax, [eax+4]
0x6C3AEB: test    eax, eax
0x6C3AED: jnz     short loc_6C3AE1
0x6C3AEF: xor     al, al
0x6C3AF1: neg     al
0x6C3AF3: sbb     eax, eax
0x6C3AF5: and     eax, esi
0x6C3AF7: mov     ebx, eax
0x6C3AF9: mov     esi, [edi+30h]
0x6C3AFC: lea     eax, [esi+30h]
0x6C3AFF: push    eax; float
0x6C3B00: lea     ecx, [esp+40h+var_30]
0x6C3B04: call    sub_7150F0
0x6C3B09: fld     dword ptr [esi+60h]
0x6C3B0C: mov     ecx, [esi+54h]
0x6C3B0F: fstp    [esp+3Ch+var_4]
0x6C3B13: mov     edx, [esi+58h]
0x6C3B16: mov     eax, [esi+5Ch]
0x6C3B19: mov     [esp+3Ch+var_20], ecx
0x6C3B1D: mov     ecx, [esp+3Ch+var_30]
0x6C3B21: mov     [esp+3Ch+var_14], ecx
0x6C3B25: mov     ecx, [esp+3Ch+var_24]
0x6C3B29: mov     [esp+3Ch+var_1C], edx
0x6C3B2D: mov     edx, [esp+3Ch+var_2C]
0x6C3B31: mov     [esp+3Ch+var_18], eax
0x6C3B35: mov     eax, [esp+3Ch+var_28]
0x6C3B39: mov     [esp+3Ch+var_8], ecx
0x6C3B3D: sub     esp, 20h
0x6C3B40: mov     edi, esp
0x6C3B42: mov     [esp+5Ch+var_10], edx
0x6C3B46: mov     [esp+5Ch+var_C], eax
0x6C3B4A: mov     ecx, 8
0x6C3B4F: lea     esi, [esp+5Ch+var_20]
0x6C3B53: rep movsd
0x6C3B55: mov     ecx, ebx
0x6C3B57: call    sub_6C3960
0x6C3B5C: pop     edi
0x6C3B5D: pop     esi
0x6C3B5E: pop     ebx
0x6C3B5F: add     esp, 30h
0x6C3B62: retn    8
0x6C3B65: mov     al, 1
0x6C3B67: jmp     short loc_6C3AF1
