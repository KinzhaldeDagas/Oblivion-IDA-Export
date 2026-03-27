0x85CFD0: push    0FFFFFFFFh
0x85CFD2: push    offset SEH_85E160
0x85CFD7: mov     eax, large fs:0
0x85CFDD: push    eax
0x85CFDE: push    ebx
0x85CFDF: push    ebp
0x85CFE0: push    esi
0x85CFE1: push    edi
0x85CFE2: mov     eax, ds:0B30AACh
0x85CFE7: xor     eax, esp
0x85CFE9: push    eax
0x85CFEA: lea     eax, [esp+20h+var_C]
0x85CFEE: mov     large fs:0, eax
0x85CFF4: mov     esi, ecx
0x85CFF6: mov     ebx, [esp+20h+arg_8]
0x85CFFA: mov     eax, [ebx+10h]
0x85CFFD: mov     edi, ds:0B477D8h
0x85D003: push    eax
0x85D004: call    sub_848C40
0x85D009: mov     ebp, [ebx+0Ch]
0x85D00C: push    ebp
0x85D00D: mov     ecx, esi
0x85D00F: call    sub_848E50
0x85D014: mov     ebx, [ebx+10h]
0x85D017: mov     ecx, [esp+20h+arg_0]
0x85D01B: mov     eax, [esi]
0x85D01D: mov     edx, [eax+0BCh]
0x85D023: push    ebx
0x85D024: push    ebp
0x85D025: push    ecx
0x85D026: mov     ecx, esi
0x85D028: call    edx
0x85D02A: mov     eax, [edi+24h]
0x85D02D: mov     ebp, [esp+20h+arg_C]
0x85D031: mov     ebx, [eax]
0x85D033: mov     edx, [ebp+0]
0x85D036: mov     eax, [edx+88h]
0x85D03C: push    0
0x85D03E: mov     ecx, ebp
0x85D040: mov     [esp+24h+arg_8], ebx
0x85D044: call    eax
0x85D046: mov     ebx, [ebx+4]
0x85D049: cmp     ebx, eax
0x85D04B: mov     [esp+20h+arg_0], eax
0x85D04F: jz      short loc_85D08A
0x85D051: test    ebx, ebx
0x85D053: jz      short loc_85D075
0x85D055: lea     ecx, [ebx+4]
0x85D058: push    ecx; lpAddend
0x85D059: call    dword ptr ds:0A2807Ch
0x85D05F: test    eax, eax
0x85D061: jnz     short loc_85D071
0x85D063: test    ebx, ebx
0x85D065: jz      short loc_85D071
0x85D067: mov     edx, [ebx]
0x85D069: mov     eax, [edx]
0x85D06B: push    1
0x85D06D: mov     ecx, ebx
0x85D06F: call    eax
0x85D071: mov     eax, [esp+20h+arg_0]
0x85D075: test    eax, eax
0x85D077: mov     ecx, [esp+20h+arg_8]
0x85D07B: mov     [ecx+4], eax
0x85D07E: jz      short loc_85D08A
0x85D080: add     eax, 4
0x85D083: push    eax; lpAddend
0x85D084: call    dword ptr ds:0A28078h
0x85D08A: mov     edx, [esp+20h+arg_8]
0x85D08E: push    ebp
0x85D08F: push    edx
0x85D090: mov     ecx, esi
0x85D092: call    sub_848FA0
0x85D097: mov     eax, [edi+24h]
0x85D09A: mov     ebx, [eax+4]
0x85D09D: push    0
0x85D09F: push    ebp
0x85D0A0: mov     ecx, esi
0x85D0A2: mov     [esp+28h+arg_8], ebx
0x85D0A6: call    sub_848FD0
0x85D0AB: mov     ebx, [ebx+4]
0x85D0AE: cmp     ebx, eax
0x85D0B0: mov     [esp+20h+arg_0], eax
0x85D0B4: jz      short loc_85D0EF
0x85D0B6: test    ebx, ebx
0x85D0B8: jz      short loc_85D0DA
0x85D0BA: lea     ecx, [ebx+4]
0x85D0BD: push    ecx; lpAddend
0x85D0BE: call    dword ptr ds:0A2807Ch
0x85D0C4: test    eax, eax
0x85D0C6: jnz     short loc_85D0D6
0x85D0C8: test    ebx, ebx
0x85D0CA: jz      short loc_85D0D6
0x85D0CC: mov     edx, [ebx]
0x85D0CE: mov     eax, [edx]
0x85D0D0: push    1
0x85D0D2: mov     ecx, ebx
0x85D0D4: call    eax
0x85D0D6: mov     eax, [esp+20h+arg_0]
0x85D0DA: test    eax, eax
0x85D0DC: mov     ecx, [esp+20h+arg_8]
0x85D0E0: mov     [ecx+4], eax
0x85D0E3: jz      short loc_85D0EF
0x85D0E5: add     eax, 4
0x85D0E8: push    eax; lpAddend
0x85D0E9: call    dword ptr ds:0A28078h
0x85D0EF: mov     edx, [esp+20h+arg_8]
0x85D0F3: push    ebp
0x85D0F4: push    edx
0x85D0F5: mov     ecx, esi
0x85D0F7: call    sub_848FA0
0x85D0FC: cmp     byte ptr [esp+20h+arg_10], 0
0x85D101: jnz     short loc_85D13E
0x85D103: mov     ebx, 1
0x85D108: add     [edi+60h], ebx
0x85D10B: mov     [esp+20h+arg_10], edi
0x85D10F: mov     ecx, [esi+38h]
0x85D112: lea     eax, [esp+20h+arg_10]
0x85D116: push    eax
0x85D117: push    ecx
0x85D118: lea     ecx, [esi+40h]
0x85D11B: mov     [esp+28h+var_4], 0
0x85D123: call    sub_76CE40
0x85D128: or      eax, 0FFFFFFFFh
0x85D12B: add     [edi+60h], eax
0x85D12E: mov     [esp+20h+var_4], eax
0x85D132: jnz     short loc_85D13B
0x85D134: mov     ecx, edi
0x85D136: call    sub_7604D0
0x85D13B: add     [esi+38h], ebx
0x85D13E: mov     ecx, [esp+20h+var_C]
0x85D142: mov     large fs:0, ecx
0x85D149: pop     ecx
0x85D14A: pop     edi
0x85D14B: pop     esi
0x85D14C: pop     ebp
0x85D14D: pop     ebx
0x85D14E: add     esp, 0Ch
0x85D151: retn    14h
