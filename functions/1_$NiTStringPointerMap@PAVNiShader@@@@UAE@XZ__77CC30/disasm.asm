0x77CC30: push    edi
0x77CC31: mov     edi, ecx
0x77CC33: cmp     byte ptr [edi+10h], 0
0x77CC37: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiShader@@@@PAVNiShader@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiShader *>,NiShader *>::`vftable'
0x77CC3D: jz      short loc_77CC70
0x77CC3F: push    ebx
0x77CC40: xor     ebx, ebx
0x77CC42: cmp     [edi+4], ebx
0x77CC45: jbe     short loc_77CC6F
0x77CC47: push    esi
0x77CC48: mov     eax, [edi+8]
0x77CC4B: mov     esi, [eax+ebx*4]
0x77CC4E: test    esi, esi
0x77CC50: jz      short loc_77CC66
0x77CC52: mov     eax, esi
0x77CC54: mov     ecx, [eax+4]
0x77CC57: mov     esi, [esi]
0x77CC59: push    ecx
0x77CC5A: call    FormHeapFree
0x77CC5F: add     esp, 4
0x77CC62: test    esi, esi
0x77CC64: jnz     short loc_77CC52
0x77CC66: add     ebx, 1
0x77CC69: cmp     ebx, [edi+4]
0x77CC6C: jb      short loc_77CC48
0x77CC6E: pop     esi
0x77CC6F: pop     ebx
0x77CC70: mov     ecx, edi
0x77CC72: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDPAVNiShader@@@@6B@; const NiTPointerMap<char const *,NiShader *>::`vftable'
0x77CC78: call    NiTMap_Clear
0x77CC7D: mov     ecx, edi
0x77CC7F: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiShader *>::`vftable'
0x77CC85: call    NiTMap_Clear
0x77CC8A: mov     edx, [edi+8]
0x77CC8D: push    edx
0x77CC8E: call    FormHeapFree
0x77CC93: add     esp, 4
0x77CC96: pop     edi
0x77CC97: retn
