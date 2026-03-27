0x732D70: mov     eax, [esp+arg_18]
0x732D74: mov     edx, [esp+arg_10]
0x732D78: push    esi
0x732D79: push    eax
0x732D7A: mov     eax, [esp+8+arg_C]
0x732D7E: mov     esi, ecx
0x732D80: mov     ecx, [esp+8+arg_14]
0x732D84: push    ecx
0x732D85: mov     ecx, [esp+0Ch+arg_8]
0x732D89: push    edx
0x732D8A: mov     edx, [esp+10h+arg_4]
0x732D8E: push    eax
0x732D8F: mov     eax, [esp+14h+arg_0]
0x732D93: push    ecx
0x732D94: push    edx
0x732D95: push    eax
0x732D96: mov     ecx, esi
0x732D98: call    NiGeometryData__NiGeometryData
0x732D9D: mov     cx, [esp+4+arg_1C]
0x732DA2: mov     dword ptr [esi], offset ??_7NiTriBasedGeomData@@6B@; const NiTriBasedGeomData::`vftable'
0x732DA8: mov     [esi+40h], cx
0x732DAC: mov     eax, esi
0x732DAE: pop     esi
0x732DAF: retn    20h ; ' '
