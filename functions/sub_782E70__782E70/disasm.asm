0x782E70: push    ebx
0x782E71: mov     ebx, [esp+4+arg_4]
0x782E75: test    ebx, ebx
0x782E77: push    ebp
0x782E78: push    esi
0x782E79: push    edi
0x782E7A: mov     edi, [esp+10h+arg_0]
0x782E7E: mov     ebp, ecx
0x782E80: jnz     short loc_782E85
0x782E82: mov     ebx, [edi+30h]
0x782E85: mov     esi, [esp+10h+arg_8]
0x782E89: test    esi, esi
0x782E8B: jnz     short loc_782E99
0x782E8D: mov     esi, [edi+20h]
0x782E90: test    esi, esi
0x782E92: jnz     short loc_782E99
0x782E94: mov     esi, 1
0x782E99: cmp     byte ptr ds:0B4295Bh, 0
0x782EA0: mov     eax, [edi+14h]
0x782EA3: mov     [esp+10h+arg_4], eax
0x782EA7: jnz     short loc_782EB2
0x782EA9: call    sub_783C70
0x782EAE: mov     eax, [esp+10h+arg_4]
0x782EB2: mov     edi, [edi+1Ch]
0x782EB5: mov     ebp, [ebp+24h]
0x782EB8: and     eax, 0FFh
0x782EBD: mov     eax, ds:0B428D8h[eax*4]
0x782EC4: cmp     eax, 1
0x782EC7: push    esi
0x782EC8: push    ebx
0x782EC9: push    edi
0x782ECA: jnz     short loc_782EED
0x782ECC: mov     eax, [ebp+0FF8h]
0x782ED2: mov     ecx, [eax]
0x782ED4: mov     edx, [ecx+1C4h]
0x782EDA: push    eax
0x782EDB: call    edx
0x782EDD: pop     edi
0x782EDE: xor     ecx, ecx
0x782EE0: test    eax, eax
0x782EE2: pop     esi
0x782EE3: setnl   cl
0x782EE6: pop     ebp
0x782EE7: mov     al, cl
0x782EE9: pop     ebx
0x782EEA: retn    0Ch
0x782EED: cmp     eax, 3
0x782EF0: mov     eax, [ebp+0FF8h]
0x782EF6: mov     edx, [eax]
0x782EF8: push    eax
0x782EF9: jnz     short loc_782F13
0x782EFB: mov     eax, [edx+1BCh]
0x782F01: call    eax
0x782F03: pop     edi
0x782F04: xor     ecx, ecx
0x782F06: test    eax, eax
0x782F08: pop     esi
0x782F09: setnl   cl
0x782F0C: pop     ebp
0x782F0D: mov     al, cl
0x782F0F: pop     ebx
0x782F10: retn    0Ch
0x782F13: mov     eax, [edx+1B4h]
0x782F19: call    eax
0x782F1B: pop     edi
0x782F1C: xor     ecx, ecx
0x782F1E: test    eax, eax
0x782F20: pop     esi
0x782F21: setnl   cl
0x782F24: pop     ebp
0x782F25: mov     al, cl
0x782F27: pop     ebx
0x782F28: retn    0Ch
