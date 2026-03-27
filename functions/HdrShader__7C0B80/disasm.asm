0x7C0B80: push    0FFFFFFFFh
0x7C0B82: push    offset SEH_8122A0
0x7C0B87: mov     eax, large fs:0
0x7C0B8D: push    eax
0x7C0B8E: push    ecx
0x7C0B8F: push    ebx
0x7C0B90: push    esi
0x7C0B91: push    edi
0x7C0B92: mov     eax, ds:0B30AACh
0x7C0B97: xor     eax, esp
0x7C0B99: push    eax
0x7C0B9A: lea     eax, [esp+20h+var_C]
0x7C0B9E: mov     large fs:0, eax
0x7C0BA4: push    8; Size
0x7C0BA6: call    FormHeapAlloc
0x7C0BAB: add     esp, 4
0x7C0BAE: mov     [esp+20h+var_10], eax
0x7C0BB2: xor     edi, edi
0x7C0BB4: cmp     eax, edi
0x7C0BB6: mov     [esp+20h+var_4], edi
0x7C0BBA: jz      short loc_7C0BC5
0x7C0BBC: mov     ecx, eax; this
0x7C0BBE: call    ShaderDefinition__Init
0x7C0BC3: mov     edi, eax
0x7C0BC5: mov     eax, ds:0B43104h
0x7C0BCA: push    1; StreamCount
0x7C0BCC: push    2; a2
0x7C0BCE: push    eax; a1
0x7C0BCF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7C0BD7: call    CreateDX9ShaderDeclaration
0x7C0BDC: mov     esi, [edi]
0x7C0BDE: mov     ebx, eax
0x7C0BE0: add     esp, 0Ch
0x7C0BE3: cmp     esi, ebx
0x7C0BE5: jz      short loc_7C0C17
0x7C0BE7: test    esi, esi
0x7C0BE9: jz      short loc_7C0C07
0x7C0BEB: lea     ecx, [esi+4]
0x7C0BEE: push    ecx; lpAddend
0x7C0BEF: call    dword ptr ds:0A2807Ch
0x7C0BF5: test    eax, eax
0x7C0BF7: jnz     short loc_7C0C07
0x7C0BF9: test    esi, esi
0x7C0BFB: jz      short loc_7C0C07
0x7C0BFD: mov     edx, [esi]
0x7C0BFF: mov     eax, [edx]
0x7C0C01: push    1
0x7C0C03: mov     ecx, esi
0x7C0C05: call    eax
0x7C0C07: test    ebx, ebx
0x7C0C09: mov     [edi], ebx
0x7C0C0B: jz      short loc_7C0C17
0x7C0C0D: add     ebx, 4
0x7C0C10: push    ebx; lpAddend
0x7C0C11: call    dword ptr ds:0A28078h
0x7C0C17: mov     ecx, [edi]
0x7C0C19: mov     edx, [ecx]
0x7C0C1B: mov     eax, [edx+50h]
0x7C0C1E: push    0
0x7C0C20: push    2
0x7C0C22: push    0
0x7C0C24: push    0
0x7C0C26: push    0
0x7C0C28: call    eax
0x7C0C2A: mov     ecx, [edi]
0x7C0C2C: mov     edx, [ecx]
0x7C0C2E: mov     eax, [edx+50h]
0x7C0C31: push    0
0x7C0C33: push    1
0x7C0C35: push    5
0x7C0C37: push    7
0x7C0C39: push    1
0x7C0C3B: call    eax
0x7C0C3D: mov     ecx, [edi]
0x7C0C3F: test    ecx, ecx
0x7C0C41: jz      short loc_7C0C5E
0x7C0C43: mov     edx, [ecx]
0x7C0C45: mov     eax, [edx+4]
0x7C0C48: call    eax
0x7C0C4A: test    eax, eax
0x7C0C4C: jz      short loc_7C0C5E
0x7C0C4E: mov     edi, edi
0x7C0C50: cmp     eax, offset dword_B3F684
0x7C0C55: jz      short loc_7C0C5E
0x7C0C57: mov     eax, [eax+4]
0x7C0C5A: test    eax, eax
0x7C0C5C: jnz     short loc_7C0C50
0x7C0C5E: push    124h; Size
0x7C0C63: call    FormHeapAlloc
0x7C0C68: add     esp, 4
0x7C0C6B: mov     [esp+20h+var_10], eax
0x7C0C6F: test    eax, eax
0x7C0C71: mov     [esp+20h+var_4], 1
0x7C0C79: jz      short loc_7C0C86
0x7C0C7B: mov     ecx, eax; this
0x7C0C7D: call    ??0HDRShader@@QAE@XZ; HDRShader::HDRShader(void)
0x7C0C82: mov     esi, eax
0x7C0C84: jmp     short loc_7C0C88
0x7C0C86: xor     esi, esi
0x7C0C88: mov     edx, [esi]
0x7C0C8A: mov     eax, [edx+84h]
0x7C0C90: mov     ecx, esi
0x7C0C92: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C0C9A: call    eax
0x7C0C9C: mov     edx, [esi]
0x7C0C9E: mov     eax, [edx+0B0h]
0x7C0CA4: mov     ecx, esi
0x7C0CA6: call    eax
0x7C0CA8: mov     edx, [esi]
0x7C0CAA: mov     eax, [edx+0B4h]
0x7C0CB0: mov     ecx, esi
0x7C0CB2: call    eax
0x7C0CB4: mov     ebx, [edi+4]
0x7C0CB7: cmp     ebx, esi
0x7C0CB9: jz      short loc_7C0CE8
0x7C0CBB: test    ebx, ebx
0x7C0CBD: jz      short loc_7C0CDB
0x7C0CBF: lea     ecx, [ebx+4]
0x7C0CC2: push    ecx; lpAddend
0x7C0CC3: call    dword ptr ds:0A2807Ch
0x7C0CC9: test    eax, eax
0x7C0CCB: jnz     short loc_7C0CDB
0x7C0CCD: test    ebx, ebx
0x7C0CCF: jz      short loc_7C0CDB
0x7C0CD1: mov     edx, [ebx]
0x7C0CD3: mov     eax, [edx]
0x7C0CD5: push    1
0x7C0CD7: mov     ecx, ebx
0x7C0CD9: call    eax
0x7C0CDB: mov     [edi+4], esi
0x7C0CDE: add     esi, 4
0x7C0CE1: push    esi; lpAddend
0x7C0CE2: call    dword ptr ds:0A28078h
0x7C0CE8: mov     ecx, [edi+4]
0x7C0CEB: mov     edx, [ecx]
0x7C0CED: mov     eax, [edi]
0x7C0CEF: mov     edx, [edx+54h]
0x7C0CF2: push    eax
0x7C0CF3: call    edx
0x7C0CF5: mov     eax, edi
0x7C0CF7: mov     ecx, dword ptr [esp+20h+var_C]
0x7C0CFB: mov     large fs:0, ecx
0x7C0D02: pop     ecx
0x7C0D03: pop     edi
0x7C0D04: pop     esi
0x7C0D05: pop     ebx
0x7C0D06: add     esp, 10h
0x7C0D09: retn
