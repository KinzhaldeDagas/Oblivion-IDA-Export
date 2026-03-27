0x7B1F20: push    0FFFFFFFFh
0x7B1F22: push    offset SEH_8122A0
0x7B1F27: mov     eax, large fs:0
0x7B1F2D: push    eax
0x7B1F2E: push    ecx
0x7B1F2F: push    ebx
0x7B1F30: push    esi
0x7B1F31: push    edi
0x7B1F32: mov     eax, ds:0B30AACh
0x7B1F37: xor     eax, esp
0x7B1F39: push    eax
0x7B1F3A: lea     eax, [esp+20h+var_C]
0x7B1F3E: mov     large fs:0, eax
0x7B1F44: push    8; Size
0x7B1F46: call    FormHeapAlloc
0x7B1F4B: add     esp, 4
0x7B1F4E: mov     [esp+20h+var_10], eax
0x7B1F52: xor     edi, edi
0x7B1F54: cmp     eax, edi
0x7B1F56: mov     [esp+20h+var_4], edi
0x7B1F5A: jz      short loc_7B1F65
0x7B1F5C: mov     ecx, eax
0x7B1F5E: call    ShaderDefinition__Init
0x7B1F63: mov     edi, eax
0x7B1F65: mov     eax, ds:0B43104h
0x7B1F6A: push    1; StreamCount
0x7B1F6C: push    2; a2
0x7B1F6E: push    eax; a1
0x7B1F6F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7B1F77: call    CreateDX9ShaderDeclaration
0x7B1F7C: mov     esi, [edi]
0x7B1F7E: mov     ebx, eax
0x7B1F80: add     esp, 0Ch
0x7B1F83: cmp     esi, ebx
0x7B1F85: jz      short loc_7B1FB7
0x7B1F87: test    esi, esi
0x7B1F89: jz      short loc_7B1FA7
0x7B1F8B: lea     ecx, [esi+4]
0x7B1F8E: push    ecx; lpAddend
0x7B1F8F: call    dword ptr ds:0A2807Ch
0x7B1F95: test    eax, eax
0x7B1F97: jnz     short loc_7B1FA7
0x7B1F99: test    esi, esi
0x7B1F9B: jz      short loc_7B1FA7
0x7B1F9D: mov     edx, [esi]
0x7B1F9F: mov     eax, [edx]
0x7B1FA1: push    1
0x7B1FA3: mov     ecx, esi
0x7B1FA5: call    eax
0x7B1FA7: test    ebx, ebx
0x7B1FA9: mov     [edi], ebx
0x7B1FAB: jz      short loc_7B1FB7
0x7B1FAD: add     ebx, 4
0x7B1FB0: push    ebx; lpAddend
0x7B1FB1: call    dword ptr ds:0A28078h
0x7B1FB7: mov     ecx, [edi]
0x7B1FB9: mov     edx, [ecx]
0x7B1FBB: mov     eax, [edx+50h]
0x7B1FBE: push    0
0x7B1FC0: push    2
0x7B1FC2: push    0
0x7B1FC4: push    0
0x7B1FC6: push    0
0x7B1FC8: call    eax
0x7B1FCA: mov     ecx, [edi]
0x7B1FCC: mov     edx, [ecx]
0x7B1FCE: mov     eax, [edx+50h]
0x7B1FD1: push    0
0x7B1FD3: push    1
0x7B1FD5: push    5
0x7B1FD7: push    7
0x7B1FD9: push    1
0x7B1FDB: call    eax
0x7B1FDD: mov     ecx, [edi]
0x7B1FDF: test    ecx, ecx
0x7B1FE1: jz      short loc_7B1FFE
0x7B1FE3: mov     edx, [ecx]
0x7B1FE5: mov     eax, [edx+4]
0x7B1FE8: call    eax
0x7B1FEA: test    eax, eax
0x7B1FEC: jz      short loc_7B1FFE
0x7B1FEE: mov     edi, edi
0x7B1FF0: cmp     eax, offset dword_B3F684
0x7B1FF5: jz      short loc_7B1FFE
0x7B1FF7: mov     eax, [eax+4]
0x7B1FFA: test    eax, eax
0x7B1FFC: jnz     short loc_7B1FF0
0x7B1FFE: push    0B8h ; '¸'; Size
0x7B2003: call    FormHeapAlloc
0x7B2008: add     esp, 4
0x7B200B: mov     [esp+20h+var_10], eax
0x7B200F: test    eax, eax
0x7B2011: mov     [esp+20h+var_4], 1
0x7B2019: jz      short loc_7B2026
0x7B201B: mov     ecx, eax; this
0x7B201D: call    ??0MenuBGShader@@QAE@XZ; MenuBGShader::MenuBGShader(void)
0x7B2022: mov     esi, eax
0x7B2024: jmp     short loc_7B2028
0x7B2026: xor     esi, esi
0x7B2028: mov     edx, [esi]
0x7B202A: mov     eax, [edx+84h]
0x7B2030: mov     ecx, esi
0x7B2032: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B203A: call    eax
0x7B203C: mov     edx, [esi]
0x7B203E: mov     eax, [edx+0B0h]
0x7B2044: mov     ecx, esi
0x7B2046: call    eax
0x7B2048: mov     edx, [esi]
0x7B204A: mov     eax, [edx+0B4h]
0x7B2050: mov     ecx, esi
0x7B2052: call    eax
0x7B2054: mov     ebx, [edi+4]
0x7B2057: cmp     ebx, esi
0x7B2059: jz      short loc_7B2088
0x7B205B: test    ebx, ebx
0x7B205D: jz      short loc_7B207B
0x7B205F: lea     ecx, [ebx+4]
0x7B2062: push    ecx; lpAddend
0x7B2063: call    dword ptr ds:0A2807Ch
0x7B2069: test    eax, eax
0x7B206B: jnz     short loc_7B207B
0x7B206D: test    ebx, ebx
0x7B206F: jz      short loc_7B207B
0x7B2071: mov     edx, [ebx]
0x7B2073: mov     eax, [edx]
0x7B2075: push    1
0x7B2077: mov     ecx, ebx
0x7B2079: call    eax
0x7B207B: mov     [edi+4], esi
0x7B207E: add     esi, 4
0x7B2081: push    esi; lpAddend
0x7B2082: call    dword ptr ds:0A28078h
0x7B2088: mov     ecx, [edi+4]
0x7B208B: mov     edx, [ecx]
0x7B208D: mov     eax, [edi]
0x7B208F: mov     edx, [edx+54h]
0x7B2092: push    eax
0x7B2093: call    edx
0x7B2095: mov     eax, edi
0x7B2097: mov     ecx, dword ptr [esp+20h+var_C]
0x7B209B: mov     large fs:0, ecx
0x7B20A2: pop     ecx
0x7B20A3: pop     edi
0x7B20A4: pop     esi
0x7B20A5: pop     ebx
0x7B20A6: add     esp, 10h
0x7B20A9: retn
