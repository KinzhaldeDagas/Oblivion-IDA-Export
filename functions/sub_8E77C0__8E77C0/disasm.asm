0x8E77C0: push    esi
0x8E77C1: push    edi
0x8E77C2: mov     edi, [esp+8+arg_0]
0x8E77C6: mov     eax, [edi+3Ch]
0x8E77C9: xor     esi, esi
0x8E77CB: test    eax, eax
0x8E77CD: jle     short loc_8E77ED
0x8E77CF: push    ebx
0x8E77D0: mov     ebx, [esp+0Ch+arg_4]
0x8E77D4: mov     eax, [edi+38h]
0x8E77D7: mov     ecx, [eax+esi*8]
0x8E77DA: push    ebx
0x8E77DB: push    ecx
0x8E77DC: call    sub_8E65B0
0x8E77E1: mov     eax, [edi+3Ch]
0x8E77E4: add     esp, 8
0x8E77E7: inc     esi
0x8E77E8: cmp     esi, eax
0x8E77EA: jl      short loc_8E77D4
0x8E77EC: pop     ebx
0x8E77ED: pop     edi
0x8E77EE: pop     esi
0x8E77EF: retn
