0x84EEF0: push    0FFFFFFFFh
0x84EEF2: push    offset SEH_851CA0
0x84EEF7: mov     eax, large fs:0
0x84EEFD: push    eax
0x84EEFE: push    ecx
0x84EEFF: push    ebx
0x84EF00: push    ebp
0x84EF01: push    esi
0x84EF02: push    edi
0x84EF03: mov     eax, ds:0B30AACh
0x84EF08: xor     eax, esp
0x84EF0A: push    eax
0x84EF0B: lea     eax, [esp+24h+var_C]
0x84EF0F: mov     large fs:0, eax
0x84EF15: mov     ebp, ecx
0x84EF17: mov     esi, ds:0B45934h
0x84EF1D: mov     eax, [esi+24h]
0x84EF20: mov     ebx, [esp+24h+arg_C]
0x84EF24: mov     edi, [eax]
0x84EF26: mov     edx, [ebx]
0x84EF28: mov     eax, [edx+8Ch]
0x84EF2E: push    0
0x84EF30: mov     ecx, ebx
0x84EF32: mov     [esp+28h+var_10], edi
0x84EF36: call    eax
0x84EF38: test    eax, eax
0x84EF3A: jz      short loc_84EF4E
0x84EF3C: mov     edx, [ebx]
0x84EF3E: mov     eax, [edx+8Ch]
0x84EF44: push    0
0x84EF46: mov     ecx, ebx
0x84EF48: call    eax
0x84EF4A: mov     ebx, eax
0x84EF4C: jmp     short loc_84EF63
0x84EF4E: test    dword ptr [ebx+1Ch], 80h
0x84EF55: mov     ebx, ds:0B430F0h
0x84EF5B: ja      short loc_84EF63
0x84EF5D: mov     ebx, ds:0B430DCh
0x84EF63: mov     edi, [edi+4]
0x84EF66: cmp     edi, ebx
0x84EF68: jz      short loc_84EFA1
0x84EF6A: test    edi, edi
0x84EF6C: jz      short loc_84EF8A
0x84EF6E: lea     ecx, [edi+4]
0x84EF71: push    ecx; lpAddend
0x84EF72: call    dword ptr ds:0A2807Ch
0x84EF78: test    eax, eax
0x84EF7A: jnz     short loc_84EF8A
0x84EF7C: test    edi, edi
0x84EF7E: jz      short loc_84EF8A
0x84EF80: mov     edx, [edi]
0x84EF82: mov     eax, [edx]
0x84EF84: push    1
0x84EF86: mov     ecx, edi
0x84EF88: call    eax
0x84EF8A: test    ebx, ebx
0x84EF8C: mov     edi, [esp+24h+var_10]
0x84EF90: mov     [edi+4], ebx
0x84EF93: jz      short loc_84EFA5
0x84EF95: add     ebx, 4
0x84EF98: push    ebx; lpAddend
0x84EF99: call    dword ptr ds:0A28078h
0x84EF9F: jmp     short loc_84EFA5
0x84EFA1: mov     edi, [esp+24h+var_10]
0x84EFA5: test    edi, edi
0x84EFA7: jz      short loc_84EFC5
0x84EFA9: cmp     byte ptr ds:0B42CDDh, 0
0x84EFB0: jz      short loc_84EFC5
0x84EFB2: mov     ecx, [esp+24h+arg_C]
0x84EFB6: mov     edx, [ecx]
0x84EFB8: mov     eax, [edx+78h]
0x84EFBB: call    eax
0x84EFBD: push    eax
0x84EFBE: mov     ecx, edi
0x84EFC0: call    sub_7715E0
0x84EFC5: mov     edi, 1
0x84EFCA: add     [esi+60h], edi
0x84EFCD: mov     [esp+24h+arg_C], esi
0x84EFD1: mov     edx, [ebp+38h]
0x84EFD4: lea     ecx, [esp+24h+arg_C]
0x84EFD8: push    ecx
0x84EFD9: push    edx
0x84EFDA: lea     ecx, [ebp+40h]
0x84EFDD: mov     [esp+2Ch+var_4], 0
0x84EFE5: call    sub_76CE40
0x84EFEA: or      eax, 0FFFFFFFFh
0x84EFED: add     [esi+60h], eax
0x84EFF0: mov     [esp+24h+var_4], eax
0x84EFF4: jnz     short loc_84EFFD
0x84EFF6: mov     ecx, esi
0x84EFF8: call    sub_7604D0
0x84EFFD: add     [ebp+38h], edi
0x84F000: mov     ecx, dword ptr [esp+24h+var_C]
0x84F004: mov     large fs:0, ecx
0x84F00B: pop     ecx
0x84F00C: pop     edi
0x84F00D: pop     esi
0x84F00E: pop     ebp
0x84F00F: pop     ebx
0x84F010: add     esp, 10h
0x84F013: retn    10h
