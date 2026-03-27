0x4F2A10: push    0FFFFFFFFh
0x4F2A12: push    offset ??0TESWorldSpace@@QAE@XZ_SEH
0x4F2A17: mov     eax, large fs:0
0x4F2A1D: push    eax
0x4F2A1E: sub     esp, 8
0x4F2A21: push    ebx
0x4F2A22: push    esi
0x4F2A23: push    edi
0x4F2A24: mov     eax, ds:0B30AACh
0x4F2A29: xor     eax, esp
0x4F2A2B: push    eax
0x4F2A2C: lea     eax, [esp+24h+var_C]
0x4F2A30: mov     large fs:0, eax
0x4F2A36: mov     esi, ecx
0x4F2A38: mov     [esp+24h+var_14], esi
0x4F2A3C: call    TESForm_constr
0x4F2A41: xor     edi, edi
0x4F2A43: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4F2A4A: mov     [esp+24h+var_4], edi
0x4F2A4E: mov     [esi+1Ch], edi
0x4F2A51: mov     [esi+20h], di
0x4F2A55: mov     [esi+22h], di
0x4F2A59: lea     ebx, [esi+24h]
0x4F2A5C: mov     ecx, ebx
0x4F2A5E: mov     byte ptr [esp+24h+var_4], 1
0x4F2A63: call    TESTexture_constr
0x4F2A68: lea     ecx, [esi+38h]
0x4F2A6B: mov     byte ptr [esp+24h+var_4], 2
0x4F2A70: mov     dword ptr [esi], offset ??_7TESWorldSpace@@6BTESWorldSpace@@@; const TESWorldSpace::`vftable'{for `TESWorldSpace'}
0x4F2A76: mov     dword ptr [esi+18h], offset ??_7TESWorldSpace@@6BTESFullName@@@; const TESWorldSpace::`vftable'{for `TESFullName'}
0x4F2A7D: mov     dword ptr [ebx], offset ??_7TESWorldSpace@@6BTESTexture@@@; const TESWorldSpace::`vftable'{for `TESTexture'}
0x4F2A83: call    ??0?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@QAE@XZ; NiTPointerMap<int,TESTerrainLODQuadRoot *>::NiTPointerMap<int,TESTerrainLODQuadRoot *>(void)
0x4F2A88: xor     ecx, ecx
0x4F2A8A: mov     eax, 25h ; '%'
0x4F2A8F: mov     edx, 4
0x4F2A94: mul     edx
0x4F2A96: seto    cl
0x4F2A99: mov     byte ptr [esp+24h+var_4], 3
0x4F2A9E: mov     dword ptr [esi+64h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F2AA5: mov     dword ptr [esi+68h], 25h ; '%'
0x4F2AAC: mov     [esi+70h], edi
0x4F2AAF: neg     ecx
0x4F2AB1: or      ecx, eax
0x4F2AB3: push    ecx; Size
0x4F2AB4: call    FormHeapAlloc
0x4F2AB9: mov     ecx, [esi+68h]
0x4F2ABC: add     ecx, ecx
0x4F2ABE: add     ecx, ecx
0x4F2AC0: push    ecx
0x4F2AC1: push    edi
0x4F2AC2: push    eax
0x4F2AC3: mov     [esi+6Ch], eax
0x4F2AC6: call    __memset
0x4F2ACB: mov     dword ptr [esi+64h], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F2AD2: mov     [esi+74h], edi
0x4F2AD5: mov     [esi+78h], edi
0x4F2AD8: mov     [esi+0C0h], edi
0x4F2ADE: mov     [esi+0C4h], di
0x4F2AE5: mov     [esi+0C6h], di
0x4F2AEC: xor     ecx, ecx
0x4F2AEE: mov     eax, 25h ; '%'
0x4F2AF3: mov     edx, 4
0x4F2AF8: mul     edx
0x4F2AFA: seto    cl
0x4F2AFD: mov     byte ptr [esp+34h+var_4], 5
0x4F2B02: mov     dword ptr [esi+0C8h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@I_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,bool>::`vftable'
0x4F2B0C: mov     dword ptr [esi+0CCh], 25h ; '%'
0x4F2B16: mov     [esi+0D4h], edi
0x4F2B1C: neg     ecx
0x4F2B1E: or      ecx, eax
0x4F2B20: push    ecx; Size
0x4F2B21: call    FormHeapAlloc
0x4F2B26: mov     ecx, [esi+0CCh]
0x4F2B2C: add     ecx, ecx
0x4F2B2E: add     ecx, ecx
0x4F2B30: push    ecx
0x4F2B31: push    edi
0x4F2B32: push    eax
0x4F2B33: mov     [esi+0D0h], eax
0x4F2B39: call    __memset
0x4F2B3E: mov     dword ptr [esi+0C8h], offset ??_7?$NiTPointerMap@I_N@@6B@; const NiTPointerMap<uint,bool>::`vftable'
0x4F2B48: push    10h; Size
0x4F2B4A: mov     byte ptr [esp+48h+var_4], 6
0x4F2B4F: mov     byte ptr [esi+4], 35h ; '5'
0x4F2B53: mov     [esi+48h], esi
0x4F2B56: call    FormHeapAlloc
0x4F2B5B: add     esp, 24h
0x4F2B5E: mov     [esp+24h+var_10], eax
0x4F2B62: cmp     eax, edi
0x4F2B64: mov     ebx, 7
0x4F2B69: mov     byte ptr [esp+24h+var_4], bl
0x4F2B6D: jz      short loc_4F2B7A
0x4F2B6F: push    25h ; '%'
0x4F2B71: mov     ecx, eax
0x4F2B73: call    ??0?$NiTPointerMap@HPAVTESObjectCELL@@@@QAE@XZ; NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(void)
0x4F2B78: jmp     short loc_4F2B7C
0x4F2B7A: xor     eax, eax
0x4F2B7C: fld     dword ptr ds:0A32048h
0x4F2B82: mov     [esi+30h], eax
0x4F2B85: fst     dword ptr [esi+9Ch]
0x4F2B8B: mov     [esi+34h], edi
0x4F2B8E: fstp    dword ptr [esi+98h]
0x4F2B94: mov     [esi+54h], edi
0x4F2B97: fld     dword ptr ds:0A3B888h
0x4F2B9D: mov     byte ptr [esp+24h+var_4], 6
0x4F2BA2: fst     dword ptr [esi+0A4h]
0x4F2BA8: fstp    dword ptr [esi+0A0h]
0x4F2BAE: mov     edx, ds:0B3FC80h
0x4F2BB4: mov     [esi+0B4h], edx
0x4F2BBA: mov     eax, ds:0B3FC84h
0x4F2BBF: mov     ecx, edx
0x4F2BC1: mov     [esi+0ACh], ecx
0x4F2BC7: mov     edx, eax
0x4F2BC9: mov     ecx, esi
0x4F2BCB: mov     [esi+0B8h], eax
0x4F2BD1: mov     [esi+0B0h], edx
0x4F2BD7: call    TESWorldSpace__SetDefault
0x4F2BDC: mov     [esi+0DCh], ebx
0x4F2BE2: mov     [esi+60h], edi
0x4F2BE5: mov     [esi+0A8h], edi
0x4F2BEB: mov     [esi+0BCh], edi
0x4F2BF1: mov     eax, esi
0x4F2BF3: mov     ecx, [esp+24h+var_C]
0x4F2BF7: mov     large fs:0, ecx
0x4F2BFE: pop     ecx
0x4F2BFF: pop     edi
0x4F2C00: pop     esi
0x4F2C01: pop     ebx
0x4F2C02: add     esp, 14h
0x4F2C05: retn
