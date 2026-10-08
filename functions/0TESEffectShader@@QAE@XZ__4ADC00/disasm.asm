0x4ADC00: push    0FFFFFFFFh; Verified (Oblivion): constructs the 0x110-byte TESEffectShader. Its 0xE0-byte Data member begins at +0x18 and is followed by TESTexture TextureShaderTexture (+0xF8) and ParticleShaderTexture (+0x104). Fallout's layout is 0x170 bytes with a larger EffectShaderData block and a third texture; this is a confirmed layout divergence.
0x4ADC02: push    offset ??0TESEffectShader@@QAE@XZ_SEH
0x4ADC07: mov     eax, large fs:0
0x4ADC0D: push    eax
0x4ADC0E: push    ecx
0x4ADC0F: push    esi
0x4ADC10: push    edi
0x4ADC11: mov     eax, ds:0B30AACh
0x4ADC16: xor     eax, esp
0x4ADC18: push    eax
0x4ADC19: lea     eax, [esp+1Ch+var_C]
0x4ADC1D: mov     large fs:0, eax
0x4ADC23: mov     esi, ecx
0x4ADC25: mov     [esp+1Ch+var_10], esi
0x4ADC29: call    TESForm_constr
0x4ADC2E: lea     edi, [esi+18h]
0x4ADC31: mov     ecx, edi; this
0x4ADC33: mov     [esp+1Ch+var_4], 0
0x4ADC3B: mov     dword ptr [esi], offset ??_7TESEffectShader@@6B@; const TESEffectShader::`vftable'
0x4ADC41: call    TESEffectShaderData_InitializeDefaults; Verified (Oblivion): constructor initializes TESEffectShaderData at +0x18, then constructs TextureShaderTexture at +0xF8 and ParticleShaderTexture at +0x104. The data layout ends at +0xF8.
0x4ADC46: lea     ecx, [esi+0F8h]
0x4ADC4C: call    TESTexture_constr
0x4ADC51: lea     ecx, [esi+104h]
0x4ADC57: mov     byte ptr [esp+1Ch+var_4], 1
0x4ADC5C: call    TESTexture_constr
0x4ADC61: mov     ecx, edi; this
0x4ADC63: mov     byte ptr [esp+1Ch+var_4], 2
0x4ADC68: mov     byte ptr [esi+4], 43h ; 'C'
0x4ADC6C: call    TESEffectShaderData_InitializeDefaults; Verified (Oblivion): initializes the 0xE0-byte TESEffectShaderData block at TESEffectShader+0x18, including cFlags, blend defaults, particle lifetimes/velocity/scale/colors, and the byte/float values copied by TESEffectShader_ConfigureVisualProperty. Probable member names come from the matching Fallout EffectShaderData layout; the defaults and offsets are directly corroborated in Oblivion.
0x4ADC71: mov     ecx, esi; this
0x4ADC73: call    j_TESForm_InitializeComponents
0x4ADC78: mov     eax, esi
0x4ADC7A: mov     ecx, [esp+1Ch+var_C]
0x4ADC7E: mov     large fs:0, ecx
0x4ADC85: pop     ecx
0x4ADC86: pop     edi
0x4ADC87: pop     esi
0x4ADC88: add     esp, 10h
0x4ADC8B: retn
0x9B2BE0: mov     ecx, [ebp-10h]; this
0x9B2BE3: jmp     TESForm_destr
0x9B2BE8: mov     ecx, [ebp-10h]
0x9B2BEB: add     ecx, 0F8h ; 'ø'; void *
0x9B2BF1: jmp     TESTexture_destr
0x9B2BF6: mov     ecx, [ebp-10h]
0x9B2BF9: add     ecx, 104h; void *
0x9B2BFF: jmp     TESTexture_destr
0x9B2C04: mov     edx, [esp+arg_4]
0x9B2C08: lea     eax, [edx-0Ch]
0x9B2C0B: mov     ecx, [edx-10h]
0x9B2C0E: xor     ecx, eax
0x9B2C10: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2C15: mov     eax, offset stru_ADEA94
0x9B2C1A: jmp     ___CxxFrameHandler3
