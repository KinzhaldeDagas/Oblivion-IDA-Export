0x740D30: push    ebx
0x740D31: mov     ebx, dword ptr [esp+4+ArgList]
0x740D35: push    esi
0x740D36: mov     eax, ebx
0x740D38: push    edi
0x740D39: lea     edx, [eax+1]
0x740D3C: lea     esp, [esp+0]
0x740D40: mov     cl, [eax]
0x740D42: add     eax, 1
0x740D45: test    cl, cl
0x740D47: jnz     short loc_740D40
0x740D49: sub     eax, edx
0x740D4B: lea     edi, [eax+14h]
0x740D4E: push    edi; Size
0x740D4F: call    FormHeapAlloc
0x740D54: mov     esi, eax
0x740D56: mov     eax, [esp+10h+arg_4]
0x740D5A: add     esp, 4
0x740D5D: sub     eax, 0
0x740D60: jz      short loc_740D98
0x740D62: sub     eax, 1
0x740D65: jz      short loc_740D82
0x740D67: sub     eax, 1
0x740D6A: jnz     short loc_740DA8
0x740D6C: push    ebx; ArgList
0x740D6D: push    offset aSFog_vertex_al; "%s = FOG_VERTEX_ALPHA"
0x740D72: push    edi; SizeInBytes
0x740D73: push    esi; DstBuf
0x740D74: call    sub_6C5D40
0x740D79: add     esp, 10h
0x740D7C: pop     edi
0x740D7D: mov     eax, esi
0x740D7F: pop     esi
0x740D80: pop     ebx
0x740D81: retn
0x740D82: push    ebx; ArgList
0x740D83: push    offset aSFog_range_sq; "%s = FOG_RANGE_SQ"
0x740D88: push    edi; SizeInBytes
0x740D89: push    esi; DstBuf
0x740D8A: call    sub_6C5D40
0x740D8F: add     esp, 10h
0x740D92: pop     edi
0x740D93: mov     eax, esi
0x740D95: pop     esi
0x740D96: pop     ebx
0x740D97: retn
0x740D98: push    ebx; ArgList
0x740D99: push    offset aSFog_z_linear; "%s = FOG_Z_LINEAR"
0x740D9E: push    edi; SizeInBytes
0x740D9F: push    esi; DstBuf
0x740DA0: call    sub_6C5D40
0x740DA5: add     esp, 10h
0x740DA8: pop     edi
0x740DA9: mov     eax, esi
0x740DAB: pop     esi
0x740DAC: pop     ebx
0x740DAD: retn
