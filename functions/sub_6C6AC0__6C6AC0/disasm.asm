0x6C6AC0: push    ecx
0x6C6AC1: push    ebp
0x6C6AC2: push    edi
0x6C6AC3: mov     edi, ecx
0x6C6AC5: xor     ebp, ebp
0x6C6AC7: cmp     [edi+0Ch], ebp
0x6C6ACA: jbe     short loc_6C6B25
0x6C6ACC: push    ebx
0x6C6ACD: push    esi
0x6C6ACE: xor     ebx, ebx
0x6C6AD0: mov     eax, [edi+14h]
0x6C6AD3: add     eax, ebx
0x6C6AD5: cmp     dword ptr [eax+8], 0
0x6C6AD9: jz      short loc_6C6B18
0x6C6ADB: mov     ecx, [eax+8]
0x6C6ADE: movzx   eax, byte ptr [eax+0Ch]
0x6C6AE2: mov     edx, [ecx]
0x6C6AE4: mov     edx, [edx+9Ch]
0x6C6AEA: push    eax
0x6C6AEB: lea     eax, [esp+18h+var_4]
0x6C6AEF: push    eax
0x6C6AF0: call    edx
0x6C6AF2: mov     eax, dword ptr [esp+14h+var_4]
0x6C6AF6: test    eax, eax
0x6C6AF8: jz      short loc_6C6B18
0x6C6AFA: mov     esi, eax
0x6C6AFC: add     eax, 4
0x6C6AFF: push    eax; lpAddend
0x6C6B00: call    dword ptr ds:0A2807Ch
0x6C6B06: test    eax, eax
0x6C6B08: jnz     short loc_6C6B18
0x6C6B0A: test    esi, esi
0x6C6B0C: jz      short loc_6C6B18
0x6C6B0E: mov     eax, [esi]
0x6C6B10: mov     edx, [eax]
0x6C6B12: push    1
0x6C6B14: mov     ecx, esi
0x6C6B16: call    edx
0x6C6B18: add     ebp, 1
0x6C6B1B: add     ebx, 10h
0x6C6B1E: cmp     ebp, [edi+0Ch]
0x6C6B21: jb      short loc_6C6AD0
0x6C6B23: pop     esi
0x6C6B24: pop     ebx
0x6C6B25: pop     edi
0x6C6B26: pop     ebp
0x6C6B27: pop     ecx
0x6C6B28: retn
