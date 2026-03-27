0x413BB0: push    esi
0x413BB1: mov     esi, [ecx+18h]
0x413BB4: test    esi, esi
0x413BB6: jz      short EffectItem_destr___Done
0x413BB8: mov     eax, [esi+8]
0x413BBB: push    eax
0x413BBC: call    FormHeapFree
0x413BC1: push    esi
0x413BC2: mov     dword ptr [esi+8], 0
0x413BC9: mov     word ptr [esi+0Eh], 0
0x413BCF: mov     word ptr [esi+0Ch], 0
0x413BD5: call    FormHeapFree
0x413BDA: add     esp, 8
