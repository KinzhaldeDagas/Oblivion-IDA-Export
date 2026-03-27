0x8D7D50: sub     esp, 20h
0x8D7D53: push    esi
0x8D7D54: mov     esi, [esp+24h+arg_8]
0x8D7D58: mov     eax, [esi+88h]
0x8D7D5E: test    eax, eax
0x8D7D60: mov     [esp+24h+var_20], ecx
0x8D7D64: jz      short loc_8D7D90
0x8D7D66: mov     cx, word ptr [esp+24h+arg_4]
0x8D7D6B: mov     eax, [esp+24h+arg_0]
0x8D7D6F: lea     edx, [esp+24h+var_1C]
0x8D7D73: mov     [esp+24h+var_14], cx
0x8D7D78: push    edx
0x8D7D79: mov     ecx, esi
0x8D7D7B: mov     [esp+28h+var_1C], 16h
0x8D7D80: mov     [esp+28h+var_18], eax
0x8D7D84: call    sub_898820
0x8D7D89: pop     esi
0x8D7D8A: add     esp, 20h
0x8D7D8D: retn    0Ch
0x8D7D90: fld     dword ptr [esi+18h]
0x8D7D93: mov     dword ptr [esi+88h], 1
0x8D7D9D: fld     dword ptr [esi+0Ch]
0x8D7DA0: fst     [esp+24h+var_10]
0x8D7DA4: fld     st(1)
0x8D7DA6: fstp    [esp+24h+var_C]
0x8D7DAA: fxch    st(1)
0x8D7DAC: fsub    st, st(1)
0x8D7DAE: fstp    [esp+24h+var_8]
0x8D7DB2: fstp    st
0x8D7DB4: fld     dword ptr ds:0A2FAA8h
0x8D7DBA: fld     [esp+24h+var_8]
0x8D7DBE: fucompp
0x8D7DC0: fnstsw  ax
0x8D7DC2: test    ah, 44h
0x8D7DC5: jp      short loc_8D7DD1
0x8D7DC7: mov     [esp+24h+var_4], 0
0x8D7DCF: jmp     short loc_8D7DDF
0x8D7DD1: fld     dword ptr ds:0A2F948h
0x8D7DD7: fdiv    [esp+24h+var_8]
0x8D7DDB: fstp    [esp+24h+var_4]
0x8D7DDF: mov     eax, [esi+74h]
0x8D7DE2: mov     ecx, [esp+24h+var_10]
0x8D7DE6: add     eax, 10h
0x8D7DE9: mov     [eax], ecx
0x8D7DEB: mov     edx, [esp+24h+var_C]
0x8D7DEF: mov     [eax+4], edx
0x8D7DF2: mov     ecx, [esp+24h+var_8]
0x8D7DF6: push    ebx
0x8D7DF7: push    ebp
0x8D7DF8: mov     ebp, [esp+2Ch+arg_4]
0x8D7DFC: mov     [eax+8], ecx
0x8D7DFF: mov     edx, [esp+2Ch+var_4]
0x8D7E03: push    edi
0x8D7E04: xor     edi, edi
0x8D7E06: test    ebp, ebp
0x8D7E08: mov     [eax+0Ch], edx
0x8D7E0B: jle     short loc_8D7E3E
0x8D7E0D: lea     ecx, [ecx+0]
0x8D7E10: mov     eax, [esp+30h+arg_0]
0x8D7E14: mov     ebx, [eax+edi*4]
0x8D7E17: mov     ecx, [ebx+50h]
0x8D7E1A: mov     edx, [esi+0Ch]
0x8D7E1D: add     ecx, 10h
0x8D7E20: push    ecx; int
0x8D7E21: push    edx; float
0x8D7E22: call    sub_8DD530
0x8D7E27: mov     ebx, [ebx+50h]
0x8D7E2A: mov     eax, [ebx]
0x8D7E2C: add     esp, 8
0x8D7E2F: lea     ecx, [esp+30h+var_10]
0x8D7E33: push    ecx
0x8D7E34: mov     ecx, ebx
0x8D7E36: call    dword ptr [eax+0Ch]
0x8D7E39: inc     edi
0x8D7E3A: cmp     edi, ebp
0x8D7E3C: jl      short loc_8D7E10
0x8D7E3E: mov     ebx, [esp+30h+arg_0]
0x8D7E42: push    esi
0x8D7E43: push    ebp
0x8D7E44: push    ebx
0x8D7E45: call    sub_8D7400
0x8D7E4A: add     esp, 0Ch
0x8D7E4D: xor     edi, edi
0x8D7E4F: test    ebp, ebp
0x8D7E51: jle     short loc_8D7E68
0x8D7E53: mov     edx, [esi+74h]
0x8D7E56: mov     eax, [ebx+edi*4]
0x8D7E59: push    edx
0x8D7E5A: push    eax
0x8D7E5B: call    sub_8E77C0
0x8D7E60: add     esp, 8
0x8D7E63: inc     edi
0x8D7E64: cmp     edi, ebp
0x8D7E66: jl      short loc_8D7E53
0x8D7E68: mov     ecx, [esi+74h]
0x8D7E6B: push    offset sub_8D6D80
0x8D7E70: push    ecx
0x8D7E71: mov     ecx, [esp+38h+var_20]
0x8D7E75: push    ebp
0x8D7E76: push    ebx
0x8D7E77: call    sub_8D72F0
0x8D7E7C: mov     eax, [esi+88h]
0x8D7E82: pop     edi
0x8D7E83: dec     eax
0x8D7E84: pop     ebp
0x8D7E85: mov     [esi+88h], eax
0x8D7E8B: pop     ebx
0x8D7E8C: jnz     short loc_8D7EA9
0x8D7E8E: mov     eax, [esi+84h]
0x8D7E94: test    eax, eax
0x8D7E96: jz      short loc_8D7EA9
0x8D7E98: mov     al, [esi+90h]
0x8D7E9E: test    al, al
0x8D7EA0: jnz     short loc_8D7EA9
0x8D7EA2: mov     ecx, esi
0x8D7EA4: call    sub_899210
0x8D7EA9: pop     esi
0x8D7EAA: add     esp, 20h
0x8D7EAD: retn    0Ch
