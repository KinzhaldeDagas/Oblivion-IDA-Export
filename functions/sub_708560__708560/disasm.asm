0x708560: push    0FFFFFFFFh
0x708562: push    offset SEH_70B000
0x708567: mov     eax, large fs:0
0x70856D: push    eax
0x70856E: push    ecx
0x70856F: push    ebp
0x708570: push    esi
0x708571: push    edi
0x708572: mov     eax, ds:0B30AACh
0x708577: xor     eax, esp
0x708579: push    eax
0x70857A: lea     eax, [esp+20h+var_C]
0x70857E: mov     large fs:0, eax
0x708584: mov     ebp, ecx
0x708586: mov     [esp+20h+var_10], 0
0x70858E: cmp     [esp+20h+arg_4], 0Ah
0x708593: jge     short loc_7085FD
0x708595: mov     edi, [ebp+9Ch]
0x70859B: test    edi, edi
0x70859D: jz      short loc_7085FD
0x70859F: nop
0x7085A0: mov     esi, [edi+8]
0x7085A3: test    esi, esi
0x7085A5: lea     eax, [edi+8]
0x7085A8: mov     edi, [edi]
0x7085AA: mov     [esp+20h+var_10], esi
0x7085AE: jz      short loc_7085BA
0x7085B0: lea     eax, [esi+4]
0x7085B3: push    eax; lpAddend
0x7085B4: call    dword ptr ds:0A28078h
0x7085BA: test    esi, esi
0x7085BC: mov     [esp+20h+var_4], 0
0x7085C4: jz      short loc_7085D5
0x7085C6: mov     edx, [esi]
0x7085C8: mov     eax, [edx+4Ch]
0x7085CB: mov     ecx, esi
0x7085CD: call    eax
0x7085CF: cmp     eax, [esp+20h+arg_4]
0x7085D3: jz      short loc_70861C
0x7085D5: test    esi, esi
0x7085D7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7085DF: jz      short loc_7085F9
0x7085E1: lea     ecx, [esi+4]
0x7085E4: push    ecx; lpAddend
0x7085E5: call    dword ptr ds:0A2807Ch
0x7085EB: test    eax, eax
0x7085ED: jnz     short loc_7085F9
0x7085EF: mov     edx, [esi]
0x7085F1: mov     eax, [edx]
0x7085F3: push    1
0x7085F5: mov     ecx, esi
0x7085F7: call    eax
0x7085F9: test    edi, edi
0x7085FB: jnz     short loc_7085A0
0x7085FD: mov     eax, [esp+20h+arg_0]
0x708601: mov     dword ptr [eax], 0
0x708607: mov     ecx, dword ptr [esp+20h+var_C]
0x70860B: mov     large fs:0, ecx
0x708612: pop     ecx
0x708613: pop     edi
0x708614: pop     esi
0x708615: pop     ebp
0x708616: add     esp, 10h
0x708619: retn    8
0x70861C: lea     ecx, [esp+20h+var_10]
0x708620: push    ecx
0x708621: lea     edx, [esp+24h+arg_4]
0x708625: push    edx
0x708626: lea     ecx, [ebp+98h]
0x70862C: call    sub_4A0E50
0x708631: mov     esi, [esp+20h+arg_4]
0x708635: test    esi, esi
0x708637: jz      short loc_708655
0x708639: lea     eax, [esi+4]
0x70863C: push    eax; lpAddend
0x70863D: call    dword ptr ds:0A2807Ch
0x708643: test    eax, eax
0x708645: jnz     short loc_708655
0x708647: test    esi, esi
0x708649: jz      short loc_708655
0x70864B: mov     edx, [esi]
0x70864D: mov     eax, [edx]
0x70864F: push    1
0x708651: mov     ecx, esi
0x708653: call    eax
0x708655: mov     esi, [esp+20h+var_10]
0x708659: test    esi, esi
0x70865B: mov     edi, [esp+20h+arg_0]
0x70865F: mov     [edi], esi
0x708661: jz      short loc_70866D
0x708663: lea     ecx, [esi+4]
0x708666: push    ecx; lpAddend
0x708667: call    dword ptr ds:0A28078h
0x70866D: test    esi, esi
0x70866F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x708677: jz      short loc_708691
0x708679: lea     edx, [esi+4]
0x70867C: push    edx; lpAddend
0x70867D: call    dword ptr ds:0A2807Ch
0x708683: test    eax, eax
0x708685: jnz     short loc_708691
0x708687: mov     eax, [esi]
0x708689: mov     edx, [eax]
0x70868B: push    1
0x70868D: mov     ecx, esi
0x70868F: call    edx
0x708691: mov     eax, edi
0x708693: mov     ecx, dword ptr [esp+20h+var_C]
0x708697: mov     large fs:0, ecx
0x70869E: pop     ecx
0x70869F: pop     edi
0x7086A0: pop     esi
0x7086A1: pop     ebp
0x7086A2: add     esp, 10h
0x7086A5: retn    8
