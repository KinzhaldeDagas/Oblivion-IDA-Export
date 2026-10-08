0x7F1960: push    0FFFFFFFFh; SpeedTreeLeafShaderProperty ctor: LightingProperty base with STSPData, then stores STLSPData ref at +0xA8 and leaf LOD index word at +0xAC.
0x7F1962: push    offset ??1SpeedTreeLeafShaderProperty@@UAE@XZ_SEH
0x7F1967: mov     eax, large fs:0
0x7F196D: push    eax
0x7F196E: push    ecx
0x7F196F: push    ebx
0x7F1970: push    esi
0x7F1971: push    edi
0x7F1972: mov     eax, ds:0B30AACh
0x7F1977: xor     eax, esp
0x7F1979: push    eax
0x7F197A: lea     eax, [esp+20h+var_C]
0x7F197E: mov     large fs:0, eax
0x7F1984: mov     esi, ecx
0x7F1986: mov     [esp+20h+var_10], esi
0x7F198A: mov     eax, [esp+20h+stspData]
0x7F198E: push    eax; data
0x7F198F: call    OB_SpeedTreeShaderLightingProperty_ctorWithSTSP_010201A0; SpeedTreeShaderLightingProperty ctor: BSShaderLightingProperty base, stores STSPData ref at +0xA4, clears auxiliary ref +0x9C, sets mode/enable dword +0xA0=1.
0x7F1994: mov     dword ptr [esi], offset ??_7SpeedTreeLeafShaderProperty@@6B@; const SpeedTreeLeafShaderProperty::`vftable'
0x7F199A: mov     [esp+20h+var_4], 0
0x7F19A2: mov     dword ptr [esi+0A8h], 0
0x7F19AC: mov     edi, [esi+0A8h]
0x7F19B2: mov     ebx, [esp+20h+stlspData]
0x7F19B6: cmp     edi, ebx
0x7F19B8: mov     byte ptr [esp+20h+var_4], 1
0x7F19BD: jz      short loc_7F1A0F
0x7F19BF: test    edi, edi
0x7F19C1: jz      short loc_7F19DF
0x7F19C3: lea     ecx, [edi+4]
0x7F19C6: push    ecx; lpAddend
0x7F19C7: call    dword ptr ds:0A2807Ch
0x7F19CD: test    eax, eax
0x7F19CF: jnz     short loc_7F19DF
0x7F19D1: test    edi, edi
0x7F19D3: jz      short loc_7F19DF
0x7F19D5: mov     edx, [edi]
0x7F19D7: mov     eax, [edx]
0x7F19D9: push    1
0x7F19DB: mov     ecx, edi
0x7F19DD: call    eax
0x7F19DF: test    ebx, ebx
0x7F19E1: mov     [esi+0A8h], ebx
0x7F19E7: jz      short loc_7F1A01
0x7F19E9: add     ebx, 4
0x7F19EC: push    ebx; lpAddend
0x7F19ED: call    dword ptr ds:0A28078h
0x7F19F3: mov     cx, [esp+20h+leafLodIndex]
0x7F19F8: mov     [esi+0ACh], cx
0x7F19FF: jmp     short loc_7F1A1B
0x7F1A01: mov     dx, [esp+20h+leafLodIndex]
0x7F1A06: mov     [esi+0ACh], dx
0x7F1A0D: jmp     short loc_7F1A1B
0x7F1A0F: mov     ax, [esp+20h+leafLodIndex]
0x7F1A14: mov     [esi+0ACh], ax
0x7F1A1B: mov     eax, esi
0x7F1A1D: mov     ecx, [esp+20h+var_C]
0x7F1A21: mov     large fs:0, ecx
0x7F1A28: pop     ecx
0x7F1A29: pop     edi
0x7F1A2A: pop     esi
0x7F1A2B: pop     ebx
0x7F1A2C: add     esp, 10h
0x7F1A2F: retn    0Ch
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
