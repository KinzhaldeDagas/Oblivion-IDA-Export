0x849A10: push    0FFFFFFFFh
0x849A12: push    offset SEH_879360
0x849A17: mov     eax, large fs:0
0x849A1D: push    eax
0x849A1E: push    ecx
0x849A1F: push    ebx
0x849A20: push    ebp
0x849A21: push    esi
0x849A22: push    edi
0x849A23: mov     eax, ds:0B30AACh
0x849A28: xor     eax, esp
0x849A2A: push    eax
0x849A2B: lea     eax, [esp+24h+var_C]
0x849A2F: mov     large fs:0, eax
0x849A35: mov     [esp+24h+var_10], ecx
0x849A39: mov     eax, [esp+24h+arg_8]
0x849A3D: mov     eax, [eax+10h]
0x849A40: mov     esi, ds:0B455FCh
0x849A46: push    eax
0x849A47: call    sub_848DA0
0x849A4C: mov     ecx, [esi+24h]
0x849A4F: mov     ebx, [esp+24h+arg_C]
0x849A53: mov     edi, [ecx]
0x849A55: mov     edx, [ebx]
0x849A57: mov     eax, [edx+88h]
0x849A5D: push    0
0x849A5F: mov     ecx, ebx
0x849A61: mov     [esp+28h+arg_8], edi
0x849A65: call    eax
0x849A67: mov     edi, [edi+4]
0x849A6A: mov     ebp, eax
0x849A6C: cmp     edi, ebp
0x849A6E: jz      short loc_849AA7
0x849A70: test    edi, edi
0x849A72: jz      short loc_849A90
0x849A74: lea     ecx, [edi+4]
0x849A77: push    ecx; lpAddend
0x849A78: call    dword ptr ds:0A2807Ch
0x849A7E: test    eax, eax
0x849A80: jnz     short loc_849A90
0x849A82: test    edi, edi
0x849A84: jz      short loc_849A90
0x849A86: mov     edx, [edi]
0x849A88: mov     eax, [edx]
0x849A8A: push    1
0x849A8C: mov     ecx, edi
0x849A8E: call    eax
0x849A90: test    ebp, ebp
0x849A92: mov     edi, [esp+24h+arg_8]
0x849A96: mov     [edi+4], ebp
0x849A99: jz      short loc_849AAB
0x849A9B: add     ebp, 4
0x849A9E: push    ebp; lpAddend
0x849A9F: call    dword ptr ds:0A28078h
0x849AA5: jmp     short loc_849AAB
0x849AA7: mov     edi, [esp+24h+arg_8]
0x849AAB: test    edi, edi
0x849AAD: jz      short loc_849AC9
0x849AAF: cmp     byte ptr ds:0B42CDDh, 0
0x849AB6: jz      short loc_849AC9
0x849AB8: mov     edx, [ebx]
0x849ABA: mov     eax, [edx+78h]
0x849ABD: mov     ecx, ebx
0x849ABF: call    eax
0x849AC1: push    eax
0x849AC2: mov     ecx, edi
0x849AC4: call    sub_7715E0
0x849AC9: mov     ecx, [esi+24h]
0x849ACC: mov     edi, [ecx+4]
0x849ACF: mov     edx, [ebx]
0x849AD1: mov     eax, [edx+90h]
0x849AD7: push    0
0x849AD9: mov     ecx, ebx
0x849ADB: mov     [esp+28h+arg_8], edi
0x849ADF: call    eax
0x849AE1: mov     edi, [edi+4]
0x849AE4: mov     ebp, eax
0x849AE6: cmp     edi, ebp
0x849AE8: jz      short loc_849B21
0x849AEA: test    edi, edi
0x849AEC: jz      short loc_849B0A
0x849AEE: lea     ecx, [edi+4]
0x849AF1: push    ecx; lpAddend
0x849AF2: call    dword ptr ds:0A2807Ch
0x849AF8: test    eax, eax
0x849AFA: jnz     short loc_849B0A
0x849AFC: test    edi, edi
0x849AFE: jz      short loc_849B0A
0x849B00: mov     edx, [edi]
0x849B02: mov     eax, [edx]
0x849B04: push    1
0x849B06: mov     ecx, edi
0x849B08: call    eax
0x849B0A: test    ebp, ebp
0x849B0C: mov     edi, [esp+24h+arg_8]
0x849B10: mov     [edi+4], ebp
0x849B13: jz      short loc_849B25
0x849B15: add     ebp, 4
0x849B18: push    ebp; lpAddend
0x849B19: call    dword ptr ds:0A28078h
0x849B1F: jmp     short loc_849B25
0x849B21: mov     edi, [esp+24h+arg_8]
0x849B25: test    edi, edi
0x849B27: jz      short loc_849B43
0x849B29: cmp     byte ptr ds:0B42CDDh, 0
0x849B30: jz      short loc_849B43
0x849B32: mov     edx, [ebx]
0x849B34: mov     eax, [edx+78h]
0x849B37: mov     ecx, ebx
0x849B39: call    eax
0x849B3B: push    eax
0x849B3C: mov     ecx, edi
0x849B3E: call    sub_7715E0
0x849B43: mov     ebx, 1
0x849B48: add     [esi+60h], ebx
0x849B4B: mov     [esp+24h+arg_8], esi
0x849B4F: mov     edi, [esp+24h+var_10]
0x849B53: mov     edx, [edi+38h]
0x849B56: lea     ecx, [esp+24h+arg_8]
0x849B5A: push    ecx
0x849B5B: push    edx
0x849B5C: lea     ecx, [edi+40h]
0x849B5F: mov     [esp+2Ch+var_4], 0
0x849B67: call    sub_76CE40
0x849B6C: or      eax, 0FFFFFFFFh
0x849B6F: add     [esi+60h], eax
0x849B72: mov     [esp+24h+var_4], eax
0x849B76: jnz     short loc_849B7F
0x849B78: mov     ecx, esi
0x849B7A: call    sub_7604D0
0x849B7F: add     [edi+38h], ebx
0x849B82: mov     ecx, [esp+24h+var_C]
0x849B86: mov     large fs:0, ecx
0x849B8D: pop     ecx
0x849B8E: pop     edi
0x849B8F: pop     esi
0x849B90: pop     ebp
0x849B91: pop     ebx
0x849B92: add     esp, 10h
0x849B95: retn    10h
