0x4CAA10: mov     eax, [esp+arg_0]
0x4CAA14: push    esi
0x4CAA15: mov     esi, ecx
0x4CAA17: push    eax
0x4CAA18: lea     ecx, [esi+28h]
0x4CAA1B: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4CAA20: mov     edx, [esi]
0x4CAA22: mov     eax, [edx+40h]
0x4CAA25: push    20h ; ' '
0x4CAA27: mov     ecx, esi
0x4CAA29: call    eax
0x4CAA2B: pop     esi
0x4CAA2C: retn    4
