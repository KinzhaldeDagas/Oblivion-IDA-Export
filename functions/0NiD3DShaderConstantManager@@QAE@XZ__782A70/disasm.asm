0x782A70: push    esi
0x782A71: push    edi
0x782A72: mov     esi, ecx
0x782A74: xor     edi, edi
0x782A76: push    offset NiRefObject_objcount; lpAddend
0x782A7B: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x782A81: mov     [esi+4], edi
0x782A84: call    dword ptr ds:0A28078h
0x782A8A: mov     eax, [esp+8+arg_0]
0x782A8E: cmp     eax, edi
0x782A90: mov     dword ptr [esi], offset ??_7NiD3DShaderConstantManager@@6B@; const NiD3DShaderConstantManager::`vftable'
0x782A96: mov     [esi+8], edi
0x782A99: mov     [esi+0Ch], edi
0x782A9C: mov     [esi+10h], edi
0x782A9F: mov     [esi+14h], edi
0x782AA2: mov     [esi+18h], edi
0x782AA5: mov     [esi+1Ch], edi
0x782AA8: mov     [esi+20h], edi
0x782AAB: mov     [esi+24h], edi
0x782AAE: mov     [esi+28h], edi
0x782AB1: mov     [esi+2Ch], edi
0x782AB4: mov     [esi+30h], edi
0x782AB7: mov     [esi+34h], edi
0x782ABA: mov     [esi+38h], edi
0x782ABD: mov     [esi+3Ch], edi
0x782AC0: mov     [esi+40h], edi
0x782AC3: mov     [esi+44h], edi
0x782AC6: mov     [esi+48h], edi
0x782AC9: mov     [esi+4Ch], edi
0x782ACC: mov     [esi+50h], edi
0x782ACF: mov     [esi+54h], edi
0x782AD2: mov     [esi+58h], edi
0x782AD5: mov     [esi+5Ch], edi
0x782AD8: mov     [esi+60h], edi
0x782ADB: mov     [esi+64h], edi
0x782ADE: mov     [esi+68h], edi
0x782AE1: mov     [esi+6Ch], edi
0x782AE4: mov     [esi+70h], edi
0x782AE7: mov     [esi+74h], edi
0x782AEA: mov     [esi+78h], edi
0x782AED: mov     [esi+7Ch], edi
0x782AF0: mov     [esi+84h], eax
0x782AF6: jz      short loc_782B04
0x782AF8: mov     eax, [eax+280h]
0x782AFE: mov     [esi+80h], eax
0x782B04: mov     eax, [esi+80h]
0x782B0A: cmp     eax, edi
0x782B0C: jz      short loc_782B16
0x782B0E: mov     ecx, [eax]
0x782B10: mov     edx, [ecx+4]
0x782B13: push    eax
0x782B14: call    edx
0x782B16: pop     edi
0x782B17: mov     eax, esi
0x782B19: pop     esi
0x782B1A: retn    4
