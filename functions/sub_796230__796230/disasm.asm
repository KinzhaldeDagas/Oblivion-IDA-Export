0x796230: mov     eax, [esp+rgb]; Oblivion CIndexedGeometry::AddVertexColor. Packs four float channels to the engine's uint color format and appends one packed color.
0x796234: push    esi
0x796235: push    eax; rgb
0x796236: mov     esi, ecx
0x796238: call    OB_CIndexedGeometry_ColorFloatsToUInt_010201A0; OBLIVION AUTHORITY (2026-08-30): Converts rgb[0..2] with truncation after multiplication by 255.0 and packs the result as 0xFFBBGGRR (RGBA byte order in little-endian memory). This routine performs no local channel clamp.
0x79623D: lea     ecx, [esp+4+rgb]
0x796241: push    ecx; value
0x796242: lea     ecx, [esi+58h]; this
0x796245: mov     [esp+8+rgb], eax
0x796249: call    OB_stVectorUInt32_PushBack_010201A0; OBLIVION AUTHORITY (2026-08-30): push_back for vector<unsigned int>; appends directly when capacity remains or uses the checked insert-one path. Its observed caller is CIndexedGeometry vertex-color storage.
0x79624E: pop     esi
0x79624F: retn    4
