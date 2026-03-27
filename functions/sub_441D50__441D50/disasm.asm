0x441D50: push    ecx
0x441D51: cmp     dword ptr ds:0B33A98h, 0
0x441D58: push    ebx
0x441D59: mov     ebx, ecx
0x441D5B: jz      loc_441E87
0x441D61: mov     ecx, ds:0B35C24h
0x441D67: test    ecx, ecx
0x441D69: jz      short loc_441D7E
0x441D6B: cmp     [esp+8+arg_0], 0
0x441D70: jz      short loc_441D79
0x441D72: call    sub_889E10
0x441D77: jmp     short loc_441D7E
0x441D79: call    sub_889E00
0x441D7E: mov     ecx, ds:0B06A2Ch
0x441D84: push    ebp
0x441D85: push    esi
0x441D86: xor     eax, eax
0x441D88: push    edi
0x441D89: cmp     eax, ecx
0x441D8B: mov     [esp+14h+var_4], eax
0x441D8F: jnb     loc_441E15
0x441D95: xor     edi, edi
0x441D97: cmp     edi, ecx
0x441D99: jnb     short loc_441E0D
0x441D9B: mov     ecx, [ebx+8]
0x441D9E: push    edi
0x441D9F: push    eax
0x441DA0: call    GetGridEntry
0x441DA5: cmp     [esp+14h+arg_0], 0
0x441DAA: mov     ebp, eax
0x441DAC: mov     esi, [ebp+0]
0x441DAF: jz      short loc_441DD9
0x441DB1: test    esi, esi
0x441DB3: jz      short loc_441DC2
0x441DB5: cmp     byte ptr [esi+26h], 6
0x441DB9: jnz     short loc_441DC2
0x441DBB: mov     ecx, esi
0x441DBD: call    sub_4D6450
0x441DC2: mov     ecx, [ebp+4]
0x441DC5: call    sub_499FF0
0x441DCA: mov     ecx, ds:0B06A2Ch
0x441DD0: mov     eax, [esp+14h+var_4]
0x441DD4: add     edi, 1
0x441DD7: jmp     short loc_441D97
0x441DD9: test    esi, esi
0x441DDB: jz      short loc_441DFE
0x441DDD: cmp     byte ptr [esi+26h], 3
0x441DE1: jnz     short loc_441DFE
0x441DE3: mov     eax, [esp+14h+var_4]
0x441DE7: mov     ecx, [ebx+0Ch]
0x441DEA: push    edi
0x441DEB: push    eax
0x441DEC: push    ecx
0x441DED: mov     ecx, [ebx+8]
0x441DF0: call    sub_482390
0x441DF5: push    0
0x441DF7: mov     ecx, esi
0x441DF9: call    sub_4D5BD0
0x441DFE: mov     ecx, ds:0B06A2Ch
0x441E04: mov     eax, [esp+14h+var_4]
0x441E08: add     edi, 1
0x441E0B: jmp     short loc_441D97
0x441E0D: add     eax, 1
0x441E10: jmp     loc_441D89
0x441E15: mov     ecx, ds:0B35C24h
0x441E1B: test    ecx, ecx
0x441E1D: pop     edi
0x441E1E: pop     esi
0x441E1F: pop     ebp
0x441E20: jz      short loc_441E30
0x441E22: cmp     [esp+8+arg_0], 0
0x441E27: push    0
0x441E29: jz      short loc_441E6A
0x441E2B: call    sub_88BD60
0x441E30: cmp     [esp+8+arg_0], 0
0x441E35: jnz     short loc_441E52
0x441E37: mov     ecx, offset ActorProcessManager_ptr
0x441E3C: call    sub_677360
0x441E41: cmp     byte ptr ds:0B0703Ch, 0
0x441E48: jz      short loc_441E52
0x441E4A: mov     ecx, [ebx+54h]
0x441E4D: call    WaterSurfaceLoop
0x441E52: mov     edx, [ebx+10h]
0x441E55: mov     eax, [edx+1Ch]
0x441E58: test    eax, eax
0x441E5A: jz      short loc_441E77
0x441E5C: cmp     [esp+8+arg_0], 0
0x441E61: jz      short loc_441E71
0x441E63: or      word ptr [eax+18h], 1
0x441E68: jmp     short loc_441E77
0x441E6A: call    sub_88D1D0
0x441E6F: jmp     short loc_441E37
0x441E71: and     word ptr [eax+18h], 0FFFEh
0x441E77: fldz
0x441E79: push    0; a3
0x441E7B: push    ecx
0x441E7C: fstp    [esp+10h+a2]; a2
0x441E7F: mov     ecx, [ebx+10h]; this
0x441E82: call    NiAVObject_UpdateNiAVObject
0x441E87: pop     ebx
0x441E88: pop     ecx
0x441E89: retn    8
