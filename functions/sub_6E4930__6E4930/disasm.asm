0x6E4930: mov     eax, [esp+arg_10]
0x6E4934: push    esi
0x6E4935: mov     esi, ecx
0x6E4937: mov     ecx, [esp+4+arg_0]
0x6E493B: push    eax
0x6E493C: push    ecx
0x6E493D: mov     ecx, esi; this
0x6E493F: call    ??0NiBSplineInterpolator@@QAE@XZ; NiBSplineInterpolator::NiBSplineInterpolator(void)
0x6E4944: mov     dword ptr [esi], offset ??_7NiBSplineTransformInterpolator@@6B@; const NiBSplineTransformInterpolator::`vftable'
0x6E494A: mov     edx, ds:0B24260h
0x6E4950: mov     [esi+1Ch], edx
0x6E4953: mov     eax, ds:0B24264h
0x6E4958: mov     [esi+20h], eax
0x6E495B: mov     ecx, ds:0B24268h
0x6E4961: mov     [esi+24h], ecx
0x6E4964: mov     edx, ds:0B3CBA4h
0x6E496A: mov     [esi+28h], edx
0x6E496D: mov     eax, ds:0B3CBA8h
0x6E4972: mov     [esi+2Ch], eax
0x6E4975: mov     ecx, ds:0B3CBACh
0x6E497B: mov     eax, [esp+4+arg_4]
0x6E497F: mov     [esi+30h], ecx
0x6E4982: mov     edx, ds:0B3CBB0h
0x6E4988: mov     ecx, [esp+4+arg_8]
0x6E498C: mov     [esi+34h], edx
0x6E498F: fld     dword ptr ds:0A79E10h
0x6E4995: mov     edx, [esp+4+arg_C]
0x6E4999: fstp    dword ptr [esi+38h]
0x6E499C: mov     [esi+3Ch], eax
0x6E499F: mov     [esi+40h], ecx
0x6E49A2: mov     [esi+44h], edx
0x6E49A5: mov     eax, esi
0x6E49A7: pop     esi
0x6E49A8: retn    14h
