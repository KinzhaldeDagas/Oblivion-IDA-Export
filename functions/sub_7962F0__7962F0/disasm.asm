0x7962F0: push    esi; Oblivion CIndexedGeometry::AddVertexNormal. Appends one xyz normal. Unlike SpeedTree 4.1 source, this legacy ABI has no up-axis-adjust boolean.
0x7962F1: push    edi
0x7962F2: mov     edi, [esp+8+normal]
0x7962F6: lea     esi, [ecx+88h]
0x7962FC: push    edi; value
0x7962FD: mov     ecx, esi; this
0x7962FF: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x796304: lea     eax, [edi+4]
0x796307: push    eax; value
0x796308: mov     ecx, esi; this
0x79630A: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x79630F: add     edi, 8
0x796312: push    edi; value
0x796313: mov     ecx, esi; this
0x796315: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x79631A: pop     edi
0x79631B: pop     esi
0x79631C: retn    4
