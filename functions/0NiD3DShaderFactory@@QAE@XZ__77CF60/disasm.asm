0x77CF60: push    ebx
0x77CF61: push    esi
0x77CF62: push    edi
0x77CF63: mov     esi, ecx
0x77CF65: call    ??0NiShaderFactory@@QAE@XZ; NiShaderFactory::NiShaderFactory(void)
0x77CF6A: xor     ecx, ecx
0x77CF6C: xor     ebx, ebx
0x77CF6E: mov     eax, 25h ; '%'
0x77CF73: mov     edx, 4
0x77CF78: mul     edx
0x77CF7A: seto    cl
0x77CF7D: mov     dword ptr [esi], offset ??_7NiD3DShaderFactory@@6B@; const NiD3DShaderFactory::`vftable'
0x77CF83: mov     [esi+14h], ebx
0x77CF86: mov     dword ptr [esi+24h], offset ??_7?$NiTMapBase@V?$DFALL@PAVNiD3DGlobalConstantEntry@@@@PBDPAVNiD3DGlobalConstantEntry@@@@6B@; const NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'
0x77CF8D: mov     dword ptr [esi+28h], 25h ; '%'
0x77CF94: mov     [esi+30h], ebx
0x77CF97: neg     ecx
0x77CF99: or      ecx, eax
0x77CF9B: push    ecx; Size
0x77CF9C: call    FormHeapAlloc
0x77CFA1: mov     ecx, [esi+28h]
0x77CFA4: add     ecx, ecx
0x77CFA6: add     ecx, ecx
0x77CFA8: push    ecx
0x77CFA9: push    ebx
0x77CFAA: push    eax
0x77CFAB: mov     [esi+2Ch], eax
0x77CFAE: call    __memset
0x77CFB3: push    14h; Size
0x77CFB5: mov     byte ptr [esi+34h], 1
0x77CFB9: mov     dword ptr [esi+24h], offset ??_7?$NiTStringMap@PAVNiD3DGlobalConstantEntry@@@@6B@; const NiTStringMap<NiD3DGlobalConstantEntry *>::`vftable'
0x77CFC0: call    FormHeapAlloc
0x77CFC5: mov     edi, eax
0x77CFC7: add     esp, 14h
0x77CFCA: cmp     edi, ebx
0x77CFCC: jz      short loc_77D016
0x77CFCE: xor     ecx, ecx
0x77CFD0: mov     eax, 3Bh ; ';'
0x77CFD5: mov     [edi+4], eax
0x77CFD8: mov     edx, 4
0x77CFDD: mul     edx
0x77CFDF: seto    cl
0x77CFE2: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiShader *>::`vftable'
0x77CFE8: mov     [edi+0Ch], ebx
0x77CFEB: neg     ecx
0x77CFED: or      ecx, eax
0x77CFEF: push    ecx; Size
0x77CFF0: call    FormHeapAlloc
0x77CFF5: mov     ecx, [edi+4]
0x77CFF8: add     ecx, ecx
0x77CFFA: add     ecx, ecx
0x77CFFC: push    ecx
0x77CFFD: push    ebx
0x77CFFE: push    eax
0x77CFFF: mov     [edi+8], eax
0x77D002: call    __memset
0x77D007: add     esp, 10h
0x77D00A: mov     byte ptr [edi+10h], 1
0x77D00E: mov     dword ptr [edi], offset ??_7?$NiTStringPointerMap@PAVNiShader@@@@6B@; const NiTStringPointerMap<NiShader *>::`vftable'
0x77D014: jmp     short loc_77D018
0x77D016: xor     edi, edi
0x77D018: push    14h; Size
0x77D01A: mov     [esi+18h], edi
0x77D01D: call    FormHeapAlloc
0x77D022: mov     edi, eax
0x77D024: add     esp, 4
0x77D027: cmp     edi, ebx
0x77D029: jz      short loc_77D07D
0x77D02B: xor     ecx, ecx
0x77D02D: mov     eax, 25h ; '%'
0x77D032: mov     edx, 4
0x77D037: mul     edx
0x77D039: seto    cl
0x77D03C: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiShaderLibrary>>::`vftable'
0x77D042: mov     dword ptr [edi+4], 25h ; '%'
0x77D049: mov     [edi+0Ch], ebx
0x77D04C: neg     ecx
0x77D04E: or      ecx, eax
0x77D050: push    ecx; Size
0x77D051: call    FormHeapAlloc
0x77D056: mov     ecx, [edi+4]
0x77D059: add     ecx, ecx
0x77D05B: add     ecx, ecx
0x77D05D: push    ecx
0x77D05E: push    ebx
0x77D05F: push    eax
0x77D060: mov     [edi+8], eax
0x77D063: call    __memset
0x77D068: add     esp, 10h
0x77D06B: mov     [edi+10h], bl
0x77D06E: mov     dword ptr [edi], offset ??_7?$NiTStringPointerMap@V?$NiPointer@VNiShaderLibrary@@@@@@6B@; const NiTStringPointerMap<NiPointer<NiShaderLibrary>>::`vftable'
0x77D074: mov     [esi+20h], edi
0x77D077: pop     edi
0x77D078: mov     eax, esi
0x77D07A: pop     esi
0x77D07B: pop     ebx
0x77D07C: retn
0x77D07D: pop     edi
0x77D07E: mov     [esi+20h], ebx
0x77D081: mov     eax, esi
0x77D083: pop     esi
0x77D084: pop     ebx
0x77D085: retn
