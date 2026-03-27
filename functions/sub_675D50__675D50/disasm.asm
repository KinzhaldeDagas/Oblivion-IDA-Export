0x675D50: push    ecx
0x675D51: push    ebx
0x675D52: push    ebp
0x675D53: mov     ebp, [esp+0Ch+arg_0]
0x675D57: test    ebp, ebp
0x675D59: push    esi
0x675D5A: push    edi; int
0x675D5B: mov     [esp+14h+var_4], ecx
0x675D5F: jz      short loc_675D93
0x675D61: cmp     dword ptr [ebp+58h], 0
0x675D65: jz      short loc_675D93
0x675D67: mov     esi, [ebp+58h]
0x675D6A: mov     edi, [esi]
0x675D6C: mov     eax, [edi+444h]
0x675D72: mov     ecx, esi
0x675D74: call    eax
0x675D76: mov     edx, [edi+448h]
0x675D7C: neg     eax
0x675D7E: push    eax
0x675D7F: mov     ecx, esi
0x675D81: call    edx
0x675D83: mov     eax, ds:0B333C4h
0x675D88: cmp     ebp, eax
0x675D8A: jnz     short loc_675D93
0x675D8C: mov     byte ptr [eax+738h], 0
0x675D93: mov     esi, [esp+14h+var_4]
0x675D97: xor     ebx, ebx
0x675D99: lea     esp, [esp+0]
0x675DA0: test    ebx, ebx
0x675DA2: jnz     short loc_675DA7
0x675DA4: push    ebx
0x675DA5: jmp     short loc_675DB9
0x675DA7: cmp     ebx, 1
0x675DAA: jnz     short loc_675DAF
0x675DAC: push    ebx
0x675DAD: jmp     short loc_675DB9
0x675DAF: cmp     ebx, 2
0x675DB2: jnz     short loc_675DB7
0x675DB4: push    ebx
0x675DB5: jmp     short loc_675DB9
0x675DB7: push    3; a2
0x675DB9: mov     ecx, esi; this
0x675DBB: call    sub_673A50
0x675DC0: mov     ecx, eax; this
0x675DC2: call    sub_7616D0
0x675DC7: mov     edi, eax
0x675DC9: test    edi, edi
0x675DCB: jz      loc_675E79
0x675DD1: mov     ecx, [edi]
0x675DD3: test    ecx, ecx
0x675DD5: jz      loc_675E79
0x675DDB: mov     eax, [ecx]
0x675DDD: mov     edx, [eax+190h]
0x675DE3: call    edx
0x675DE5: test    al, al
0x675DE7: jz      loc_675E6A
0x675DED: mov     esi, [edi]
0x675DEF: test    esi, esi
0x675DF1: jz      short loc_675E6A
0x675DF3: mov     eax, [esi]
0x675DF5: mov     edx, [eax+334h]
0x675DFB: push    1
0x675DFD: mov     ecx, esi
0x675DFF: call    edx
0x675E01: test    al, al
0x675E03: jz      short loc_675E20
0x675E05: cmp     ebx, 1
0x675E08: mov     ecx, esi; int
0x675E0A: jg      short loc_675E19
0x675E0C: mov     eax, [esi]
0x675E0E: mov     edx, [eax+340h]
0x675E14: push    ebp
0x675E15: call    edx
0x675E17: jmp     short loc_675E6A
0x675E19: call    sub_5EAE70
0x675E1E: jmp     short loc_675E6A
0x675E20: cmp     [esp+14h+arg_4], 0
0x675E25: jnz     short loc_675E6A
0x675E27: mov     ecx, esi
0x675E29: call    sub_5E6BA0
0x675E2E: test    al, al
0x675E30: jz      short loc_675E6A
0x675E32: mov     ecx, esi
0x675E34: call    sub_5E0380
0x675E39: cmp     dword ptr [eax+28h], 0
0x675E3D: jz      short loc_675E6A
0x675E3F: mov     ecx, esi
0x675E41: call    sub_5E0380
0x675E46: mov     ecx, [eax+28h]
0x675E49: call    sub_569E60
0x675E4E: cmp     eax, ebp
0x675E50: jz      short loc_675E56
0x675E52: test    ebp, ebp
0x675E54: jnz     short loc_675E6A
0x675E56: mov     ecx, esi; int
0x675E58: call    sub_5EAE70
0x675E5D: mov     ecx, [esi+58h]
0x675E60: mov     eax, [ecx]
0x675E62: mov     edx, [eax+49Ch]
0x675E68: call    edx
0x675E6A: mov     edi, [edi+4]
0x675E6D: test    edi, edi
0x675E6F: mov     esi, [esp+14h+var_4]
0x675E73: jnz     loc_675DD1
0x675E79: add     ebx, 1
0x675E7C: cmp     ebx, 4
0x675E7F: jl      loc_675DA0
0x675E85: pop     edi
0x675E86: pop     esi
0x675E87: pop     ebp
0x675E88: pop     ebx
0x675E89: pop     ecx
0x675E8A: retn    8
