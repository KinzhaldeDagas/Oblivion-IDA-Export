0x5599B0: push    0FFFFFFFFh
0x5599B2: push    offset SEH_5599B0
0x5599B7: mov     eax, large fs:0
0x5599BD: push    eax
0x5599BE: sub     esp, 0Ch
0x5599C1: push    ebx
0x5599C2: push    ebp
0x5599C3: push    esi
0x5599C4: push    edi
0x5599C5: mov     eax, ds:0B30AACh
0x5599CA: xor     eax, esp
0x5599CC: push    eax
0x5599CD: lea     eax, [esp+2Ch+var_C]
0x5599D1: mov     large fs:0, eax
0x5599D7: mov     esi, ecx
0x5599D9: mov     [esp+2Ch+var_18], esi
0x5599DD: mov     ebx, [esi+0Ch]
0x5599E0: cmp     [esi+8], ebx
0x5599E3: lea     edi, [esi+4]
0x5599E6: mov     [esp+2Ch+var_4], 0
0x5599EE: jbe     short loc_5599F5
0x5599F0: call    __invalid_parameter_noinfo
0x5599F5: mov     ebp, [edi+4]
0x5599F8: cmp     ebp, [edi+8]
0x5599FB: jbe     short loc_559A02
0x5599FD: call    __invalid_parameter_noinfo
0x559A02: push    ebx
0x559A03: push    edi
0x559A04: push    ebp
0x559A05: push    edi
0x559A06: lea     eax, [esp+3Ch+var_14]
0x559A0A: push    eax
0x559A0B: mov     ecx, edi
0x559A0D: call    sub_559240
0x559A12: mov     ebx, [esi+1Ch]
0x559A15: add     esi, 14h
0x559A18: cmp     [esi+4], ebx
0x559A1B: jbe     short loc_559A22
0x559A1D: call    __invalid_parameter_noinfo
0x559A22: mov     ebp, [esi+4]
0x559A25: cmp     ebp, [esi+8]
0x559A28: jbe     short loc_559A2F
0x559A2A: call    __invalid_parameter_noinfo
0x559A2F: push    ebx
0x559A30: push    esi
0x559A31: push    ebp
0x559A32: push    esi
0x559A33: lea     ecx, [esp+3Ch+var_14]
0x559A37: push    ecx
0x559A38: mov     ecx, esi
0x559A3A: call    sub_559240
0x559A3F: push    offset sub_558570; void (__thiscall *)(void *)
0x559A44: push    2; int
0x559A46: push    10h; unsigned int
0x559A48: push    edi; void *
0x559A49: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x559A51: call    $LN21
0x559A56: mov     ecx, [esp+2Ch+var_C]
0x559A5A: mov     large fs:0, ecx
0x559A61: pop     ecx
0x559A62: pop     edi
0x559A63: pop     esi
0x559A64: pop     ebp
0x559A65: pop     ebx
0x559A66: add     esp, 18h
0x559A69: retn
