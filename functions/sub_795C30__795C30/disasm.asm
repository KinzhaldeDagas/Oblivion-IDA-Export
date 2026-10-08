0x795C30: sub     esp, 8; OBLIVION AUTHORITY (2026-08-30): push_back for vector<unsigned int>; appends directly when capacity remains or uses the checked insert-one path. Its observed caller is CIndexedGeometry vertex-color storage.
0x795C33: push    esi
0x795C34: mov     esi, ecx
0x795C36: mov     edx, [esi+4]
0x795C39: test    edx, edx
0x795C3B: jnz     short loc_795C41
0x795C3D: xor     ecx, ecx
0x795C3F: jmp     short loc_795C49
0x795C41: mov     ecx, [esi+8]
0x795C44: sub     ecx, edx
0x795C46: sar     ecx, 2
0x795C49: test    edx, edx
0x795C4B: jz      short loc_795C71
0x795C4D: mov     eax, [esi+0Ch]
0x795C50: sub     eax, edx
0x795C52: sar     eax, 2
0x795C55: cmp     ecx, eax
0x795C57: jnb     short loc_795C71
0x795C59: mov     eax, [esi+8]
0x795C5C: mov     ecx, [esp+0Ch+value]
0x795C60: mov     edx, [ecx]
0x795C62: mov     [eax], edx
0x795C64: add     eax, 4
0x795C67: mov     [esi+8], eax
0x795C6A: pop     esi
0x795C6B: add     esp, 8
0x795C6E: retn    4
0x795C71: push    edi
0x795C72: mov     edi, [esi+8]
0x795C75: cmp     edx, edi
0x795C77: jbe     short loc_795C7E
0x795C79: call    __invalid_parameter_noinfo
0x795C7E: mov     eax, [esp+10h+value]
0x795C82: push    eax; value
0x795C83: push    edi; position
0x795C84: push    esi; position
0x795C85: lea     ecx, [esp+1Ch+result]
0x795C89: push    ecx; result
0x795C8A: mov     ecx, esi; this
0x795C8C: call    OB_stVectorUInt32_InsertOne_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked single-element insertion wrapper for vector<unsigned int>; validates owner/position, delegates to insert-fill, and returns an iterator to the inserted value.
0x795C91: pop     edi
0x795C92: pop     esi
0x795C93: add     esp, 8
0x795C96: retn    4
