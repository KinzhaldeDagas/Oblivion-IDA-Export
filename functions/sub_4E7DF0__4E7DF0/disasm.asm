0x4E7DF0: push    0FFFFFFFFh
0x4E7DF2: push    offset SEH_4E7DF0
0x4E7DF7: mov     eax, large fs:0
0x4E7DFD: push    eax
0x4E7DFE: sub     esp, 14h
0x4E7E01: push    ebx
0x4E7E02: push    ebp
0x4E7E03: push    esi
0x4E7E04: push    edi
0x4E7E05: mov     eax, ds:0B30AACh
0x4E7E0A: xor     eax, esp
0x4E7E0C: push    eax
0x4E7E0D: lea     eax, [esp+34h+var_C]
0x4E7E11: mov     large fs:0, eax
0x4E7E17: mov     edi, ecx
0x4E7E19: mov     [esp+34h+var_20], edi
0x4E7E1D: call    sub_67EDC0
0x4E7E22: xor     ebx, ebx
0x4E7E24: mov     [edi+20h], ebx
0x4E7E27: mov     [edi+24h], ebx
0x4E7E2A: mov     eax, ds:0B3F9A8h
0x4E7E2F: mov     [edi+14h], eax
0x4E7E32: mov     ecx, ds:0B3F9ACh
0x4E7E38: mov     [edi+18h], ecx
0x4E7E3B: mov     edx, ds:0B3F9B0h
0x4E7E41: mov     [edi+1Ch], edx
0x4E7E44: mov     [edi+28h], ebx
0x4E7E47: cmp     ds:0B36080h, ebx
0x4E7E4D: mov     [esp+34h+var_4], ebx
0x4E7E51: jnz     loc_4E7F5B
0x4E7E57: fld1
0x4E7E59: lea     eax, [esp+34h+var_1C]
0x4E7E5D: fstp    [esp+34h+var_1C]
0x4E7E61: push    eax; int
0x4E7E62: fldz
0x4E7E64: push    ecx
0x4E7E65: fst     [esp+3Ch+var_18]
0x4E7E69: fst     [esp+3Ch+var_14]
0x4E7E6D: fstp    [esp+3Ch+var_10]
0x4E7E71: fld     dword ptr ds:0A37CC8h
0x4E7E77: fstp    [esp+3Ch+a2]; float
0x4E7E7A: call    sub_47FD30
0x4E7E7F: mov     ecx, ds:0B36084h
0x4E7E85: mov     ebp, ds:0A2807Ch
0x4E7E8B: mov     esi, eax
0x4E7E8D: add     esp, 8
0x4E7E90: cmp     ecx, esi
0x4E7E92: jz      short loc_4E7ED0
0x4E7E94: cmp     ecx, ebx
0x4E7E96: jz      short loc_4E7EB2
0x4E7E98: mov     ebx, ecx
0x4E7E9A: add     ecx, 4
0x4E7E9D: push    ecx; lpAddend
0x4E7E9E: call    ebp ; InterlockedDecrement
0x4E7EA0: test    eax, eax
0x4E7EA2: jnz     short loc_4E7EB2
0x4E7EA4: test    ebx, ebx
0x4E7EA6: jz      short loc_4E7EB2
0x4E7EA8: mov     edx, [ebx]
0x4E7EAA: mov     eax, [edx]
0x4E7EAC: push    1
0x4E7EAE: mov     ecx, ebx
0x4E7EB0: call    eax
0x4E7EB2: xor     ebx, ebx
0x4E7EB4: cmp     esi, ebx
0x4E7EB6: mov     ecx, esi
0x4E7EB8: mov     ds:0B36084h, ecx
0x4E7EBE: jz      short loc_4E7ED0
0x4E7EC0: add     esi, 4
0x4E7EC3: push    esi; lpAddend
0x4E7EC4: call    dword ptr ds:0A28078h
0x4E7ECA: mov     ecx, ds:0B36084h; this
0x4E7ED0: fldz
0x4E7ED2: push    1; a3
0x4E7ED4: push    ecx
0x4E7ED5: fstp    [esp+3Ch+a2]; a2
0x4E7ED8: call    NiAVObject_UpdateNiAVObject
0x4E7EDD: fldz
0x4E7EDF: fst     [esp+34h+var_1C]
0x4E7EE3: lea     ecx, [esp+34h+var_1C]
0x4E7EE7: fst     [esp+34h+var_18]
0x4E7EEB: push    ecx; int
0x4E7EEC: fld1
0x4E7EEE: push    ecx
0x4E7EEF: fstp    [esp+3Ch+var_14]
0x4E7EF3: fstp    [esp+3Ch+var_10]
0x4E7EF7: fld     dword ptr ds:0A37CC8h
0x4E7EFD: fstp    [esp+3Ch+a2]; float
0x4E7F00: call    sub_47FD30
0x4E7F05: mov     ecx, ds:0B36088h
0x4E7F0B: mov     esi, eax
0x4E7F0D: add     esp, 8
0x4E7F10: cmp     ecx, esi
0x4E7F12: jz      short loc_4E7F4E
0x4E7F14: cmp     ecx, ebx
0x4E7F16: jz      short loc_4E7F32
0x4E7F18: mov     ebx, ecx
0x4E7F1A: add     ecx, 4
0x4E7F1D: push    ecx; lpAddend
0x4E7F1E: call    ebp ; InterlockedDecrement
0x4E7F20: test    eax, eax
0x4E7F22: jnz     short loc_4E7F32
0x4E7F24: test    ebx, ebx
0x4E7F26: jz      short loc_4E7F32
0x4E7F28: mov     edx, [ebx]
0x4E7F2A: mov     eax, [edx]
0x4E7F2C: push    1
0x4E7F2E: mov     ecx, ebx
0x4E7F30: call    eax
0x4E7F32: test    esi, esi
0x4E7F34: mov     ecx, esi
0x4E7F36: mov     ds:0B36088h, ecx
0x4E7F3C: jz      short loc_4E7F4E
0x4E7F3E: add     esi, 4
0x4E7F41: push    esi; lpAddend
0x4E7F42: call    dword ptr ds:0A28078h
0x4E7F48: mov     ecx, ds:0B36088h; this
0x4E7F4E: fldz
0x4E7F50: push    1; a3
0x4E7F52: push    ecx
0x4E7F53: fstp    [esp+3Ch+a2]; a2
0x4E7F56: call    NiAVObject_UpdateNiAVObject
0x4E7F5B: mov     eax, edi
0x4E7F5D: add     dword ptr ds:0B36080h, 1
0x4E7F64: mov     ecx, dword ptr [esp+34h+var_C]
0x4E7F68: mov     large fs:0, ecx
0x4E7F6F: pop     ecx
0x4E7F70: pop     edi
0x4E7F71: pop     esi
0x4E7F72: pop     ebp
0x4E7F73: pop     ebx
0x4E7F74: add     esp, 20h
0x4E7F77: retn
