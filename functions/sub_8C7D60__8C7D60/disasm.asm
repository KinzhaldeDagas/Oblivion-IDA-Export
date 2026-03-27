0x8C7D60: push    0FFFFFFFFh
0x8C7D62: push    offset SEH_8C7D60
0x8C7D67: mov     eax, large fs:0
0x8C7D6D: push    eax
0x8C7D6E: sub     esp, 28h
0x8C7D71: push    ebx
0x8C7D72: push    ebp
0x8C7D73: push    esi
0x8C7D74: push    edi
0x8C7D75: mov     eax, ds:0B30AACh
0x8C7D7A: xor     eax, esp
0x8C7D7C: push    eax
0x8C7D7D: lea     eax, [esp+48h+var_C]
0x8C7D81: mov     large fs:0, eax
0x8C7D87: mov     ebp, ecx
0x8C7D89: mov     [esp+48h+var_30], ebp
0x8C7D8D: mov     eax, [ebp+0]
0x8C7D90: mov     edx, [eax+74h]
0x8C7D93: lea     ecx, [esp+48h+var_28]
0x8C7D97: push    ecx
0x8C7D98: mov     ecx, ebp
0x8C7D9A: call    edx
0x8C7D9C: mov     esi, eax
0x8C7D9E: xor     eax, eax
0x8C7DA0: mov     ecx, 1
0x8C7DA5: xor     ebx, ebx
0x8C7DA7: mov     [esp+48h+var_24], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x8C7DAF: mov     [esp+48h+var_1C], eax
0x8C7DB3: mov     [esp+48h+var_10], ecx
0x8C7DB7: mov     [esp+48h+var_18], eax
0x8C7DBB: mov     [esp+48h+var_14], eax
0x8C7DBF: mov     [esp+48h+var_20], ebx
0x8C7DC3: cmp     esi, eax
0x8C7DC5: mov     [esp+48h+var_4], ecx
0x8C7DC9: mov     [esp+48h+var_34], eax
0x8C7DCD: jz      short loc_8C7E3A
0x8C7DCF: mov     ecx, [esi+14h]
0x8C7DD2: xor     edi, edi
0x8C7DD4: cmp     ecx, eax
0x8C7DD6: mov     [esp+48h+var_34], ecx
0x8C7DDA: jle     short loc_8C7E1E
0x8C7DDC: jmp     short loc_8C7DE4
0x8C7DDE: align 10h
0x8C7DE0: mov     eax, [esp+48h+var_18]
0x8C7DE4: cmp     eax, [esp+48h+var_1C]
0x8C7DE8: mov     ecx, [esi+0Ch]
0x8C7DEB: lea     ebx, [ecx+edi*8]
0x8C7DEE: mov     ebp, eax
0x8C7DF0: jb      short loc_8C7E02
0x8C7DF2: mov     edx, [esp+48h+var_10]
0x8C7DF6: add     eax, edx
0x8C7DF8: push    eax
0x8C7DF9: lea     ecx, [esp+4Ch+var_24]
0x8C7DFD: call    sub_8C69C0
0x8C7E02: push    ebx
0x8C7E03: push    ebp
0x8C7E04: lea     ecx, [esp+50h+var_24]
0x8C7E08: call    sub_8C68D0
0x8C7E0D: add     edi, 1
0x8C7E10: cmp     edi, [esp+48h+var_34]
0x8C7E14: jl      short loc_8C7DE0
0x8C7E16: mov     ebp, [esp+48h+var_30]
0x8C7E1A: mov     ebx, [esp+48h+var_20]
0x8C7E1E: lea     edi, [esi+8]
0x8C7E21: mov     ecx, edi
0x8C7E23: call    sub_8C6BE0
0x8C7E28: push    0
0x8C7E2A: mov     ecx, edi
0x8C7E2C: call    sub_8C69C0
0x8C7E31: fld     dword ptr ds:0B2EFC4h
0x8C7E37: fstp    dword ptr [esi+4]
0x8C7E3A: mov     esi, [esp+48h+arg_0]
0x8C7E3E: push    esi
0x8C7E3F: mov     ecx, ebp
0x8C7E41: call    sub_8A2610
0x8C7E46: mov     eax, [esi+220h]
0x8C7E4C: push    1
0x8C7E4E: lea     ecx, [esp+4Ch+arg_0]
0x8C7E52: push    ecx
0x8C7E53: push    4
0x8C7E55: lea     edx, [esp+54h+var_34]
0x8C7E59: push    edx
0x8C7E5A: push    eax
0x8C7E5B: mov     eax, [eax+8]
0x8C7E5E: mov     [esp+5Ch+arg_0], 4
0x8C7E66: call    eax
0x8C7E68: xor     edi, edi
0x8C7E6A: add     esp, 14h
0x8C7E6D: cmp     [esp+48h+var_34], edi
0x8C7E71: jle     short loc_8C7E89
0x8C7E73: mov     eax, [ebx+edi*8]
0x8C7E76: mov     edx, [esi]
0x8C7E78: push    eax
0x8C7E79: mov     eax, [edx+2Ch]
0x8C7E7C: mov     ecx, esi
0x8C7E7E: call    eax
0x8C7E80: add     edi, 1
0x8C7E83: cmp     edi, [esp+48h+var_34]
0x8C7E87: jl      short loc_8C7E73
0x8C7E89: mov     eax, [esi+220h]
0x8C7E8F: push    1
0x8C7E91: lea     ecx, [esp+4Ch+arg_0]
0x8C7E95: push    ecx
0x8C7E96: push    4
0x8C7E98: lea     edx, [esp+54h+var_34]
0x8C7E9C: push    edx
0x8C7E9D: push    eax
0x8C7E9E: mov     eax, [eax+8]
0x8C7EA1: mov     [esp+5Ch+arg_0], 4
0x8C7EA9: call    eax
0x8C7EAB: xor     edi, edi
0x8C7EAD: add     esp, 14h
0x8C7EB0: cmp     [esp+48h+var_34], edi
0x8C7EB4: jle     short loc_8C7EFB
0x8C7EB6: add     ebx, 4
0x8C7EB9: lea     esp, [esp+0]
0x8C7EC0: mov     ecx, [ebx]
0x8C7EC2: mov     eax, [esi+220h]
0x8C7EC8: push    1
0x8C7ECA: lea     edx, [esp+4Ch+arg_0]
0x8C7ECE: push    edx
0x8C7ECF: mov     [esp+50h+var_2C], ecx
0x8C7ED3: mov     edx, [eax+8]
0x8C7ED6: push    4
0x8C7ED8: lea     ecx, [esp+54h+var_2C]
0x8C7EDC: push    ecx
0x8C7EDD: push    eax
0x8C7EDE: mov     [esp+5Ch+arg_0], 4
0x8C7EE6: call    edx
0x8C7EE8: add     edi, 1
0x8C7EEB: add     esp, 14h
0x8C7EEE: add     ebx, 8
0x8C7EF1: cmp     edi, [esp+48h+var_34]
0x8C7EF5: jl      short loc_8C7EC0
0x8C7EF7: mov     ebx, [esp+48h+var_20]
0x8C7EFB: mov     ecx, [esp+48h+var_28]
0x8C7EFF: mov     eax, [ebp+0]
0x8C7F02: mov     edx, [eax+64h]
0x8C7F05: push    ecx
0x8C7F06: mov     ecx, ebp
0x8C7F08: call    edx
0x8C7F0A: test    ebx, ebx
0x8C7F0C: mov     [esp+48h+var_4], 0FFFFFFFFh
0x8C7F14: jz      short loc_8C7F33
0x8C7F16: mov     eax, [ebx-4]
0x8C7F19: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8C7F1E: lea     esi, [ebx-4]
0x8C7F21: push    eax; int
0x8C7F22: push    8; unsigned int
0x8C7F24: push    ebx; void *
0x8C7F25: call    $LN21
0x8C7F2A: push    esi
0x8C7F2B: call    FormHeapFree
0x8C7F30: add     esp, 4
0x8C7F33: mov     ecx, dword ptr [esp+48h+var_C]
0x8C7F37: mov     large fs:0, ecx
0x8C7F3E: pop     ecx
0x8C7F3F: pop     edi
0x8C7F40: pop     esi
0x8C7F41: pop     ebp
0x8C7F42: pop     ebx
0x8C7F43: add     esp, 34h
0x8C7F46: retn    4
