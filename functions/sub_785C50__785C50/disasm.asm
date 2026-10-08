0x785C50: push    esi; stBezierSpline/profile copy helper used when a cached profile already exists.
0x785C51: push    edi
0x785C52: mov     edi, [esp+8+source]
0x785C56: fld     dword ptr [edi]
0x785C58: mov     esi, ecx
0x785C5A: fstp    dword ptr [esi]
0x785C5C: lea     eax, [edi+0Ch]
0x785C5F: fld     dword ptr [edi+4]
0x785C62: push    eax; other
0x785C63: fstp    dword ptr [esi+4]
0x785C66: lea     ecx, [esi+0Ch]; this
0x785C69: fld     dword ptr [edi+8]
0x785C6C: fstp    dword ptr [esi+8]
0x785C6F: call    OB_stVector_stVec_CopyAssign_010201A0; Oblivion 1.2.0.416: vector<stVec> copy assignment with self, empty, reuse, capacity-reuse, and reallocation cases.
0x785C74: lea     ecx, [edi+1Ch]
0x785C77: push    ecx; other
0x785C78: lea     ecx, [esi+1Ch]; this
0x785C7B: call    OB_stVector_stVec_CopyAssign_010201A0; Oblivion 1.2.0.416: vector<stVec> copy assignment with self, empty, reuse, capacity-reuse, and reallocation cases.
0x785C80: lea     edx, [edi+2Ch]
0x785C83: push    edx; source
0x785C84: lea     ecx, [esi+2Ch]; this
0x785C87: call    OB_stVectorUInt32_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned int>, covering self, empty, capacity-reuse, and reallocation paths. CIndexedGeometry::CombineStrips uses it for per-LOD triangle totals.
0x785C8C: lea     eax, [edi+3Ch]
0x785C8F: push    eax; other
0x785C90: lea     ecx, [esi+3Ch]; this
0x785C93: call    OB_stVector_stVec_CopyAssign_010201A0; Oblivion 1.2.0.416: vector<stVec> copy assignment with self, empty, reuse, capacity-reuse, and reallocation cases.
0x785C98: add     edi, 4Ch ; 'L'
0x785C9B: push    edi; other
0x785C9C: lea     ecx, [esi+4Ch]; this
0x785C9F: call    OB_stVector_stVec_CopyAssign_010201A0; Oblivion 1.2.0.416: vector<stVec> copy assignment with self, empty, reuse, capacity-reuse, and reallocation cases.
0x785CA4: pop     edi
0x785CA5: mov     eax, esi
0x785CA7: pop     esi
0x785CA8: retn    4
