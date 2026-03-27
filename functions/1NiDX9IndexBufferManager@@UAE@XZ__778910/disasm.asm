0x778910: sub     esp, 10h
0x778913: push    ebx
0x778914: push    ebp
0x778915: mov     ebp, ecx
0x778917: push    esi
0x778918: push    edi
0x778919: mov     [esp+20h+var_4], ebp
0x77891D: mov     dword ptr [ebp+0], offset ??_7NiDX9IndexBufferManager@@6B@; const NiDX9IndexBufferManager::`vftable'
0x778924: mov     [esp+20h+var_C], 0
0x77892C: lea     esp, [esp+0]
0x778930: mov     eax, [esp+20h+var_C]
0x778934: sub     eax, 0
0x778937: jz      short loc_778955
0x778939: sub     eax, 1
0x77893C: jz      short loc_77894C
0x77893E: sub     eax, 1
0x778941: jnz     short loc_77895C
0x778943: lea     esi, [ebp+3Ch]
0x778946: mov     [esp+20h+var_10], esi
0x77894A: jmp     short loc_778960
0x77894C: lea     eax, [ebp+2Ch]
0x77894F: mov     [esp+20h+var_10], eax
0x778953: jmp     short loc_77895C
0x778955: lea     ecx, [ebp+1Ch]
0x778958: mov     [esp+20h+var_10], ecx
0x77895C: mov     esi, [esp+20h+var_10]
0x778960: mov     edx, [esi+4]
0x778963: xor     eax, eax
0x778965: test    edx, edx
0x778967: jbe     short loc_77897F
0x778969: mov     edi, [esi+8]
0x77896C: mov     ecx, edi
0x77896E: mov     edi, edi
0x778970: cmp     dword ptr [ecx], 0
0x778973: jnz     short loc_7789A1
0x778975: add     eax, 1
0x778978: add     ecx, 4
0x77897B: cmp     eax, edx
0x77897D: jb      short loc_778970
0x77897F: xor     eax, eax
0x778981: test    eax, eax
0x778983: mov     ebx, eax
0x778985: jz      loc_778A3C
0x77898B: jmp     short loc_778990
0x77898D: align 10h
0x778990: mov     eax, [ebx]
0x778992: test    eax, eax
0x778994: mov     edx, [ebx+8]
0x778997: mov     [esp+20h+var_8], edx
0x77899B: jz      short loc_7789A6
0x77899D: mov     ebx, eax
0x77899F: jmp     short loc_7789DD
0x7789A1: mov     eax, [edi+eax*4]
0x7789A4: jmp     short loc_778981
0x7789A6: mov     ecx, [ebx+4]
0x7789A9: mov     eax, [esi]
0x7789AB: mov     edx, [eax+4]
0x7789AE: push    ecx
0x7789AF: mov     ecx, esi
0x7789B1: call    edx
0x7789B3: mov     edx, [esi+4]
0x7789B6: add     eax, 1
0x7789B9: cmp     eax, edx
0x7789BB: jnb     short loc_7789DB
0x7789BD: mov     ecx, [esi+8]
0x7789C0: lea     ecx, [ecx+eax*4]
0x7789C3: mov     esi, [ecx]
0x7789C5: test    esi, esi
0x7789C7: jnz     loc_778B3E
0x7789CD: add     eax, 1
0x7789D0: add     ecx, 4
0x7789D3: cmp     eax, edx
0x7789D5: jb      short loc_7789C3
0x7789D7: mov     esi, [esp+20h+var_10]
0x7789DB: xor     ebx, ebx
0x7789DD: mov     edi, [esp+20h+var_8]
0x7789E1: test    edi, edi
0x7789E3: jz      short loc_778A34
0x7789E5: add     edi, 8
0x7789E8: mov     ebp, 5
0x7789ED: lea     ecx, [ecx+0]
0x7789F0: mov     esi, [edi]
0x7789F2: test    esi, esi
0x7789F4: jz      short loc_778A17
0x7789F6: cmp     dword ptr [esi+20h], 0
0x7789FA: jz      short loc_778A07
0x7789FC: mov     eax, [esi+20h]
0x7789FF: mov     edx, [eax]
0x778A01: push    eax
0x778A02: mov     eax, [edx+8]
0x778A05: call    eax
0x778A07: mov     ecx, esi
0x778A09: call    sub_77D1D0
0x778A0E: push    esi
0x778A0F: call    FormHeapFree
0x778A14: add     esp, 4
0x778A17: add     edi, 4
0x778A1A: sub     ebp, 1
0x778A1D: jnz     short loc_7789F0
0x778A1F: mov     ecx, [esp+20h+var_8]
0x778A23: push    ecx
0x778A24: call    FormHeapFree
0x778A29: mov     ebp, [esp+24h+var_4]
0x778A2D: mov     esi, [esp+24h+var_10]
0x778A31: add     esp, 4
0x778A34: test    ebx, ebx
0x778A36: jnz     loc_778990
0x778A3C: mov     eax, [esp+20h+var_C]
0x778A40: add     eax, 1
0x778A43: cmp     eax, 3
0x778A46: mov     [esp+20h+var_C], eax
0x778A4A: jb      loc_778930
0x778A50: lea     esi, [ebp+1Ch]
0x778A53: mov     ecx, esi
0x778A55: call    NiTMap_Clear
0x778A5A: lea     edi, [ebp+2Ch]
0x778A5D: mov     ecx, edi
0x778A5F: call    NiTMap_Clear
0x778A64: lea     ebx, [ebp+3Ch]
0x778A67: mov     ecx, ebx
0x778A69: call    NiTMap_Clear
0x778A6E: mov     eax, [ebp+8]
0x778A71: mov     edx, [eax]
0x778A73: push    0
0x778A75: push    eax
0x778A76: mov     eax, [edx+1A0h]
0x778A7C: call    eax
0x778A7E: mov     eax, [ebp+0Ch]
0x778A81: test    eax, eax
0x778A83: jz      short loc_778A8D
0x778A85: mov     ecx, [eax]
0x778A87: mov     edx, [ecx+8]
0x778A8A: push    eax
0x778A8B: call    edx
0x778A8D: mov     eax, [ebp+14h]
0x778A90: test    eax, eax
0x778A92: jz      short loc_778A9C
0x778A94: mov     ecx, [eax]
0x778A96: mov     edx, [ecx+8]
0x778A99: push    eax
0x778A9A: call    edx
0x778A9C: mov     eax, [ebp+8]
0x778A9F: test    eax, eax
0x778AA1: jz      short loc_778AB2
0x778AA3: mov     ecx, [eax]
0x778AA5: mov     edx, [ecx+8]
0x778AA8: push    eax
0x778AA9: call    edx
0x778AAB: mov     dword ptr [ebp+8], 0
0x778AB2: mov     ecx, ebx
0x778AB4: mov     dword ptr [ebx], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778ABA: call    NiTMap_Clear
0x778ABF: mov     ecx, ebx
0x778AC1: mov     dword ptr [ebx], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778AC7: call    NiTMap_Clear
0x778ACC: mov     eax, [ebx+8]
0x778ACF: push    eax
0x778AD0: call    FormHeapFree
0x778AD5: add     esp, 4
0x778AD8: mov     ecx, edi
0x778ADA: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778AE0: call    NiTMap_Clear
0x778AE5: mov     ecx, edi
0x778AE7: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778AED: call    NiTMap_Clear
0x778AF2: mov     ecx, [edi+8]
0x778AF5: push    ecx
0x778AF6: call    FormHeapFree
0x778AFB: add     esp, 4
0x778AFE: mov     ecx, esi
0x778B00: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778B06: call    NiTMap_Clear
0x778B0B: mov     ecx, esi
0x778B0D: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778B13: call    NiTMap_Clear
0x778B18: mov     edx, [esi+8]
0x778B1B: push    edx
0x778B1C: call    FormHeapFree
0x778B21: add     esp, 4
0x778B24: push    offset NiRefObject_objcount; lpAddend
0x778B29: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x778B30: call    dword ptr ds:0A2807Ch
0x778B36: pop     edi
0x778B37: pop     esi
0x778B38: pop     ebp
0x778B39: pop     ebx
0x778B3A: add     esp, 10h
0x778B3D: retn
0x778B3E: mov     ebx, esi
0x778B40: mov     esi, [esp+20h+var_10]
0x778B44: jmp     loc_7789DD
