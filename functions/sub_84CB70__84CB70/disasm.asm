0x84CB70: push    0FFFFFFFFh
0x84CB72: push    offset SEH_879360
0x84CB77: mov     eax, large fs:0
0x84CB7D: push    eax
0x84CB7E: push    ecx
0x84CB7F: push    ebx
0x84CB80: push    ebp
0x84CB81: push    esi
0x84CB82: push    edi
0x84CB83: mov     eax, ds:0B30AACh
0x84CB88: xor     eax, esp
0x84CB8A: push    eax
0x84CB8B: lea     eax, [esp+24h+var_C]
0x84CB8F: mov     large fs:0, eax
0x84CB95: mov     esi, ecx
0x84CB97: mov     [esp+24h+var_10], esi
0x84CB9B: mov     edi, [esp+24h+arg_8]
0x84CB9F: mov     eax, [edi+10h]
0x84CBA2: mov     ebx, ds:0B456A0h
0x84CBA8: push    eax
0x84CBA9: call    sub_848DA0
0x84CBAE: mov     edi, [edi+0Ch]
0x84CBB1: push    edi
0x84CBB2: mov     ecx, esi
0x84CBB4: call    sub_848E50
0x84CBB9: mov     eax, [ebx+24h]
0x84CBBC: mov     esi, [esp+24h+arg_C]
0x84CBC0: mov     edi, [eax]
0x84CBC2: mov     edx, [esi]
0x84CBC4: mov     eax, [edx+88h]
0x84CBCA: push    0
0x84CBCC: mov     ecx, esi
0x84CBCE: mov     [esp+28h+arg_8], edi
0x84CBD2: call    eax
0x84CBD4: mov     edi, [edi+4]
0x84CBD7: mov     ebp, eax
0x84CBD9: cmp     edi, ebp
0x84CBDB: jz      short loc_84CC14
0x84CBDD: test    edi, edi
0x84CBDF: jz      short loc_84CBFD
0x84CBE1: lea     ecx, [edi+4]
0x84CBE4: push    ecx; lpAddend
0x84CBE5: call    dword ptr ds:0A2807Ch
0x84CBEB: test    eax, eax
0x84CBED: jnz     short loc_84CBFD
0x84CBEF: test    edi, edi
0x84CBF1: jz      short loc_84CBFD
0x84CBF3: mov     edx, [edi]
0x84CBF5: mov     eax, [edx]
0x84CBF7: push    1
0x84CBF9: mov     ecx, edi
0x84CBFB: call    eax
0x84CBFD: test    ebp, ebp
0x84CBFF: mov     edi, [esp+24h+arg_8]
0x84CC03: mov     [edi+4], ebp
0x84CC06: jz      short loc_84CC18
0x84CC08: add     ebp, 4
0x84CC0B: push    ebp; lpAddend
0x84CC0C: call    dword ptr ds:0A28078h
0x84CC12: jmp     short loc_84CC18
0x84CC14: mov     edi, [esp+24h+arg_8]
0x84CC18: test    edi, edi
0x84CC1A: jz      short loc_84CC36
0x84CC1C: cmp     byte ptr ds:0B42CDDh, 0
0x84CC23: jz      short loc_84CC36
0x84CC25: mov     edx, [esi]
0x84CC27: mov     eax, [edx+78h]
0x84CC2A: mov     ecx, esi
0x84CC2C: call    eax
0x84CC2E: push    eax
0x84CC2F: mov     ecx, edi
0x84CC31: call    sub_7715E0
0x84CC36: mov     ecx, [ebx+24h]
0x84CC39: mov     edi, [ecx+4]
0x84CC3C: mov     edx, [esi]
0x84CC3E: mov     eax, [edx+8Ch]
0x84CC44: push    0
0x84CC46: mov     ecx, esi
0x84CC48: mov     [esp+28h+arg_8], edi
0x84CC4C: call    eax
0x84CC4E: test    eax, eax
0x84CC50: jz      short loc_84CC64
0x84CC52: mov     edx, [esi]
0x84CC54: mov     eax, [edx+8Ch]
0x84CC5A: push    0
0x84CC5C: mov     ecx, esi
0x84CC5E: call    eax
0x84CC60: mov     ebp, eax
0x84CC62: jmp     short loc_84CC79
0x84CC64: test    dword ptr [esi+1Ch], 80h
0x84CC6B: mov     ebp, ds:0B430F0h
0x84CC71: ja      short loc_84CC79
0x84CC73: mov     ebp, ds:0B430DCh
0x84CC79: mov     edi, [edi+4]
0x84CC7C: cmp     edi, ebp
0x84CC7E: jz      short loc_84CCB7
0x84CC80: test    edi, edi
0x84CC82: jz      short loc_84CCA0
0x84CC84: lea     ecx, [edi+4]
0x84CC87: push    ecx; lpAddend
0x84CC88: call    dword ptr ds:0A2807Ch
0x84CC8E: test    eax, eax
0x84CC90: jnz     short loc_84CCA0
0x84CC92: test    edi, edi
0x84CC94: jz      short loc_84CCA0
0x84CC96: mov     edx, [edi]
0x84CC98: mov     eax, [edx]
0x84CC9A: push    1
0x84CC9C: mov     ecx, edi
0x84CC9E: call    eax
0x84CCA0: test    ebp, ebp
0x84CCA2: mov     edi, [esp+24h+arg_8]
0x84CCA6: mov     [edi+4], ebp
0x84CCA9: jz      short loc_84CCBB
0x84CCAB: add     ebp, 4
0x84CCAE: push    ebp; lpAddend
0x84CCAF: call    dword ptr ds:0A28078h
0x84CCB5: jmp     short loc_84CCBB
0x84CCB7: mov     edi, [esp+24h+arg_8]
0x84CCBB: test    edi, edi
0x84CCBD: jz      short loc_84CCD9
0x84CCBF: cmp     byte ptr ds:0B42CDDh, 0
0x84CCC6: jz      short loc_84CCD9
0x84CCC8: mov     edx, [esi]
0x84CCCA: mov     eax, [edx+78h]
0x84CCCD: mov     ecx, esi
0x84CCCF: call    eax
0x84CCD1: push    eax
0x84CCD2: mov     ecx, edi
0x84CCD4: call    sub_7715E0
0x84CCD9: mov     ecx, [ebx+24h]
0x84CCDC: mov     edi, [ecx+8]
0x84CCDF: mov     edx, [esi]
0x84CCE1: mov     eax, [edx+90h]
0x84CCE7: push    0
0x84CCE9: mov     ecx, esi
0x84CCEB: mov     [esp+28h+arg_8], edi
0x84CCEF: call    eax
0x84CCF1: mov     edi, [edi+4]
0x84CCF4: mov     ebp, eax
0x84CCF6: cmp     edi, ebp
0x84CCF8: jz      short loc_84CD31
0x84CCFA: test    edi, edi
0x84CCFC: jz      short loc_84CD1A
0x84CCFE: lea     ecx, [edi+4]
0x84CD01: push    ecx; lpAddend
0x84CD02: call    dword ptr ds:0A2807Ch
0x84CD08: test    eax, eax
0x84CD0A: jnz     short loc_84CD1A
0x84CD0C: test    edi, edi
0x84CD0E: jz      short loc_84CD1A
0x84CD10: mov     edx, [edi]
0x84CD12: mov     eax, [edx]
0x84CD14: push    1
0x84CD16: mov     ecx, edi
0x84CD18: call    eax
0x84CD1A: test    ebp, ebp
0x84CD1C: mov     edi, [esp+24h+arg_8]
0x84CD20: mov     [edi+4], ebp
0x84CD23: jz      short loc_84CD35
0x84CD25: add     ebp, 4
0x84CD28: push    ebp; lpAddend
0x84CD29: call    dword ptr ds:0A28078h
0x84CD2F: jmp     short loc_84CD35
0x84CD31: mov     edi, [esp+24h+arg_8]
0x84CD35: test    edi, edi
0x84CD37: jz      short loc_84CD53
0x84CD39: cmp     byte ptr ds:0B42CDDh, 0
0x84CD40: jz      short loc_84CD53
0x84CD42: mov     edx, [esi]
0x84CD44: mov     eax, [edx+78h]
0x84CD47: mov     ecx, esi
0x84CD49: call    eax
0x84CD4B: push    eax
0x84CD4C: mov     ecx, edi
0x84CD4E: call    sub_7715E0
0x84CD53: mov     edi, 1
0x84CD58: add     [ebx+60h], edi
0x84CD5B: mov     [esp+24h+arg_8], ebx
0x84CD5F: mov     esi, [esp+24h+var_10]
0x84CD63: mov     edx, [esi+38h]
0x84CD66: lea     ecx, [esp+24h+arg_8]
0x84CD6A: push    ecx
0x84CD6B: push    edx
0x84CD6C: lea     ecx, [esi+40h]
0x84CD6F: mov     [esp+2Ch+var_4], 0
0x84CD77: call    sub_76CE40
0x84CD7C: or      eax, 0FFFFFFFFh
0x84CD7F: add     [ebx+60h], eax
0x84CD82: mov     [esp+24h+var_4], eax
0x84CD86: jnz     short loc_84CD8F
0x84CD88: mov     ecx, ebx
0x84CD8A: call    sub_7604D0
0x84CD8F: add     [esi+38h], edi
0x84CD92: mov     ecx, dword ptr [esp+24h+var_C]
0x84CD96: mov     large fs:0, ecx
0x84CD9D: pop     ecx
0x84CD9E: pop     edi
0x84CD9F: pop     esi
0x84CDA0: pop     ebp
0x84CDA1: pop     ebx
0x84CDA2: add     esp, 10h
0x84CDA5: retn    10h
