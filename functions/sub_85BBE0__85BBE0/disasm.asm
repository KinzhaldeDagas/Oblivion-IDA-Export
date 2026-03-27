0x85BBE0: push    esi
0x85BBE1: mov     esi, ecx
0x85BBE3: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x85BBE8: fld1
0x85BBEA: xor     eax, eax
0x85BBEC: mov     [esi+6Ch], eax
0x85BBEF: mov     [esi+70h], al
0x85BBF2: mov     dword ptr [esi], offset ??_7WaterShaderProperty@@6B@; const WaterShaderProperty::`vftable'
0x85BBF8: mov     ds:0B47844h, al
0x85BBFD: fstp    dword ptr [esi+7Ch]
0x85BC00: fldz
0x85BC02: mov     [esi+71h], al
0x85BC05: mov     [esi+72h], al
0x85BC08: fstp    dword ptr [esi+80h]
0x85BC0E: mov     [esi+78h], eax
0x85BC11: mov     [esi+74h], eax
0x85BC14: mov     [esi+85h], al
0x85BC1A: mov     [esi+84h], al
0x85BC20: mov     eax, esi
0x85BC22: pop     esi
0x85BC23: retn
