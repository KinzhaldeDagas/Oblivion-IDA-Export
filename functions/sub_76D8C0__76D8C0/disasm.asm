0x76D8C0: sub     esp, 20h
0x76D8C3: push    ebx
0x76D8C4: push    ebp
0x76D8C5: push    esi
0x76D8C6: push    edi
0x76D8C7: push    18h; Size
0x76D8C9: call    FormHeapAlloc
0x76D8CE: mov     esi, eax
0x76D8D0: xor     ebp, ebp
0x76D8D2: add     esp, 4
0x76D8D5: cmp     esi, ebp
0x76D8D7: jz      short loc_76D901
0x76D8D9: push    offset NiRefObject_objcount; lpAddend
0x76D8DE: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76D8E4: mov     [esi+4], ebp
0x76D8E7: call    dword ptr ds:0A28078h
0x76D8ED: mov     [esi+8], ebp
0x76D8F0: mov     [esi+0Ch], ebp
0x76D8F3: mov     [esi+10h], ebp
0x76D8F6: mov     dword ptr [esi], offset ??_7NiDX9TextureBufferData@@6B@; const NiDX9TextureBufferData::`vftable'
0x76D8FC: mov     [esi+14h], ebp
0x76D8FF: jmp     short loc_76D903
0x76D901: xor     esi, esi
0x76D903: mov     edi, [esp+30h+arg_0]
0x76D907: mov     [esi+14h], edi
0x76D90A: mov     eax, [edi]
0x76D90C: mov     ecx, [eax+4]
0x76D90F: push    edi
0x76D910: call    ecx
0x76D912: mov     edx, [edi]
0x76D914: mov     eax, [edx+48h]
0x76D917: lea     ebx, [esi+0Ch]
0x76D91A: push    ebx
0x76D91B: push    ebp
0x76D91C: push    edi
0x76D91D: call    eax
0x76D91F: cmp     eax, ebp
0x76D921: jge     short loc_76D94B
0x76D923: push    eax
0x76D924: call    sub_7736F0
0x76D929: push    eax
0x76D92A: push    offset aNidx9texturebu; "NiDX9TextureBufferData::Create> FAILED-"...
0x76D92F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76D934: add     esp, 0Ch
0x76D937: mov     edx, [esi]
0x76D939: mov     eax, [edx]
0x76D93B: push    1
0x76D93D: mov     ecx, esi
0x76D93F: call    eax
0x76D941: pop     edi
0x76D942: pop     esi
0x76D943: pop     ebp
0x76D944: xor     eax, eax
0x76D946: pop     ebx
0x76D947: add     esp, 20h
0x76D94A: retn
0x76D94B: mov     ebx, [ebx]
0x76D94D: mov     ecx, [ebx]
0x76D94F: mov     eax, [ecx+30h]
0x76D952: lea     edx, [esp+30h+a1]
0x76D956: push    edx
0x76D957: push    ebx
0x76D958: call    eax
0x76D95A: test    eax, eax
0x76D95C: jl      short loc_76D937
0x76D95E: mov     ecx, [esp+30h+a1]
0x76D962: push    ecx; a1
0x76D963: call    CreateSurfaceData
0x76D968: mov     edi, [esp+34h+arg_4]
0x76D96C: mov     [esi+10h], eax
0x76D96F: mov     ecx, [edi]; this
0x76D971: add     esp, 4
0x76D974: cmp     ecx, ebp
0x76D976: push    esi; a2
0x76D977: jnz     short loc_76D99C
0x76D979: mov     edx, [esp+34h+a2]
0x76D97D: mov     eax, [esp+34h+width]
0x76D981: push    edx; height
0x76D982: push    eax; width
0x76D983: call    CreateNi2DBuffer
0x76D988: add     esp, 0Ch
0x76D98B: mov     [edi], eax
0x76D98D: mov     ecx, eax
0x76D98F: pop     edi
0x76D990: mov     [esi+8], ecx
0x76D993: mov     eax, esi
0x76D995: pop     esi
0x76D996: pop     ebp
0x76D997: pop     ebx
0x76D998: add     esp, 20h
0x76D99B: retn
0x76D99C: call    sub_70BD60
0x76D9A1: mov     ecx, [edi]
0x76D9A3: pop     edi
0x76D9A4: mov     [esi+8], ecx
0x76D9A7: mov     eax, esi
0x76D9A9: pop     esi
0x76D9AA: pop     ebp
0x76D9AB: pop     ebx
0x76D9AC: add     esp, 20h
0x76D9AF: retn
