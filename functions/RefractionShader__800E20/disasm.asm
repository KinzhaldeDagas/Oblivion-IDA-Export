0x800E20: push    0FFFFFFFFh; MoonSugarEffect decode: RefractionShader definition uses the same two-element image-space declaration as Copy/Hit/NightEye, then allocates, initializes, loads, builds, and refcounts its concrete shader.
0x800E22: push    offset SEH_8122A0
0x800E27: mov     eax, large fs:0
0x800E2D: push    eax
0x800E2E: push    ecx
0x800E2F: push    ebx
0x800E30: push    esi
0x800E31: push    edi
0x800E32: mov     eax, ds:0B30AACh
0x800E37: xor     eax, esp
0x800E39: push    eax
0x800E3A: lea     eax, [esp+20h+var_C]
0x800E3E: mov     large fs:0, eax
0x800E44: push    8; Size
0x800E46: call    FormHeapAlloc
0x800E4B: add     esp, 4
0x800E4E: mov     [esp+20h+var_10], eax
0x800E52: xor     edi, edi
0x800E54: cmp     eax, edi
0x800E56: mov     [esp+20h+var_4], edi
0x800E5A: jz      short loc_800E65
0x800E5C: mov     ecx, eax
0x800E5E: call    ShaderDefinition__Init
0x800E63: mov     edi, eax
0x800E65: mov     eax, ds:0B43104h
0x800E6A: push    1; streamCount
0x800E6C: push    2; elementCount
0x800E6E: push    eax; renderer
0x800E6F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x800E77: call    CreateDX9ShaderDeclaration; Oblivion NiDX9 declaration factory. Allocates a 0x38-byte NiDX9ShaderDeclaration and initializes elementCount internal element records for each streamCount stream.
0x800E7C: mov     esi, [edi]
0x800E7E: mov     ebx, eax
0x800E80: add     esp, 0Ch
0x800E83: cmp     esi, ebx
0x800E85: jz      short loc_800EB7
0x800E87: test    esi, esi
0x800E89: jz      short loc_800EA7
0x800E8B: lea     ecx, [esi+4]
0x800E8E: push    ecx; lpAddend
0x800E8F: call    dword ptr ds:0A2807Ch
0x800E95: test    eax, eax
0x800E97: jnz     short loc_800EA7
0x800E99: test    esi, esi
0x800E9B: jz      short loc_800EA7
0x800E9D: mov     edx, [esi]
0x800E9F: mov     eax, [edx]
0x800EA1: push    1
0x800EA3: mov     ecx, esi
0x800EA5: call    eax
0x800EA7: test    ebx, ebx
0x800EA9: mov     [edi], ebx
0x800EAB: jz      short loc_800EB7
0x800EAD: add     ebx, 4
0x800EB0: push    ebx; lpAddend
0x800EB1: call    dword ptr ds:0A28078h
0x800EB7: mov     ecx, [edi]
0x800EB9: mov     edx, [ecx]
0x800EBB: mov     eax, [edx+50h]
0x800EBE: push    0
0x800EC0: push    2
0x800EC2: push    0
0x800EC4: push    0
0x800EC6: push    0
0x800EC8: call    eax
0x800ECA: mov     ecx, [edi]
0x800ECC: mov     edx, [ecx]
0x800ECE: mov     eax, [edx+50h]
0x800ED1: push    0
0x800ED3: push    1
0x800ED5: push    5
0x800ED7: push    7
0x800ED9: push    1
0x800EDB: call    eax
0x800EDD: mov     ecx, [edi]
0x800EDF: test    ecx, ecx
0x800EE1: jz      short loc_800EFE
0x800EE3: mov     edx, [ecx]
0x800EE5: mov     eax, [edx+4]
0x800EE8: call    eax
0x800EEA: test    eax, eax
0x800EEC: jz      short loc_800EFE
0x800EEE: mov     edi, edi
0x800EF0: cmp     eax, offset stru_B3F684
0x800EF5: jz      short loc_800EFE
0x800EF7: mov     eax, [eax+4]
0x800EFA: test    eax, eax
0x800EFC: jnz     short loc_800EF0
0x800EFE: push    0C4h ; 'Ä'; Size
0x800F03: call    FormHeapAlloc
0x800F08: add     esp, 4
0x800F0B: mov     [esp+20h+var_10], eax
0x800F0F: test    eax, eax
0x800F11: mov     [esp+20h+var_4], 1
0x800F19: jz      short loc_800F26
0x800F1B: mov     ecx, eax; this
0x800F1D: call    ??0RefractionShader@@QAE@XZ; MoonSugarEffect decode: RefractionShader ctor owns one vertex program, one pixel program, one pass, and extra texture slot +0xA0 used for dword_B474AC inner texture.
0x800F22: mov     esi, eax
0x800F24: jmp     short loc_800F28
0x800F26: xor     esi, esi
0x800F28: mov     edx, [esi]
0x800F2A: mov     eax, [edx+84h]
0x800F30: mov     ecx, esi
0x800F32: mov     [esp+20h+var_4], 0FFFFFFFFh
0x800F3A: call    eax
0x800F3C: mov     edx, [esi]
0x800F3E: mov     eax, [edx+0B0h]
0x800F44: mov     ecx, esi
0x800F46: call    eax
0x800F48: mov     edx, [esi]
0x800F4A: mov     eax, [edx+0B4h]
0x800F50: mov     ecx, esi
0x800F52: call    eax
0x800F54: mov     ebx, [edi+4]
0x800F57: cmp     ebx, esi
0x800F59: jz      short loc_800F88
0x800F5B: test    ebx, ebx
0x800F5D: jz      short loc_800F7B
0x800F5F: lea     ecx, [ebx+4]
0x800F62: push    ecx; lpAddend
0x800F63: call    dword ptr ds:0A2807Ch
0x800F69: test    eax, eax
0x800F6B: jnz     short loc_800F7B
0x800F6D: test    ebx, ebx
0x800F6F: jz      short loc_800F7B
0x800F71: mov     edx, [ebx]
0x800F73: mov     eax, [edx]
0x800F75: push    1
0x800F77: mov     ecx, ebx
0x800F79: call    eax
0x800F7B: mov     [edi+4], esi
0x800F7E: add     esi, 4
0x800F81: push    esi; lpAddend
0x800F82: call    dword ptr ds:0A28078h
0x800F88: mov     ecx, [edi+4]
0x800F8B: mov     edx, [ecx]
0x800F8D: mov     eax, [edi]
0x800F8F: mov     edx, [edx+54h]
0x800F92: push    eax
0x800F93: call    edx
0x800F95: mov     eax, edi
0x800F97: mov     ecx, dword ptr [esp+20h+var_C]
0x800F9B: mov     large fs:0, ecx
0x800FA2: pop     ecx
0x800FA3: pop     edi
0x800FA4: pop     esi
0x800FA5: pop     ebx
0x800FA6: add     esp, 10h
0x800FA9: retn
0x9D0CA0: mov     eax, [ebp-10h]
0x9D0CA3: push    eax
0x9D0CA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CA9: pop     ecx
0x9D0CAA: retn
0x9D0CAB: mov     eax, [ebp-10h]
0x9D0CAE: push    eax
0x9D0CAF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CB4: pop     ecx
0x9D0CB5: retn
0x9D0CB6: mov     edx, [esp+arg_4]
0x9D0CBA: lea     eax, [edx-10h]
0x9D0CBD: mov     ecx, [edx-14h]
0x9D0CC0: xor     ecx, eax
0x9D0CC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0CC7: mov     eax, offset stru_AF94E0
0x9D0CCC: jmp     ___CxxFrameHandler3
