0x715B40: push    esi
0x715B41: push    edi
0x715B42: mov     edi, [esp+8+arg_0]
0x715B46: mov     esi, [edi+0Ch]
0x715B49: test    esi, esi
0x715B4B: jz      short loc_715B6C
0x715B4D: lea     ecx, [ecx+0]
0x715B50: fld     dword ptr ds:0A7DEB4h
0x715B56: mov     eax, [esi]
0x715B58: mov     edx, [eax+4Ch]
0x715B5B: fchs
0x715B5D: push    ecx
0x715B5E: mov     ecx, esi
0x715B60: fstp    [esp+0Ch+var_C]
0x715B63: call    edx
0x715B65: mov     esi, [esi+34h]
0x715B68: test    esi, esi
0x715B6A: jnz     short loc_715B50
0x715B6C: mov     eax, [edi]
0x715B6E: mov     edx, [eax+4]
0x715B71: mov     ecx, edi
0x715B73: call    edx
0x715B75: test    eax, eax
0x715B77: jz      short loc_715BBE
0x715B79: lea     esp, [esp+0]
0x715B80: cmp     eax, offset dword_B3FA80
0x715B85: jz      short loc_715B90
0x715B87: mov     eax, [eax+4]
0x715B8A: test    eax, eax
0x715B8C: jnz     short loc_715B80
0x715B8E: jmp     short loc_715BBE
0x715B90: mov     esi, [edi+9Ch]
0x715B96: test    esi, esi
0x715B98: jz      short loc_715BBE
0x715B9A: lea     ebx, [ebx+0]
0x715BA0: lea     eax, [esi+8]
0x715BA3: mov     eax, [eax]
0x715BA5: test    eax, eax
0x715BA7: mov     esi, [esi]
0x715BA9: jz      short loc_715BBA
0x715BAB: cmp     dword ptr [eax+0Ch], 0
0x715BAF: jz      short loc_715BBA
0x715BB1: push    eax
0x715BB2: call    sub_715B40
0x715BB7: add     esp, 4
0x715BBA: test    esi, esi
0x715BBC: jnz     short loc_715BA0
0x715BBE: mov     eax, [edi]
0x715BC0: mov     edx, [eax+8]
0x715BC3: mov     ecx, edi
0x715BC5: call    edx
0x715BC7: test    eax, eax
0x715BC9: jz      short loc_715C00
0x715BCB: movzx   eax, word ptr [edi+0B6h]
0x715BD2: xor     esi, esi
0x715BD4: test    eax, eax
0x715BD6: jbe     short loc_715C00
0x715BD8: cmp     eax, esi
0x715BDA: jbe     short loc_715BF2
0x715BDC: mov     eax, [edi+0B0h]
0x715BE2: mov     eax, [eax+esi*4]
0x715BE5: test    eax, eax
0x715BE7: jz      short loc_715BF2
0x715BE9: push    eax
0x715BEA: call    sub_715B40
0x715BEF: add     esp, 4
0x715BF2: movzx   eax, word ptr [edi+0B6h]
0x715BF9: add     esi, 1
0x715BFC: cmp     eax, esi
0x715BFE: ja      short loc_715BDC
0x715C00: pop     edi
0x715C01: pop     esi
0x715C02: retn
