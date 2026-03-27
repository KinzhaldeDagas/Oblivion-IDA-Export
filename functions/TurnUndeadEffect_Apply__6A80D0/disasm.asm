0x6A80D0: push    ebx
0x6A80D1: mov     ebx, ecx
0x6A80D3: mov     ecx, [ebx+20h]; this
0x6A80D6: test    ecx, ecx
0x6A80D8: push    esi
0x6A80D9: push    edi
0x6A80DA: jz      short loc_6A80E5
0x6A80DC: call    MagicTarget_GetParentActor
0x6A80E1: mov     esi, eax
0x6A80E3: jmp     short loc_6A80E7
0x6A80E5: xor     esi, esi
0x6A80E7: mov     ecx, [ebx+24h]; this
0x6A80EA: test    ecx, ecx
0x6A80EC: jz      short loc_6A80F7
0x6A80EE: call    MagicCaster_GetParentActor
0x6A80F3: mov     edi, eax
0x6A80F5: jmp     short loc_6A80F9
0x6A80F7: xor     edi, edi
0x6A80F9: test    esi, esi
0x6A80FB: jz      short loc_6A812B
0x6A80FD: test    edi, edi
0x6A80FF: jz      short loc_6A812B
0x6A8101: mov     eax, [esi]
0x6A8103: mov     edx, [eax+330h]
0x6A8109: mov     ecx, esi
0x6A810B: call    edx
0x6A810D: test    eax, eax
0x6A810F: jz      short loc_6A812B
0x6A8111: mov     eax, [esi]
0x6A8113: mov     edx, [eax+330h]
0x6A8119: push    0
0x6A811B: push    edi
0x6A811C: mov     ecx, esi
0x6A811E: call    edx
0x6A8120: mov     ecx, eax
0x6A8122: call    sub_6210D0
0x6A8127: mov     byte ptr [ebx+38h], 1
0x6A812B: pop     edi
0x6A812C: pop     esi
0x6A812D: pop     ebx
0x6A812E: retn
