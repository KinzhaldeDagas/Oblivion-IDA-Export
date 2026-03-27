0x68CDB5: mov     esi, ecx
0x68CDB7: mov     [esp+arg_10], esi
0x68CDBB: mov     eax, [esp+arg_2C]
0x68CDBF: mov     ecx, [esp+arg_28]
0x68CDC3: mov     edx, [esp+arg_24]
0x68CDC7: push    eax; int
0x68CDC8: push    ecx; int
0x68CDC9: push    edx; int
0x68CDCA: mov     ecx, esi; this
0x68CDCC: call    ValueModifierEffect_constr
0x68CDD1: xor     ebx, ebx
0x68CDD3: mov     dword ptr [esi], offset ??_7AbsorbEffect@@6B@; const AbsorbEffect::`vftable'
0x68CDD9: mov     [esp+20h], ebx
