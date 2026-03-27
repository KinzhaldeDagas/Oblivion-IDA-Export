0x67E8D0: push    ebp
0x67E8D1: mov     ebp, esp
0x67E8D3: and     esp, 0FFFFFFF8h
0x67E8D6: push    0FFFFFFFFh
0x67E8D8: push    offset SEH_67E8D0
0x67E8DD: mov     eax, large fs:0
0x67E8E3: push    eax
0x67E8E4: sub     esp, 30h
0x67E8E7: push    ebx
0x67E8E8: push    esi
0x67E8E9: push    edi
0x67E8EA: mov     eax, ds:0B30AACh
0x67E8EF: xor     eax, esp
0x67E8F1: push    eax
0x67E8F2: lea     eax, [esp+4Ch+var_C]
0x67E8F6: mov     large fs:0, eax
0x67E8FC: mov     edi, ecx
0x67E8FE: mov     ecx, [edi+1Ch]
0x67E901: xor     al, al
0x67E903: xor     esi, esi
0x67E905: cmp     ecx, esi
0x67E907: mov     [esp+4Ch+var_35], al
0x67E90B: jz      loc_67EB43
0x67E911: cmp     [edi+20h], esi
0x67E914: jz      loc_67EB43
0x67E91A: mov     [esp+4Ch+var_14], esi
0x67E91E: mov     [esp+4Ch+var_1C], esi
0x67E922: mov     [esp+4Ch+var_18], esi
0x67E926: mov     [esp+4Ch+var_20], offset ??_7AStarNodeList@@6B@; const AStarNodeList::`vftable'
0x67E92E: fldz
0x67E930: push    ecx
0x67E931: fstp    [esp+50h+var_50]; float
0x67E934: mov     [esp+50h+var_4], esi
0x67E938: call    sub_67EC70
0x67E93D: mov     eax, [edi+20h]
0x67E940: mov     ecx, [edi+1Ch]
0x67E943: push    eax
0x67E944: push    ecx
0x67E945: call    sub_67EEC0
0x67E94A: fstp    [esp+54h+var_50]; float
0x67E94E: mov     ecx, [edi+1Ch]
0x67E951: add     esp, 4
0x67E954: call    sub_67EC80
0x67E959: mov     ecx, [edi+1Ch]
0x67E95C: call    sub_67EC50
0x67E961: mov     ecx, [edi+1Ch]
0x67E964: push    esi
0x67E965: call    TESWaterCulling__SetCamera
0x67E96A: mov     ecx, [edi+1Ch]
0x67E96D: push    1
0x67E96F: call    sub_67ECD0
0x67E974: mov     edx, [edi+1Ch]
0x67E977: push    edx
0x67E978: lea     ecx, [esp+50h+var_20]
0x67E97C: call    sub_67EFE0
0x67E981: lea     ecx, [esp+4Ch+var_20]
0x67E985: call    sub_67F030
0x67E98A: mov     ebx, eax
0x67E98C: cmp     ebx, esi
0x67E98E: jz      loc_67EB2E
0x67E994: cmp     [esp+4Ch+var_35], 0
0x67E999: jnz     loc_67EB2E
0x67E99F: mov     eax, [edi+20h]
0x67E9A2: cmp     ebx, eax
0x67E9A4: jnz     short loc_67E9AE
0x67E9A6: mov     [esp+4Ch+var_35], 1
0x67E9AB: mov     [edi+24h], eax
0x67E9AE: mov     ecx, ebx
0x67E9B0: call    sub_4E7DE0
0x67E9B5: cmp     eax, esi
0x67E9B7: mov     [esp+4Ch+var_34], eax
0x67E9BB: jz      loc_67EB10
0x67E9C1: jmp     short loc_67E9C7
0x67E9C3: mov     eax, [esp+4Ch+var_34]
0x67E9C7: cmp     dword ptr [eax+4], 0
0x67E9CB: jnz     short loc_67E9D6
0x67E9CD: cmp     dword ptr [eax], 0
0x67E9D0: jz      loc_67EB10
0x67E9D6: cmp     [esp+4Ch+var_35], 0
0x67E9DB: jnz     loc_67EB10
0x67E9E1: mov     esi, [eax]
0x67E9E3: mov     ecx, esi
0x67E9E5: call    sub_67ED70
0x67E9EA: test    al, al
0x67E9EC: jnz     loc_67EAFA
0x67E9F2: mov     ecx, [ebp+arg_0]
0x67E9F5: push    esi
0x67E9F6: push    ebx
0x67E9F7: call    sub_5E0710
0x67E9FC: test    al, al
0x67E9FE: jnz     loc_67EAFA
0x67EA04: mov     ecx, [edi+20h]
0x67EA07: cmp     esi, ecx
0x67EA09: jnz     short loc_67EA21
0x67EA0B: push    ebx
0x67EA0C: mov     [esp+50h+var_35], 1
0x67EA11: call    TESWaterCulling__SetCamera
0x67EA16: mov     eax, [edi+20h]
0x67EA19: mov     [edi+24h], eax
0x67EA1C: jmp     loc_67EB05
0x67EA21: mov     ecx, [ebp+arg_0]
0x67EA24: push    ecx
0x67EA25: push    esi
0x67EA26: push    ebx
0x67EA27: call    sub_67EDE0
0x67EA2C: fstp    [esp+58h+var_30]
0x67EA30: add     esp, 0Ch
0x67EA33: mov     ecx, ebx
0x67EA35: call    sub_67EC60
0x67EA3A: fadd    [esp+4Ch+var_30]
0x67EA3E: mov     ecx, esi
0x67EA40: fstp    dword ptr [esp+4Ch+var_30]
0x67EA44: call    sub_67ECC0
0x67EA49: test    al, al
0x67EA4B: jnz     short loc_67EA58
0x67EA4D: mov     ecx, esi
0x67EA4F: call    sub_67EC90
0x67EA54: test    al, al
0x67EA56: jz      short loc_67EA72
0x67EA58: fld     dword ptr [esp+4Ch+var_30]
0x67EA5C: mov     ecx, esi
0x67EA5E: fstp    [esp+4Ch+var_28]
0x67EA62: call    sub_67EC60
0x67EA67: fcomp   [esp+4Ch+var_28]
0x67EA6B: fnstsw  ax
0x67EA6D: test    ah, 41h
0x67EA70: jnp     short loc_67EAED
0x67EA72: mov     ecx, esi
0x67EA74: call    sub_67ECC0
0x67EA79: test    al, al
0x67EA7B: jnz     short loc_67EA90
0x67EA7D: push    1
0x67EA7F: mov     ecx, esi
0x67EA81: call    sub_67ECD0
0x67EA86: push    esi
0x67EA87: lea     ecx, [esp+50h+var_20]
0x67EA8B: call    sub_67EFE0
0x67EA90: fld     dword ptr [esp+4Ch+var_30]
0x67EA94: push    ecx
0x67EA95: mov     ecx, esi
0x67EA97: fstp    [esp+50h+var_50]; float
0x67EA9A: call    sub_67EC70
0x67EA9F: mov     edx, [edi+20h]
0x67EAA2: push    edx
0x67EAA3: push    esi
0x67EAA4: call    sub_67EEC0
0x67EAA9: fstp    [esp+54h+var_50]; float
0x67EAAD: add     esp, 4
0x67EAB0: mov     ecx, esi
0x67EAB2: call    sub_67EC80
0x67EAB7: mov     ecx, esi
0x67EAB9: call    sub_67EC50
0x67EABE: push    ebx
0x67EABF: mov     ecx, esi
0x67EAC1: call    TESWaterCulling__SetCamera
0x67EAC6: cmp     dword ptr [edi+24h], 0
0x67EACA: jz      short loc_67EAEA
0x67EACC: mov     ecx, esi
0x67EACE: call    sub_67EC40
0x67EAD3: fstp    [esp+4Ch+var_28]
0x67EAD7: mov     ecx, [edi+24h]
0x67EADA: call    sub_67EC40
0x67EADF: fcomp   [esp+4Ch+var_28]
0x67EAE3: fnstsw  ax
0x67EAE5: test    ah, 41h
0x67EAE8: jnz     short loc_67EAED
0x67EAEA: mov     [edi+24h], esi
0x67EAED: mov     eax, [esp+4Ch+var_34]
0x67EAF1: mov     ecx, [eax+4]
0x67EAF4: mov     [esp+4Ch+var_34], ecx
0x67EAF8: jmp     short loc_67EB05
0x67EAFA: mov     edx, [esp+4Ch+var_34]
0x67EAFE: mov     eax, [edx+4]
0x67EB01: mov     [esp+4Ch+var_34], eax
0x67EB05: cmp     [esp+4Ch+var_34], 0
0x67EB0A: jnz     loc_67E9C3
0x67EB10: push    1
0x67EB12: mov     ecx, ebx
0x67EB14: call    sub_67ECA0
0x67EB19: lea     ecx, [esp+4Ch+var_20]
0x67EB1D: call    sub_67F030
0x67EB22: mov     ebx, eax
0x67EB24: xor     esi, esi
0x67EB26: cmp     ebx, esi
0x67EB28: jnz     loc_67E994
0x67EB2E: lea     ecx, [esp+4Ch+var_20]; this
0x67EB32: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x67EB3A: call    ??1AStarNodeList@@UAE@XZ; AStarNodeList::~AStarNodeList(void)
0x67EB3F: mov     al, [esp+4Ch+var_35]
0x67EB43: mov     ecx, [esp+4Ch+var_C]
0x67EB47: mov     large fs:0, ecx
0x67EB4E: pop     ecx
0x67EB4F: pop     edi
0x67EB50: pop     esi
0x67EB51: pop     ebx
0x67EB52: mov     esp, ebp
0x67EB54: pop     ebp
0x67EB55: retn    4
