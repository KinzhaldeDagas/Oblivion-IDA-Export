0x6D01D0: push    ecx
0x6D01D1: push    ebx
0x6D01D2: mov     ebx, [esp+8+arg_0]
0x6D01D6: push    ebp
0x6D01D7: push    edi
0x6D01D8: push    ebx
0x6D01D9: mov     edi, ecx
0x6D01DB: call    sub_715E40
0x6D01E0: mov     ecx, [ebx]
0x6D01E2: lea     eax, [esp+10h+arg_0]
0x6D01E6: push    eax
0x6D01E7: push    edi
0x6D01E8: call    NiTMap_GetAt
0x6D01ED: mov     ecx, [esp+10h+arg_0]
0x6D01F1: xor     ebp, ebp
0x6D01F3: cmp     [edi+44h], bp
0x6D01F7: mov     [esp+10h+var_4], ecx
0x6D01FB: jbe     short loc_6D024E
0x6D01FD: push    esi
0x6D01FE: mov     edi, edi
0x6D0200: mov     eax, [edi+3Ch]
0x6D0203: movzx   esi, bp
0x6D0206: lea     edx, [esi+esi*2]
0x6D0209: shl     edx, 4
0x6D020C: lea     ecx, [edx+eax]
0x6D020F: mov     edx, [ecx]
0x6D0211: mov     eax, [edx+38h]
0x6D0214: push    ebx
0x6D0215: call    eax
0x6D0217: mov     ecx, [edi+40h]
0x6D021A: cmp     dword ptr [ecx+esi*4], 0
0x6D021E: lea     eax, [ecx+esi*4]
0x6D0221: jz      short loc_6D0244
0x6D0223: mov     eax, [eax]
0x6D0225: mov     ecx, [ebx]
0x6D0227: lea     edx, [esp+14h+arg_0]
0x6D022B: push    edx
0x6D022C: push    eax
0x6D022D: call    NiTMap_GetAt
0x6D0232: mov     ecx, [esp+14h+var_4]
0x6D0236: mov     edx, [ecx+40h]
0x6D0239: neg     al
0x6D023B: sbb     eax, eax
0x6D023D: and     eax, [esp+14h+arg_0]
0x6D0241: mov     [edx+esi*4], eax
0x6D0244: add     ebp, 1
0x6D0247: cmp     bp, [edi+44h]
0x6D024B: jb      short loc_6D0200
0x6D024D: pop     esi
0x6D024E: pop     edi
0x6D024F: pop     ebp
0x6D0250: pop     ebx
0x6D0251: pop     ecx
0x6D0252: retn    4
