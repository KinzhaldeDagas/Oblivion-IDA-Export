0x77F500: push    ebx
0x77F501: push    esi
0x77F502: push    edi
0x77F503: mov     esi, ecx
0x77F505: xor     ebx, ebx
0x77F507: push    offset NiRefObject_objcount; lpAddend
0x77F50C: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77F512: mov     [esi+4], ebx
0x77F515: call    dword ptr ds:0A28078h
0x77F51B: mov     dword ptr [esi], offset ??_7NiD3DShaderProgramFactory@@6B@; const NiD3DShaderProgramFactory::`vftable'
0x77F521: push    14h; Size
0x77F523: mov     [esi+14h], ebx
0x77F526: mov     [esi+0Ch], ebx
0x77F529: mov     [esi+10h], ebx
0x77F52C: mov     dword ptr [esi+8], offset ??_7?$NiTPointerList@PAD@@6B@; const NiTPointerList<char *>::`vftable'
0x77F533: call    FormHeapAlloc
0x77F538: mov     edi, eax
0x77F53A: add     esp, 4
0x77F53D: cmp     edi, ebx
0x77F53F: jz      short loc_77F58C
0x77F541: xor     ecx, ecx
0x77F543: mov     eax, 3Bh ; ';'
0x77F548: mov     edx, 4
0x77F54D: mul     edx
0x77F54F: seto    cl
0x77F552: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DVertexShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DVertexShader *>::`vftable'
0x77F558: mov     dword ptr [edi+4], 3Bh ; ';'
0x77F55F: mov     [edi+0Ch], ebx
0x77F562: neg     ecx
0x77F564: or      ecx, eax
0x77F566: push    ecx; Size
0x77F567: call    FormHeapAlloc
0x77F56C: mov     ecx, [edi+4]
0x77F56F: add     ecx, ecx
0x77F571: add     ecx, ecx
0x77F573: push    ecx
0x77F574: push    ebx
0x77F575: push    eax
0x77F576: mov     [edi+8], eax
0x77F579: call    __memset
0x77F57E: add     esp, 10h
0x77F581: mov     [edi+10h], bl
0x77F584: mov     dword ptr [edi], offset ??_7?$NiTStringPointerMap@PAVNiD3DVertexShader@@@@6B@; const NiTStringPointerMap<NiD3DVertexShader *>::`vftable'
0x77F58A: jmp     short loc_77F58E
0x77F58C: xor     edi, edi
0x77F58E: push    14h; Size
0x77F590: mov     [esi+18h], edi
0x77F593: call    FormHeapAlloc
0x77F598: mov     edi, eax
0x77F59A: add     esp, 4
0x77F59D: cmp     edi, ebx
0x77F59F: jz      short loc_77F5F3
0x77F5A1: xor     ecx, ecx
0x77F5A3: mov     eax, 3Bh ; ';'
0x77F5A8: mov     edx, 4
0x77F5AD: mul     edx
0x77F5AF: seto    cl
0x77F5B2: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DPixelShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DPixelShader *>::`vftable'
0x77F5B8: mov     dword ptr [edi+4], 3Bh ; ';'
0x77F5BF: mov     [edi+0Ch], ebx
0x77F5C2: neg     ecx
0x77F5C4: or      ecx, eax
0x77F5C6: push    ecx; Size
0x77F5C7: call    FormHeapAlloc
0x77F5CC: mov     ecx, [edi+4]
0x77F5CF: add     ecx, ecx
0x77F5D1: add     ecx, ecx
0x77F5D3: push    ecx
0x77F5D4: push    ebx
0x77F5D5: push    eax
0x77F5D6: mov     [edi+8], eax
0x77F5D9: call    __memset
0x77F5DE: add     esp, 10h
0x77F5E1: mov     [edi+10h], bl
0x77F5E4: mov     dword ptr [edi], offset ??_7?$NiTStringPointerMap@PAVNiD3DPixelShader@@@@6B@; const NiTStringPointerMap<NiD3DPixelShader *>::`vftable'
0x77F5EA: mov     [esi+1Ch], edi
0x77F5ED: pop     edi
0x77F5EE: mov     eax, esi
0x77F5F0: pop     esi
0x77F5F1: pop     ebx
0x77F5F2: retn
0x77F5F3: pop     edi
0x77F5F4: mov     [esi+1Ch], ebx
0x77F5F7: mov     eax, esi
0x77F5F9: pop     esi
0x77F5FA: pop     ebx
0x77F5FB: retn
