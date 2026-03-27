0x651EF0: push    esi
0x651EF1: mov     esi, ecx
0x651EF3: mov     ecx, [esp+4+arg_0]; this
0x651EF7: test    ecx, ecx
0x651EF9: jz      short loc_651F5F
0x651EFB: mov     eax, [esi+170h]
0x651F01: test    eax, eax
0x651F03: jz      short loc_651F5F
0x651F05: cmp     dword ptr [eax+4], 0
0x651F09: jnz     short loc_651F10
0x651F0B: cmp     dword ptr [eax], 0
0x651F0E: jz      short loc_651F5F
0x651F10: push    ebx
0x651F11: call    TESObjectREFR_GetParentCell
0x651F16: mov     esi, [esi+170h]
0x651F1C: test    esi, esi
0x651F1E: mov     ebx, eax
0x651F20: jz      short loc_651F5E
0x651F22: push    edi
0x651F23: cmp     dword ptr [esi+4], 0
0x651F27: jnz     short loc_651F2E
0x651F29: cmp     dword ptr [esi], 0
0x651F2C: jz      short loc_651F5D
0x651F2E: mov     edi, [esi]
0x651F30: test    edi, edi
0x651F32: jz      short loc_651F56
0x651F34: mov     ecx, edi; this
0x651F36: call    TESObjectREFR_GetParentCell
0x651F3B: cmp     eax, ebx
0x651F3D: jz      short loc_651F56
0x651F3F: test    ebx, ebx
0x651F41: jz      short loc_651F56
0x651F43: push    edi
0x651F44: mov     ecx, ebx
0x651F46: call    sub_4D38F0
0x651F4B: push    edi
0x651F4C: mov     ecx, offset ActorProcessManager_ptr
0x651F51: call    sub_6748B0
0x651F56: mov     esi, [esi+4]
0x651F59: test    esi, esi
0x651F5B: jnz     short loc_651F23
0x651F5D: pop     edi
0x651F5E: pop     ebx
0x651F5F: pop     esi
0x651F60: retn    4
