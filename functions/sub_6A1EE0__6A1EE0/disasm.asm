0x6A1EE0: mov     eax, [ecx]
0x6A1EE2: mov     edx, [eax+8]
0x6A1EE5: push    ebx
0x6A1EE6: push    esi
0x6A1EE7: push    edi
0x6A1EE8: call    edx
0x6A1EEA: mov     esi, eax
0x6A1EEC: test    esi, esi
0x6A1EEE: jz      short loc_6A1F1D
0x6A1EF0: mov     ebx, [esp+0Ch+arg_0]
0x6A1EF4: cmp     dword ptr [esi+4], 0
0x6A1EF8: jnz     short loc_6A1EFF
0x6A1EFA: cmp     dword ptr [esi], 0
0x6A1EFD: jz      short loc_6A1F1D
0x6A1EFF: mov     edi, [esi]
0x6A1F01: test    edi, edi
0x6A1F03: jz      short loc_6A1F16
0x6A1F05: mov     ecx, [edi+0Ch]
0x6A1F08: call    EffectItem_IsHostile
0x6A1F0D: test    al, al
0x6A1F0F: jz      short loc_6A1F16
0x6A1F11: cmp     [edi+24h], ebx
0x6A1F14: jz      short loc_6A1F25
0x6A1F16: mov     esi, [esi+4]
0x6A1F19: test    esi, esi
0x6A1F1B: jnz     short loc_6A1EF4
0x6A1F1D: pop     edi
0x6A1F1E: pop     esi
0x6A1F1F: xor     al, al
0x6A1F21: pop     ebx
0x6A1F22: retn    4
0x6A1F25: pop     edi
0x6A1F26: pop     esi
0x6A1F27: mov     al, 1
0x6A1F29: pop     ebx
0x6A1F2A: retn    4
