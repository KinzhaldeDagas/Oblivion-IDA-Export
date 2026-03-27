0x466D80: push    esi
0x466D81: push    edi
0x466D82: mov     edi, ecx
0x466D84: xor     esi, esi
0x466D86: cmp     dword ptr [edi+esi*4], 0
0x466D8A: jz      short loc_466D95
0x466D8C: mov     ecx, [edi+esi*4]
0x466D8F: mov     eax, [ecx]
0x466D91: mov     edx, [eax]
0x466D93: call    edx
0x466D95: add     esi, 1
0x466D98: cmp     esi, 1Ah
0x466D9B: jl      short loc_466D86
0x466D9D: pop     edi
0x466D9E: pop     esi
0x466D9F: retn
