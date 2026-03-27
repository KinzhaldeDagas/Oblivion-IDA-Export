0x76D9B0: sub     esp, 20h
0x76D9B3: push    ebx
0x76D9B4: push    esi
0x76D9B5: push    edi
0x76D9B6: push    18h; Size
0x76D9B8: call    FormHeapAlloc
0x76D9BD: mov     esi, eax
0x76D9BF: xor     ebx, ebx
0x76D9C1: add     esp, 4
0x76D9C4: cmp     esi, ebx
0x76D9C6: jz      short loc_76D9F0
0x76D9C8: push    offset NiRefObject_objcount; lpAddend
0x76D9CD: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76D9D3: mov     [esi+4], ebx
0x76D9D6: call    dword ptr ds:0A28078h
0x76D9DC: mov     [esi+8], ebx
0x76D9DF: mov     [esi+0Ch], ebx
0x76D9E2: mov     [esi+10h], ebx
0x76D9E5: mov     dword ptr [esi], offset ??_7NiDX9TextureBufferData@@6B@; const NiDX9TextureBufferData::`vftable'
0x76D9EB: mov     [esi+14h], ebx
0x76D9EE: jmp     short loc_76D9F2
0x76D9F0: xor     esi, esi
0x76D9F2: mov     eax, [esp+2Ch+toUnkD3D]
0x76D9F6: mov     [esi+14h], eax
0x76D9F9: mov     ecx, [eax]
0x76D9FB: mov     edx, [ecx+4]
0x76D9FE: push    eax
0x76D9FF: call    edx
0x76DA01: mov     eax, [esi+14h]
0x76DA04: mov     edx, [esp+2Ch+arg_4]
0x76DA08: mov     ecx, [eax]
0x76DA0A: lea     edi, [esi+0Ch]
0x76DA0D: push    edi
0x76DA0E: push    ebx
0x76DA0F: push    edx
0x76DA10: push    eax
0x76DA11: mov     eax, [ecx+48h]
0x76DA14: call    eax
0x76DA16: cmp     eax, ebx
0x76DA18: jge     short loc_76DA43
0x76DA1A: push    eax
0x76DA1B: call    sub_7736F0
0x76DA20: push    eax
0x76DA21: push    offset aNidx9texturebu; "NiDX9TextureBufferData::Create> FAILED-"...
0x76DA26: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76DA2B: add     esp, 0Ch
0x76DA2E: mov     [edi], ebx
0x76DA30: mov     edx, [esi]
0x76DA32: mov     eax, [edx]
0x76DA34: push    1
0x76DA36: mov     ecx, esi
0x76DA38: call    eax
0x76DA3A: pop     edi
0x76DA3B: pop     esi
0x76DA3C: xor     eax, eax
0x76DA3E: pop     ebx
0x76DA3F: add     esp, 20h
0x76DA42: retn
0x76DA43: mov     edi, [edi]
0x76DA45: mov     ecx, [edi]
0x76DA47: mov     eax, [ecx+30h]
0x76DA4A: lea     edx, [esp+2Ch+var_20]
0x76DA4E: push    edx
0x76DA4F: push    edi
0x76DA50: call    eax
0x76DA52: test    eax, eax
0x76DA54: jl      short loc_76DA30
0x76DA56: mov     ecx, [esp+2Ch+var_20.Format]
0x76DA5A: push    ecx; a1
0x76DA5B: call    CreateSurfaceData
0x76DA60: mov     edi, [esp+30h+arg_10]
0x76DA64: mov     [esi+10h], eax
0x76DA67: mov     ecx, [edi]; this
0x76DA69: add     esp, 4
0x76DA6C: cmp     ecx, ebx
0x76DA6E: push    esi; a2
0x76DA6F: jnz     short loc_76DA93
0x76DA71: mov     edx, [esp+30h+var_20.Height]
0x76DA75: mov     eax, [esp+30h+var_20.Width]
0x76DA79: push    edx; height
0x76DA7A: push    eax; width
0x76DA7B: call    CreateNi2DBuffer
0x76DA80: add     esp, 0Ch
0x76DA83: mov     [edi], eax
0x76DA85: mov     ecx, eax
0x76DA87: pop     edi
0x76DA88: mov     [esi+8], ecx
0x76DA8B: mov     eax, esi
0x76DA8D: pop     esi
0x76DA8E: pop     ebx
0x76DA8F: add     esp, 20h
0x76DA92: retn
0x76DA93: call    sub_70BD60
0x76DA98: mov     ecx, [edi]
0x76DA9A: pop     edi
0x76DA9B: mov     [esi+8], ecx
0x76DA9E: mov     eax, esi
0x76DAA0: pop     esi
0x76DAA1: pop     ebx
0x76DAA2: add     esp, 20h
0x76DAA5: retn
