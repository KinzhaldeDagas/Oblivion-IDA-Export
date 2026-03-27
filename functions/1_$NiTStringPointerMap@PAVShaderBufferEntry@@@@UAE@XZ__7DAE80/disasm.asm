0x7DAE80: push    edi
0x7DAE81: mov     edi, ecx
0x7DAE83: cmp     byte ptr [edi+10h], 0
0x7DAE87: mov     dword ptr [edi], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDPAVShaderBufferEntry@@@@PAVShaderBufferEntry@@@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,ShaderBufferEntry *>,ShaderBufferEntry *>::`vftable'
0x7DAE8D: jz      short loc_7DAEC0
0x7DAE8F: push    ebx
0x7DAE90: xor     ebx, ebx
0x7DAE92: cmp     [edi+4], ebx
0x7DAE95: jbe     short loc_7DAEBF
0x7DAE97: push    esi
0x7DAE98: mov     eax, [edi+8]
0x7DAE9B: mov     esi, [eax+ebx*4]
0x7DAE9E: test    esi, esi
0x7DAEA0: jz      short loc_7DAEB6
0x7DAEA2: mov     eax, esi
0x7DAEA4: mov     ecx, [eax+4]
0x7DAEA7: mov     esi, [esi]
0x7DAEA9: push    ecx
0x7DAEAA: call    FormHeapFree
0x7DAEAF: add     esp, 4
0x7DAEB2: test    esi, esi
0x7DAEB4: jnz     short loc_7DAEA2
0x7DAEB6: add     ebx, 1
0x7DAEB9: cmp     ebx, [edi+4]
0x7DAEBC: jb      short loc_7DAE98
0x7DAEBE: pop     esi
0x7DAEBF: pop     ebx
0x7DAEC0: mov     ecx, edi
0x7DAEC2: pop     edi
0x7DAEC3: jmp     ??1?$NiTPointerMap@PBDPAVShaderBufferEntry@@@@UAE@XZ; NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(void)
