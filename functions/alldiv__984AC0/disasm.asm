0x984AC0: push    edi
0x984AC1: push    esi
0x984AC2: push    ebx
0x984AC3: xor     edi, edi
0x984AC5: mov     eax, [esp+0Ch+arg_4]
0x984AC9: or      eax, eax
0x984ACB: jge     short loc_984AE1
0x984ACD: inc     edi
0x984ACE: mov     edx, [esp+0Ch+arg_0]
0x984AD2: neg     eax
0x984AD4: neg     edx
0x984AD6: sbb     eax, 0
0x984AD9: mov     [esp+0Ch+arg_4], eax
0x984ADD: mov     [esp+0Ch+arg_0], edx
0x984AE1: mov     eax, [esp+0Ch+arg_C]
0x984AE5: or      eax, eax
0x984AE7: jge     short loc_984AFD
0x984AE9: inc     edi
0x984AEA: mov     edx, [esp+0Ch+arg_8]
0x984AEE: neg     eax
0x984AF0: neg     edx
0x984AF2: sbb     eax, 0
0x984AF5: mov     [esp+0Ch+arg_C], eax
0x984AF9: mov     [esp+0Ch+arg_8], edx
0x984AFD: or      eax, eax
0x984AFF: jnz     short loc_984B19
0x984B01: mov     ecx, [esp+0Ch+arg_8]
0x984B05: mov     eax, [esp+0Ch+arg_4]
0x984B09: xor     edx, edx
0x984B0B: div     ecx
0x984B0D: mov     ebx, eax
0x984B0F: mov     eax, [esp+0Ch+arg_0]
0x984B13: div     ecx
0x984B15: mov     edx, ebx
0x984B17: jmp     short loc_984B5A
0x984B19: mov     ebx, eax
0x984B1B: mov     ecx, [esp+0Ch+arg_8]
0x984B1F: mov     edx, [esp+0Ch+arg_4]
0x984B23: mov     eax, [esp+0Ch+arg_0]
0x984B27: shr     ebx, 1
0x984B29: rcr     ecx, 1
0x984B2B: shr     edx, 1
0x984B2D: rcr     eax, 1
0x984B2F: or      ebx, ebx
0x984B31: jnz     short loc_984B27
0x984B33: div     ecx
0x984B35: mov     esi, eax
0x984B37: mul     [esp+0Ch+arg_C]
0x984B3B: mov     ecx, eax
0x984B3D: mov     eax, [esp+0Ch+arg_8]
0x984B41: mul     esi
0x984B43: add     edx, ecx
0x984B45: jb      short loc_984B55
0x984B47: cmp     edx, [esp+0Ch+arg_4]
0x984B4B: ja      short loc_984B55
0x984B4D: jb      short loc_984B56
0x984B4F: cmp     eax, [esp+0Ch+arg_0]
0x984B53: jbe     short loc_984B56
0x984B55: dec     esi
0x984B56: xor     edx, edx
0x984B58: mov     eax, esi
0x984B5A: dec     edi
0x984B5B: jnz     short loc_984B64
0x984B5D: neg     edx
0x984B5F: neg     eax
0x984B61: sbb     edx, 0
0x984B64: pop     ebx
0x984B65: pop     esi
0x984B66: pop     edi
0x984B67: retn    10h
