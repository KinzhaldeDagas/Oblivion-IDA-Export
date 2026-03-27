0x80D940: push    0FFFFFFFFh
0x80D942: push    offset SEH_8122A0
0x80D947: mov     eax, large fs:0
0x80D94D: push    eax
0x80D94E: push    ecx
0x80D94F: push    ebx
0x80D950: push    esi
0x80D951: push    edi
0x80D952: mov     eax, ds:0B30AACh
0x80D957: xor     eax, esp
0x80D959: push    eax
0x80D95A: lea     eax, [esp+20h+var_C]
0x80D95E: mov     large fs:0, eax
0x80D964: push    8; Size
0x80D966: call    FormHeapAlloc
0x80D96B: add     esp, 4
0x80D96E: mov     [esp+20h+var_10], eax
0x80D972: xor     edi, edi
0x80D974: cmp     eax, edi
0x80D976: mov     [esp+20h+var_4], edi
0x80D97A: jz      short loc_80D985
0x80D97C: mov     ecx, eax
0x80D97E: call    ShaderDefinition__Init
0x80D983: mov     edi, eax
0x80D985: mov     eax, ds:0B43104h
0x80D98A: push    1; StreamCount
0x80D98C: push    6; a2
0x80D98E: push    eax; a1
0x80D98F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x80D997: call    CreateDX9ShaderDeclaration
0x80D99C: mov     esi, [edi]
0x80D99E: mov     ebx, eax
0x80D9A0: add     esp, 0Ch
0x80D9A3: cmp     esi, ebx
0x80D9A5: jz      short loc_80D9D7
0x80D9A7: test    esi, esi
0x80D9A9: jz      short loc_80D9C7
0x80D9AB: lea     ecx, [esi+4]
0x80D9AE: push    ecx; lpAddend
0x80D9AF: call    dword ptr ds:0A2807Ch
0x80D9B5: test    eax, eax
0x80D9B7: jnz     short loc_80D9C7
0x80D9B9: test    esi, esi
0x80D9BB: jz      short loc_80D9C7
0x80D9BD: mov     edx, [esi]
0x80D9BF: mov     eax, [edx]
0x80D9C1: push    1
0x80D9C3: mov     ecx, esi
0x80D9C5: call    eax
0x80D9C7: test    ebx, ebx
0x80D9C9: mov     [edi], ebx
0x80D9CB: jz      short loc_80D9D7
0x80D9CD: add     ebx, 4
0x80D9D0: push    ebx; lpAddend
0x80D9D1: call    dword ptr ds:0A28078h
0x80D9D7: mov     ecx, ds:0B43104h
0x80D9DD: push    1; StreamCount
0x80D9DF: push    8; a2
0x80D9E1: push    ecx; a1
0x80D9E2: call    CreateDX9ShaderDeclaration
0x80D9E7: mov     ecx, [edi]
0x80D9E9: mov     edx, [ecx]
0x80D9EB: add     esp, 0Ch
0x80D9EE: push    0
0x80D9F0: push    2
0x80D9F2: push    0
0x80D9F4: push    0
0x80D9F6: mov     esi, eax
0x80D9F8: mov     eax, [edx+50h]
0x80D9FB: push    0
0x80D9FD: call    eax
0x80D9FF: mov     ecx, [edi]
0x80DA01: mov     edx, [ecx]
0x80DA03: mov     eax, [edx+50h]
0x80DA06: push    0
0x80DA08: push    2
0x80DA0A: push    3
0x80DA0C: push    3
0x80DA0E: push    1
0x80DA10: call    eax
0x80DA12: mov     ecx, [edi]
0x80DA14: mov     edx, [ecx]
0x80DA16: mov     eax, [edx+50h]
0x80DA19: push    0
0x80DA1B: push    3
0x80DA1D: push    4
0x80DA1F: push    5
0x80DA21: push    2
0x80DA23: call    eax
0x80DA25: mov     ecx, [edi]
0x80DA27: mov     edx, [ecx]
0x80DA29: mov     eax, [edx+50h]
0x80DA2C: push    0
0x80DA2E: push    1
0x80DA30: push    5
0x80DA32: push    7
0x80DA34: push    3
0x80DA36: call    eax
0x80DA38: mov     ecx, [edi]
0x80DA3A: mov     edx, [ecx]
0x80DA3C: mov     eax, [edx+4Ch]
0x80DA3F: push    0
0x80DA41: push    0
0x80DA43: push    6
0x80DA45: push    2
0x80DA47: push    80000000h
0x80DA4C: push    0Eh
0x80DA4E: push    4
0x80DA50: push    0
0x80DA52: call    eax
0x80DA54: mov     ecx, [edi]
0x80DA56: mov     edx, [ecx]
0x80DA58: mov     eax, [edx+4Ch]
0x80DA5B: push    0
0x80DA5D: push    0
0x80DA5F: push    7
0x80DA61: push    2
0x80DA63: push    80000001h
0x80DA68: push    0Fh
0x80DA6A: push    5
0x80DA6C: push    0
0x80DA6E: call    eax
0x80DA70: mov     edx, [esi]
0x80DA72: mov     eax, [edx+50h]
0x80DA75: push    0
0x80DA77: push    2
0x80DA79: push    0
0x80DA7B: push    0
0x80DA7D: push    0
0x80DA7F: mov     ecx, esi
0x80DA81: call    eax
0x80DA83: mov     edx, [esi]
0x80DA85: push    0
0x80DA87: push    3
0x80DA89: push    1
0x80DA8B: push    1
0x80DA8D: mov     eax, [edx+50h]
0x80DA90: push    1
0x80DA92: mov     ecx, esi
0x80DA94: call    eax
0x80DA96: mov     edx, [esi]
0x80DA98: mov     eax, [edx+50h]
0x80DA9B: push    0
0x80DA9D: push    4
0x80DA9F: push    2
0x80DAA1: push    2
0x80DAA3: push    2
0x80DAA5: mov     ecx, esi
0x80DAA7: call    eax
0x80DAA9: mov     edx, [esi]
0x80DAAB: mov     eax, [edx+50h]
0x80DAAE: push    0
0x80DAB0: push    2
0x80DAB2: push    3
0x80DAB4: push    3
0x80DAB6: push    3
0x80DAB8: mov     ecx, esi
0x80DABA: call    eax
0x80DABC: mov     edx, [esi]
0x80DABE: mov     eax, [edx+50h]
0x80DAC1: push    0
0x80DAC3: push    3
0x80DAC5: push    4
0x80DAC7: push    5
0x80DAC9: push    4
0x80DACB: mov     ecx, esi
0x80DACD: call    eax
0x80DACF: mov     edx, [esi]
0x80DAD1: mov     eax, [edx+50h]
0x80DAD4: push    0
0x80DAD6: push    1
0x80DAD8: push    5
0x80DADA: push    7
0x80DADC: push    5
0x80DADE: mov     ecx, esi
0x80DAE0: call    eax
0x80DAE2: mov     edx, [esi]
0x80DAE4: mov     eax, [edx+4Ch]
0x80DAE7: push    0
0x80DAE9: push    0
0x80DAEB: push    6
0x80DAED: push    2
0x80DAEF: push    80000000h
0x80DAF4: push    0Eh
0x80DAF6: push    6
0x80DAF8: push    0
0x80DAFA: mov     ecx, esi
0x80DAFC: call    eax
0x80DAFE: mov     edx, [esi]
0x80DB00: mov     eax, [edx+4Ch]
0x80DB03: push    0
0x80DB05: push    0
0x80DB07: push    7
0x80DB09: push    2
0x80DB0B: push    80000001h
0x80DB10: push    0Fh
0x80DB12: push    7
0x80DB14: push    0
0x80DB16: mov     ecx, esi
0x80DB18: call    eax
0x80DB1A: mov     ebx, [edi]
0x80DB1C: test    ebx, ebx
0x80DB1E: jz      short loc_80DB48
0x80DB20: mov     edx, [ebx]
0x80DB22: mov     eax, [edx+4]
0x80DB25: mov     ecx, ebx
0x80DB27: call    eax
0x80DB29: test    eax, eax
0x80DB2B: jz      short loc_80DB3E
0x80DB2D: lea     ecx, [ecx+0]
0x80DB30: cmp     eax, offset dword_B3F684
0x80DB35: jz      short loc_80DB97
0x80DB37: mov     eax, [eax+4]
0x80DB3A: test    eax, eax
0x80DB3C: jnz     short loc_80DB30
0x80DB3E: xor     al, al
0x80DB40: neg     al
0x80DB42: sbb     eax, eax
0x80DB44: and     eax, ebx
0x80DB46: mov     ebx, eax
0x80DB48: mov     edx, [esi]
0x80DB4A: mov     eax, [edx+4]
0x80DB4D: mov     ecx, esi
0x80DB4F: call    eax
0x80DB51: test    eax, eax
0x80DB53: jz      short loc_80DB63
0x80DB55: cmp     eax, offset dword_B3F684
0x80DB5A: jz      short loc_80DB9B
0x80DB5C: mov     eax, [eax+4]
0x80DB5F: test    eax, eax
0x80DB61: jnz     short loc_80DB55
0x80DB63: xor     al, al
0x80DB65: neg     al
0x80DB67: push    0FCh ; 'ü'; Size
0x80DB6C: sbb     eax, eax
0x80DB6E: and     eax, esi
0x80DB70: mov     esi, eax
0x80DB72: call    FormHeapAlloc
0x80DB77: add     esp, 4
0x80DB7A: mov     [esp+20h+var_10], eax
0x80DB7E: test    eax, eax
0x80DB80: mov     [esp+20h+var_4], 1
0x80DB88: jz      short loc_80DB9F
0x80DB8A: push    esi
0x80DB8B: push    ebx
0x80DB8C: mov     ecx, eax; this
0x80DB8E: call    ??0HairShader@@QAE@XZ; HairShader::HairShader(void)
0x80DB93: mov     esi, eax
0x80DB95: jmp     short loc_80DBA1
0x80DB97: mov     al, 1
0x80DB99: jmp     short loc_80DB40
0x80DB9B: mov     al, 1
0x80DB9D: jmp     short loc_80DB65
0x80DB9F: xor     esi, esi
0x80DBA1: mov     edx, [esi]
0x80DBA3: mov     eax, [edx+84h]
0x80DBA9: mov     ecx, esi
0x80DBAB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80DBB3: call    eax
0x80DBB5: mov     edx, [esi]
0x80DBB7: mov     eax, [edx+0A8h]
0x80DBBD: mov     ecx, esi
0x80DBBF: call    eax
0x80DBC1: mov     edx, [esi]
0x80DBC3: mov     eax, [edx+0B4h]
0x80DBC9: mov     ecx, esi
0x80DBCB: call    eax
0x80DBCD: mov     edx, [esi]
0x80DBCF: mov     eax, [edx+0B8h]
0x80DBD5: mov     ecx, esi
0x80DBD7: call    eax
0x80DBD9: mov     edx, [esi]
0x80DBDB: mov     eax, [edx+88h]
0x80DBE1: mov     ecx, esi
0x80DBE3: call    eax
0x80DBE5: mov     ebx, [edi+4]
0x80DBE8: cmp     ebx, esi
0x80DBEA: jz      short loc_80DC19
0x80DBEC: test    ebx, ebx
0x80DBEE: jz      short loc_80DC0C
0x80DBF0: lea     ecx, [ebx+4]
0x80DBF3: push    ecx; lpAddend
0x80DBF4: call    dword ptr ds:0A2807Ch
0x80DBFA: test    eax, eax
0x80DBFC: jnz     short loc_80DC0C
0x80DBFE: test    ebx, ebx
0x80DC00: jz      short loc_80DC0C
0x80DC02: mov     edx, [ebx]
0x80DC04: mov     eax, [edx]
0x80DC06: push    1
0x80DC08: mov     ecx, ebx
0x80DC0A: call    eax
0x80DC0C: mov     [edi+4], esi
0x80DC0F: add     esi, 4
0x80DC12: push    esi; lpAddend
0x80DC13: call    dword ptr ds:0A28078h
0x80DC19: mov     ecx, [edi+4]
0x80DC1C: mov     edx, [ecx]
0x80DC1E: mov     eax, [edi]
0x80DC20: mov     edx, [edx+54h]
0x80DC23: push    eax
0x80DC24: call    edx
0x80DC26: mov     eax, edi
0x80DC28: mov     ecx, dword ptr [esp+20h+var_C]
0x80DC2C: mov     large fs:0, ecx
0x80DC33: pop     ecx
0x80DC34: pop     edi
0x80DC35: pop     esi
0x80DC36: pop     ebx
0x80DC37: add     esp, 10h
0x80DC3A: retn
