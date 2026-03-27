0x5E9D40: push    ecx
0x5E9D41: push    esi
0x5E9D42: mov     esi, [esp+8+arg_0]
0x5E9D46: cmp     dword ptr [esi+58h], 0
0x5E9D4A: push    edi
0x5E9D4B: mov     edi, ecx
0x5E9D4D: mov     [esp+0Ch+var_1], 0
0x5E9D52: jnz     short loc_5E9D5C
0x5E9D54: pop     edi
0x5E9D55: xor     al, al
0x5E9D57: pop     esi
0x5E9D58: pop     ecx
0x5E9D59: retn    4
0x5E9D5C: push    ebp
0x5E9D5D: call    Actor_IsNPC
0x5E9D62: test    al, al
0x5E9D64: mov     ecx, esi; this
0x5E9D66: jz      loc_5E9E38
0x5E9D6C: call    Actor_IsNPC
0x5E9D71: test    al, al
0x5E9D73: jz      loc_5E9E19
0x5E9D79: mov     eax, [edi]
0x5E9D7B: mov     edx, [eax+170h]
0x5E9D81: push    ebx
0x5E9D82: mov     ecx, edi
0x5E9D84: xor     ebx, ebx
0x5E9D86: call    edx
0x5E9D88: mov     ebp, eax
0x5E9D8A: test    ebp, ebp
0x5E9D8C: jz      short loc_5E9DA0
0x5E9D8E: mov     eax, [edi]
0x5E9D90: mov     edx, [eax+190h]
0x5E9D96: mov     ecx, edi
0x5E9D98: call    edx
0x5E9D9A: test    al, al
0x5E9D9C: jz      short loc_5E9DA0
0x5E9D9E: mov     ebx, ebp
0x5E9DA0: lea     ecx, [ebx+24h]
0x5E9DA3: call    TESActorBaseData_AllFactionsAreEvil
0x5E9DA8: xor     ebp, ebp
0x5E9DAA: test    al, al
0x5E9DAC: mov     eax, [esi]
0x5E9DAE: mov     edx, [eax+170h]
0x5E9DB4: pop     ebx
0x5E9DB5: mov     ecx, esi
0x5E9DB7: jz      short loc_5E9DF3
0x5E9DB9: call    edx
0x5E9DBB: mov     edi, eax
0x5E9DBD: test    edi, edi
0x5E9DBF: jz      short loc_5E9DD3
0x5E9DC1: mov     eax, [esi]
0x5E9DC3: mov     edx, [eax+190h]
0x5E9DC9: mov     ecx, esi
0x5E9DCB: call    edx
0x5E9DCD: test    al, al
0x5E9DCF: jz      short loc_5E9DD3
0x5E9DD1: mov     ebp, edi
0x5E9DD3: lea     ecx, [ebp+24h]
0x5E9DD6: call    TESActorBaseData_AllFactionsAreEvil
0x5E9DDB: test    al, al
0x5E9DDD: jz      loc_5E9E65
0x5E9DE3: pop     ebp
0x5E9DE4: mov     [esp+0Ch+var_1], 1
0x5E9DE9: mov     al, [esp+0Ch+var_1]
0x5E9DED: pop     edi
0x5E9DEE: pop     esi
0x5E9DEF: pop     ecx
0x5E9DF0: retn    4
0x5E9DF3: call    edx
0x5E9DF5: mov     edi, eax
0x5E9DF7: test    edi, edi
0x5E9DF9: jz      short loc_5E9E0D
0x5E9DFB: mov     eax, [esi]
0x5E9DFD: mov     edx, [eax+190h]
0x5E9E03: mov     ecx, esi
0x5E9E05: call    edx
0x5E9E07: test    al, al
0x5E9E09: jz      short loc_5E9E0D
0x5E9E0B: mov     ebp, edi
0x5E9E0D: lea     ecx, [ebp+24h]
0x5E9E10: call    TESActorBaseData_AllFactionsAreEvil
0x5E9E15: test    al, al
0x5E9E17: jmp     short loc_5E9E5E
0x5E9E19: push    1
0x5E9E1B: push    edi
0x5E9E1C: mov     ecx, esi
0x5E9E1E: call    TESOBjectREFR_IsOwnedBy
0x5E9E23: test    al, al
0x5E9E25: jnz     short loc_5E9E60
0x5E9E27: mov     ecx, [esi+58h]
0x5E9E2A: mov     eax, [ecx]
0x5E9E2C: mov     edx, [eax+3D0h]
0x5E9E32: call    edx
0x5E9E34: cmp     edi, eax
0x5E9E36: jmp     short loc_5E9E5E
0x5E9E38: call    Actor_IsNPC
0x5E9E3D: test    al, al
0x5E9E3F: jz      short loc_5E9E60
0x5E9E41: push    1
0x5E9E43: push    esi
0x5E9E44: mov     ecx, edi
0x5E9E46: call    TESOBjectREFR_IsOwnedBy
0x5E9E4B: test    al, al
0x5E9E4D: jnz     short loc_5E9E60
0x5E9E4F: mov     ecx, [edi+58h]
0x5E9E52: mov     eax, [ecx]
0x5E9E54: mov     edx, [eax+3D0h]
0x5E9E5A: call    edx
0x5E9E5C: cmp     esi, eax
0x5E9E5E: jnz     short loc_5E9E65
0x5E9E60: mov     [esp+10h+var_1], 1
0x5E9E65: mov     al, [esp+10h+var_1]
0x5E9E69: pop     ebp
0x5E9E6A: pop     edi
0x5E9E6B: pop     esi
0x5E9E6C: pop     ecx
0x5E9E6D: retn    4
