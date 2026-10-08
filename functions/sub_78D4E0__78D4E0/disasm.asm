0x78D4E0: sub     esp, 8; Oblivion byte-vector push_back: appends in available capacity or delegates to checked insert-one at end. Called by CIndexedGeometry::AddVertexWind for matrix indices.
0x78D4E3: push    esi
0x78D4E4: mov     esi, ecx
0x78D4E6: mov     eax, [esi+4]
0x78D4E9: test    eax, eax
0x78D4EB: jnz     short loc_78D4F1
0x78D4ED: xor     edx, edx
0x78D4EF: jmp     short loc_78D4F6
0x78D4F1: mov     edx, [esi+8]
0x78D4F4: sub     edx, eax
0x78D4F6: test    eax, eax
0x78D4F8: jz      short loc_78D51B
0x78D4FA: mov     ecx, [esi+0Ch]
0x78D4FD: sub     ecx, eax
0x78D4FF: cmp     edx, ecx
0x78D501: jnb     short loc_78D51B
0x78D503: mov     eax, [esi+8]
0x78D506: mov     ecx, [esp+0Ch+value]
0x78D50A: mov     dl, [ecx]
0x78D50C: mov     [eax], dl
0x78D50E: add     eax, 1
0x78D511: mov     [esi+8], eax
0x78D514: pop     esi
0x78D515: add     esp, 8
0x78D518: retn    4
0x78D51B: push    edi
0x78D51C: mov     edi, [esi+8]
0x78D51F: cmp     eax, edi
0x78D521: jbe     short loc_78D528
0x78D523: call    __invalid_parameter_noinfo
0x78D528: mov     eax, [esp+10h+value]
0x78D52C: push    eax; value
0x78D52D: push    edi; Src
0x78D52E: push    esi; position
0x78D52F: lea     ecx, [esp+1Ch+result]
0x78D533: push    ecx; result
0x78D534: mov     ecx, esi; this
0x78D536: call    OB_stVectorByte_InsertOne_010201A0; Oblivion byte-vector insert-one wrapper: converts a checked iterator to an offset, inserts one byte through byte insert-fill, and returns the relocated checked iterator.
0x78D53B: pop     edi
0x78D53C: pop     esi
0x78D53D: add     esp, 8
0x78D540: retn    4
