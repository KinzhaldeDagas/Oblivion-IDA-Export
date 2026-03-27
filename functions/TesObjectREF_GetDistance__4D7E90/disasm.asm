0x4D7E90: push    ecx
0x4D7E91: fld     dword ptr ds:0A32048h
0x4D7E97: push    esi
0x4D7E98: mov     esi, [esp+8+arg_0]
0x4D7E9C: fstp    [esp+8+var_4]
0x4D7EA0: test    esi, esi
0x4D7EA2: push    edi
0x4D7EA3: mov     edi, ecx
0x4D7EA5: jz      loc_4D7F36
0x4D7EAB: mov     eax, [esi+8]
0x4D7EAE: mov     ecx, eax
0x4D7EB0: shr     ecx, 0Bh
0x4D7EB3: test    cl, 1
0x4D7EB6: jz      short loc_4D7EBF
0x4D7EB8: cmp     [esp+0Ch+unk000], 0
0x4D7EBD: jz      short loc_4D7F36
0x4D7EBF: shr     eax, 5
0x4D7EC2: test    al, 1
0x4D7EC4: jnz     short loc_4D7F36
0x4D7EC6: mov     ecx, [esi+40h]; this
0x4D7EC9: test    ecx, ecx
0x4D7ECB: jz      short loc_4D7EF2
0x4D7ECD: cmp     dword ptr [edi+40h], 0
0x4D7ED1: jz      short loc_4D7EF2
0x4D7ED3: call    TESObjectCELL_IsInterior
0x4D7ED8: test    al, al
0x4D7EDA: jnz     short loc_4D7EE8
0x4D7EDC: mov     ecx, [edi+40h]; this
0x4D7EDF: call    TESObjectCELL_IsInterior
0x4D7EE4: test    al, al
0x4D7EE6: jz      short loc_4D7EF2
0x4D7EE8: mov     edx, [edi+40h]
0x4D7EEB: cmp     edx, [esi+40h]
0x4D7EEE: jnz     short loc_4D7F36
0x4D7EF0: jmp     short loc_4D7F1E
0x4D7EF2: push    ebx
0x4D7EF3: mov     ecx, esi; this
0x4D7EF5: call    TESObjectREFR_GetWorldSpace
0x4D7EFA: mov     ecx, edi; this
0x4D7EFC: mov     ebx, eax
0x4D7EFE: call    TESObjectREFR_GetWorldSpace
0x4D7F03: cmp     eax, ebx
0x4D7F05: pop     ebx
0x4D7F06: jnz     short loc_4D7F36
0x4D7F08: mov     ecx, edi; this
0x4D7F0A: call    TESObjectREFR_GetWorldSpace
0x4D7F0F: test    eax, eax
0x4D7F11: jz      short loc_4D7F36
0x4D7F13: mov     ecx, esi; this
0x4D7F15: call    TESObjectREFR_GetWorldSpace
0x4D7F1A: test    eax, eax
0x4D7F1C: jz      short loc_4D7F36
0x4D7F1E: mov     eax, [esi]
0x4D7F20: mov     edx, [eax+174h]
0x4D7F26: mov     ecx, esi
0x4D7F28: call    edx
0x4D7F2A: push    eax
0x4D7F2B: mov     ecx, edi
0x4D7F2D: call    sub_4D7E30
0x4D7F32: fstp    [esp+0Ch+var_4]
0x4D7F36: fld     [esp+0Ch+var_4]
0x4D7F3A: pop     edi
0x4D7F3B: pop     esi
0x4D7F3C: pop     ecx
0x4D7F3D: retn    8
