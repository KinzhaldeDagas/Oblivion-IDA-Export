0x4DB890: mov     eax, [esp+arg_0]
0x4DB894: push    esi
0x4DB895: mov     esi, ecx
0x4DB897: push    edi
0x4DB898: lea     edi, [esi+44h]
0x4DB89B: push    eax
0x4DB89C: mov     ecx, edi
0x4DB89E: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4DB8A3: mov     edx, [esi]
0x4DB8A5: mov     eax, [edx+40h]
0x4DB8A8: push    80h ; '€'
0x4DB8AD: mov     ecx, esi
0x4DB8AF: call    eax
0x4DB8B1: mov     ecx, edi; this
0x4DB8B3: call    ExtraDataList_GetTeleport
0x4DB8B8: mov     esi, eax
0x4DB8BA: test    esi, esi
0x4DB8BC: jz      short loc_4DB8F4
0x4DB8BE: mov     ecx, esi
0x4DB8C0: call    sub_42B410
0x4DB8C5: test    eax, eax
0x4DB8C7: jz      short loc_4DB8F4
0x4DB8C9: mov     ecx, esi
0x4DB8CB: call    sub_42B410
0x4DB8D0: push    0
0x4DB8D2: lea     ecx, [eax+44h]
0x4DB8D5: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4DB8DA: mov     ecx, esi
0x4DB8DC: call    sub_42B410
0x4DB8E1: mov     edx, [eax]
0x4DB8E3: pop     edi
0x4DB8E4: pop     esi
0x4DB8E5: mov     [esp+arg_0], 80h ; '€'
0x4DB8ED: mov     ecx, eax
0x4DB8EF: mov     eax, [edx+40h]
0x4DB8F2: jmp     eax
0x4DB8F4: pop     edi
0x4DB8F5: pop     esi
0x4DB8F6: retn    4
