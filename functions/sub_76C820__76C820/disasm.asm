0x76C820: push    esi
0x76C821: mov     esi, [esp+4+arg_4]
0x76C825: mov     ecx, [esi+0Ch]
0x76C828: push    0
0x76C82A: push    2
0x76C82C: push    18h
0x76C82E: mov     byte ptr [esi+5Ah], 1
0x76C832: call    sub_772FF0
0x76C837: mov     eax, [esp+4+arg_0]
0x76C83B: fld     dword ptr [eax]
0x76C83D: fstp    dword ptr [esi+18h]
0x76C840: fld     dword ptr [eax+4]
0x76C843: fstp    dword ptr [esi+28h]
0x76C846: fld     dword ptr [eax+8]
0x76C849: fstp    dword ptr [esi+38h]
0x76C84C: fldz
0x76C84E: fst     dword ptr [esi+48h]
0x76C851: fld     dword ptr [eax+0Ch]
0x76C854: fstp    dword ptr [esi+1Ch]
0x76C857: fld     dword ptr [eax+10h]
0x76C85A: fstp    dword ptr [esi+2Ch]
0x76C85D: fld     dword ptr [eax+14h]
0x76C860: fstp    dword ptr [esi+3Ch]
0x76C863: fst     dword ptr [esi+4Ch]
0x76C866: fst     dword ptr [esi+50h]
0x76C869: fst     dword ptr [esi+40h]
0x76C86C: fst     dword ptr [esi+30h]
0x76C86F: fst     dword ptr [esi+20h]
0x76C872: fst     dword ptr [esi+54h]
0x76C875: fst     dword ptr [esi+44h]
0x76C878: fst     dword ptr [esi+34h]
0x76C87B: fstp    dword ptr [esi+24h]
0x76C87E: pop     esi
0x76C87F: retn    8
