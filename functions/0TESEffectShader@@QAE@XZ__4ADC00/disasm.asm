0x4ADC00: push    0FFFFFFFFh
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
0x4ADC31: mov     ecx, edi
0x4ADC33: mov     [esp+1Ch+var_4], 0
0x4ADC3B: mov     dword ptr [esi], offset ??_7TESEffectShader@@6B@; const TESEffectShader::`vftable'
0x4ADC41: call    sub_4AC9C0
0x4ADC46: lea     ecx, [esi+0F8h]
0x4ADC4C: call    TESTexture_constr
0x4ADC51: lea     ecx, [esi+104h]
0x4ADC57: mov     byte ptr [esp+1Ch+var_4], 1
0x4ADC5C: call    TESTexture_constr
0x4ADC61: mov     ecx, edi
0x4ADC63: mov     byte ptr [esp+1Ch+var_4], 2
0x4ADC68: mov     byte ptr [esi+4], 43h ; 'C'
0x4ADC6C: call    sub_4AC9C0
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
