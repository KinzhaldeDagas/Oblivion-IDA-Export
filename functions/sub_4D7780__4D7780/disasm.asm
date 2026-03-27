0x4D7780: push    esi
0x4D7781: lea     esi, [ecx+44h]
0x4D7784: push    edi
0x4D7785: mov     ecx, esi; this
0x4D7787: xor     edi, edi
0x4D7789: call    sub_41E690
0x4D778E: test    eax, eax
0x4D7790: jnz     short loc_4D77BD
0x4D7792: mov     ecx, esi; this
0x4D7794: call    ExtraDataList_GetTeleport
0x4D7799: mov     esi, eax
0x4D779B: test    esi, esi
0x4D779D: jz      short loc_4D77C6
0x4D779F: mov     ecx, esi
0x4D77A1: call    sub_42B410
0x4D77A6: test    eax, eax
0x4D77A8: jz      short loc_4D77C6
0x4D77AA: mov     ecx, esi
0x4D77AC: call    sub_42B410
0x4D77B1: lea     ecx, [eax+44h]; this
0x4D77B4: call    sub_41E690
0x4D77B9: test    eax, eax
0x4D77BB: jz      short loc_4D77C6
0x4D77BD: pop     edi
0x4D77BE: mov     ecx, eax
0x4D77C0: pop     esi
0x4D77C1: jmp     sub_429990
0x4D77C6: mov     eax, edi
0x4D77C8: pop     edi
0x4D77C9: pop     esi
0x4D77CA: retn
