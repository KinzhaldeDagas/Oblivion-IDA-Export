0x77ABF0: push    esi
0x77ABF1: mov     esi, ecx
0x77ABF3: push    offset NiRefObject_objcount; lpAddend
0x77ABF8: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77ABFE: mov     dword ptr [esi+4], 0
0x77AC05: call    dword ptr ds:0A28078h
0x77AC0B: mov     eax, [esp+4+arg_0]
0x77AC0F: mov     dword ptr [esi], offset ??_7NiDX9TextureManager@@6B@; const NiDX9TextureManager::`vftable'
0x77AC15: mov     [esi+0Ch], eax
0x77AC18: mov     eax, [eax+280h]
0x77AC1E: mov     [esi+8], eax
0x77AC21: mov     ecx, [eax]
0x77AC23: mov     edx, [ecx+4]
0x77AC26: push    eax
0x77AC27: call    edx
0x77AC29: mov     eax, esi
0x77AC2B: pop     esi
0x77AC2C: retn    4
