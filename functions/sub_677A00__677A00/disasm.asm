0x677A00: push    esi
0x677A01: push    edi
0x677A02: mov     edi, ecx
0x677A04: lea     ecx, [edi+68h]; this
0x677A07: call    sub_7616D0
0x677A0C: mov     esi, eax
0x677A0E: test    esi, esi
0x677A10: jz      short loc_677A3F
0x677A12: cmp     dword ptr [esi+4], 0
0x677A16: jnz     short loc_677A1D
0x677A18: cmp     dword ptr [esi], 0
0x677A1B: jz      short loc_677A3F
0x677A1D: mov     ecx, [esi]
0x677A1F: mov     eax, [ecx]
0x677A21: mov     edx, [eax+190h]
0x677A27: call    edx
0x677A29: test    al, al
0x677A2B: jz      short loc_677A38
0x677A2D: mov     ecx, [esi]
0x677A2F: test    ecx, ecx
0x677A31: jz      short loc_677A38
0x677A33: call    sub_5E4FC0
0x677A38: mov     esi, [esi+4]
0x677A3B: test    esi, esi
0x677A3D: jnz     short loc_677A12
0x677A3F: mov     ecx, edi; this
0x677A41: call    sub_7616D0
0x677A46: mov     esi, eax
0x677A48: test    esi, esi
0x677A4A: jz      short loc_677A7D
0x677A4C: lea     esp, [esp+0]
0x677A50: cmp     dword ptr [esi+4], 0
0x677A54: jnz     short loc_677A5B
0x677A56: cmp     dword ptr [esi], 0
0x677A59: jz      short loc_677A7D
0x677A5B: mov     ecx, [esi]
0x677A5D: mov     eax, [ecx]
0x677A5F: mov     edx, [eax+190h]
0x677A65: call    edx
0x677A67: test    al, al
0x677A69: jz      short loc_677A76
0x677A6B: mov     ecx, [esi]
0x677A6D: test    ecx, ecx
0x677A6F: jz      short loc_677A76
0x677A71: call    sub_5E4FC0
0x677A76: mov     esi, [esi+4]
0x677A79: test    esi, esi
0x677A7B: jnz     short loc_677A50
0x677A7D: mov     ecx, ds:0B333C4h
0x677A83: test    ecx, ecx
0x677A85: pop     edi
0x677A86: pop     esi
0x677A87: jz      short locret_677A8E
0x677A89: jmp     sub_5E4FC0
0x677A8E: retn
