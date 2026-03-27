0x6F3FC0: push    0FFFFFFFFh
0x6F3FC2: push    offset SEH_6F3FC0
0x6F3FC7: mov     eax, large fs:0
0x6F3FCD: push    eax
0x6F3FCE: sub     esp, 8
0x6F3FD1: push    ebx
0x6F3FD2: push    ebp
0x6F3FD3: push    esi
0x6F3FD4: push    edi
0x6F3FD5: mov     eax, ds:0B30AACh
0x6F3FDA: xor     eax, esp
0x6F3FDC: push    eax
0x6F3FDD: lea     eax, [esp+28h+var_C]
0x6F3FE1: mov     large fs:0, eax
0x6F3FE7: mov     esi, ecx
0x6F3FE9: mov     ecx, [esi+4]
0x6F3FEC: xor     edi, edi
0x6F3FEE: cmp     ecx, edi
0x6F3FF0: mov     [esp+28h+var_4], edi
0x6F3FF4: jnz     short loc_6F3FFA
0x6F3FF6: xor     eax, eax
0x6F3FF8: jmp     short loc_6F4010
0x6F3FFA: mov     edx, [esi+8]
0x6F3FFD: sub     edx, ecx
0x6F3FFF: mov     eax, 2E8BA2E9h
0x6F4004: imul    edx
0x6F4006: sar     edx, 3
0x6F4009: mov     eax, edx
0x6F400B: shr     eax, 1Fh
0x6F400E: add     eax, edx
0x6F4010: mov     ebx, [esp+28h+arg_0]
0x6F4014: cmp     eax, ebx
0x6F4016: jnb     short loc_6F4051
0x6F4018: cmp     ecx, edi
0x6F401A: jz      short loc_6F4032
0x6F401C: mov     edx, [esi+8]
0x6F401F: sub     edx, ecx
0x6F4021: mov     eax, 2E8BA2E9h
0x6F4026: imul    edx
0x6F4028: sar     edx, 3
0x6F402B: mov     edi, edx
0x6F402D: shr     edi, 1Fh
0x6F4030: add     edi, edx
0x6F4032: mov     ebp, [esi+8]
0x6F4035: cmp     ecx, ebp
0x6F4037: jbe     short loc_6F403E
0x6F4039: call    __invalid_parameter_noinfo
0x6F403E: lea     eax, [esp+28h+arg_4]
0x6F4042: push    eax
0x6F4043: sub     ebx, edi
0x6F4045: push    ebx
0x6F4046: push    ebp
0x6F4047: push    esi
0x6F4048: mov     ecx, esi
0x6F404A: call    sub_6F3B50
0x6F404F: jmp     short loc_6F40AF
0x6F4051: cmp     ecx, edi
0x6F4053: jz      short loc_6F40AF
0x6F4055: mov     edi, [esi+8]
0x6F4058: mov     edx, edi
0x6F405A: sub     edx, ecx
0x6F405C: mov     eax, 2E8BA2E9h
0x6F4061: imul    edx
0x6F4063: sar     edx, 3
0x6F4066: mov     eax, edx
0x6F4068: shr     eax, 1Fh
0x6F406B: add     eax, edx
0x6F406D: cmp     ebx, eax
0x6F406F: jnb     short loc_6F40AF
0x6F4071: cmp     ecx, edi
0x6F4073: jbe     short loc_6F407A
0x6F4075: call    __invalid_parameter_noinfo
0x6F407A: mov     ebp, [esi+4]
0x6F407D: cmp     ebp, [esi+8]
0x6F4080: jbe     short loc_6F4087
0x6F4082: call    __invalid_parameter_noinfo
0x6F4087: imul    ebx, 2Ch ; ','
0x6F408A: add     ebx, ebp
0x6F408C: cmp     ebx, [esi+8]
0x6F408F: mov     [esp+28h+var_10], ebp
0x6F4093: ja      short loc_6F409A
0x6F4095: cmp     ebx, [esi+4]
0x6F4098: jnb     short loc_6F409F
0x6F409A: call    __invalid_parameter_noinfo
0x6F409F: push    edi
0x6F40A0: push    esi
0x6F40A1: push    ebx
0x6F40A2: push    esi
0x6F40A3: lea     ecx, [esp+38h+var_14]
0x6F40A7: push    ecx
0x6F40A8: mov     ecx, esi
0x6F40AA: call    sub_6F34D0
0x6F40AF: cmp     [esp+28h+arg_2C], 10h
0x6F40B4: jb      short loc_6F40C3
0x6F40B6: mov     edx, [esp+28h+arg_18]
0x6F40BA: push    edx
0x6F40BB: call    FormHeapFree
0x6F40C0: add     esp, 4
0x6F40C3: mov     ecx, [esp+28h+var_C]
0x6F40C7: mov     large fs:0, ecx
0x6F40CE: pop     ecx
0x6F40CF: pop     edi
0x6F40D0: pop     esi
0x6F40D1: pop     ebp
0x6F40D2: pop     ebx
0x6F40D3: add     esp, 14h
0x6F40D6: retn    30h ; '0'
