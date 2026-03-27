0x7A7D10: push    esi
0x7A7D11: mov     esi, ecx
0x7A7D13: call    sub_78ECF0
0x7A7D18: fldz
0x7A7D1A: mov     al, [esp+4+arg_8]
0x7A7D1E: mov     cl, [esp+4+arg_4]
0x7A7D22: mov     edx, [esp+4+arg_10]
0x7A7D26: mov     [esi+10h], al
0x7A7D29: mov     eax, [esp+4+arg_0]
0x7A7D2D: mov     dword ptr [esi], offset ??_7CBillboardLeaf@@6B@; const CBillboardLeaf::`vftable'
0x7A7D33: mov     dword ptr [esi+14h], 0FFFFFFFFh
0x7A7D3A: mov     [esi+18h], cl
0x7A7D3D: fst     dword ptr [esi+24h]
0x7A7D40: fst     dword ptr [esi+20h]
0x7A7D43: fst     dword ptr [esi+1Ch]
0x7A7D46: fst     dword ptr [esi+30h]
0x7A7D49: fst     dword ptr [esi+2Ch]
0x7A7D4C: fst     dword ptr [esi+28h]
0x7A7D4F: fst     dword ptr [esi+3Ch]
0x7A7D52: fst     dword ptr [esi+38h]
0x7A7D55: fstp    dword ptr [esi+34h]
0x7A7D58: mov     byte ptr [esi+40h], 0
0x7A7D5C: fld     [esp+4+arg_C]
0x7A7D60: mov     [esi+48h], edx
0x7A7D63: fstp    dword ptr [esi+44h]
0x7A7D66: mov     ecx, [eax]
0x7A7D68: mov     [esi+4], ecx
0x7A7D6B: mov     edx, [eax+4]
0x7A7D6E: mov     [esi+8], edx
0x7A7D71: mov     eax, [eax+8]
0x7A7D74: mov     [esi+0Ch], eax
0x7A7D77: mov     eax, esi
0x7A7D79: pop     esi
0x7A7D7A: retn    14h
