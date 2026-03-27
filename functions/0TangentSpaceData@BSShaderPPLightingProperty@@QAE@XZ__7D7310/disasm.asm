0x7D7310: push    esi
0x7D7311: mov     esi, ecx
0x7D7313: push    offset NiRefObject_objcount; lpAddend
0x7D7318: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D731E: mov     dword ptr [esi+4], 0
0x7D7325: call    dword ptr ds:0A28078h
0x7D732B: mov     al, [esp+4+arg_0]
0x7D732F: mov     [esi+8], al
0x7D7332: mov     dword ptr [esi], offset ??_7TangentSpaceData@BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::TangentSpaceData::`vftable'
0x7D7338: mov     dword ptr [esi+0Ch], 0
0x7D733F: mov     dword ptr [esi+10h], 0
0x7D7346: mov     eax, esi
0x7D7348: pop     esi
0x7D7349: retn    4
