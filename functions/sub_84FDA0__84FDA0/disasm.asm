0x84FDA0: push    0FFFFFFFFh
0x84FDA2: push    offset SEH_851CA0
0x84FDA7: mov     eax, large fs:0
0x84FDAD: push    eax
0x84FDAE: push    ecx
0x84FDAF: push    ebx
0x84FDB0: push    ebp
0x84FDB1: push    esi
0x84FDB2: push    edi
0x84FDB3: mov     eax, ds:0B30AACh
0x84FDB8: xor     eax, esp
0x84FDBA: push    eax
0x84FDBB: lea     eax, [esp+24h+var_C]
0x84FDBF: mov     large fs:0, eax
0x84FDC5: mov     ebp, ecx
0x84FDC7: mov     esi, ds:0B459E8h
0x84FDCD: mov     eax, [esi+24h]
0x84FDD0: mov     ebx, [esp+24h+arg_C]
0x84FDD4: mov     edi, [eax]
0x84FDD6: mov     edx, [ebx]
0x84FDD8: mov     eax, [edx+8Ch]
0x84FDDE: push    0
0x84FDE0: mov     ecx, ebx
0x84FDE2: mov     [esp+28h+var_10], edi
0x84FDE6: call    eax
0x84FDE8: test    eax, eax
0x84FDEA: jz      short loc_84FDFE
0x84FDEC: mov     edx, [ebx]
0x84FDEE: mov     eax, [edx+8Ch]
0x84FDF4: push    0
0x84FDF6: mov     ecx, ebx
0x84FDF8: call    eax
0x84FDFA: mov     ebx, eax
0x84FDFC: jmp     short loc_84FE13
0x84FDFE: test    dword ptr [ebx+1Ch], 80h
0x84FE05: mov     ebx, ds:0B430F0h
0x84FE0B: ja      short loc_84FE13
0x84FE0D: mov     ebx, ds:0B430DCh
0x84FE13: mov     edi, [edi+4]
0x84FE16: cmp     edi, ebx
0x84FE18: jz      short loc_84FE51
0x84FE1A: test    edi, edi
0x84FE1C: jz      short loc_84FE3A
0x84FE1E: lea     ecx, [edi+4]
0x84FE21: push    ecx; lpAddend
0x84FE22: call    dword ptr ds:0A2807Ch
0x84FE28: test    eax, eax
0x84FE2A: jnz     short loc_84FE3A
0x84FE2C: test    edi, edi
0x84FE2E: jz      short loc_84FE3A
0x84FE30: mov     edx, [edi]
0x84FE32: mov     eax, [edx]
0x84FE34: push    1
0x84FE36: mov     ecx, edi
0x84FE38: call    eax
0x84FE3A: test    ebx, ebx
0x84FE3C: mov     edi, [esp+24h+var_10]
0x84FE40: mov     [edi+4], ebx
0x84FE43: jz      short loc_84FE55
0x84FE45: add     ebx, 4
0x84FE48: push    ebx; lpAddend
0x84FE49: call    dword ptr ds:0A28078h
0x84FE4F: jmp     short loc_84FE55
0x84FE51: mov     edi, [esp+24h+var_10]
0x84FE55: test    edi, edi
0x84FE57: jz      short loc_84FE75
0x84FE59: cmp     byte ptr ds:0B42CDDh, 0
0x84FE60: jz      short loc_84FE75
0x84FE62: mov     ecx, [esp+24h+arg_C]
0x84FE66: mov     edx, [ecx]
0x84FE68: mov     eax, [edx+78h]
0x84FE6B: call    eax
0x84FE6D: push    eax
0x84FE6E: mov     ecx, edi
0x84FE70: call    sub_7715E0
0x84FE75: mov     edi, 1
0x84FE7A: add     [esi+60h], edi
0x84FE7D: mov     [esp+24h+arg_C], esi
0x84FE81: mov     edx, [ebp+38h]
0x84FE84: lea     ecx, [esp+24h+arg_C]
0x84FE88: push    ecx
0x84FE89: push    edx
0x84FE8A: lea     ecx, [ebp+40h]
0x84FE8D: mov     [esp+2Ch+var_4], 0
0x84FE95: call    sub_76CE40
0x84FE9A: or      eax, 0FFFFFFFFh
0x84FE9D: add     [esi+60h], eax
0x84FEA0: mov     [esp+24h+var_4], eax
0x84FEA4: jnz     short loc_84FEAD
0x84FEA6: mov     ecx, esi
0x84FEA8: call    sub_7604D0
0x84FEAD: add     [ebp+38h], edi
0x84FEB0: mov     ecx, dword ptr [esp+24h+var_C]
0x84FEB4: mov     large fs:0, ecx
0x84FEBB: pop     ecx
0x84FEBC: pop     edi
0x84FEBD: pop     esi
0x84FEBE: pop     ebp
0x84FEBF: pop     ebx
0x84FEC0: add     esp, 10h
0x84FEC3: retn    10h
