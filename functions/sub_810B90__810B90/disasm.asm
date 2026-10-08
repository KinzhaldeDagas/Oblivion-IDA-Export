0x810B90: push    0FFFFFFFFh; Creates ShaderDefinition for SpeedTree branch shader (GetShaderDefinition id 4): declaration id 6, SpeedTreeBranchShader object, branch lighting/TREE program sets.
0x810B92: push    offset SEH_8122A0
0x810B97: mov     eax, large fs:0
0x810B9D: push    eax
0x810B9E: push    ecx
0x810B9F: push    ebx
0x810BA0: push    esi
0x810BA1: push    edi
0x810BA2: mov     eax, ds:0B30AACh
0x810BA7: xor     eax, esp
0x810BA9: push    eax
0x810BAA: lea     eax, [esp+20h+var_C]
0x810BAE: mov     large fs:0, eax
0x810BB4: push    8; Size
0x810BB6: call    FormHeapAlloc
0x810BBB: add     esp, 4
0x810BBE: mov     [esp+20h+var_10], eax
0x810BC2: xor     esi, esi
0x810BC4: cmp     eax, esi
0x810BC6: mov     [esp+20h+var_4], esi
0x810BCA: jz      short loc_810BD5
0x810BCC: mov     ecx, eax
0x810BCE: call    ShaderDefinition__Init
0x810BD3: mov     esi, eax
0x810BD5: mov     eax, ds:0B43104h
0x810BDA: push    1; streamCount
0x810BDC: push    6; elementCount
0x810BDE: push    eax; renderer
0x810BDF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x810BE7: call    CreateDX9ShaderDeclaration; Oblivion NiDX9 declaration factory. Allocates a 0x38-byte NiDX9ShaderDeclaration and initializes elementCount internal element records for each streamCount stream.
0x810BEC: mov     edi, [esi]
0x810BEE: mov     ebx, eax
0x810BF0: add     esp, 0Ch
0x810BF3: cmp     edi, ebx
0x810BF5: jz      short loc_810C27
0x810BF7: test    edi, edi
0x810BF9: jz      short loc_810C17
0x810BFB: lea     ecx, [edi+4]
0x810BFE: push    ecx; lpAddend
0x810BFF: call    dword ptr ds:0A2807Ch
0x810C05: test    eax, eax
0x810C07: jnz     short loc_810C17
0x810C09: test    edi, edi
0x810C0B: jz      short loc_810C17
0x810C0D: mov     edx, [edi]
0x810C0F: mov     eax, [edx]
0x810C11: push    1
0x810C13: mov     ecx, edi
0x810C15: call    eax
0x810C17: test    ebx, ebx
0x810C19: mov     [esi], ebx
0x810C1B: jz      short loc_810C27
0x810C1D: add     ebx, 4
0x810C20: push    ebx; lpAddend
0x810C21: call    dword ptr ds:0A28078h
0x810C27: mov     ecx, [esi]
0x810C29: mov     edx, [ecx]
0x810C2B: mov     eax, [edx+50h]
0x810C2E: push    0
0x810C30: push    2
0x810C32: push    0
0x810C34: push    0
0x810C36: push    0
0x810C38: call    eax
0x810C3A: mov     ecx, [esi]
0x810C3C: mov     edx, [ecx]
0x810C3E: mov     eax, [edx+50h]
0x810C41: push    0
0x810C43: push    2
0x810C45: push    3
0x810C47: push    3
0x810C49: push    1
0x810C4B: call    eax
0x810C4D: mov     ecx, [esi]
0x810C4F: mov     edx, [ecx]
0x810C51: mov     eax, [edx+50h]
0x810C54: push    0
0x810C56: push    1
0x810C58: push    5
0x810C5A: push    7
0x810C5C: push    2
0x810C5E: call    eax
0x810C60: mov     ecx, [esi]
0x810C62: mov     edx, [ecx]
0x810C64: mov     eax, [edx+4Ch]
0x810C67: push    0
0x810C69: push    0
0x810C6B: push    6
0x810C6D: push    2
0x810C6F: push    80000000h
0x810C74: push    8
0x810C76: push    3
0x810C78: push    0
0x810C7A: call    eax
0x810C7C: mov     ecx, [esi]
0x810C7E: mov     edx, [ecx]
0x810C80: mov     eax, [edx+4Ch]
0x810C83: push    0
0x810C85: push    0
0x810C87: push    7
0x810C89: push    2
0x810C8B: push    80000001h
0x810C90: push    9
0x810C92: push    4
0x810C94: push    0
0x810C96: call    eax
0x810C98: mov     ecx, [esi]
0x810C9A: mov     edx, [ecx]
0x810C9C: mov     eax, [edx+4Ch]
0x810C9F: push    0
0x810CA1: push    0
0x810CA3: push    2
0x810CA5: push    3
0x810CA7: push    80000002h
0x810CAC: push    0Ah
0x810CAE: push    5
0x810CB0: push    0
0x810CB2: call    eax
0x810CB4: mov     edi, [esi]
0x810CB6: test    edi, edi
0x810CB8: jz      short loc_810CDF
0x810CBA: mov     edx, [edi]
0x810CBC: mov     eax, [edx+4]
0x810CBF: mov     ecx, edi
0x810CC1: call    eax
0x810CC3: test    eax, eax
0x810CC5: jz      short loc_810CD5
0x810CC7: cmp     eax, offset stru_B3F684
0x810CCC: jz      short loc_810D08
0x810CCE: mov     eax, [eax+4]
0x810CD1: test    eax, eax
0x810CD3: jnz     short loc_810CC7
0x810CD5: xor     al, al
0x810CD7: neg     al
0x810CD9: sbb     eax, eax
0x810CDB: and     eax, edi
0x810CDD: mov     edi, eax
0x810CDF: push    134h; Size
0x810CE4: call    FormHeapAlloc
0x810CE9: add     esp, 4
0x810CEC: mov     [esp+20h+var_10], eax
0x810CF0: test    eax, eax
0x810CF2: mov     [esp+20h+var_4], 1
0x810CFA: jz      short loc_810D0C
0x810CFC: push    edi
0x810CFD: mov     ecx, eax; this
0x810CFF: call    ??0SpeedTreeBranchShader@@QAE@XZ; SpeedTreeBranchShader ctor: ShadowLightShader base, 28 branch vertex-shader refs at +0x9C and 10 branch pixel-shader refs at +0x10C.
0x810D04: mov     edi, eax
0x810D06: jmp     short loc_810D0E
0x810D08: mov     al, 1
0x810D0A: jmp     short loc_810CD7
0x810D0C: xor     edi, edi
0x810D0E: mov     edx, [edi]
0x810D10: mov     eax, [edx+84h]
0x810D16: mov     ecx, edi
0x810D18: mov     [esp+20h+var_4], 0FFFFFFFFh
0x810D20: call    eax
0x810D22: mov     edx, [edi]
0x810D24: mov     eax, [edx+0A8h]
0x810D2A: mov     ecx, edi
0x810D2C: call    eax
0x810D2E: mov     edx, [edi]
0x810D30: mov     eax, [edx+0B4h]
0x810D36: mov     ecx, edi
0x810D38: call    eax
0x810D3A: mov     edx, [edi]
0x810D3C: mov     eax, [edx+0B8h]
0x810D42: mov     ecx, edi
0x810D44: call    eax
0x810D46: mov     edx, [edi]
0x810D48: mov     eax, [edx+88h]
0x810D4E: mov     ecx, edi
0x810D50: call    eax
0x810D52: mov     ebx, [esi+4]
0x810D55: cmp     ebx, edi
0x810D57: jz      short loc_810D86
0x810D59: test    ebx, ebx
0x810D5B: jz      short loc_810D79
0x810D5D: lea     ecx, [ebx+4]
0x810D60: push    ecx; lpAddend
0x810D61: call    dword ptr ds:0A2807Ch
0x810D67: test    eax, eax
0x810D69: jnz     short loc_810D79
0x810D6B: test    ebx, ebx
0x810D6D: jz      short loc_810D79
0x810D6F: mov     edx, [ebx]
0x810D71: mov     eax, [edx]
0x810D73: push    1
0x810D75: mov     ecx, ebx
0x810D77: call    eax
0x810D79: mov     [esi+4], edi
0x810D7C: add     edi, 4
0x810D7F: push    edi; lpAddend
0x810D80: call    dword ptr ds:0A28078h
0x810D86: mov     ecx, [esi+4]
0x810D89: mov     edx, [ecx]
0x810D8B: mov     eax, [esi]
0x810D8D: mov     edx, [edx+54h]
0x810D90: push    eax
0x810D91: call    edx
0x810D93: mov     eax, esi
0x810D95: mov     ecx, dword ptr [esp+20h+var_C]
0x810D99: mov     large fs:0, ecx
0x810DA0: pop     ecx
0x810DA1: pop     edi
0x810DA2: pop     esi
0x810DA3: pop     ebx
0x810DA4: add     esp, 10h
0x810DA7: retn
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
