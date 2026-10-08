0x796260: sub     esp, 0Ch; Oblivion CIndexedGeometry::AddVertexCoord. Appends xyz; when CPU wind is active it also preserves xyz in originalVertexCoords for later deformation.
0x796263: mov     eax, [esp+0Ch+coord]
0x796267: fld     dword ptr [eax]
0x796269: push    esi
0x79626A: fstp    [esp+10h+value]
0x79626E: mov     esi, ecx
0x796270: fld     dword ptr [eax+4]
0x796273: push    edi
0x796274: fstp    [esp+14h+var_8]
0x796278: lea     edi, [esi+68h]
0x79627B: fld     dword ptr [eax+8]
0x79627E: lea     eax, [esp+14h+value]
0x796282: push    eax; value
0x796283: fstp    [esp+18h+var_4]
0x796287: mov     ecx, edi; this
0x796289: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x79628E: lea     ecx, [esp+14h+var_8]
0x796292: push    ecx; value
0x796293: mov     ecx, edi; this
0x796295: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x79629A: lea     edx, [esp+14h+var_4]
0x79629E: push    edx; value
0x79629F: mov     ecx, edi; this
0x7962A1: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7962A6: cmp     byte ptr [esi+8], 0
0x7962AA: jz      short loc_7962D9
0x7962AC: cmp     dword ptr [esi+14h], 1
0x7962B0: jnz     short loc_7962D9
0x7962B2: lea     eax, [esp+14h+value]
0x7962B6: add     esi, 78h ; 'x'
0x7962B9: push    eax; value
0x7962BA: mov     ecx, esi; this
0x7962BC: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7962C1: lea     ecx, [esp+14h+var_8]
0x7962C5: push    ecx; value
0x7962C6: mov     ecx, esi; this
0x7962C8: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7962CD: lea     edx, [esp+14h+var_4]
0x7962D1: push    edx; value
0x7962D2: mov     ecx, esi; this
0x7962D4: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7962D9: pop     edi
0x7962DA: pop     esi
0x7962DB: add     esp, 0Ch
0x7962DE: retn    4
