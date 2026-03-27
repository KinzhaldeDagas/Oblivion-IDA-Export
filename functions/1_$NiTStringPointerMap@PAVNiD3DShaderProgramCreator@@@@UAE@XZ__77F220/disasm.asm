0x77F220: push    edi
0x77F221: mov     edi, ecx
0x77F223: cmp     byte ptr [edi+10h], 0
0x77F227: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiD3DShaderProgramCreator@@@@PAVNiD3DShaderProgramCreator@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DShaderProgramCreator *>,NiD3DShaderProgramCreator *>::`vftable'
0x77F22D: jz      short loc_77F260
0x77F22F: push    ebx
0x77F230: xor     ebx, ebx
0x77F232: cmp     [edi+4], ebx
0x77F235: jbe     short loc_77F25F
0x77F237: push    esi
0x77F238: mov     eax, [edi+8]
0x77F23B: mov     esi, [eax+ebx*4]
0x77F23E: test    esi, esi
0x77F240: jz      short loc_77F256
0x77F242: mov     eax, esi
0x77F244: mov     ecx, [eax+4]
0x77F247: mov     esi, [esi]
0x77F249: push    ecx
0x77F24A: call    FormHeapFree
0x77F24F: add     esp, 4
0x77F252: test    esi, esi
0x77F254: jnz     short loc_77F242
0x77F256: add     ebx, 1
0x77F259: cmp     ebx, [edi+4]
0x77F25C: jb      short loc_77F238
0x77F25E: pop     esi
0x77F25F: pop     ebx
0x77F260: mov     ecx, edi
0x77F262: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTPointerMap<char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77F268: call    NiTMap_Clear
0x77F26D: mov     ecx, edi
0x77F26F: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DShaderProgramCreator@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DShaderProgramCreator *>::`vftable'
0x77F275: call    NiTMap_Clear
0x77F27A: mov     edx, [edi+8]
0x77F27D: push    edx
0x77F27E: call    FormHeapFree
0x77F283: add     esp, 4
0x77F286: pop     edi
0x77F287: retn
