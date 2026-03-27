0x77F140: push    edi
0x77F141: mov     edi, ecx
0x77F143: cmp     byte ptr [edi+10h], 0
0x77F147: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVNiD3DVertexShader@@@@PAVNiD3DVertexShader@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,NiD3DVertexShader *>,NiD3DVertexShader *>::`vftable'
0x77F14D: jz      short loc_77F180
0x77F14F: push    ebx
0x77F150: xor     ebx, ebx
0x77F152: cmp     [edi+4], ebx
0x77F155: jbe     short loc_77F17F
0x77F157: push    esi
0x77F158: mov     eax, [edi+8]
0x77F15B: mov     esi, [eax+ebx*4]
0x77F15E: test    esi, esi
0x77F160: jz      short loc_77F176
0x77F162: mov     eax, esi
0x77F164: mov     ecx, [eax+4]
0x77F167: mov     esi, [esi]
0x77F169: push    ecx
0x77F16A: call    FormHeapFree
0x77F16F: add     esp, 4
0x77F172: test    esi, esi
0x77F174: jnz     short loc_77F162
0x77F176: add     ebx, 1
0x77F179: cmp     ebx, [edi+4]
0x77F17C: jb      short loc_77F158
0x77F17E: pop     esi
0x77F17F: pop     ebx
0x77F180: mov     ecx, edi
0x77F182: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@PBDPAVNiD3DVertexShader@@@@6B@; const NiTPointerMap<char const *,NiD3DVertexShader *>::`vftable'
0x77F188: call    NiTMap_Clear
0x77F18D: mov     ecx, edi
0x77F18F: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiD3DVertexShader@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiD3DVertexShader *>::`vftable'
0x77F195: call    NiTMap_Clear
0x77F19A: mov     edx, [edi+8]
0x77F19D: push    edx
0x77F19E: call    FormHeapFree
0x77F1A3: add     esp, 4
0x77F1A6: pop     edi
0x77F1A7: retn
