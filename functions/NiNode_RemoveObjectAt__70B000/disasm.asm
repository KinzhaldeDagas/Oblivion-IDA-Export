0x70B000: push    0FFFFFFFFh
0x70B002: push    offset SEH_70B000
0x70B007: mov     eax, large fs:0
0x70B00D: push    eax
0x70B00E: push    ecx
0x70B00F: push    ebx
0x70B010: push    esi
0x70B011: push    edi
0x70B012: mov     eax, ds:0B30AACh
0x70B017: xor     eax, esp
0x70B019: push    eax
0x70B01A: lea     eax, [esp+20h+var_C]
0x70B01E: mov     large fs:0, eax
0x70B024: mov     edi, ecx
0x70B026: mov     [esp+20h+var_10], 0
0x70B02E: movzx   eax, word ptr [edi+0B6h]
0x70B035: mov     ebx, [esp+20h+arg_4]
0x70B039: cmp     ebx, eax
0x70B03B: jnb     loc_70B0F8
0x70B041: mov     ecx, [edi+0B0h]
0x70B047: mov     esi, [ecx+ebx*4]
0x70B04A: test    esi, esi
0x70B04C: lea     eax, [ecx+ebx*4]
0x70B04F: mov     [esp+20h+var_10], esi
0x70B053: jz      short loc_70B05F
0x70B055: lea     edx, [esi+4]
0x70B058: push    edx; lpAddend
0x70B059: call    dword ptr ds:0A28078h
0x70B05F: test    esi, esi
0x70B061: mov     [esp+20h+var_4], 0
0x70B069: jz      short loc_70B0A9
0x70B06B: push    ebx
0x70B06C: lea     eax, [esp+24h+arg_4]
0x70B070: push    eax
0x70B071: lea     ecx, [edi+0ACh]
0x70B077: mov     dword ptr [esi+1Ch], 0
0x70B07E: call    sub_6D7F60
0x70B083: mov     eax, [esp+20h+arg_4]
0x70B087: test    eax, eax
0x70B089: jz      short loc_70B0A9
0x70B08B: mov     edi, eax
0x70B08D: add     eax, 4
0x70B090: push    eax; lpAddend
0x70B091: call    dword ptr ds:0A2807Ch
0x70B097: test    eax, eax
0x70B099: jnz     short loc_70B0A9
0x70B09B: test    edi, edi
0x70B09D: jz      short loc_70B0A9
0x70B09F: mov     edx, [edi]
0x70B0A1: mov     eax, [edx]
0x70B0A3: push    1
0x70B0A5: mov     ecx, edi
0x70B0A7: call    eax
0x70B0A9: test    esi, esi
0x70B0AB: mov     edi, [esp+20h+arg_0]
0x70B0AF: mov     [edi], esi
0x70B0B1: jz      short loc_70B0BD
0x70B0B3: lea     ecx, [esi+4]
0x70B0B6: push    ecx; lpAddend
0x70B0B7: call    dword ptr ds:0A28078h
0x70B0BD: test    esi, esi
0x70B0BF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x70B0C7: jz      short loc_70B0E1
0x70B0C9: lea     edx, [esi+4]
0x70B0CC: push    edx; lpAddend
0x70B0CD: call    dword ptr ds:0A2807Ch
0x70B0D3: test    eax, eax
0x70B0D5: jnz     short loc_70B0E1
0x70B0D7: mov     eax, [esi]
0x70B0D9: mov     edx, [eax]
0x70B0DB: push    1
0x70B0DD: mov     ecx, esi
0x70B0DF: call    edx
0x70B0E1: mov     eax, edi
0x70B0E3: mov     ecx, [esp+20h+var_C]
0x70B0E7: mov     large fs:0, ecx
0x70B0EE: pop     ecx
0x70B0EF: pop     edi
0x70B0F0: pop     esi
0x70B0F1: pop     ebx
0x70B0F2: add     esp, 10h
0x70B0F5: retn    8
0x70B0F8: mov     eax, [esp+20h+arg_0]
0x70B0FC: mov     dword ptr [eax], 0
0x70B102: mov     ecx, [esp+20h+var_C]
0x70B106: mov     large fs:0, ecx
0x70B10D: pop     ecx
0x70B10E: pop     edi
0x70B10F: pop     esi
0x70B110: pop     ebx
0x70B111: add     esp, 10h
0x70B114: retn    8
