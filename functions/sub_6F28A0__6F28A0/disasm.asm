0x6F28A0: push    ebx
0x6F28A1: mov     ebx, [esp+4+arg_4]
0x6F28A5: push    esi
0x6F28A6: mov     esi, [esp+8+arg_0]
0x6F28AA: cmp     esi, ebx
0x6F28AC: jz      short loc_6F28D7
0x6F28AE: push    edi
0x6F28AF: mov     edi, [esp+0Ch+arg_8]
0x6F28B3: mov     eax, [esi]
0x6F28B5: push    0FFFFFFFFh
0x6F28B7: push    0
0x6F28B9: lea     ecx, [esi+4]
0x6F28BC: push    ecx
0x6F28BD: lea     ecx, [edi+4]
0x6F28C0: mov     [edi], eax
0x6F28C2: call    sub_414420
0x6F28C7: add     esi, 20h ; ' '
0x6F28CA: add     edi, 20h ; ' '
0x6F28CD: cmp     esi, ebx
0x6F28CF: jnz     short loc_6F28B3
0x6F28D1: mov     eax, edi
0x6F28D3: pop     edi
0x6F28D4: pop     esi
0x6F28D5: pop     ebx
0x6F28D6: retn
0x6F28D7: mov     eax, [esp+8+arg_8]
0x6F28DB: pop     esi
0x6F28DC: pop     ebx
0x6F28DD: retn
