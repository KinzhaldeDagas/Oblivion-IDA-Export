0x7781F0: sub     esp, 18h
0x7781F3: cmp     dword ptr [ecx+8], 0
0x7781F7: mov     [esp+18h+var_18], ecx
0x7781FA: jnz     short loc_778204
0x7781FC: xor     eax, eax
0x7781FE: add     esp, 18h
0x778201: retn    1Ch
0x778204: cmp     [esp+18h+arg_0], 0
0x778209: jz      short loc_7781FC
0x77820B: push    ebx
0x77820C: mov     ebx, [esp+1Ch+Src]
0x778210: push    ebp
0x778211: mov     ebp, [esp+20h+Dst]
0x778215: push    esi
0x778216: mov     esi, [esp+24h+arg_C]
0x77821A: push    edi
0x77821B: mov     edi, [esp+28h+arg_8]
0x77821F: add     edi, edi
0x778221: add     ebx, ebx
0x778223: test    esi, esi
0x778225: jz      short loc_778272
0x778227: xor     eax, eax
0x778229: lea     ecx, [esp+28h+var_14]
0x77822D: mov     [esp+28h+var_14], eax
0x778231: mov     [esp+28h+var_10], eax
0x778235: mov     [esp+28h+var_C], eax
0x778239: mov     [esp+28h+var_8], eax
0x77823D: mov     [esp+28h+var_4], eax
0x778241: mov     eax, [esi]
0x778243: mov     edx, [eax+34h]
0x778246: push    ecx
0x778247: push    esi
0x778248: call    edx
0x77824A: test    eax, eax
0x77824C: jl      short loc_778272
0x77824E: cmp     [esp+28h+var_14], 65h ; 'e'
0x778253: jnz     short loc_778272
0x778255: cmp     [esp+28h+var_10], 7
0x77825A: jnz     short loc_778272
0x77825C: cmp     [esp+28h+var_C], ebp
0x778260: jnz     short loc_778272
0x778262: mov     eax, [esp+28h+var_8]
0x778266: cmp     eax, [esp+28h+arg_14]
0x77826A: jnz     short loc_778272
0x77826C: cmp     [esp+28h+var_4], edi
0x778270: jnb     short loc_7782D9
0x778272: mov     ecx, [esp+28h+var_18]
0x778276: mov     eax, [ecx+8]
0x778279: push    0
0x77827B: lea     ecx, [esp+2Ch+arg_8]
0x77827F: push    ecx
0x778280: mov     ecx, [esp+30h+arg_14]
0x778284: push    ecx
0x778285: push    65h ; 'e'
0x778287: push    ebp
0x778288: mov     [esp+3Ch+arg_8], 0
0x778290: mov     edx, [eax]
0x778292: mov     edx, [edx+6Ch]
0x778295: push    edi
0x778296: push    eax
0x778297: call    edx
0x778299: test    eax, eax
0x77829B: jge     short loc_7782B2
0x77829D: push    offset aNidx9indexbuff; "NiDX9IndexBufferManager::CreateIndexBuf"...
0x7782A2: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7782A7: add     esp, 4
0x7782AA: xor     esi, esi
0x7782AC: mov     [esp+28h+arg_8], esi
0x7782B0: jmp     short loc_7782B6
0x7782B2: mov     esi, [esp+28h+arg_8]
0x7782B6: test    esi, esi
0x7782B8: jnz     short loc_7782D3
0x7782BA: push    offset aNidx9indexbu_0; "NiDX9IndexBufferManager::PackBuffer> Fa"...
0x7782BF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7782C4: add     esp, 4
0x7782C7: pop     edi
0x7782C8: pop     esi
0x7782C9: pop     ebp
0x7782CA: xor     eax, eax
0x7782CC: pop     ebx
0x7782CD: add     esp, 18h
0x7782D0: retn    1Ch
0x7782D3: mov     eax, [esp+28h+arg_10]
0x7782D7: mov     [eax], edi
0x7782D9: test    ebx, ebx
0x7782DB: jbe     short loc_77833F
0x7782DD: mov     ecx, [esi]
0x7782DF: mov     eax, [ecx+2Ch]
0x7782E2: push    0
0x7782E4: lea     edx, [esp+2Ch+arg_14]
0x7782E8: push    edx
0x7782E9: push    ebx
0x7782EA: push    0
0x7782EC: push    esi
0x7782ED: mov     [esp+3Ch+arg_14], 0
0x7782F5: call    eax
0x7782F7: test    eax, eax
0x7782F9: jl      short loc_778322
0x7782FB: mov     ecx, [esp+24h+Src]
0x7782FF: mov     edx, [esp+24h+Dst]
0x778303: push    ebx; Size
0x778304: push    ecx; Src
0x778305: push    edx; Dst
0x778306: call    _memcpy
0x77830B: mov     eax, [esi]
0x77830D: mov     ecx, [eax+30h]
0x778310: add     esp, 0Ch
0x778313: push    esi
0x778314: call    ecx
0x778316: pop     edi
0x778317: mov     eax, esi
0x778319: pop     esi
0x77831A: pop     ebp
0x77831B: pop     ebx
0x77831C: add     esp, 18h
0x77831F: retn    1Ch
0x778322: push    offset aNidx9indexbu_1; "NiDX9IndexBufferManager::PackBuffer> Fa"...
0x778327: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x77832C: mov     edx, [esi]
0x77832E: mov     eax, [edx+30h]
0x778331: add     esp, 4
0x778334: push    esi
0x778335: call    eax
0x778337: mov     ecx, [esi]
0x778339: mov     edx, [ecx+8]
0x77833C: push    esi
0x77833D: call    edx
0x77833F: pop     edi
0x778340: mov     eax, esi
0x778342: pop     esi
0x778343: pop     ebp
0x778344: pop     ebx
0x778345: add     esp, 18h
0x778348: retn    1Ch
