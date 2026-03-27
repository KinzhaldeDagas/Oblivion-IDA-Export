0x845CF0: push    0FFFFFFFFh
0x845CF2: push    offset SEH_851CA0
0x845CF7: mov     eax, large fs:0
0x845CFD: push    eax
0x845CFE: push    ecx
0x845CFF: push    ebx
0x845D00: push    ebp
0x845D01: push    esi
0x845D02: push    edi
0x845D03: mov     eax, ds:0B30AACh
0x845D08: xor     eax, esp
0x845D0A: push    eax
0x845D0B: lea     eax, [esp+24h+var_C]
0x845D0F: mov     large fs:0, eax
0x845D15: mov     ebp, ecx
0x845D17: mov     eax, ds:0B42EB8h
0x845D1C: mov     ecx, [eax+0Ch]
0x845D1F: mov     ebx, [esp+24h+arg_8]
0x845D23: mov     edx, [ecx]
0x845D25: mov     eax, [ebx+0Ch]
0x845D28: mov     esi, ds:0B45B7Ch
0x845D2E: push    eax
0x845D2F: mov     ecx, ebp
0x845D31: mov     [esp+28h+var_10], edx
0x845D35: call    sub_848E50
0x845D3A: mov     eax, [ebx+8]
0x845D3D: test    byte ptr [eax+18h], 1
0x845D41: jnz     short loc_845D66
0x845D43: mov     ax, [eax+18h]
0x845D47: shr     ax, 9
0x845D4B: test    al, 1
0x845D4D: jnz     short loc_845D66
0x845D4F: mov     ecx, ds:0B430B0h
0x845D55: mov     eax, ds:0B45274h[ecx*8]
0x845D5C: push    eax; a2
0x845D5D: mov     ecx, esi; this
0x845D5F: call    sub_7AEC60
0x845D64: jmp     short loc_845DAB
0x845D66: mov     edx, ds:0B430B0h
0x845D6C: mov     ebx, ds:0B45278h[edx*8]
0x845D73: mov     edi, [esi+44h]
0x845D76: cmp     edi, ebx
0x845D78: jz      short loc_845DAB
0x845D7A: test    edi, edi
0x845D7C: jz      short loc_845D9A
0x845D7E: lea     eax, [edi+4]
0x845D81: push    eax; lpAddend
0x845D82: call    dword ptr ds:0A2807Ch
0x845D88: test    eax, eax
0x845D8A: jnz     short loc_845D9A
0x845D8C: test    edi, edi
0x845D8E: jz      short loc_845D9A
0x845D90: mov     edx, [edi]
0x845D92: mov     eax, [edx]
0x845D94: push    1
0x845D96: mov     ecx, edi
0x845D98: call    eax
0x845D9A: test    ebx, ebx
0x845D9C: mov     [esi+44h], ebx
0x845D9F: jz      short loc_845DAB
0x845DA1: add     ebx, 4
0x845DA4: push    ebx; lpAddend
0x845DA5: call    dword ptr ds:0A28078h
0x845DAB: mov     ecx, [esi+24h]
0x845DAE: mov     edi, [ecx]
0x845DB0: mov     ecx, [esp+24h+arg_C]
0x845DB4: mov     edx, [ecx]
0x845DB6: mov     eax, [edx+88h]
0x845DBC: push    0
0x845DBE: call    eax
0x845DC0: mov     ebx, [edi+4]
0x845DC3: cmp     ebx, eax
0x845DC5: mov     [esp+24h+arg_8], eax
0x845DC9: jz      short loc_845E00
0x845DCB: test    ebx, ebx
0x845DCD: jz      short loc_845DEF
0x845DCF: lea     ecx, [ebx+4]
0x845DD2: push    ecx; lpAddend
0x845DD3: call    dword ptr ds:0A2807Ch
0x845DD9: test    eax, eax
0x845DDB: jnz     short loc_845DEB
0x845DDD: test    ebx, ebx
0x845DDF: jz      short loc_845DEB
0x845DE1: mov     edx, [ebx]
0x845DE3: mov     eax, [edx]
0x845DE5: push    1
0x845DE7: mov     ecx, ebx
0x845DE9: call    eax
0x845DEB: mov     eax, [esp+24h+arg_8]
0x845DEF: test    eax, eax
0x845DF1: mov     [edi+4], eax
0x845DF4: jz      short loc_845E00
0x845DF6: add     eax, 4
0x845DF9: push    eax; lpAddend
0x845DFA: call    dword ptr ds:0A28078h
0x845E00: mov     ecx, [esp+24h+arg_C]
0x845E04: push    ecx
0x845E05: push    edi
0x845E06: mov     ecx, ebp
0x845E08: call    sub_848FA0
0x845E0D: mov     eax, [esp+24h+var_10]
0x845E11: mov     edx, [esi+24h]
0x845E14: mov     ecx, [eax+114h]; this
0x845E1A: mov     ebx, [edx+18h]
0x845E1D: call    BSRenderedTexture__GetInnerTexture
0x845E22: mov     edi, [ebx+4]
0x845E25: cmp     edi, eax
0x845E27: mov     [esp+24h+arg_C], eax
0x845E2B: jz      short loc_845E62
0x845E2D: test    edi, edi
0x845E2F: jz      short loc_845E51
0x845E31: lea     ecx, [edi+4]
0x845E34: push    ecx; lpAddend
0x845E35: call    dword ptr ds:0A2807Ch
0x845E3B: test    eax, eax
0x845E3D: jnz     short loc_845E4D
0x845E3F: test    edi, edi
0x845E41: jz      short loc_845E4D
0x845E43: mov     edx, [edi]
0x845E45: mov     eax, [edx]
0x845E47: push    1
0x845E49: mov     ecx, edi
0x845E4B: call    eax
0x845E4D: mov     eax, [esp+24h+arg_C]
0x845E51: test    eax, eax
0x845E53: mov     [ebx+4], eax
0x845E56: jz      short loc_845E62
0x845E58: add     eax, 4
0x845E5B: push    eax; lpAddend
0x845E5C: call    dword ptr ds:0A28078h
0x845E62: push    0
0x845E64: mov     ecx, ebx
0x845E66: call    sub_7715E0
0x845E6B: mov     edi, 1
0x845E70: add     [esi+60h], edi
0x845E73: mov     [esp+24h+arg_C], esi
0x845E77: mov     edx, [ebp+38h]
0x845E7A: lea     ecx, [esp+24h+arg_C]
0x845E7E: push    ecx
0x845E7F: push    edx
0x845E80: lea     ecx, [ebp+40h]
0x845E83: mov     [esp+2Ch+var_4], 0
0x845E8B: call    sub_76CE40
0x845E90: or      eax, 0FFFFFFFFh
0x845E93: add     [esi+60h], eax
0x845E96: mov     [esp+24h+var_4], eax
0x845E9A: jnz     short loc_845EA3
0x845E9C: mov     ecx, esi
0x845E9E: call    sub_7604D0
0x845EA3: add     [ebp+38h], edi
0x845EA6: mov     ecx, dword ptr [esp+24h+var_C]
0x845EAA: mov     large fs:0, ecx
0x845EB1: pop     ecx
0x845EB2: pop     edi
0x845EB3: pop     esi
0x845EB4: pop     ebp
0x845EB5: pop     ebx
0x845EB6: add     esp, 10h
0x845EB9: retn    10h
