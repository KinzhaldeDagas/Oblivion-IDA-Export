0x6EDBD0: push    ebx
0x6EDBD1: mov     ebx, [esp+4+arg_0]
0x6EDBD5: push    esi
0x6EDBD6: mov     esi, [esp+8+arg_4]
0x6EDBDA: cmp     ebx, esi
0x6EDBDC: jz      short loc_6EDC0B
0x6EDBDE: push    edi
0x6EDBDF: mov     edi, [esp+0Ch+arg_8]
0x6EDBE3: sub     esi, 34h ; '4'
0x6EDBE6: sub     edi, 34h ; '4'
0x6EDBE9: push    esi
0x6EDBEA: mov     ecx, edi
0x6EDBEC: call    sub_5520E0
0x6EDBF1: push    0FFFFFFFFh
0x6EDBF3: push    0
0x6EDBF5: lea     eax, [esi+18h]
0x6EDBF8: push    eax
0x6EDBF9: lea     ecx, [edi+18h]
0x6EDBFC: call    sub_414420
0x6EDC01: cmp     esi, ebx
0x6EDC03: jnz     short loc_6EDBE3
0x6EDC05: mov     eax, edi
0x6EDC07: pop     edi
0x6EDC08: pop     esi
0x6EDC09: pop     ebx
0x6EDC0A: retn
0x6EDC0B: mov     eax, [esp+8+arg_8]
0x6EDC0F: pop     esi
0x6EDC10: pop     ebx
0x6EDC11: retn
