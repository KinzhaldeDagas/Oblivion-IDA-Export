0x4DBE40: push    esi
0x4DBE41: push    edi
0x4DBE42: mov     edi, ecx
0x4DBE44: lea     esi, [edi+44h]
0x4DBE47: push    31h ; '1'; a2
0x4DBE49: mov     ecx, esi; this
0x4DBE4B: call    BaseExtraList_GetExtraData
0x4DBE50: test    eax, eax
0x4DBE52: jnz     short loc_4DBE7E
0x4DBE54: mov     ecx, esi; this
0x4DBE56: call    ExtraDataList_GetTeleport
0x4DBE5B: mov     esi, eax
0x4DBE5D: test    esi, esi
0x4DBE5F: jz      short loc_4DBE8E
0x4DBE61: mov     ecx, esi
0x4DBE63: call    sub_42B410
0x4DBE68: test    eax, eax
0x4DBE6A: jz      short loc_4DBE8E
0x4DBE6C: mov     ecx, esi
0x4DBE6E: call    sub_42B410
0x4DBE73: mov     ecx, eax
0x4DBE75: call    sub_4D77D0
0x4DBE7A: test    eax, eax
0x4DBE7C: jz      short loc_4DBE8E
0x4DBE7E: mov     ecx, eax
0x4DBE80: call    sub_428E80
0x4DBE85: mov     ecx, edi
0x4DBE87: pop     edi
0x4DBE88: pop     esi
0x4DBE89: jmp     sub_4D9070
0x4DBE8E: pop     edi
0x4DBE8F: pop     esi
0x4DBE90: retn
