0x804C50: push    0FFFFFFFFh
0x804C52: push    offset SEH_8122A0
0x804C57: mov     eax, large fs:0
0x804C5D: push    eax
0x804C5E: push    ecx
0x804C5F: push    ebx
0x804C60: push    esi
0x804C61: push    edi
0x804C62: mov     eax, ds:0B30AACh
0x804C67: xor     eax, esp
0x804C69: push    eax
0x804C6A: lea     eax, [esp+20h+var_C]
0x804C6E: mov     large fs:0, eax
0x804C74: push    8; Size
0x804C76: call    FormHeapAlloc
0x804C7B: add     esp, 4
0x804C7E: mov     [esp+20h+var_10], eax
0x804C82: xor     edi, edi
0x804C84: cmp     eax, edi
0x804C86: mov     [esp+20h+var_4], edi
0x804C8A: jz      short loc_804C95
0x804C8C: mov     ecx, eax
0x804C8E: call    ShaderDefinition__Init
0x804C93: mov     edi, eax
0x804C95: mov     eax, ds:0B43104h
0x804C9A: push    1; StreamCount
0x804C9C: push    2; a2
0x804C9E: push    eax; a1
0x804C9F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x804CA7: call    CreateDX9ShaderDeclaration
0x804CAC: mov     esi, [edi]
0x804CAE: mov     ebx, eax
0x804CB0: add     esp, 0Ch
0x804CB3: cmp     esi, ebx
0x804CB5: jz      short loc_804CE7
0x804CB7: test    esi, esi
0x804CB9: jz      short loc_804CD7
0x804CBB: lea     ecx, [esi+4]
0x804CBE: push    ecx; lpAddend
0x804CBF: call    dword ptr ds:0A2807Ch
0x804CC5: test    eax, eax
0x804CC7: jnz     short loc_804CD7
0x804CC9: test    esi, esi
0x804CCB: jz      short loc_804CD7
0x804CCD: mov     edx, [esi]
0x804CCF: mov     eax, [edx]
0x804CD1: push    1
0x804CD3: mov     ecx, esi
0x804CD5: call    eax
0x804CD7: test    ebx, ebx
0x804CD9: mov     [edi], ebx
0x804CDB: jz      short loc_804CE7
0x804CDD: add     ebx, 4
0x804CE0: push    ebx; lpAddend
0x804CE1: call    dword ptr ds:0A28078h
0x804CE7: mov     ecx, [edi]
0x804CE9: mov     edx, [ecx]
0x804CEB: mov     eax, [edx+50h]
0x804CEE: push    0
0x804CF0: push    2
0x804CF2: push    0
0x804CF4: push    0
0x804CF6: push    0
0x804CF8: call    eax
0x804CFA: mov     ecx, [edi]
0x804CFC: mov     edx, [ecx]
0x804CFE: mov     eax, [edx+50h]
0x804D01: push    0
0x804D03: push    1
0x804D05: push    5
0x804D07: push    7
0x804D09: push    1
0x804D0B: call    eax
0x804D0D: mov     ecx, [edi]
0x804D0F: test    ecx, ecx
0x804D11: jz      short loc_804D2E
0x804D13: mov     edx, [ecx]
0x804D15: mov     eax, [edx+4]
0x804D18: call    eax
0x804D1A: test    eax, eax
0x804D1C: jz      short loc_804D2E
0x804D1E: mov     edi, edi
0x804D20: cmp     eax, offset dword_B3F684
0x804D25: jz      short loc_804D2E
0x804D27: mov     eax, [eax+4]
0x804D2A: test    eax, eax
0x804D2C: jnz     short loc_804D20
0x804D2E: push    0B8h ; '¸'; Size
0x804D33: call    FormHeapAlloc
0x804D38: add     esp, 4
0x804D3B: mov     [esp+20h+var_10], eax
0x804D3F: test    eax, eax
0x804D41: mov     [esp+20h+var_4], 1
0x804D49: jz      short loc_804D56
0x804D4B: mov     ecx, eax; this
0x804D4D: call    ??0CopyShader@@QAE@XZ; CopyShader::CopyShader(void)
0x804D52: mov     esi, eax
0x804D54: jmp     short loc_804D58
0x804D56: xor     esi, esi
0x804D58: mov     edx, [esi]
0x804D5A: mov     eax, [edx+84h]
0x804D60: mov     ecx, esi
0x804D62: mov     [esp+20h+var_4], 0FFFFFFFFh
0x804D6A: call    eax
0x804D6C: mov     edx, [esi]
0x804D6E: mov     eax, [edx+0B0h]
0x804D74: mov     ecx, esi
0x804D76: call    eax
0x804D78: mov     edx, [esi]
0x804D7A: mov     eax, [edx+0B4h]
0x804D80: mov     ecx, esi
0x804D82: call    eax
0x804D84: mov     ebx, [edi+4]
0x804D87: cmp     ebx, esi
0x804D89: jz      short loc_804DB8
0x804D8B: test    ebx, ebx
0x804D8D: jz      short loc_804DAB
0x804D8F: lea     ecx, [ebx+4]
0x804D92: push    ecx; lpAddend
0x804D93: call    dword ptr ds:0A2807Ch
0x804D99: test    eax, eax
0x804D9B: jnz     short loc_804DAB
0x804D9D: test    ebx, ebx
0x804D9F: jz      short loc_804DAB
0x804DA1: mov     edx, [ebx]
0x804DA3: mov     eax, [edx]
0x804DA5: push    1
0x804DA7: mov     ecx, ebx
0x804DA9: call    eax
0x804DAB: mov     [edi+4], esi
0x804DAE: add     esi, 4
0x804DB1: push    esi; lpAddend
0x804DB2: call    dword ptr ds:0A28078h
0x804DB8: mov     ecx, [edi+4]
0x804DBB: mov     edx, [ecx]
0x804DBD: mov     eax, [edi]
0x804DBF: mov     edx, [edx+54h]
0x804DC2: push    eax
0x804DC3: call    edx
0x804DC5: mov     eax, edi
0x804DC7: mov     ecx, dword ptr [esp+20h+var_C]
0x804DCB: mov     large fs:0, ecx
0x804DD2: pop     ecx
0x804DD3: pop     edi
0x804DD4: pop     esi
0x804DD5: pop     ebx
0x804DD6: add     esp, 10h
0x804DD9: retn
