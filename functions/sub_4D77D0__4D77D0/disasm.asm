0x4D77D0: push    esi
0x4D77D1: push    edi
0x4D77D2: lea     esi, [ecx+44h]
0x4D77D5: push    31h ; '1'; a2
0x4D77D7: mov     ecx, esi; this
0x4D77D9: call    BaseExtraList_GetExtraData
0x4D77DE: mov     edi, eax
0x4D77E0: test    edi, edi
0x4D77E2: jnz     short loc_4D780E
0x4D77E4: mov     ecx, esi; this
0x4D77E6: call    ExtraDataList_GetTeleport
0x4D77EB: mov     esi, eax
0x4D77ED: test    esi, esi
0x4D77EF: jz      short loc_4D780C
0x4D77F1: mov     ecx, esi
0x4D77F3: call    sub_42B410
0x4D77F8: test    eax, eax
0x4D77FA: jz      short loc_4D780C
0x4D77FC: mov     ecx, esi
0x4D77FE: call    sub_42B410
0x4D7803: pop     edi
0x4D7804: mov     ecx, eax
0x4D7806: pop     esi
0x4D7807: jmp     sub_4D77D0
0x4D780C: mov     eax, edi
0x4D780E: pop     edi
0x4D780F: pop     esi
0x4D7810: retn
