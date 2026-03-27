0x71FB40: mov     eax, [esp+arg_1C]
0x71FB44: mov     edx, [esp+arg_14]
0x71FB48: push    esi
0x71FB49: push    eax
0x71FB4A: mov     eax, [esp+8+arg_10]
0x71FB4E: mov     esi, ecx
0x71FB50: mov     ecx, [esp+8+arg_18]
0x71FB54: push    ecx
0x71FB55: mov     ecx, [esp+0Ch+arg_C]
0x71FB59: push    edx
0x71FB5A: mov     edx, [esp+10h+arg_8]
0x71FB5E: push    eax
0x71FB5F: mov     eax, [esp+14h+arg_4]
0x71FB63: push    ecx
0x71FB64: mov     ecx, [esp+18h+arg_0]
0x71FB68: push    edx
0x71FB69: push    eax
0x71FB6A: push    ecx
0x71FB6B: mov     ecx, esi
0x71FB6D: call    NiTriBasedGeomData__NiTriBasedGeomData
0x71FB72: movzx   eax, word ptr [esi+40h]
0x71FB76: lea     edx, [eax+eax*2]
0x71FB79: mov     eax, [esp+4+arg_20]
0x71FB7D: mov     [esi+48h], eax
0x71FB80: xor     eax, eax
0x71FB82: mov     [esi+4Ch], eax
0x71FB85: mov     [esi+50h], ax
0x71FB89: mov     [esi+54h], eax
0x71FB8C: mov     dword ptr [esi], offset ??_7NiTriShapeData@@6B@; const NiTriShapeData::`vftable'
0x71FB92: mov     [esi+44h], edx
0x71FB95: mov     eax, esi
0x71FB97: pop     esi
0x71FB98: retn    24h ; '$'
