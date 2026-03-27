0x984D6E: push    ebp
0x984D6F: mov     ebp, esp
0x984D71: sub     esp, 18h
0x984D74: push    ebx
0x984D75: push    esi
0x984D76: push    [ebp+Locale]; struct localeinfo_struct *
0x984D79: lea     ecx, [ebp+var_18]; this
0x984D7C: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x984D81: mov     ebx, [ebp+C]
0x984D84: mov     esi, 100h
0x984D89: cmp     ebx, esi
0x984D8B: jnb     short loc_984DE1
0x984D8D: mov     ecx, [ebp+var_18.locinfo]
0x984D90: cmp     dword ptr [ecx+0ACh], 1
0x984D97: jle     short loc_984DAD
0x984D99: lea     eax, [ebp+var_18]
0x984D9C: push    eax; Locale
0x984D9D: push    1; Type
0x984D9F: push    ebx; C
0x984DA0: call    __isctype_l
0x984DA5: mov     ecx, [ebp+var_18.locinfo]
0x984DA8: add     esp, 0Ch
0x984DAB: jmp     short loc_984DBA
0x984DAD: mov     eax, [ecx+0C8h]
0x984DB3: movzx   eax, byte ptr [eax+ebx*2]
0x984DB7: and     eax, 1
0x984DBA: test    eax, eax
0x984DBC: jz      short loc_984DCD
0x984DBE: mov     eax, [ecx+0CCh]
0x984DC4: movzx   eax, byte ptr [eax+ebx]
0x984DC8: jmp     loc_984E74
0x984DCD: cmp     [ebp+var_C], 0
0x984DD1: jz      short loc_984DDA
0x984DD3: mov     eax, [ebp+var_10]
0x984DD6: and     dword ptr [eax+70h], 0FFFFFFFDh
0x984DDA: mov     eax, ebx
0x984DDC: jmp     loc_984E81
0x984DE1: mov     eax, [ebp+var_18.locinfo]
0x984DE4: cmp     dword ptr [eax+0ACh], 1
0x984DEB: jle     short loc_984E1E
0x984DED: mov     [ebp+C], ebx
0x984DF0: sar     [ebp+C], 8
0x984DF4: lea     eax, [ebp+var_18]
0x984DF7: push    eax; Locale
0x984DF8: mov     eax, [ebp+C]
0x984DFB: and     eax, 0FFh
0x984E00: push    eax; C
0x984E01: call    __isleadbyte_l
0x984E06: test    eax, eax
0x984E08: pop     ecx
0x984E09: pop     ecx
0x984E0A: jz      short loc_984E1E
0x984E0C: mov     al, byte ptr [ebp+C]
0x984E0F: push    2
0x984E11: mov     byte ptr [ebp+var_4], al
0x984E14: mov     byte ptr [ebp+var_4+1], bl
0x984E17: mov     byte ptr [ebp+var_4+2], 0
0x984E1B: pop     ecx
0x984E1C: jmp     short loc_984E33
0x984E1E: call    __errno
0x984E23: mov     dword ptr [eax], 2Ah ; '*'
0x984E29: xor     ecx, ecx
0x984E2B: mov     byte ptr [ebp+var_4], bl
0x984E2E: mov     byte ptr [ebp+var_4+1], 0
0x984E32: inc     ecx
0x984E33: mov     eax, [ebp+var_18.locinfo]
0x984E36: push    1; int
0x984E38: push    dword ptr [eax+4]; int
0x984E3B: lea     edx, [ebp+var_8]
0x984E3E: push    3; int
0x984E40: push    edx; int
0x984E41: push    ecx; cchSrc
0x984E42: lea     ecx, [ebp+var_4]
0x984E45: push    ecx; int
0x984E46: push    esi; dwMapFlags
0x984E47: push    dword ptr [eax+14h]; Locale
0x984E4A: lea     eax, [ebp+var_18]
0x984E4D: push    eax; struct localeinfo_struct *
0x984E4E: call    ___crtLCMapStringA
0x984E53: add     esp, 24h
0x984E56: test    eax, eax
0x984E58: jz      loc_984DCD
0x984E5E: cmp     eax, 1
0x984E61: jnz     short loc_984E69
0x984E63: movzx   eax, byte ptr [ebp+var_8]
0x984E67: jmp     short loc_984E74
0x984E69: movzx   ecx, byte ptr [ebp+var_8+1]
0x984E6D: xor     eax, eax
0x984E6F: mov     ah, byte ptr [ebp+var_8]
0x984E72: or      eax, ecx
0x984E74: cmp     [ebp+var_C], 0
0x984E78: jz      short loc_984E81
0x984E7A: mov     ecx, [ebp+var_10]
0x984E7D: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x984E81: pop     esi
0x984E82: pop     ebx
0x984E83: leave
0x984E84: retn
