0x413FC8: mov     eax, [edi+1Ch]
0x413FCB: mov     esi, ecx
0x413FCD: mov     [esi+1Ch], eax
0x413FD0: mov     eax, [edi]
0x413FD2: push    eax
0x413FD3: call    EffectSettingCollection_LookupByCode
0x413FD8: add     esp, 4
0x413FDB: push    eax
0x413FDC: mov     ecx, esi
0x413FDE: mov     [esi+1Ch], eax
0x413FE1: call    EffectItem_SetEffectSetting
