0x4E0E40: push    0FFFFFFFFh
0x4E0E42: push    offset ??0?$NiTPointerMap@PAVTESObjectREFR@@_N@@QAE@XZ_SEH
0x4E0E47: mov     eax, large fs:0
0x4E0E4D: push    eax
0x4E0E4E: sub     esp, 14h
0x4E0E51: push    ebx
0x4E0E52: push    esi
0x4E0E53: push    edi
0x4E0E54: mov     eax, ds:0B30AACh
0x4E0E59: xor     eax, esp
0x4E0E5B: push    eax
0x4E0E5C: lea     eax, [esp+30h+var_C]
0x4E0E60: mov     large fs:0, eax
0x4E0E66: mov     edi, ecx
0x4E0E68: xor     ecx, ecx
0x4E0E6A: mov     eax, 25h ; '%'
0x4E0E6F: mov     [esp+30h+var_18], eax
0x4E0E73: xor     ebx, ebx
0x4E0E75: mov     edx, 4
0x4E0E7A: mul     edx
0x4E0E7C: seto    cl
0x4E0E7F: mov     [esp+30h+var_1E], 1
0x4E0E84: mov     [esp+30h+var_1C], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,bool>::`vftable'
0x4E0E8C: mov     [esp+30h+var_10], ebx
0x4E0E90: neg     ecx
0x4E0E92: or      ecx, eax
0x4E0E94: push    ecx; Size
0x4E0E95: call    FormHeapAlloc
0x4E0E9A: mov     ecx, [esp+34h+var_18]
0x4E0E9E: lea     edx, ds:0[ecx*4]
0x4E0EA5: push    edx
0x4E0EA6: push    ebx
0x4E0EA7: push    eax
0x4E0EA8: mov     [esp+40h+var_14], eax
0x4E0EAC: call    __memset
0x4E0EB1: add     esp, 10h
0x4E0EB4: mov     [esp+30h+var_1C], offset ??_7?$NiTPointerMap@PAVTESObjectREFR@@_N@@6B@; const NiTPointerMap<TESObjectREFR *,bool>::`vftable'
0x4E0EBC: lea     ecx, [edi+44h]
0x4E0EBF: mov     [esp+30h+var_4], ebx
0x4E0EC3: call    sub_420260
0x4E0EC8: mov     esi, eax
0x4E0ECA: cmp     esi, ebx
0x4E0ECC: jz      loc_4E0F52
0x4E0ED2: cmp     [esp+30h+var_1E], bl
0x4E0ED6: jz      short loc_4E0F52
0x4E0ED8: cmp     esi, edi
0x4E0EDA: jnz     short loc_4E0EE2
0x4E0EDC: mov     [esp+30h+var_1E], bl
0x4E0EE0: jmp     short loc_4E0ED2
0x4E0EE2: push    1; a3
0x4E0EE4: push    esi; a2
0x4E0EE5: lea     ecx, [esp+38h+var_1C]; this
0x4E0EE9: call    NiTMap_SetAt
0x4E0EEE: mov     eax, [esi+8]
0x4E0EF1: shr     eax, 3
0x4E0EF4: test    al, 1
0x4E0EF6: lea     ecx, [esi+44h]
0x4E0EF9: jz      short loc_4E0F04
0x4E0EFB: call    sub_420260
0x4E0F00: mov     esi, eax
0x4E0F02: jmp     short loc_4E0F31
0x4E0F04: call    sub_420260
0x4E0F09: cmp     eax, ebx
0x4E0F0B: jz      short loc_4E0F2F
0x4E0F0D: push    ebx; int
0x4E0F0E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4E0F13: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E0F18: push    ebx; int
0x4E0F19: push    eax; a1
0x4E0F1A: call    TESForm_LookupByFormID
0x4E0F1F: add     esp, 4
0x4E0F22: push    eax; void *
0x4E0F23: call    OblivionDynamicCast
0x4E0F28: add     esp, 14h
0x4E0F2B: mov     esi, eax
0x4E0F2D: jmp     short loc_4E0F31
0x4E0F2F: xor     esi, esi
0x4E0F31: cmp     esi, ebx
0x4E0F33: mov     [esp+30h+var_1D], bl
0x4E0F37: jz      short loc_4E0F52
0x4E0F39: lea     ecx, [esp+30h+var_1D]
0x4E0F3D: push    ecx
0x4E0F3E: push    esi
0x4E0F3F: lea     ecx, [esp+38h+var_1C]
0x4E0F43: call    sub_4D6760
0x4E0F48: test    al, al
0x4E0F4A: jz      short loc_4E0ED2
0x4E0F4C: cmp     [esp+30h+var_1D], bl
0x4E0F50: jz      short loc_4E0ED2
0x4E0F52: lea     ecx, [esp+30h+var_1C]
0x4E0F56: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4E0F5E: call    ??1?$NiTPointerMap@PAVTESObjectREFR@@_N@@UAE@XZ; NiTPointerMap<TESObjectREFR *,bool>::~NiTPointerMap<TESObjectREFR *,bool>(void)
0x4E0F63: mov     al, [esp+30h+var_1E]
0x4E0F67: mov     ecx, [esp+30h+var_C]
0x4E0F6B: mov     large fs:0, ecx
0x4E0F72: pop     ecx
0x4E0F73: pop     edi
0x4E0F74: pop     esi
0x4E0F75: pop     ebx
0x4E0F76: add     esp, 20h
0x4E0F79: retn
