0x796540: movzx   eax, [esp+windMatrixIndex]; Oblivion legacy CIndexedGeometry::AddVertexWind. Stores 1-weight and maps the input index into the CWindEngine local matrix window. Only one weight/index stream exists here; 4.1 later split this into Wind1/Wind2.
0x796545: fld     [esp+windWeight]
0x796549: push    esi
0x79654A: fld1
0x79654C: mov     esi, ecx
0x79654E: fsubrp  st(1), st
0x796550: mov     ecx, [esi+4]
0x796553: xor     edx, edx
0x796555: div     dword ptr [ecx+2Ch]
0x796558: fstp    [esp+4+windWeight]
0x79655C: lea     eax, [esp+4+windWeight]
0x796560: push    eax; value
0x796561: add     dl, [ecx+28h]
0x796564: lea     ecx, [esi+0F8h]; this
0x79656A: mov     [esp+8+windMatrixIndex], dl
0x79656E: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x796573: lea     ecx, [esp+4+windMatrixIndex]
0x796577: push    ecx; value
0x796578: lea     ecx, [esi+108h]; this
0x79657E: call    OB_stVectorByte_PushBack_010201A0; Oblivion byte-vector push_back: appends in available capacity or delegates to checked insert-one at end. Called by CIndexedGeometry::AddVertexWind for matrix indices.
0x796583: pop     esi
0x796584: retn    8
