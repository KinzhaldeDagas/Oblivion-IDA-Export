0x7F1B70: push    0FFFFFFFFh; SpeedTreeLeafShaderProperty dtor: releases STLSPData +0xA8 then SpeedTreeShaderLightingProperty base.
0x7F1B72: push    offset ??1SpeedTreeLeafShaderProperty@@UAE@XZ_SEH
0x7F1B77: mov     eax, large fs:0
0x7F1B7D: push    eax
0x7F1B7E: push    ecx
0x7F1B7F: push    ebp
0x7F1B80: push    esi
0x7F1B81: push    edi
0x7F1B82: mov     eax, ds:0B30AACh
0x7F1B87: xor     eax, esp
0x7F1B89: push    eax
0x7F1B8A: lea     eax, [esp+20h+var_C]
0x7F1B8E: mov     large fs:0, eax
0x7F1B94: mov     edi, ecx
0x7F1B96: mov     [esp+20h+var_10], edi
0x7F1B9A: mov     dword ptr [edi], offset ??_7SpeedTreeLeafShaderProperty@@6B@; const SpeedTreeLeafShaderProperty::`vftable'
0x7F1BA0: mov     esi, [edi+0A8h]
0x7F1BA6: test    esi, esi
0x7F1BA8: mov     ebp, ds:0A2807Ch
0x7F1BAE: mov     [esp+20h+var_4], 1
0x7F1BB6: jz      short loc_7F1BDA
0x7F1BB8: lea     eax, [esi+4]
0x7F1BBB: push    eax; lpAddend
0x7F1BBC: call    ebp ; InterlockedDecrement
0x7F1BBE: test    eax, eax
0x7F1BC0: jnz     short loc_7F1BD0
0x7F1BC2: test    esi, esi
0x7F1BC4: jz      short loc_7F1BD0
0x7F1BC6: mov     edx, [esi]
0x7F1BC8: mov     eax, [edx]
0x7F1BCA: push    1
0x7F1BCC: mov     ecx, esi
0x7F1BCE: call    eax
0x7F1BD0: mov     dword ptr [edi+0A8h], 0
0x7F1BDA: mov     esi, [edi+0A8h]
0x7F1BE0: test    esi, esi
0x7F1BE2: mov     byte ptr [esp+20h+var_4], 0
0x7F1BE7: jz      short loc_7F1C01
0x7F1BE9: lea     ecx, [esi+4]
0x7F1BEC: push    ecx; lpAddend
0x7F1BED: call    ebp ; InterlockedDecrement
0x7F1BEF: test    eax, eax
0x7F1BF1: jnz     short loc_7F1C01
0x7F1BF3: test    esi, esi
0x7F1BF5: jz      short loc_7F1C01
0x7F1BF7: mov     edx, [esi]
0x7F1BF9: mov     eax, [edx]
0x7F1BFB: push    1
0x7F1BFD: mov     ecx, esi
0x7F1BFF: call    eax
0x7F1C01: mov     ecx, edi; this
0x7F1C03: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F1C0B: call    ??1SpeedTreeShaderLightingProperty@@UAE@XZ; SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(void)
0x7F1C10: mov     ecx, [esp+20h+var_C]
0x7F1C14: mov     large fs:0, ecx
0x7F1C1B: pop     ecx
0x7F1C1C: pop     edi
0x7F1C1D: pop     esi
0x7F1C1E: pop     ebp
0x7F1C1F: add     esp, 10h
0x7F1C22: retn
0x9CFE00: mov     ecx, [ebp-10h]; this
0x9CFE03: jmp     ??1SpeedTreeShaderLightingProperty@@UAE@XZ; SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(void)
0x9CFE08: mov     ecx, [ebp-10h]
0x9CFE0B: add     ecx, 0A8h ; '¨'; slot
0x9CFE11: jmp     NiPointerSlot_Release
0x9CFE16: mov     edx, [esp+stspData]
0x9CFE1A: lea     eax, [edx-10h]
0x9CFE1D: mov     ecx, [edx-14h]
0x9CFE20: xor     ecx, eax
0x9CFE22: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFE27: mov     eax, offset stru_AF8900
0x9CFE2C: jmp     ___CxxFrameHandler3
