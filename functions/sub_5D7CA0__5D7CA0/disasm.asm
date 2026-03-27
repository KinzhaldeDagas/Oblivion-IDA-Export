0x5D7CA0: push    0FFFFFFFFh
0x5D7CA2: push    offset SEH_6BB960
0x5D7CA7: mov     eax, large fs:0
0x5D7CAD: push    eax
0x5D7CAE: sub     esp, 8
0x5D7CB1: push    ebx
0x5D7CB2: push    ebp
0x5D7CB3: push    esi
0x5D7CB4: push    edi
0x5D7CB5: mov     eax, ds:0B30AACh
0x5D7CBA: xor     eax, esp
0x5D7CBC: push    eax
0x5D7CBD: lea     eax, [esp+28h+var_C]
0x5D7CC1: mov     large fs:0, eax
0x5D7CC7: mov     esi, ecx
0x5D7CC9: mov     ecx, [esi+70h]
0x5D7CCC: call    sub_57D2F0
0x5D7CD1: test    al, al
0x5D7CD3: mov     edi, [esp+28h+arg_0]
0x5D7CD7: jz      short loc_5D7D37
0x5D7CD9: mov     ecx, [esi+70h]
0x5D7CDC: push    0
0x5D7CDE: call    sub_57DD90
0x5D7CE3: mov     ecx, [esi+70h]
0x5D7CE6: call    sub_580120
0x5D7CEB: mov     ecx, [esi+54h]
0x5D7CEE: push    eax
0x5D7CEF: push    0FDEh
0x5D7CF4: call    Tile_SetString
0x5D7CF9: mov     ecx, [esi+70h]
0x5D7CFC: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D7D01: mov     ecx, [esi+74h]
0x5D7D04: add     ecx, 18h
0x5D7D07: push    0; a3
0x5D7D09: push    eax; a2
0x5D7D0A: add     ecx, 4; this
0x5D7D0D: call    BSStringT_Set
0x5D7D12: cmp     edi, 0Fh
0x5D7D15: jnz     loc_5D7DCA
0x5D7D1B: mov     esi, [esi+74h]
0x5D7D1E: test    esi, esi
0x5D7D20: jz      short loc_5D7D2D
0x5D7D22: mov     eax, [esi]
0x5D7D24: mov     edx, [eax+10h]
0x5D7D27: push    1
0x5D7D29: mov     ecx, esi
0x5D7D2B: call    edx
0x5D7D2D: call    sub_5D76A0
0x5D7D32: jmp     loc_5D811A
0x5D7D37: cmp     edi, 2
0x5D7D3A: jnz     short loc_5D7D12
0x5D7D3C: mov     ecx, esi
0x5D7D3E: call    sub_5D7590
0x5D7D43: mov     ecx, [esi+70h]
0x5D7D46: call    sub_580120
0x5D7D4B: mov     ecx, [esi+54h]
0x5D7D4E: push    eax
0x5D7D4F: push    0FDEh
0x5D7D54: call    Tile_SetString
0x5D7D59: mov     ecx, [esi+70h]
0x5D7D5C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D7D61: mov     ecx, [esi+74h]
0x5D7D64: add     ecx, 18h
0x5D7D67: push    0; a3
0x5D7D69: push    eax; a2
0x5D7D6A: add     ecx, 4; this
0x5D7D6D: call    BSStringT_Set
0x5D7D72: mov     ebp, [esp+28h+arg_4]
0x5D7D76: push    0FB4h
0x5D7D7B: mov     ecx, ebp
0x5D7D7D: call    Tile_GetFloat
0x5D7D82: fcomp   dword ptr ds:0A31C80h
0x5D7D88: fnstsw  ax
0x5D7D8A: test    ah, 44h
0x5D7D8D: jp      loc_5D809C
0x5D7D93: mov     edi, [esi+58h]
0x5D7D96: push    0FAEh
0x5D7D9B: mov     ecx, ebp
0x5D7D9D: xor     ebx, ebx
0x5D7D9F: call    Tile_GetFloat
0x5D7DA4: call    Double_To_SInt32
0x5D7DA9: xor     ebp, ebp
0x5D7DAB: cmp     edi, ebp
0x5D7DAD: jz      loc_5D811A
0x5D7DB3: cmp     ebx, eax
0x5D7DB5: jz      loc_5D7FD7
0x5D7DBB: mov     edi, [edi+4]
0x5D7DBE: add     ebx, 1
0x5D7DC1: cmp     edi, ebp
0x5D7DC3: jnz     short loc_5D7DB3
0x5D7DC5: jmp     loc_5D811A
0x5D7DCA: cmp     edi, 0Eh
0x5D7DCD: jnz     short loc_5D7D72
0x5D7DCF: mov     ecx, [esi+70h]
0x5D7DD2: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D7DD7: test    eax, eax
0x5D7DD9: jz      loc_5D7FC2
0x5D7DDF: mov     eax, [esi+74h]
0x5D7DE2: add     eax, 28h ; '('
0x5D7DE5: cmp     dword ptr [eax+4], 0
0x5D7DE9: jnz     short loc_5D7DF4
0x5D7DEB: cmp     dword ptr [eax], 0
0x5D7DEE: jz      loc_5D7FAE
0x5D7DF4: mov     edi, ds:0B33A98h
0x5D7DFA: xor     al, al
0x5D7DFC: add     edi, 2Ch ; ','
0x5D7DFF: nop
0x5D7E00: test    edi, edi
0x5D7E02: jz      short loc_5D7E57
0x5D7E04: mov     ecx, [edi]
0x5D7E06: test    ecx, ecx
0x5D7E08: jz      short loc_5D7E57
0x5D7E0A: mov     ecx, [ecx+1Ch]
0x5D7E0D: test    ecx, ecx
0x5D7E0F: jnz     short loc_5D7E16
0x5D7E11: mov     ecx, offset EmptyString
0x5D7E16: mov     eax, [esi+74h]
0x5D7E19: add     eax, 18h
0x5D7E1C: mov     eax, [eax+4]
0x5D7E1F: test    eax, eax
0x5D7E21: jnz     short loc_5D7E28
0x5D7E23: mov     eax, offset EmptyString
0x5D7E28: push    ecx; unsigned __int8 *
0x5D7E29: push    eax; unsigned __int8 *
0x5D7E2A: call    __mbscmp
0x5D7E2F: mov     edi, [edi+4]
0x5D7E32: add     esp, 8
0x5D7E35: test    eax, eax
0x5D7E37: setz    al
0x5D7E3A: test    al, al
0x5D7E3C: jz      short loc_5D7E00
0x5D7E3E: mov     ecx, ds:0B38CF0h
0x5D7E44: mov     edx, ds:0B38990h
0x5D7E4A: push    0
0x5D7E4C: push    ecx
0x5D7E4D: push    1
0x5D7E4F: push    0
0x5D7E51: push    edx
0x5D7E52: jmp     loc_5D7F7E
0x5D7E57: test    al, al
0x5D7E59: jnz     short loc_5D7E3E
0x5D7E5B: mov     ecx, [esi+74h]
0x5D7E5E: mov     eax, [ecx+24h]
0x5D7E61: mov     edx, ds:0B333C4h
0x5D7E67: mov     eax, [eax]
0x5D7E69: add     ecx, 24h ; '$'
0x5D7E6C: push    edx
0x5D7E6D: call    eax
0x5D7E6F: fmul    dword ptr ds:0B37FE0h
0x5D7E75: call    Double_To_SInt32
0x5D7E7A: mov     ecx, ds:0B333C4h
0x5D7E80: mov     ebx, eax
0x5D7E82: call    sub_5E4420
0x5D7E87: cmp     eax, ebx
0x5D7E89: push    0
0x5D7E8B: jl      loc_5D7F9B
0x5D7E91: mov     ecx, [esi+74h]
0x5D7E94: push    3
0x5D7E96: add     ecx, 24h ; '$'
0x5D7E99: call    EffectItemList_GetStrongestItem
0x5D7E9E: mov     edi, eax
0x5D7EA0: push    0
0x5D7EA2: mov     ecx, edi
0x5D7EA4: call    EffectItem_MagickaCostForCaster
0x5D7EA9: push    ecx
0x5D7EAA: fstp    [esp+30h+var_30]; float
0x5D7EAD: call    Calc_MagickaMasteryLevel
0x5D7EB2: push    eax
0x5D7EB3: call    ActorValue_GetMasterySkill
0x5D7EB8: mov     ecx, ds:0B333C4h
0x5D7EBE: mov     ebp, eax
0x5D7EC0: mov     eax, [ecx]
0x5D7EC2: add     esp, 8
0x5D7EC5: mov     ecx, edi
0x5D7EC7: mov     [esp+2Ch], eax
0x5D7ECB: call    EffectItem_GetSchool
0x5D7ED0: push    eax
0x5D7ED1: call    Magic_GetSkillAVFromSchool
0x5D7ED6: mov     ecx, ds:0B333C4h
0x5D7EDC: add     esp, 4
0x5D7EDF: push    eax
0x5D7EE0: mov     eax, [esp+30h]
0x5D7EE4: mov     edx, [eax+284h]
0x5D7EEA: call    edx
0x5D7EEC: cmp     eax, ebp
0x5D7EEE: jl      short loc_5D7F6B
0x5D7EF0: mov     ecx, ds:0B333C4h
0x5D7EF6: mov     eax, [ecx]
0x5D7EF8: mov     edx, [esi+74h]
0x5D7EFB: mov     eax, [eax+2DCh]
0x5D7F01: push    edx
0x5D7F02: call    eax
0x5D7F04: mov     eax, ds:0B333C4h
0x5D7F09: push    0
0x5D7F0B: push    ebx
0x5D7F0C: lea     ecx, [eax+44h]; this
0x5D7F0F: push    eax
0x5D7F10: call    ExtraDataList_GetContainerChanges
0x5D7F15: mov     ecx, eax
0x5D7F17: call    sub_491700
0x5D7F1C: mov     ecx, [esi+74h]
0x5D7F1F: push    ecx
0x5D7F20: mov     ecx, ds:0B33A98h
0x5D7F26: call    TESDataHandler_AddForm
0x5D7F2B: mov     edx, [esi+74h]
