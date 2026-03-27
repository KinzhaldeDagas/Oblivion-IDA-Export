0x559A70: push    0FFFFFFFFh
0x559A72: push    offset SEH_559A70
0x559A77: mov     eax, large fs:0
0x559A7D: push    eax
0x559A7E: push    ecx
0x559A7F: push    ebx
0x559A80: push    ebp
0x559A81: push    esi
0x559A82: push    edi
0x559A83: mov     eax, ds:0B30AACh
0x559A88: xor     eax, esp
0x559A8A: push    eax
0x559A8B: lea     eax, [esp+24h+var_C]
0x559A8F: mov     large fs:0, eax
0x559A95: mov     ebp, ecx
0x559A97: mov     [esp+24h+var_10], ebp
0x559A9B: mov     esi, [ebp+0Ch]
0x559A9E: cmp     [ebp+8], esi
0x559AA1: lea     edi, [ebp+4]
0x559AA4: mov     [esp+24h+var_4], 0
0x559AAC: jbe     short loc_559AB3
0x559AAE: call    __invalid_parameter_noinfo
0x559AB3: mov     ebx, [edi+4]
0x559AB6: cmp     ebx, [edi+8]
0x559AB9: jbe     short loc_559AC0
0x559ABB: call    __invalid_parameter_noinfo
0x559AC0: cmp     ebx, esi
0x559AC2: jz      short loc_559AE3
0x559AC4: mov     eax, [edi+8]
0x559AC7: push    ebx
0x559AC8: push    eax
0x559AC9: push    esi
0x559ACA: call    sub_558610
0x559ACF: mov     ecx, [edi+8]
0x559AD2: add     esp, 0Ch
0x559AD5: push    ecx
0x559AD6: mov     esi, eax
0x559AD8: push    esi
0x559AD9: mov     ecx, edi
0x559ADB: call    sub_557740
0x559AE0: mov     [edi+8], esi
0x559AE3: mov     ebx, [ebp+1Ch]
0x559AE6: cmp     [ebp+18h], ebx
0x559AE9: lea     esi, [ebp+14h]
0x559AEC: jbe     short loc_559AF3
0x559AEE: call    __invalid_parameter_noinfo
0x559AF3: mov     ebp, [esi+4]
0x559AF6: cmp     ebp, [esi+8]
0x559AF9: jbe     short loc_559B00
0x559AFB: call    __invalid_parameter_noinfo
0x559B00: cmp     ebp, ebx
0x559B02: jz      short loc_559B23
0x559B04: mov     edx, [esi+8]
0x559B07: push    ebp
0x559B08: push    edx
0x559B09: push    ebx
0x559B0A: call    sub_558610
0x559B0F: mov     ebx, eax
0x559B11: mov     eax, [esi+8]
0x559B14: add     esp, 0Ch
0x559B17: push    eax
0x559B18: push    ebx
0x559B19: mov     ecx, esi
0x559B1B: call    sub_557740
0x559B20: mov     [esi+8], ebx
0x559B23: push    offset sub_557B30; void (__thiscall *)(void *)
0x559B28: push    2; int
0x559B2A: push    10h; unsigned int
0x559B2C: push    edi; void *
0x559B2D: mov     [esp+34h+var_4], 0FFFFFFFFh
0x559B35: call    $LN21
0x559B3A: mov     ecx, [esp+24h+var_C]
0x559B3E: mov     large fs:0, ecx
0x559B45: pop     ecx
0x559B46: pop     edi
0x559B47: pop     esi
0x559B48: pop     ebp
0x559B49: pop     ebx
0x559B4A: add     esp, 10h
0x559B4D: retn
