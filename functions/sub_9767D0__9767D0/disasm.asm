0x9767D0: sub     esp, 0Ch
0x9767D3: mov     eax, [esp+0Ch+arg_1C]
0x9767D7: fld     [esp+0Ch+arg_18]
0x9767DB: push    esi
0x9767DC: push    eax; int
0x9767DD: sub     esp, 0Ch
0x9767E0: fstp    [esp+20h+var_18]; float
0x9767E4: mov     esi, ecx
0x9767E6: fld     [esp+20h+arg_14]
0x9767EA: fstp    [esp+20h+var_1C]; float
0x9767EE: fld     [esp+20h+arg_10]
0x9767F2: fstp    [esp+20h+var_20]; float
0x9767F5: call    sub_96F0E0
0x9767FA: mov     eax, [esp+10h+arg_4]
0x9767FE: mov     edx, [esp+10h+arg_0]
0x976802: mov     dword ptr [esi], offset ??_7NiSphereTriIntersector@@6B@; const NiSphereTriIntersector::`vftable'
0x976808: mov     [esi+38h], edx
0x97680B: mov     ecx, [eax]
0x97680D: mov     [esi+3Ch], ecx
0x976810: mov     ecx, [eax+4]
0x976813: mov     [esi+40h], ecx
0x976816: mov     ecx, [eax+8]
0x976819: mov     [esi+44h], ecx
0x97681C: mov     ecx, [esp+10h+arg_8]
0x976820: fld     dword ptr [ecx]
0x976822: fsub    dword ptr [eax]
0x976824: fstp    [esp+10h+var_C]
0x976828: fld     dword ptr [ecx+4]
0x97682B: fsub    dword ptr [eax+4]
0x97682E: fstp    [esp+10h+var_8]
0x976832: fld     dword ptr [ecx+8]
0x976835: mov     ecx, [esp+10h+var_C]
0x976839: fsub    dword ptr [eax+8]
0x97683C: mov     [esi+48h], ecx
0x97683F: mov     ecx, [esp+10h+var_8]
0x976843: mov     [esi+4Ch], ecx
0x976846: fstp    [esp+10h+var_4]
0x97684A: mov     ecx, [esp+10h+var_4]
0x97684E: mov     [esi+50h], ecx
0x976851: mov     ecx, [esp+10h+arg_C]
0x976855: fld     dword ptr [ecx]
0x976857: fsub    dword ptr [eax]
0x976859: fstp    [esp+10h+var_C]
0x97685D: fld     dword ptr [ecx+4]
0x976860: fsub    dword ptr [eax+4]
0x976863: fstp    [esp+10h+var_8]
0x976867: fld     dword ptr [ecx+8]
0x97686A: mov     ecx, [esp+10h+var_8]
0x97686E: fsub    dword ptr [eax+8]
0x976871: mov     eax, [esp+10h+var_C]
0x976875: mov     [esi+54h], eax
0x976878: mov     [esi+58h], ecx
0x97687B: fstp    [esp+10h+var_4]
0x97687F: mov     eax, [esp+10h+var_4]
0x976883: mov     [esi+5Ch], eax
0x976886: fld     dword ptr [edx+10h]
0x976889: fmul    st, st
0x97688B: mov     eax, esi
0x97688D: fld1
0x97688F: fdivrp  st(1), st
0x976891: fstp    dword ptr [esi+60h]
0x976894: fld     dword ptr ds:0A7DEB4h
0x97689A: fstp    dword ptr [esi+64h]
0x97689D: fld     dword ptr ds:0A7DEB4h
0x9768A3: fstp    dword ptr [esi+68h]
0x9768A6: pop     esi
0x9768A7: add     esp, 0Ch
0x9768AA: retn    20h ; ' '
