0x796590: sub     esp, 0Ch; Oblivion CIndexedGeometry::AddVertexTangent. Appends one xyz tangent to the indexed vertex stream.
0x796593: mov     eax, [esp+0Ch+tangent]
0x796597: fld     dword ptr [eax]
0x796599: push    esi
0x79659A: fstp    [esp+10h+value]
0x79659E: lea     esi, [ecx+0A8h]
0x7965A4: fld     dword ptr [eax+4]
0x7965A7: mov     ecx, esi; this
0x7965A9: fstp    [esp+10h+var_8]
0x7965AD: fld     dword ptr [eax+8]
0x7965B0: lea     eax, [esp+10h+value]
0x7965B4: push    eax; value
0x7965B5: fstp    [esp+14h+var_4]
0x7965B9: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7965BE: lea     ecx, [esp+10h+var_8]
0x7965C2: push    ecx; value
0x7965C3: mov     ecx, esi; this
0x7965C5: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7965CA: lea     edx, [esp+10h+var_4]
0x7965CE: push    edx; value
0x7965CF: mov     ecx, esi; this
0x7965D1: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x7965D6: pop     esi
0x7965D7: add     esp, 0Ch
0x7965DA: retn    4
