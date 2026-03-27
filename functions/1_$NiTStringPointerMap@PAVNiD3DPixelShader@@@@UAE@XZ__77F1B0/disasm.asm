0x77F1B0: push    edi
0x77F1B1: mov     edi, ecx
0x77F1B3: cmp     byte ptr [edi+10h], 0
0x77F1B7: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiD3DPixelShader@@@@PAVNiD3DPixelShader@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DPixelShader *>,NiD3DPixelShader *>::`vftable'
0x77F1BD: jz      short loc_77F1F0
0x77F1BF: push    ebx
0x77F1C0: xor     ebx, ebx
0x77F1C2: cmp     [edi+4], ebx
0x77F1C5: jbe     short loc_77F1EF
0x77F1C7: push    esi
0x77F1C8: mov     eax, [edi+8]
0x77F1CB: mov     esi, [eax+ebx*4]
0x77F1CE: test    esi, esi
0x77F1D0: jz      short loc_77F1E6
0x77F1D2: mov     eax, esi
0x77F1D4: mov     ecx, [eax+4]
0x77F1D7: mov     esi, [esi]
0x77F1D9: push    ecx
0x77F1DA: call    FormHeapFree
0x77F1DF: add     esp, 4
0x77F1E2: test    esi, esi
0x77F1E4: jnz     short loc_77F1D2
0x77F1E6: add     ebx, 1
0x77F1E9: cmp     ebx, [edi+4]
0x77F1EC: jb      short loc_77F1C8
0x77F1EE: pop     esi
0x77F1EF: pop     ebx
0x77F1F0: mov     ecx, edi
0x77F1F2: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DPixelShader@@@@6B@; const NiTPointerMap<char const *,NiD3DPixelShader *>::`vftable'
0x77F1F8: call    NiTMap_Clear
0x77F1FD: mov     ecx, edi
0x77F1FF: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DPixelShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DPixelShader *>::`vftable'
0x77F205: call    NiTMap_Clear
0x77F20A: mov     edx, [edi+8]
0x77F20D: push    edx
0x77F20E: call    FormHeapFree
0x77F213: add     esp, 4
0x77F216: pop     edi
0x77F217: retn
