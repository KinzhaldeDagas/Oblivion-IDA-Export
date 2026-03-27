0x477EF0: push    0FFFFFFFFh
0x477EF2: push    offset SEH_88E880
0x477EF7: mov     eax, large fs:0
0x477EFD: push    eax
0x477EFE: push    ecx
0x477EFF: push    ebx
0x477F00: push    ebp
0x477F01: push    esi
0x477F02: push    edi
0x477F03: mov     eax, ds:0B30AACh
0x477F08: xor     eax, esp
0x477F0A: push    eax
0x477F0B: lea     eax, [esp+24h+var_C]
0x477F0F: mov     large fs:0, eax
0x477F15: mov     edi, ecx
0x477F17: xor     eax, eax
0x477F19: xor     ebx, ebx
0x477F1B: cmp     [edi+0Ah], ax
0x477F1F: jbe     short loc_477F6F
0x477F21: mov     [esp+24h+var_10], eax
0x477F25: mov     edx, [edi+4]
0x477F28: movzx   ecx, bx
0x477F2B: mov     esi, [edx+ecx*4]
0x477F2E: cmp     esi, eax
0x477F30: lea     ebp, [edx+ecx*4]
0x477F33: mov     [esp+24h+var_4], eax
0x477F37: jz      short loc_477F5E
0x477F39: lea     eax, [esi+4]
0x477F3C: push    eax; lpAddend
0x477F3D: call    dword ptr ds:0A2807Ch
0x477F43: test    eax, eax
0x477F45: jnz     short loc_477F55
0x477F47: test    esi, esi
0x477F49: jz      short loc_477F55
0x477F4B: mov     edx, [esi]
0x477F4D: mov     eax, [edx]
0x477F4F: push    1
0x477F51: mov     ecx, esi
0x477F53: call    eax
0x477F55: mov     dword ptr [ebp+0], 0
0x477F5C: xor     eax, eax
0x477F5E: add     ebx, 1
0x477F61: cmp     bx, [edi+0Ah]
0x477F65: mov     [esp+24h+var_4], 0FFFFFFFFh
0x477F6D: jb      short loc_477F25
0x477F6F: mov     [edi+0Ch], ax
0x477F73: mov     [edi+0Ah], ax
0x477F77: mov     ecx, dword ptr [esp+24h+var_C]
0x477F7B: mov     large fs:0, ecx
0x477F82: pop     ecx
0x477F83: pop     edi
0x477F84: pop     esi
0x477F85: pop     ebp
0x477F86: pop     ebx
0x477F87: add     esp, 10h
0x477F8A: retn
