0x7EC950: push    0FFFFFFFFh
0x7EC952: push    offset SEH_8122A0
0x7EC957: mov     eax, large fs:0
0x7EC95D: push    eax
0x7EC95E: push    ecx
0x7EC95F: push    ebx
0x7EC960: push    esi
0x7EC961: push    edi
0x7EC962: mov     eax, ds:0B30AACh
0x7EC967: xor     eax, esp
0x7EC969: push    eax
0x7EC96A: lea     eax, [esp+20h+var_C]
0x7EC96E: mov     large fs:0, eax
0x7EC974: push    8; Size
0x7EC976: call    FormHeapAlloc
0x7EC97B: add     esp, 4
0x7EC97E: mov     [esp+20h+var_10], eax
0x7EC982: xor     edi, edi
0x7EC984: cmp     eax, edi
0x7EC986: mov     [esp+20h+var_4], edi
0x7EC98A: jz      short loc_7EC995
0x7EC98C: mov     ecx, eax
0x7EC98E: call    ShaderDefinition__Init
0x7EC993: mov     edi, eax
0x7EC995: mov     eax, ds:0B43104h
0x7EC99A: push    1; StreamCount
0x7EC99C: push    2; a2
0x7EC99E: push    eax; a1
0x7EC99F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EC9A7: call    CreateDX9ShaderDeclaration
0x7EC9AC: mov     esi, [edi]
0x7EC9AE: mov     ebx, eax
0x7EC9B0: add     esp, 0Ch
0x7EC9B3: cmp     esi, ebx
0x7EC9B5: jz      short loc_7EC9E7
0x7EC9B7: test    esi, esi
0x7EC9B9: jz      short loc_7EC9D7
0x7EC9BB: lea     ecx, [esi+4]
0x7EC9BE: push    ecx; lpAddend
0x7EC9BF: call    dword ptr ds:0A2807Ch
0x7EC9C5: test    eax, eax
0x7EC9C7: jnz     short loc_7EC9D7
0x7EC9C9: test    esi, esi
0x7EC9CB: jz      short loc_7EC9D7
0x7EC9CD: mov     edx, [esi]
0x7EC9CF: mov     eax, [edx]
0x7EC9D1: push    1
0x7EC9D3: mov     ecx, esi
0x7EC9D5: call    eax
0x7EC9D7: test    ebx, ebx
0x7EC9D9: mov     [edi], ebx
0x7EC9DB: jz      short loc_7EC9E7
0x7EC9DD: add     ebx, 4
0x7EC9E0: push    ebx; lpAddend
0x7EC9E1: call    dword ptr ds:0A28078h
0x7EC9E7: mov     ecx, [edi]
0x7EC9E9: mov     edx, [ecx]
0x7EC9EB: mov     eax, [edx+50h]
0x7EC9EE: push    0
0x7EC9F0: push    2
0x7EC9F2: push    0
0x7EC9F4: push    0
0x7EC9F6: push    0
0x7EC9F8: call    eax
0x7EC9FA: mov     ecx, [edi]
0x7EC9FC: mov     edx, [ecx]
0x7EC9FE: mov     eax, [edx+50h]
0x7ECA01: push    0
0x7ECA03: push    1
0x7ECA05: push    5
0x7ECA07: push    7
0x7ECA09: push    1
0x7ECA0B: call    eax
0x7ECA0D: mov     ecx, [edi]
0x7ECA0F: test    ecx, ecx
0x7ECA11: jz      short loc_7ECA2E
0x7ECA13: mov     edx, [ecx]
0x7ECA15: mov     eax, [edx+4]
0x7ECA18: call    eax
0x7ECA1A: test    eax, eax
0x7ECA1C: jz      short loc_7ECA2E
0x7ECA1E: mov     edi, edi
0x7ECA20: cmp     eax, offset dword_B3F684
0x7ECA25: jz      short loc_7ECA2E
0x7ECA27: mov     eax, [eax+4]
0x7ECA2A: test    eax, eax
0x7ECA2C: jnz     short loc_7ECA20
0x7ECA2E: push    0B4h ; '´'; Size
0x7ECA33: call    FormHeapAlloc
0x7ECA38: add     esp, 4
0x7ECA3B: mov     [esp+20h+var_10], eax
0x7ECA3F: test    eax, eax
0x7ECA41: mov     [esp+20h+var_4], 1
0x7ECA49: jz      short loc_7ECA56
0x7ECA4B: mov     ecx, eax; this
0x7ECA4D: call    ??0GethitShader@@QAE@XZ; GethitShader::GethitShader(void)
0x7ECA52: mov     esi, eax
0x7ECA54: jmp     short loc_7ECA58
0x7ECA56: xor     esi, esi
0x7ECA58: mov     edx, [esi]
0x7ECA5A: mov     eax, [edx+84h]
0x7ECA60: mov     ecx, esi
0x7ECA62: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7ECA6A: call    eax
0x7ECA6C: mov     edx, [esi]
0x7ECA6E: mov     eax, [edx+0B0h]
0x7ECA74: mov     ecx, esi
0x7ECA76: call    eax
0x7ECA78: mov     edx, [esi]
0x7ECA7A: mov     eax, [edx+0B4h]
0x7ECA80: mov     ecx, esi
0x7ECA82: call    eax
0x7ECA84: mov     ebx, [edi+4]
0x7ECA87: cmp     ebx, esi
0x7ECA89: jz      short loc_7ECAB8
0x7ECA8B: test    ebx, ebx
0x7ECA8D: jz      short loc_7ECAAB
0x7ECA8F: lea     ecx, [ebx+4]
0x7ECA92: push    ecx; lpAddend
0x7ECA93: call    dword ptr ds:0A2807Ch
0x7ECA99: test    eax, eax
0x7ECA9B: jnz     short loc_7ECAAB
0x7ECA9D: test    ebx, ebx
0x7ECA9F: jz      short loc_7ECAAB
0x7ECAA1: mov     edx, [ebx]
0x7ECAA3: mov     eax, [edx]
0x7ECAA5: push    1
0x7ECAA7: mov     ecx, ebx
0x7ECAA9: call    eax
0x7ECAAB: mov     [edi+4], esi
0x7ECAAE: add     esi, 4
0x7ECAB1: push    esi; lpAddend
0x7ECAB2: call    dword ptr ds:0A28078h
0x7ECAB8: mov     ecx, [edi+4]
0x7ECABB: mov     edx, [ecx]
0x7ECABD: mov     eax, [edi]
0x7ECABF: mov     edx, [edx+54h]
0x7ECAC2: push    eax
0x7ECAC3: call    edx
0x7ECAC5: mov     eax, edi
0x7ECAC7: mov     ecx, dword ptr [esp+20h+var_C]
0x7ECACB: mov     large fs:0, ecx
0x7ECAD2: pop     ecx
0x7ECAD3: pop     edi
0x7ECAD4: pop     esi
0x7ECAD5: pop     ebx
0x7ECAD6: add     esp, 10h
0x7ECAD9: retn
