0x843CF0: push    0FFFFFFFFh
0x843CF2: push    offset SEH_851CA0
0x843CF7: mov     eax, large fs:0
0x843CFD: push    eax
0x843CFE: push    ecx
0x843CFF: push    ebx
0x843D00: push    ebp
0x843D01: push    esi
0x843D02: push    edi
0x843D03: mov     eax, ds:0B30AACh
0x843D08: xor     eax, esp
0x843D0A: push    eax
0x843D0B: lea     eax, [esp+24h+var_C]
0x843D0F: mov     large fs:0, eax
0x843D15: mov     edi, ecx
0x843D17: mov     esi, ds:0B45984h
0x843D1D: mov     ecx, [esp+24h+arg_C]
0x843D21: mov     eax, [esi+24h]
0x843D24: mov     ebp, [eax]
0x843D26: push    0
0x843D28: push    ecx
0x843D29: mov     ecx, edi
0x843D2B: call    sub_848FD0
0x843D30: mov     ebx, [ebp+4]
0x843D33: cmp     ebx, eax
0x843D35: mov     [esp+24h+var_10], eax
0x843D39: jz      short loc_843D70
0x843D3B: test    ebx, ebx
0x843D3D: jz      short loc_843D5F
0x843D3F: lea     edx, [ebx+4]
0x843D42: push    edx; lpAddend
0x843D43: call    dword ptr ds:0A2807Ch
0x843D49: test    eax, eax
0x843D4B: jnz     short loc_843D5B
0x843D4D: test    ebx, ebx
0x843D4F: jz      short loc_843D5B
0x843D51: mov     eax, [ebx]
0x843D53: mov     edx, [eax]
0x843D55: push    1
0x843D57: mov     ecx, ebx
0x843D59: call    edx
0x843D5B: mov     eax, [esp+24h+var_10]
0x843D5F: test    eax, eax
0x843D61: mov     [ebp+4], eax
0x843D64: jz      short loc_843D70
0x843D66: add     eax, 4
0x843D69: push    eax; lpAddend
0x843D6A: call    dword ptr ds:0A28078h
0x843D70: mov     eax, [esp+24h+arg_C]
0x843D74: push    eax
0x843D75: push    ebp
0x843D76: mov     ecx, edi
0x843D78: call    sub_848FA0
0x843D7D: mov     ebx, 1
0x843D82: add     [esi+60h], ebx
0x843D85: mov     [esp+24h+arg_C], esi
0x843D89: mov     edx, [edi+38h]
0x843D8C: lea     ecx, [esp+24h+arg_C]
0x843D90: push    ecx
0x843D91: push    edx
0x843D92: lea     ecx, [edi+40h]
0x843D95: mov     [esp+2Ch+var_4], 0
0x843D9D: call    sub_76CE40
0x843DA2: or      eax, 0FFFFFFFFh
0x843DA5: add     [esi+60h], eax
0x843DA8: mov     [esp+24h+var_4], eax
0x843DAC: jnz     short loc_843DB5
0x843DAE: mov     ecx, esi
0x843DB0: call    sub_7604D0
0x843DB5: add     [edi+38h], ebx
0x843DB8: mov     ecx, dword ptr [esp+24h+var_C]
0x843DBC: mov     large fs:0, ecx
0x843DC3: pop     ecx
0x843DC4: pop     edi
0x843DC5: pop     esi
0x843DC6: pop     ebp
0x843DC7: pop     ebx
0x843DC8: add     esp, 10h
0x843DCB: retn    10h
