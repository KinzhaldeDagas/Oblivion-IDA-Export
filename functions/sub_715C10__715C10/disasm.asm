0x715C10: push    esi
0x715C11: push    edi
0x715C12: mov     edi, [esp+8+arg_0]
0x715C16: mov     esi, [edi+0Ch]
0x715C19: test    esi, esi
0x715C1B: jz      short loc_715C38
0x715C1D: lea     ecx, [ecx+0]
0x715C20: mov     eax, [esi]
0x715C22: fld     [esp+8+arg_4]
0x715C26: mov     edx, [eax+4Ch]
0x715C29: push    ecx
0x715C2A: mov     ecx, esi
0x715C2C: fstp    [esp+0Ch+var_C]
0x715C2F: call    edx
0x715C31: mov     esi, [esi+34h]
0x715C34: test    esi, esi
0x715C36: jnz     short loc_715C20
0x715C38: mov     eax, [edi]
0x715C3A: mov     edx, [eax+4]
0x715C3D: mov     ecx, edi
0x715C3F: call    edx
0x715C41: test    eax, eax
0x715C43: jz      short loc_715C86
0x715C45: cmp     eax, offset dword_B3FA80
0x715C4A: jz      short loc_715C55
0x715C4C: mov     eax, [eax+4]
0x715C4F: test    eax, eax
0x715C51: jnz     short loc_715C45
0x715C53: jmp     short loc_715C86
0x715C55: mov     esi, [edi+9Ch]
0x715C5B: test    esi, esi
0x715C5D: jz      short loc_715C86
0x715C5F: nop
0x715C60: lea     eax, [esi+8]
0x715C63: mov     eax, [eax]
0x715C65: test    eax, eax
0x715C67: mov     esi, [esi]
0x715C69: jz      short loc_715C82
0x715C6B: cmp     dword ptr [eax+0Ch], 0
0x715C6F: jz      short loc_715C82
0x715C71: fld     [esp+8+arg_4]
0x715C75: push    ecx
0x715C76: fstp    [esp+0Ch+var_C]; float
0x715C79: push    eax; int
0x715C7A: call    sub_715C10
0x715C7F: add     esp, 8
0x715C82: test    esi, esi
0x715C84: jnz     short loc_715C60
0x715C86: mov     eax, [edi]
0x715C88: mov     edx, [eax+8]
0x715C8B: mov     ecx, edi
0x715C8D: call    edx
0x715C8F: test    eax, eax
0x715C91: jz      short loc_715CD0
0x715C93: movzx   eax, word ptr [edi+0B6h]
0x715C9A: xor     esi, esi
0x715C9C: test    eax, eax
0x715C9E: jbe     short loc_715CD0
0x715CA0: cmp     eax, esi
0x715CA2: jbe     short loc_715CC2
0x715CA4: mov     eax, [edi+0B0h]
0x715CAA: mov     eax, [eax+esi*4]
0x715CAD: test    eax, eax
0x715CAF: jz      short loc_715CC2
0x715CB1: fld     [esp+8+arg_4]
0x715CB5: push    ecx
0x715CB6: fstp    [esp+0Ch+var_C]; float
0x715CB9: push    eax; int
0x715CBA: call    sub_715C10
0x715CBF: add     esp, 8
0x715CC2: movzx   eax, word ptr [edi+0B6h]
0x715CC9: add     esi, 1
0x715CCC: cmp     eax, esi
0x715CCE: ja      short loc_715CA4
0x715CD0: pop     edi
0x715CD1: pop     esi
0x715CD2: retn
