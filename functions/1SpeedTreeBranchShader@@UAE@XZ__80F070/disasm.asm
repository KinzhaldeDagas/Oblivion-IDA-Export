0x80F070: push    0FFFFFFFFh
0x80F072: push    offset ??1SpeedTreeBranchShader@@UAE@XZ_SEH
0x80F077: mov     eax, large fs:0
0x80F07D: push    eax
0x80F07E: push    ecx
0x80F07F: push    ebx
0x80F080: push    ebp
0x80F081: push    esi
0x80F082: push    edi
0x80F083: mov     eax, ds:0B30AACh
0x80F088: xor     eax, esp
0x80F08A: push    eax
0x80F08B: lea     eax, [esp+24h+var_C]
0x80F08F: mov     large fs:0, eax
0x80F095: mov     ebp, ecx
0x80F097: mov     [esp+24h+var_10], ebp
0x80F09B: mov     dword ptr [ebp+0], offset ??_7SpeedTreeBranchShader@@6B@; const SpeedTreeBranchShader::`vftable'
0x80F0A2: mov     [esp+24h+var_4], 2
0x80F0AA: lea     edi, [ebp+9Ch]
0x80F0B0: mov     ebx, 1Ch
0x80F0B5: mov     esi, [edi]
0x80F0B7: test    esi, esi
0x80F0B9: jz      short loc_80F0DD
0x80F0BB: lea     eax, [esi+4]
0x80F0BE: push    eax; lpAddend
0x80F0BF: call    dword ptr ds:0A2807Ch
0x80F0C5: test    eax, eax
0x80F0C7: jnz     short loc_80F0D7
0x80F0C9: test    esi, esi
0x80F0CB: jz      short loc_80F0D7
0x80F0CD: mov     edx, [esi]
0x80F0CF: mov     eax, [edx]
0x80F0D1: push    1
0x80F0D3: mov     ecx, esi
0x80F0D5: call    eax
0x80F0D7: mov     dword ptr [edi], 0
0x80F0DD: add     edi, 4
0x80F0E0: sub     ebx, 1
0x80F0E3: jnz     short loc_80F0B5
0x80F0E5: add     ebp, 10Ch
0x80F0EB: mov     edi, ebp
0x80F0ED: mov     ebx, 0Ah
0x80F0F2: mov     esi, [edi]
0x80F0F4: test    esi, esi
0x80F0F6: jz      short loc_80F11A
0x80F0F8: lea     ecx, [esi+4]
0x80F0FB: push    ecx; lpAddend
0x80F0FC: call    dword ptr ds:0A2807Ch
0x80F102: test    eax, eax
0x80F104: jnz     short loc_80F114
0x80F106: test    esi, esi
0x80F108: jz      short loc_80F114
0x80F10A: mov     edx, [esi]
0x80F10C: mov     eax, [edx]
0x80F10E: push    1
0x80F110: mov     ecx, esi
0x80F112: call    eax
0x80F114: mov     dword ptr [edi], 0
0x80F11A: add     edi, 4
0x80F11D: sub     ebx, 1
0x80F120: jnz     short loc_80F0F2
0x80F122: mov     esi, offset dword_B47790
0x80F127: or      edi, 0FFFFFFFFh
0x80F12A: lea     ebx, [ebx+0]
0x80F130: mov     ecx, [esi]
0x80F132: test    ecx, ecx
0x80F134: jz      short loc_80F146
0x80F136: add     [ecx+60h], edi
0x80F139: jnz     short loc_80F140
0x80F13B: call    sub_7604D0
0x80F140: mov     dword ptr [esi], 0
0x80F146: add     esi, 4
0x80F149: cmp     esi, offset unk_B47800
0x80F14F: jl      short loc_80F130
0x80F151: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80F156: push    0Ah; int
0x80F158: push    4; unsigned int
0x80F15A: push    ebp; void *
0x80F15B: mov     byte ptr [esp+34h+var_4], 1
0x80F160: call    $LN21
0x80F165: mov     eax, [esp+24h+var_10]
0x80F169: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80F16E: push    1Ch; int
0x80F170: push    4; unsigned int
0x80F172: add     eax, 9Ch ; 'œ'
0x80F177: push    eax; void *
0x80F178: mov     byte ptr [esp+34h+var_4], 0
0x80F17D: call    $LN21
0x80F182: mov     ecx, [esp+24h+var_10]; this
0x80F186: mov     [esp+24h+var_4], edi
0x80F18A: call    ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x80F18F: mov     ecx, [esp+24h+var_C]
0x80F193: mov     large fs:0, ecx
0x80F19A: pop     ecx
0x80F19B: pop     edi
0x80F19C: pop     esi
0x80F19D: pop     ebp
0x80F19E: pop     ebx
0x80F19F: add     esp, 10h
0x80F1A2: retn
