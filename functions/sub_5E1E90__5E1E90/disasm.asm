0x5E1E90: push    ebx
0x5E1E91: push    esi
0x5E1E92: mov     esi, ecx
0x5E1E94: mov     eax, [esi]
0x5E1E96: mov     edx, [eax+170h]
0x5E1E9C: push    edi
0x5E1E9D: xor     ebx, ebx
0x5E1E9F: call    edx
0x5E1EA1: mov     edi, eax
0x5E1EA3: test    edi, edi
0x5E1EA5: jz      short loc_5E1EB9
0x5E1EA7: mov     eax, [esi]
0x5E1EA9: mov     edx, [eax+190h]
0x5E1EAF: mov     ecx, esi
0x5E1EB1: call    edx
0x5E1EB3: test    al, al
0x5E1EB5: jz      short loc_5E1EB9
0x5E1EB7: mov     ebx, edi
0x5E1EB9: mov     ecx, ebx
0x5E1EBB: call    TESActorBase_CanWalk
0x5E1EC0: test    al, al
0x5E1EC2: jnz     short loc_5E1F2F
0x5E1EC4: mov     eax, [esi]
0x5E1EC6: mov     edx, [eax+170h]
0x5E1ECC: mov     ecx, esi
0x5E1ECE: xor     ebx, ebx
0x5E1ED0: call    edx
0x5E1ED2: mov     edi, eax
0x5E1ED4: test    edi, edi
0x5E1ED6: jz      short loc_5E1EEA
0x5E1ED8: mov     eax, [esi]
0x5E1EDA: mov     edx, [eax+190h]
0x5E1EE0: mov     ecx, esi
0x5E1EE2: call    edx
0x5E1EE4: test    al, al
0x5E1EE6: jz      short loc_5E1EEA
0x5E1EE8: mov     ebx, edi
0x5E1EEA: mov     ecx, ebx; this
0x5E1EEC: call    TESActorBase_CanSwim
0x5E1EF1: test    al, al
0x5E1EF3: jz      short loc_5E1F2F
0x5E1EF5: mov     eax, [esi]
0x5E1EF7: mov     edx, [eax+170h]
0x5E1EFD: mov     ecx, esi
0x5E1EFF: xor     ebx, ebx
0x5E1F01: call    edx
0x5E1F03: mov     edi, eax
0x5E1F05: test    edi, edi
0x5E1F07: jz      short loc_5E1F1B
0x5E1F09: mov     eax, [esi]
0x5E1F0B: mov     edx, [eax+190h]
0x5E1F11: mov     ecx, esi
0x5E1F13: call    edx
0x5E1F15: test    al, al
0x5E1F17: jz      short loc_5E1F1B
0x5E1F19: mov     ebx, edi
0x5E1F1B: mov     ecx, ebx; this
0x5E1F1D: call    TESActorBase_CanFly
0x5E1F22: test    al, al
0x5E1F24: jnz     short loc_5E1F2F
0x5E1F26: pop     edi
0x5E1F27: pop     esi
0x5E1F28: mov     eax, 1
0x5E1F2D: pop     ebx
0x5E1F2E: retn
0x5E1F2F: pop     edi
0x5E1F30: pop     esi
0x5E1F31: xor     eax, eax
0x5E1F33: pop     ebx
0x5E1F34: retn
