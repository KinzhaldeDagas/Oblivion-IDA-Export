0x781C60: sub     esp, 10h
0x781C63: push    ebx
0x781C64: push    esi
0x781C65: push    edi
0x781C66: push    38h ; '8'; Size
0x781C68: mov     edi, ecx
0x781C6A: call    FormHeapAlloc
0x781C6F: mov     esi, eax
0x781C71: xor     ebx, ebx
0x781C73: add     esp, 4
0x781C76: cmp     esi, ebx
0x781C78: jz      short loc_781CDE
0x781C7A: mov     eax, ds:0B428C4h
0x781C7F: push    eax
0x781C80: mov     ecx, esi; this
0x781C82: call    ??0NiD3DShaderProgram@@QAE@XZ; NiD3DShaderProgram::NiD3DShaderProgram(void)
0x781C87: lea     eax, [esp+1Ch+var_C]
0x781C8B: push    eax
0x781C8C: lea     ecx, [esp+20h+var_8]
0x781C90: push    ecx
0x781C91: lea     eax, [esp+24h+var_4]
0x781C95: push    eax
0x781C96: mov     eax, [esp+28h+arg_4]
0x781C9A: mov     dword ptr [esi], offset ??_7NiD3DVertexShader@@6B@; const NiD3DVertexShader::`vftable'
0x781CA0: mov     [esi+28h], bl
0x781CA3: mov     [esi+2Ch], ebx
0x781CA6: mov     [esi+30h], ebx
0x781CA9: mov     [esi+34h], ebx
0x781CAC: mov     edx, [edi]
0x781CAE: mov     edx, [edx+28h]
0x781CB1: lea     ecx, [esp+28h+var_10]
0x781CB5: push    ecx
0x781CB6: mov     ecx, [esp+2Ch+arg_0]
0x781CBA: push    eax
0x781CBB: push    ecx
0x781CBC: mov     ecx, edi
0x781CBE: mov     [esp+34h+var_4], ebx
0x781CC2: mov     [esp+34h+var_10], ebx
0x781CC6: mov     [esp+34h+var_C], ebx
0x781CCA: mov     [esp+34h+var_8], ebx
0x781CCE: call    edx
0x781CD0: test    al, al
0x781CD2: jnz     short loc_781CE9
0x781CD4: mov     eax, [esi]
0x781CD6: mov     edx, [eax]
0x781CD8: push    1
0x781CDA: mov     ecx, esi
0x781CDC: call    edx
0x781CDE: pop     edi
0x781CDF: pop     esi
0x781CE0: xor     eax, eax
0x781CE2: pop     ebx
0x781CE3: add     esp, 10h
0x781CE6: retn    20h ; ' '
0x781CE9: mov     ebx, [esp+1Ch+arg_1C]
0x781CED: mov     eax, [esp+1Ch+var_C]
0x781CF1: mov     ecx, [esp+1Ch+var_8]
0x781CF5: mov     edx, [esp+1Ch+arg_18]
0x781CF9: push    ebp
0x781CFA: push    ebx
0x781CFB: push    eax
0x781CFC: push    ecx
0x781CFD: mov     ecx, [esp+2Ch+var_10]
0x781D01: push    edx
0x781D02: lea     eax, [esp+30h+arg_14]
0x781D06: push    eax
0x781D07: push    ecx
0x781D08: mov     ecx, edi
0x781D0A: call    sub_783BF0
0x781D0F: mov     ebp, eax
0x781D11: test    ebp, ebp
0x781D13: jnz     short loc_781D40
0x781D15: mov     edx, dword ptr [esp+20h+ArgList]
0x781D19: push    edx; ArgList
0x781D1A: push    offset aFailedCreateve; "Failed CreateVertexShader call on %s\n"
0x781D1F: push    eax; int
0x781D20: push    1; int
0x781D22: call    sub_738460
0x781D27: mov     eax, [esi]
0x781D29: mov     edx, [eax]
0x781D2B: add     esp, 10h
0x781D2E: push    1
0x781D30: mov     ecx, esi
0x781D32: call    edx
0x781D34: pop     ebp
0x781D35: pop     edi
0x781D36: pop     esi
0x781D37: xor     eax, eax
0x781D39: pop     ebx
0x781D3A: add     esp, 10h
0x781D3D: retn    20h ; ' '
0x781D40: mov     ecx, dword ptr [esp+20h+ArgList]
0x781D44: mov     eax, [esi]
0x781D46: mov     edx, [eax+8]
0x781D49: push    ecx
0x781D4A: mov     ecx, esi
0x781D4C: call    edx
0x781D4E: mov     eax, [esi]
0x781D50: mov     edx, [eax+10h]
0x781D53: push    0
0x781D55: mov     ecx, esi
0x781D57: call    edx
0x781D59: mov     ecx, [esp+20h+var_10]
0x781D5D: mov     eax, [esi]
0x781D5F: mov     edx, [esp+20h+var_4]
0x781D63: mov     eax, [eax+1Ch]
0x781D66: push    ecx
0x781D67: push    edx
0x781D68: mov     ecx, esi
0x781D6A: call    eax
0x781D6C: mov     edx, [esi]
0x781D6E: mov     eax, [edx+24h]
0x781D71: push    edi
0x781D72: mov     ecx, esi
0x781D74: call    eax
0x781D76: mov     edx, [esi]
0x781D78: mov     eax, [edx+44h]
0x781D7B: push    ebp
0x781D7C: mov     ecx, esi
0x781D7E: call    eax
0x781D80: mov     edx, [esi]
0x781D82: mov     eax, [esp+20h+arg_18]
0x781D86: mov     edx, [edx+3Ch]
0x781D89: push    eax
0x781D8A: mov     ecx, esi
0x781D8C: call    edx
0x781D8E: mov     ecx, [esp+20h+arg_14]
0x781D92: mov     eax, [esi]
0x781D94: mov     edx, [eax+4Ch]
0x781D97: push    ecx
0x781D98: mov     ecx, esi
0x781D9A: call    edx
0x781D9C: mov     eax, [esi]
0x781D9E: mov     edx, [eax+54h]
0x781DA1: push    ebx
0x781DA2: mov     ecx, esi
0x781DA4: call    edx
0x781DA6: pop     ebp
0x781DA7: pop     edi
0x781DA8: mov     eax, esi
0x781DAA: pop     esi
0x781DAB: pop     ebx
0x781DAC: add     esp, 10h
0x781DAF: retn    20h ; ' '
