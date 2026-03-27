0x8CCA80: sub     esp, 10h
0x8CCA83: mov     ecx, ds:0BA9DE4h
0x8CCA89: mov     edx, large fs:2Ch
0x8CCA90: push    ebx
0x8CCA91: mov     ebx, [esp+14h+arg_0]
0x8CCA95: push    ebp
0x8CCA96: mov     ebp, [edx+ecx*4]
0x8CCA99: mov     ecx, [ebp+19Ch]
0x8CCA9F: xor     eax, eax
0x8CCAA1: cmp     ecx, eax
0x8CCAA3: push    esi
0x8CCAA4: mov     esi, [ebx+2A4h]
0x8CCAAA: mov     [esp+1Ch+var_10], eax
0x8CCAAE: mov     [esp+1Ch+var_C], eax
0x8CCAB2: mov     [esp+1Ch+var_8], 80000000h
0x8CCABA: jnz     short loc_8CCAC2
0x8CCABC: mov     ecx, ds:0BA7D9Ch
0x8CCAC2: mov     edx, [ecx+20h]
0x8CCAC5: lea     eax, ds:10h[esi*8]
0x8CCACC: and     eax, 0FFFFFFF0h
0x8CCACF: push    edi
0x8CCAD0: lea     edi, [edx+eax]
0x8CCAD3: cmp     edi, [ecx+2Ch]
0x8CCAD6: ja      short loc_8CCADF
0x8CCAD8: mov     [ecx+20h], edi
0x8CCADB: mov     eax, edx
0x8CCADD: jmp     short loc_8CCAE5
0x8CCADF: mov     edx, [ecx]
0x8CCAE1: push    eax
0x8CCAE2: call    dword ptr [edx+0Ch]
0x8CCAE5: mov     [esp+20h+var_10], eax
0x8CCAE9: mov     [esp+20h+var_4], eax
0x8CCAED: mov     eax, [esp+20h+arg_4]
0x8CCAF1: mov     ecx, [eax+14h]
0x8CCAF4: or      esi, 80000000h
0x8CCAFA: test    ecx, ecx
0x8CCAFC: mov     [esp+20h+var_8], esi
0x8CCB00: pop     edi
0x8CCB01: jz      short loc_8CCB2A
0x8CCB03: mov     ecx, [ebx+64h]
0x8CCB06: mov     edx, [ecx]
0x8CCB08: lea     esi, [esp+1Ch+var_10]
0x8CCB0C: push    esi
0x8CCB0D: add     eax, 28h ; '('
0x8CCB10: push    eax
0x8CCB11: call    dword ptr [edx+10h]
0x8CCB14: mov     eax, [esp+1Ch+var_C]
0x8CCB18: test    eax, eax
0x8CCB1A: jle     short loc_8CCB2A
0x8CCB1C: mov     ecx, [ebx+68h]
0x8CCB1F: push    eax
0x8CCB20: mov     eax, [esp+20h+var_10]
0x8CCB24: push    eax
0x8CCB25: call    sub_8D83E0
0x8CCB2A: mov     ecx, [ebp+19Ch]
0x8CCB30: test    ecx, ecx
0x8CCB32: mov     eax, [esp+1Ch+var_4]
0x8CCB36: jnz     short loc_8CCB3E
0x8CCB38: mov     ecx, ds:0BA7D9Ch
0x8CCB3E: cmp     eax, [ecx+28h]
0x8CCB41: mov     [ecx+20h], eax
0x8CCB44: jnz     short loc_8CCB4C
0x8CCB46: mov     edx, [ecx]
0x8CCB48: push    eax
0x8CCB49: call    dword ptr [edx+10h]
0x8CCB4C: mov     edx, [esp+1Ch+var_8]
0x8CCB50: test    edx, edx
0x8CCB52: js      short loc_8CCB7B
0x8CCB54: mov     eax, [ebp+19Ch]
0x8CCB5A: test    eax, eax
0x8CCB5C: jnz     short loc_8CCB63
0x8CCB5E: mov     eax, ds:0BA7D9Ch
0x8CCB63: mov     ecx, [esp+1Ch+var_10]
0x8CCB67: and     edx, 3FFFFFFFh
0x8CCB6D: push    14h
0x8CCB6F: shl     edx, 3
0x8CCB72: push    edx
0x8CCB73: push    ecx
0x8CCB74: mov     ecx, eax
0x8CCB76: call    sub_8A75D0
0x8CCB7B: pop     esi
0x8CCB7C: pop     ebp
0x8CCB7D: pop     ebx
0x8CCB7E: add     esp, 10h
0x8CCB81: retn
