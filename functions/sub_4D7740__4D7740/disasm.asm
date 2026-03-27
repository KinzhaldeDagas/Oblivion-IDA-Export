0x4D7740: push    esi
0x4D7741: lea     esi, [ecx+44h]
0x4D7744: push    edi
0x4D7745: mov     ecx, esi; this
0x4D7747: call    sub_41E690
0x4D774C: mov     edi, eax
0x4D774E: test    edi, edi
0x4D7750: jnz     short loc_4D777D
0x4D7752: mov     ecx, esi; this
0x4D7754: call    ExtraDataList_GetTeleport
0x4D7759: mov     esi, eax
0x4D775B: test    esi, esi
0x4D775D: jz      short loc_4D777B
0x4D775F: mov     ecx, esi
0x4D7761: call    sub_42B410
0x4D7766: test    eax, eax
0x4D7768: jz      short loc_4D777B
0x4D776A: mov     ecx, esi
0x4D776C: call    sub_42B410
0x4D7771: pop     edi
0x4D7772: lea     ecx, [eax+44h]; this
0x4D7775: pop     esi
0x4D7776: jmp     sub_41E690
0x4D777B: mov     eax, edi
0x4D777D: pop     edi
0x4D777E: pop     esi
0x4D777F: retn
