0x8ACE80: push    ebp
0x8ACE81: mov     ebp, [esp+4+arg_0]
0x8ACE85: push    esi
0x8ACE86: mov     esi, ecx
0x8ACE88: lea     eax, [esi-0Ch]
0x8ACE8B: neg     eax
0x8ACE8D: sbb     eax, eax
0x8ACE8F: push    edi
0x8ACE90: and     eax, esi
0x8ACE92: push    eax
0x8ACE93: mov     ecx, ebp
0x8ACE95: call    sub_8DE670
0x8ACE9A: mov     eax, [esi+6Ch]
0x8ACE9D: dec     eax
0x8ACE9E: js      short loc_8ACF13
0x8ACEA0: lea     edx, [eax+eax*2]
0x8ACEA3: shl     edx, 4
0x8ACEA6: lea     edi, [eax+1]
0x8ACEA9: lea     esp, [esp+0]
0x8ACEB0: mov     eax, [esi+68h]
0x8ACEB3: mov     eax, [eax+edx+28h]
0x8ACEB7: cmp     byte ptr [eax+18h], 2
0x8ACEBB: jnz     short loc_8ACEC4
0x8ACEBD: mov     ecx, [eax+10h]
0x8ACEC0: add     ecx, eax
0x8ACEC2: jmp     short loc_8ACEC6
0x8ACEC4: xor     ecx, ecx
0x8ACEC6: cmp     ecx, ebp
0x8ACEC8: jnz     short loc_8ACF0D
0x8ACECA: mov     eax, [esi+6Ch]
0x8ACECD: mov     ecx, [esi+68h]
0x8ACED0: dec     eax
0x8ACED1: mov     [esi+6Ch], eax
0x8ACED4: lea     eax, [eax+eax*2]
0x8ACED7: shl     eax, 4
0x8ACEDA: movaps  xmm0, xmmword ptr [eax+ecx]
0x8ACEDE: add     eax, ecx
0x8ACEE0: movaps  xmmword ptr [edx+ecx], xmm0
0x8ACEE4: movaps  xmm0, xmmword ptr [eax+10h]
0x8ACEE8: movaps  xmmword ptr [edx+ecx+10h], xmm0
0x8ACEED: mov     ebp, [eax+20h]
0x8ACEF0: mov     [edx+ecx+20h], ebp
0x8ACEF4: mov     ebp, [eax+24h]
0x8ACEF7: mov     [edx+ecx+24h], ebp
0x8ACEFB: mov     ebp, [eax+28h]
0x8ACEFE: mov     [edx+ecx+28h], ebp
0x8ACF02: mov     eax, [eax+2Ch]
0x8ACF05: mov     ebp, [esp+0Ch+arg_0]
0x8ACF09: mov     [edx+ecx+2Ch], eax
0x8ACF0D: sub     edx, 30h ; '0'
0x8ACF10: dec     edi
0x8ACF11: jnz     short loc_8ACEB0
0x8ACF13: mov     edx, [esi+90h]
0x8ACF19: xor     eax, eax
0x8ACF1B: test    edx, edx
0x8ACF1D: jle     short loc_8ACF31
0x8ACF1F: mov     ecx, [esi+8Ch]
0x8ACF25: cmp     [ecx], ebp
0x8ACF27: jz      short loc_8ACF34
0x8ACF29: inc     eax
0x8ACF2A: add     ecx, 4
0x8ACF2D: cmp     eax, edx
0x8ACF2F: jl      short loc_8ACF25
0x8ACF31: or      eax, 0FFFFFFFFh
0x8ACF34: mov     ecx, [esi+90h]
0x8ACF3A: dec     ecx
0x8ACF3B: mov     [esi+90h], ecx
0x8ACF41: mov     esi, [esi+8Ch]
0x8ACF47: mov     ecx, [esi+ecx*4]
0x8ACF4A: pop     edi
0x8ACF4B: mov     [esi+eax*4], ecx
0x8ACF4E: pop     esi
0x8ACF4F: pop     ebp
0x8ACF50: retn    4
