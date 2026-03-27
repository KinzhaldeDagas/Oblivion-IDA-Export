0x42B2A0: push    esi
0x42B2A1: push    edi
0x42B2A2: mov     edi, [esp+8+arg_0]
0x42B2A6: mov     esi, ecx
0x42B2A8: mov     eax, [esi]
0x42B2AA: mov     edx, [eax+8]
0x42B2AD: push    edi
0x42B2AE: call    edx
0x42B2B0: mov     al, [edi+0Ch]
0x42B2B3: mov     [esi+0Ch], al
0x42B2B6: mov     cx, [edi+0Eh]
0x42B2BA: pop     edi
0x42B2BB: mov     [esi+0Eh], cx
0x42B2BF: pop     esi
0x42B2C0: retn    4
