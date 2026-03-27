0x4DB7D0: push    ebx
0x4DB7D1: push    esi
0x4DB7D2: mov     ebx, ecx
0x4DB7D4: push    edi
0x4DB7D5: lea     edi, [ebx+44h]
0x4DB7D8: mov     ecx, edi
0x4DB7DA: call    sub_41E7D0
0x4DB7DF: mov     esi, eax
0x4DB7E1: test    esi, esi
0x4DB7E3: jnz     short loc_4DB823
0x4DB7E5: mov     ecx, edi; this
0x4DB7E7: call    ExtraDataList_GetTeleport
0x4DB7EC: mov     edi, eax
0x4DB7EE: test    edi, edi
0x4DB7F0: jz      short loc_4DB812
0x4DB7F2: mov     ecx, edi
0x4DB7F4: call    sub_42B410
0x4DB7F9: test    eax, eax
0x4DB7FB: jz      short loc_4DB812
0x4DB7FD: mov     ecx, edi
0x4DB7FF: call    sub_42B410
0x4DB804: lea     ecx, [eax+44h]
0x4DB807: call    sub_41E7D0
0x4DB80C: mov     esi, eax
0x4DB80E: test    esi, esi
0x4DB810: jnz     short loc_4DB823
0x4DB812: mov     ecx, [ebx+40h]
0x4DB815: test    ecx, ecx
0x4DB817: jz      short loc_4DB821
0x4DB819: pop     edi
0x4DB81A: pop     esi
0x4DB81B: pop     ebx
0x4DB81C: jmp     loc_4CA980
0x4DB821: mov     eax, esi
0x4DB823: pop     edi
0x4DB824: pop     esi
0x4DB825: pop     ebx
0x4DB826: retn
