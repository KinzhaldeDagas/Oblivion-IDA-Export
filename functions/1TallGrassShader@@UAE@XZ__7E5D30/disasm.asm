0x7E5D30: push    0FFFFFFFFh
0x7E5D32: push    offset ??0TallGrassShader@@QAE@XZ_SEH
0x7E5D37: mov     eax, large fs:0
0x7E5D3D: push    eax
0x7E5D3E: sub     esp, 8
0x7E5D41: push    ebx
0x7E5D42: push    ebp
0x7E5D43: push    esi
0x7E5D44: push    edi
0x7E5D45: mov     eax, ds:0B30AACh
0x7E5D4A: xor     eax, esp
0x7E5D4C: push    eax
0x7E5D4D: lea     eax, [esp+28h+var_C]
0x7E5D51: mov     large fs:0, eax
0x7E5D57: mov     edi, ecx
0x7E5D59: mov     [esp+28h+var_10], edi
0x7E5D5D: mov     dword ptr [edi], offset ??_7TallGrassShader@@6B@; const TallGrassShader::`vftable'
0x7E5D63: mov     [esp+28h+var_4], 3
0x7E5D6B: lea     ebp, [edi+94h]
0x7E5D71: mov     ebx, 14h
0x7E5D76: mov     esi, [ebp+0]
0x7E5D79: test    esi, esi
0x7E5D7B: jz      short loc_7E5DA0
0x7E5D7D: lea     eax, [esi+4]
0x7E5D80: push    eax; lpAddend
0x7E5D81: call    dword ptr ds:0A2807Ch
0x7E5D87: test    eax, eax
0x7E5D89: jnz     short loc_7E5D99
0x7E5D8B: test    esi, esi
0x7E5D8D: jz      short loc_7E5D99
0x7E5D8F: mov     edx, [esi]
0x7E5D91: mov     eax, [edx]
0x7E5D93: push    1
0x7E5D95: mov     ecx, esi
0x7E5D97: call    eax
0x7E5D99: mov     dword ptr [ebp+0], 0
0x7E5DA0: add     ebp, 4
0x7E5DA3: sub     ebx, 1
0x7E5DA6: jnz     short loc_7E5D76
0x7E5DA8: lea     ebx, [edi+134h]
0x7E5DAE: mov     ebp, ebx
0x7E5DB0: mov     [esp+28h+var_14], 2
0x7E5DB8: mov     esi, [ebp+0]
0x7E5DBB: test    esi, esi
0x7E5DBD: jz      short loc_7E5DE2
0x7E5DBF: lea     ecx, [esi+4]
0x7E5DC2: push    ecx; lpAddend
0x7E5DC3: call    dword ptr ds:0A2807Ch
0x7E5DC9: test    eax, eax
0x7E5DCB: jnz     short loc_7E5DDB
0x7E5DCD: test    esi, esi
0x7E5DCF: jz      short loc_7E5DDB
0x7E5DD1: mov     edx, [esi]
0x7E5DD3: mov     eax, [edx]
0x7E5DD5: push    1
0x7E5DD7: mov     ecx, esi
0x7E5DD9: call    eax
0x7E5DDB: mov     dword ptr [ebp+0], 0
0x7E5DE2: add     ebp, 4
0x7E5DE5: sub     [esp+28h+var_14], 1
0x7E5DEA: jnz     short loc_7E5DB8
0x7E5DEC: mov     eax, [edi+158h]
0x7E5DF2: push    eax
0x7E5DF3: mov     dword ptr [edi+15Ch], 0
0x7E5DFD: call    FormHeapFree
0x7E5E02: add     esp, 4
0x7E5E05: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7E5E0A: push    9; int
0x7E5E0C: push    4; unsigned int
0x7E5E0E: push    ebx; void *
0x7E5E0F: mov     byte ptr [esp+38h+var_4], 2
0x7E5E14: call    $LN21
0x7E5E19: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7E5E1E: push    28h ; '('; int
0x7E5E20: push    4; unsigned int
0x7E5E22: lea     eax, [edi+94h]
0x7E5E28: push    eax; void *
0x7E5E29: mov     byte ptr [esp+38h+var_4], 1
0x7E5E2E: call    $LN21
0x7E5E33: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7E5E38: push    3; int
0x7E5E3A: push    4; unsigned int
0x7E5E3C: lea     ecx, [edi+7Ch]
0x7E5E3F: push    ecx; void *
0x7E5E40: mov     byte ptr [esp+38h+var_4], 0
0x7E5E45: call    $LN21
0x7E5E4A: mov     ecx, edi; this
0x7E5E4C: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7E5E54: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7E5E59: mov     ecx, [esp+28h+var_C]
0x7E5E5D: mov     large fs:0, ecx
0x7E5E64: pop     ecx
0x7E5E65: pop     edi
0x7E5E66: pop     esi
0x7E5E67: pop     ebp
0x7E5E68: pop     ebx
0x7E5E69: add     esp, 14h
0x7E5E6C: retn
