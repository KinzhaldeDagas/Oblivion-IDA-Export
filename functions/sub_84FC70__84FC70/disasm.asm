0x84FC70: push    0FFFFFFFFh
0x84FC72: push    offset SEH_851CA0
0x84FC77: mov     eax, large fs:0
0x84FC7D: push    eax
0x84FC7E: push    ecx
0x84FC7F: push    ebx
0x84FC80: push    ebp
0x84FC81: push    esi
0x84FC82: push    edi
0x84FC83: mov     eax, ds:0B30AACh
0x84FC88: xor     eax, esp
0x84FC8A: push    eax
0x84FC8B: lea     eax, [esp+24h+var_C]
0x84FC8F: mov     large fs:0, eax
0x84FC95: mov     ebp, ecx
0x84FC97: mov     esi, ds:0B459E4h
0x84FC9D: mov     eax, [esi+24h]
0x84FCA0: mov     ebx, [esp+24h+arg_C]
0x84FCA4: mov     edi, [eax]
0x84FCA6: mov     edx, [ebx]
0x84FCA8: mov     eax, [edx+8Ch]
0x84FCAE: push    0
0x84FCB0: mov     ecx, ebx
0x84FCB2: mov     [esp+28h+var_10], edi
0x84FCB6: call    eax
0x84FCB8: test    eax, eax
0x84FCBA: jz      short loc_84FCCE
0x84FCBC: mov     edx, [ebx]
0x84FCBE: mov     eax, [edx+8Ch]
0x84FCC4: push    0
0x84FCC6: mov     ecx, ebx
0x84FCC8: call    eax
0x84FCCA: mov     ebx, eax
0x84FCCC: jmp     short loc_84FCE3
0x84FCCE: test    dword ptr [ebx+1Ch], 80h
0x84FCD5: mov     ebx, ds:0B430F0h
0x84FCDB: ja      short loc_84FCE3
0x84FCDD: mov     ebx, ds:0B430DCh
0x84FCE3: mov     edi, [edi+4]
0x84FCE6: cmp     edi, ebx
0x84FCE8: jz      short loc_84FD21
0x84FCEA: test    edi, edi
0x84FCEC: jz      short loc_84FD0A
0x84FCEE: lea     ecx, [edi+4]
0x84FCF1: push    ecx; lpAddend
0x84FCF2: call    dword ptr ds:0A2807Ch
0x84FCF8: test    eax, eax
0x84FCFA: jnz     short loc_84FD0A
0x84FCFC: test    edi, edi
0x84FCFE: jz      short loc_84FD0A
0x84FD00: mov     edx, [edi]
0x84FD02: mov     eax, [edx]
0x84FD04: push    1
0x84FD06: mov     ecx, edi
0x84FD08: call    eax
0x84FD0A: test    ebx, ebx
0x84FD0C: mov     edi, [esp+24h+var_10]
0x84FD10: mov     [edi+4], ebx
0x84FD13: jz      short loc_84FD25
0x84FD15: add     ebx, 4
0x84FD18: push    ebx; lpAddend
0x84FD19: call    dword ptr ds:0A28078h
0x84FD1F: jmp     short loc_84FD25
0x84FD21: mov     edi, [esp+24h+var_10]
0x84FD25: test    edi, edi
0x84FD27: jz      short loc_84FD45
0x84FD29: cmp     byte ptr ds:0B42CDDh, 0
0x84FD30: jz      short loc_84FD45
0x84FD32: mov     ecx, [esp+24h+arg_C]
0x84FD36: mov     edx, [ecx]
0x84FD38: mov     eax, [edx+78h]
0x84FD3B: call    eax
0x84FD3D: push    eax
0x84FD3E: mov     ecx, edi
0x84FD40: call    sub_7715E0
0x84FD45: mov     edi, 1
0x84FD4A: add     [esi+60h], edi
0x84FD4D: mov     [esp+24h+arg_C], esi
0x84FD51: mov     edx, [ebp+38h]
0x84FD54: lea     ecx, [esp+24h+arg_C]
0x84FD58: push    ecx
0x84FD59: push    edx
0x84FD5A: lea     ecx, [ebp+40h]
0x84FD5D: mov     [esp+2Ch+var_4], 0
0x84FD65: call    sub_76CE40
0x84FD6A: or      eax, 0FFFFFFFFh
0x84FD6D: add     [esi+60h], eax
0x84FD70: mov     [esp+24h+var_4], eax
0x84FD74: jnz     short loc_84FD7D
0x84FD76: mov     ecx, esi
0x84FD78: call    sub_7604D0
0x84FD7D: add     [ebp+38h], edi
0x84FD80: mov     ecx, dword ptr [esp+24h+var_C]
0x84FD84: mov     large fs:0, ecx
0x84FD8B: pop     ecx
0x84FD8C: pop     edi
0x84FD8D: pop     esi
0x84FD8E: pop     ebp
0x84FD8F: pop     ebx
0x84FD90: add     esp, 10h
0x84FD93: retn    10h
