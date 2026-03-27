0x6DC000: push    ebx
0x6DC001: mov     ebx, [esp+4+arg_0]
0x6DC005: push    ebp
0x6DC006: push    esi
0x6DC007: push    edi
0x6DC008: push    ebx
0x6DC009: mov     esi, ecx
0x6DC00B: call    j_j_nullsub_3
0x6DC010: mov     ecx, ebx
0x6DC012: call    sub_7124A0
0x6DC017: mov     edi, [esi+18h]
0x6DC01A: mov     ebp, eax
0x6DC01C: cmp     edi, ebp
0x6DC01E: jz      short loc_6DC051
0x6DC020: test    edi, edi
0x6DC022: jz      short loc_6DC040
0x6DC024: lea     eax, [edi+4]
0x6DC027: push    eax; lpAddend
0x6DC028: call    dword ptr ds:0A2807Ch
0x6DC02E: test    eax, eax
0x6DC030: jnz     short loc_6DC040
0x6DC032: test    edi, edi
0x6DC034: jz      short loc_6DC040
0x6DC036: mov     edx, [edi]
0x6DC038: mov     eax, [edx]
0x6DC03A: push    1
0x6DC03C: mov     ecx, edi
0x6DC03E: call    eax
0x6DC040: test    ebp, ebp
0x6DC042: mov     [esi+18h], ebp
0x6DC045: jz      short loc_6DC051
0x6DC047: add     ebp, 4
0x6DC04A: push    ebp; lpAddend
0x6DC04B: call    dword ptr ds:0A28078h
0x6DC051: mov     ecx, ebx
0x6DC053: call    sub_7124A0
0x6DC058: mov     edi, [esi+1Ch]
0x6DC05B: mov     ebx, eax
0x6DC05D: cmp     edi, ebx
0x6DC05F: jz      short loc_6DC092
0x6DC061: test    edi, edi
0x6DC063: jz      short loc_6DC081
0x6DC065: lea     ecx, [edi+4]
0x6DC068: push    ecx; lpAddend
0x6DC069: call    dword ptr ds:0A2807Ch
0x6DC06F: test    eax, eax
0x6DC071: jnz     short loc_6DC081
0x6DC073: test    edi, edi
0x6DC075: jz      short loc_6DC081
0x6DC077: mov     edx, [edi]
0x6DC079: mov     eax, [edx]
0x6DC07B: push    1
0x6DC07D: mov     ecx, edi
0x6DC07F: call    eax
0x6DC081: test    ebx, ebx
0x6DC083: mov     [esi+1Ch], ebx
0x6DC086: jz      short loc_6DC092
0x6DC088: add     ebx, 4
0x6DC08B: push    ebx; lpAddend
0x6DC08C: call    dword ptr ds:0A28078h
0x6DC092: or      word ptr [esi+0Ch], 1
0x6DC097: movzx   eax, word ptr [esi+0Ch]
0x6DC09B: shr     al, 4
0x6DC09E: test    al, 1
0x6DC0A0: jz      short loc_6DC0B8
0x6DC0A2: test    byte ptr [esi+0Ch], 1
0x6DC0A6: jz      short loc_6DC0B8
0x6DC0A8: mov     ecx, esi
0x6DC0AA: call    sub_6DBB10
0x6DC0AF: fstp    dword ptr [esi+24h]
0x6DC0B2: and     word ptr [esi+0Ch], 0FFFEh
0x6DC0B8: mov     eax, [esi+18h]
0x6DC0BB: test    eax, eax
0x6DC0BD: jz      short loc_6DC0E3
0x6DC0BF: mov     ecx, [eax+8]
0x6DC0C2: test    ecx, ecx
0x6DC0C4: mov     edx, [eax+10h]
0x6DC0C7: mov     eax, [eax+0Ch]
0x6DC0CA: jbe     short loc_6DC0E3
0x6DC0CC: mov     edx, ds:0B3D130h[edx*4]
0x6DC0D3: push    ecx
0x6DC0D4: mov     [esp+14h+arg_0], edx
0x6DC0D8: push    eax
0x6DC0D9: call    [esp+18h+arg_0]
0x6DC0DD: fstp    dword ptr [esi+34h]
0x6DC0E0: add     esp, 8
0x6DC0E3: pop     edi
0x6DC0E4: pop     esi
0x6DC0E5: pop     ebp
0x6DC0E6: pop     ebx
0x6DC0E7: retn    4
