0x87AC50: push    0FFFFFFFFh
0x87AC52: push    offset SEH_87AC50
0x87AC57: mov     eax, large fs:0
0x87AC5D: push    eax
0x87AC5E: sub     esp, 8
0x87AC61: push    ebx
0x87AC62: push    esi
0x87AC63: push    edi
0x87AC64: mov     eax, ds:0B30AACh
0x87AC69: xor     eax, esp
0x87AC6B: push    eax
0x87AC6C: lea     eax, [esp+24h+var_C]
0x87AC70: mov     large fs:0, eax
0x87AC76: mov     [esp+24h+var_10], ecx
0x87AC7A: xor     edi, edi
0x87AC7C: or      ebx, 0FFFFFFFFh
0x87AC7F: nop
0x87AC80: lea     eax, [esp+24h+var_14]
0x87AC84: push    eax
0x87AC85: call    sub_7606A0
0x87AC8A: add     esp, 4
0x87AC8D: mov     esi, eax
0x87AC8F: mov     ecx, ds:dword_B47718[edi]
0x87AC95: cmp     ecx, [esi]
0x87AC97: mov     [esp+24h+var_4], 0
0x87AC9F: jz      short loc_87ACBF
0x87ACA1: test    ecx, ecx
0x87ACA3: jz      short loc_87ACAF
0x87ACA5: add     [ecx+60h], ebx
0x87ACA8: jnz     short loc_87ACAF
0x87ACAA: call    sub_7604D0
0x87ACAF: mov     eax, [esi]
0x87ACB1: test    eax, eax
0x87ACB3: mov     ds:dword_B47718[edi], eax
0x87ACB9: jz      short loc_87ACBF
0x87ACBB: add     dword ptr [eax+60h], 1
0x87ACBF: mov     eax, [esp+24h+var_14]
0x87ACC3: test    eax, eax
0x87ACC5: mov     [esp+24h+var_4], ebx
0x87ACC9: jz      short loc_87ACDD
0x87ACCB: add     [eax+60h], ebx
0x87ACCE: mov     ecx, eax
0x87ACD0: add     eax, 60h ; '`'
0x87ACD3: cmp     dword ptr [eax], 0
0x87ACD6: jnz     short loc_87ACDD
0x87ACD8: call    sub_7604D0
0x87ACDD: add     edi, 4
0x87ACE0: cmp     edi, 50h ; 'P'
0x87ACE3: jb      short loc_87AC80
0x87ACE5: mov     ecx, [esp+24h+var_10]
0x87ACE9: mov     edx, [ecx]
0x87ACEB: mov     eax, [edx+0C0h]
0x87ACF1: call    eax
0x87ACF3: mov     al, 1
0x87ACF5: mov     ecx, [esp+24h+var_C]
0x87ACF9: mov     large fs:0, ecx
0x87AD00: pop     ecx
0x87AD01: pop     edi
0x87AD02: pop     esi
0x87AD03: pop     ebx
0x87AD04: add     esp, 14h
0x87AD07: retn
