0x844C50: push    0FFFFFFFFh
0x844C52: push    offset SEH_851CA0
0x844C57: mov     eax, large fs:0
0x844C5D: push    eax
0x844C5E: push    ecx
0x844C5F: push    ebx
0x844C60: push    ebp
0x844C61: push    esi
0x844C62: push    edi
0x844C63: mov     eax, ds:0B30AACh
0x844C68: xor     eax, esp
0x844C6A: push    eax
0x844C6B: lea     eax, [esp+24h+var_C]
0x844C6F: mov     large fs:0, eax
0x844C75: mov     edi, ecx
0x844C77: mov     ecx, [esp+24h+arg_0]
0x844C7B: mov     eax, [edi]
0x844C7D: mov     ebx, ds:0B45BB0h
0x844C83: mov     edx, [eax+0BCh]
0x844C89: push    0
0x844C8B: push    0
0x844C8D: push    ecx
0x844C8E: mov     ecx, edi
0x844C90: mov     [esp+30h+var_10], ebx
0x844C94: call    edx
0x844C96: mov     esi, [esp+24h+arg_C]
0x844C9A: mov     eax, [esi+1Ch]
0x844C9D: shr     eax, 1Ch
0x844CA0: movzx   eax, ax
0x844CA3: push    eax
0x844CA4: call    GetShadowSceneNode
0x844CA9: add     esp, 4
0x844CAC: cmp     byte ptr ds:0B43074h, 0
0x844CB3: jz      short loc_844CF0
0x844CB5: test    dword ptr [esi+1Ch], 200000h
0x844CBC: jbe     short loc_844CCA
0x844CBE: mov     ecx, ds:0B430F4h
0x844CC4: mov     [esp+24h+arg_0], ecx
0x844CC8: jmp     short loc_844D13
0x844CCA: test    eax, eax
0x844CCC: jz      short loc_844D1A
0x844CCE: cmp     byte ptr ds:0B430ADh, 0
0x844CD5: jz      short loc_844CE4
0x844CD7: mov     ecx, [eax+120h]; this
0x844CDD: call    BSRenderedTexture__GetInnerTexture
0x844CE2: jmp     short loc_844D0F
0x844CE4: mov     edx, ds:0B430F4h
0x844CEA: mov     [esp+24h+arg_0], edx
0x844CEE: jmp     short loc_844D13
0x844CF0: test    eax, eax
0x844CF2: jz      short loc_844D1A
0x844CF4: cmp     byte ptr ds:0B430ADh, 0
0x844CFB: jz      short loc_844D0A
0x844CFD: mov     ecx, [eax+120h]; this
0x844D03: call    BSRenderedTexture__GetInnerTexture
0x844D08: jmp     short loc_844D0F
0x844D0A: mov     eax, ds:0B430F4h
0x844D0F: mov     [esp+24h+arg_0], eax
0x844D13: cmp     [esp+24h+arg_0], 0
0x844D18: jnz     short loc_844D24
0x844D1A: mov     ecx, ds:0B430F4h
0x844D20: mov     [esp+24h+arg_0], ecx
0x844D24: cmp     byte ptr ds:0B42CE3h, 0
0x844D2B: jnz     short loc_844D3F
0x844D2D: fld     dword ptr [esi+0A4h]
0x844D33: fmul    dword ptr ds:0B464A4h
0x844D39: fstp    dword ptr ds:0B464A4h
0x844D3F: mov     edx, [ebx+24h]
0x844D42: mov     ebx, [edx]
0x844D44: push    0
0x844D46: push    esi
0x844D47: mov     ecx, edi
0x844D49: call    sub_848FD0
0x844D4E: mov     esi, [ebx+4]
0x844D51: mov     ebp, eax
0x844D53: cmp     esi, ebp
0x844D55: jz      short loc_844D88
0x844D57: test    esi, esi
0x844D59: jz      short loc_844D77
0x844D5B: lea     eax, [esi+4]
0x844D5E: push    eax; lpAddend
0x844D5F: call    dword ptr ds:0A2807Ch
0x844D65: test    eax, eax
0x844D67: jnz     short loc_844D77
0x844D69: test    esi, esi
0x844D6B: jz      short loc_844D77
0x844D6D: mov     edx, [esi]
0x844D6F: mov     eax, [edx]
0x844D71: push    1
0x844D73: mov     ecx, esi
0x844D75: call    eax
0x844D77: test    ebp, ebp
0x844D79: mov     [ebx+4], ebp
0x844D7C: jz      short loc_844D88
0x844D7E: add     ebp, 4
0x844D81: push    ebp; lpAddend
0x844D82: call    dword ptr ds:0A28078h
0x844D88: mov     ecx, [esp+24h+arg_C]
0x844D8C: push    ecx
0x844D8D: push    ebx
0x844D8E: mov     ecx, edi
0x844D90: call    sub_848FA0
0x844D95: mov     ebx, [esp+24h+var_10]
0x844D99: mov     edx, [ebx+24h]
0x844D9C: mov     ebp, [edx+4]
0x844D9F: mov     esi, [ebp+4]
0x844DA2: mov     eax, [esp+24h+arg_0]
0x844DA6: cmp     esi, eax
0x844DA8: jz      short loc_844DDF
0x844DAA: test    esi, esi
0x844DAC: jz      short loc_844DCE
0x844DAE: lea     eax, [esi+4]
0x844DB1: push    eax; lpAddend
0x844DB2: call    dword ptr ds:0A2807Ch
0x844DB8: test    eax, eax
0x844DBA: jnz     short loc_844DCA
0x844DBC: test    esi, esi
0x844DBE: jz      short loc_844DCA
0x844DC0: mov     edx, [esi]
0x844DC2: mov     eax, [edx]
0x844DC4: push    1
0x844DC6: mov     ecx, esi
0x844DC8: call    eax
0x844DCA: mov     eax, [esp+24h+arg_0]
0x844DCE: test    eax, eax
0x844DD0: mov     [ebp+4], eax
0x844DD3: jz      short loc_844DDF
0x844DD5: add     eax, 4
0x844DD8: push    eax; lpAddend
0x844DD9: call    dword ptr ds:0A28078h
0x844DDF: mov     esi, 1
0x844DE4: add     [ebx+60h], esi
0x844DE7: mov     [esp+24h+arg_C], ebx
0x844DEB: mov     edx, [edi+38h]
0x844DEE: lea     ecx, [esp+24h+arg_C]
0x844DF2: push    ecx
0x844DF3: push    edx
0x844DF4: lea     ecx, [edi+40h]
0x844DF7: mov     [esp+2Ch+var_4], 0
0x844DFF: call    sub_76CE40
0x844E04: or      eax, 0FFFFFFFFh
0x844E07: add     [ebx+60h], eax
0x844E0A: mov     [esp+24h+var_4], eax
0x844E0E: jnz     short loc_844E17
0x844E10: mov     ecx, ebx
0x844E12: call    sub_7604D0
0x844E17: add     [edi+38h], esi
0x844E1A: mov     ecx, [esp+24h+var_C]
0x844E1E: mov     large fs:0, ecx
0x844E25: pop     ecx
0x844E26: pop     edi
0x844E27: pop     esi
0x844E28: pop     ebp
0x844E29: pop     ebx
0x844E2A: add     esp, 10h
0x844E2D: retn    10h
