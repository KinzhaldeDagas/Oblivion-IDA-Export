0x6ECCB0: push    esi
0x6ECCB1: push    edi
0x6ECCB2: mov     edi, [esp+8+arg_0]
0x6ECCB6: push    edi
0x6ECCB7: mov     esi, ecx
0x6ECCB9: call    NiSingleInterpController_SaveBinary; Saves NiTimeController state, then writes the interpolator object reference at +0x3C through the stream virtual at +0x2C.
0x6ECCBE: mov     eax, [esi+40h]
0x6ECCC1: push    eax
0x6ECCC2: mov     ecx, edi
0x6ECCC4: call    sub_713720
0x6ECCC9: pop     edi
0x6ECCCA: pop     esi
0x6ECCCB: retn    4
