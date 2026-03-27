0x4149A0: push    esi
0x4149A1: push    edi
0x4149A2: mov     edi, [esp+8+arg_0]
0x4149A6: mov     eax, [edi+1Ch]
0x4149A9: push    eax
0x4149AA: mov     esi, ecx
0x4149AC: call    EffectItem_Initialize
0x4149B1: xor     eax, eax
0x4149B3: push    edi
0x4149B4: mov     ecx, esi
0x4149B6: mov     [esi+1Ch], eax
0x4149B9: mov     [esi+18h], eax
0x4149BC: call    EffectItem_CopyFrom
0x4149C1: pop     edi
0x4149C2: mov     eax, esi
0x4149C4: pop     esi
0x4149C5: retn    4
