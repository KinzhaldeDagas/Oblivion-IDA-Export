0x80EE10: push    0FFFFFFFFh
0x80EE12: push    offset SEH_8122A0
0x80EE17: mov     eax, large fs:0
0x80EE1D: push    eax
0x80EE1E: push    ecx
0x80EE1F: push    ebx
0x80EE20: push    esi
0x80EE21: push    edi
0x80EE22: mov     eax, ds:0B30AACh
0x80EE27: xor     eax, esp
0x80EE29: push    eax
0x80EE2A: lea     eax, [esp+20h+var_C]
0x80EE2E: mov     large fs:0, eax
0x80EE34: push    8; Size
0x80EE36: call    FormHeapAlloc
0x80EE3B: add     esp, 4
0x80EE3E: mov     [esp+20h+var_10], eax
0x80EE42: xor     esi, esi
0x80EE44: cmp     eax, esi
0x80EE46: mov     [esp+20h+var_4], esi
0x80EE4A: jz      short loc_80EE55
0x80EE4C: mov     ecx, eax
0x80EE4E: call    ShaderDefinition__Init
0x80EE53: mov     esi, eax
0x80EE55: mov     eax, ds:0B43104h
0x80EE5A: push    1; StreamCount
0x80EE5C: push    5; a2
0x80EE5E: push    eax; a1
0x80EE5F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x80EE67: call    CreateDX9ShaderDeclaration
0x80EE6C: mov     edi, [esi]
0x80EE6E: mov     ebx, eax
0x80EE70: add     esp, 0Ch
0x80EE73: cmp     edi, ebx
0x80EE75: jz      short loc_80EEA7
0x80EE77: test    edi, edi
0x80EE79: jz      short loc_80EE97
0x80EE7B: lea     ecx, [edi+4]
0x80EE7E: push    ecx; lpAddend
0x80EE7F: call    dword ptr ds:0A2807Ch
0x80EE85: test    eax, eax
0x80EE87: jnz     short loc_80EE97
0x80EE89: test    edi, edi
0x80EE8B: jz      short loc_80EE97
0x80EE8D: mov     edx, [edi]
0x80EE8F: mov     eax, [edx]
0x80EE91: push    1
0x80EE93: mov     ecx, edi
0x80EE95: call    eax
0x80EE97: test    ebx, ebx
0x80EE99: mov     [esi], ebx
0x80EE9B: jz      short loc_80EEA7
0x80EE9D: add     ebx, 4
0x80EEA0: push    ebx; lpAddend
0x80EEA1: call    dword ptr ds:0A28078h
0x80EEA7: mov     ecx, [esi]
0x80EEA9: mov     edx, [ecx]
0x80EEAB: mov     eax, [edx+50h]
0x80EEAE: push    0
0x80EEB0: push    2
0x80EEB2: push    0
0x80EEB4: push    0
0x80EEB6: push    0
0x80EEB8: call    eax
0x80EEBA: mov     ecx, [esi]
0x80EEBC: mov     edx, [ecx]
0x80EEBE: mov     eax, [edx+50h]
0x80EEC1: push    0
0x80EEC3: push    2
0x80EEC5: push    3
0x80EEC7: push    3
0x80EEC9: push    1
0x80EECB: call    eax
0x80EECD: mov     ecx, [esi]
0x80EECF: mov     edx, [ecx]
0x80EED1: mov     eax, [edx+50h]
0x80EED4: push    0
0x80EED6: push    3
0x80EED8: push    4
0x80EEDA: push    5
0x80EEDC: push    2
0x80EEDE: call    eax
0x80EEE0: mov     ecx, [esi]
0x80EEE2: mov     edx, [ecx]
0x80EEE4: mov     eax, [edx+50h]
0x80EEE7: push    0
0x80EEE9: push    1
0x80EEEB: push    5
0x80EEED: push    7
0x80EEEF: push    3
0x80EEF1: call    eax
0x80EEF3: mov     ecx, [esi]
0x80EEF5: mov     edx, [ecx]
0x80EEF7: mov     eax, [edx+4Ch]
0x80EEFA: push    0
0x80EEFC: push    0
0x80EEFE: push    2
0x80EF00: push    3
0x80EF02: push    80000000h
0x80EF07: push    8
0x80EF09: push    4
0x80EF0B: push    0
0x80EF0D: call    eax
0x80EF0F: mov     ecx, [esi]
0x80EF11: test    ecx, ecx
0x80EF13: jz      short loc_80EF2E
0x80EF15: mov     edx, [ecx]
0x80EF17: mov     eax, [edx+4]
0x80EF1A: call    eax
0x80EF1C: test    eax, eax
0x80EF1E: jz      short loc_80EF2E
0x80EF20: cmp     eax, offset dword_B3F684
0x80EF25: jz      short loc_80EF2E
0x80EF27: mov     eax, [eax+4]
0x80EF2A: test    eax, eax
0x80EF2C: jnz     short loc_80EF20
0x80EF2E: push    0B8h ; '¸'; Size
0x80EF33: call    FormHeapAlloc
0x80EF38: add     esp, 4
0x80EF3B: mov     [esp+20h+var_10], eax
0x80EF3F: test    eax, eax
0x80EF41: mov     [esp+20h+var_4], 1
0x80EF49: jz      short loc_80EF56
0x80EF4B: mov     ecx, eax; this
0x80EF4D: call    ??0SpeedTreeFrondShader@@QAE@XZ; SpeedTreeFrondShader::SpeedTreeFrondShader(void)
0x80EF52: mov     edi, eax
0x80EF54: jmp     short loc_80EF58
0x80EF56: xor     edi, edi
0x80EF58: mov     edx, [edi]
0x80EF5A: mov     eax, [edx+84h]
0x80EF60: mov     ecx, edi
0x80EF62: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80EF6A: call    eax
0x80EF6C: mov     edx, [edi]
0x80EF6E: mov     eax, [edx+0A8h]
0x80EF74: mov     ecx, edi
0x80EF76: call    eax
0x80EF78: mov     ecx, edi
0x80EF7A: call    sub_80E730
0x80EF7F: mov     edx, [edi]
0x80EF81: mov     eax, [edx+88h]
0x80EF87: mov     ecx, edi
0x80EF89: call    eax
0x80EF8B: mov     ebx, [esi+4]
0x80EF8E: cmp     ebx, edi
0x80EF90: jz      short loc_80EFBF
0x80EF92: test    ebx, ebx
0x80EF94: jz      short loc_80EFB2
0x80EF96: lea     ecx, [ebx+4]
0x80EF99: push    ecx; lpAddend
0x80EF9A: call    dword ptr ds:0A2807Ch
0x80EFA0: test    eax, eax
0x80EFA2: jnz     short loc_80EFB2
0x80EFA4: test    ebx, ebx
0x80EFA6: jz      short loc_80EFB2
0x80EFA8: mov     edx, [ebx]
0x80EFAA: mov     eax, [edx]
0x80EFAC: push    1
0x80EFAE: mov     ecx, ebx
0x80EFB0: call    eax
0x80EFB2: mov     [esi+4], edi
0x80EFB5: add     edi, 4
0x80EFB8: push    edi; lpAddend
0x80EFB9: call    dword ptr ds:0A28078h
0x80EFBF: mov     ecx, [esi+4]
0x80EFC2: mov     edx, [ecx]
0x80EFC4: mov     eax, [esi]
0x80EFC6: mov     edx, [edx+54h]
0x80EFC9: push    eax
0x80EFCA: call    edx
0x80EFCC: mov     eax, esi
0x80EFCE: mov     ecx, dword ptr [esp+20h+var_C]
0x80EFD2: mov     large fs:0, ecx
0x80EFD9: pop     ecx
0x80EFDA: pop     edi
0x80EFDB: pop     esi
0x80EFDC: pop     ebx
0x80EFDD: add     esp, 10h
0x80EFE0: retn
