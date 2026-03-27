0x777B40: push    ebx
0x777B41: push    ebp
0x777B42: push    esi
0x777B43: push    edi
0x777B44: mov     esi, ecx
0x777B46: xor     ebx, ebx
0x777B48: push    offset NiRefObject_objcount; lpAddend
0x777B4D: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x777B53: mov     [esi+4], ebx
0x777B56: call    dword ptr ds:0A28078h
0x777B5C: mov     dword ptr [esi], offset ??_7NiDX9VertexBufferManager@@6B@; const NiDX9VertexBufferManager::`vftable'
0x777B62: lea     edi, [esi+0Ch]
0x777B65: xor     ecx, ecx
0x777B67: mov     eax, 25h ; '%'
0x777B6C: mov     [edi+4], eax
0x777B6F: mov     edx, 4
0x777B74: mul     edx
0x777B76: seto    cl
0x777B79: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777B7F: mov     [edi+0Ch], ebx
0x777B82: neg     ecx
0x777B84: or      ecx, eax
0x777B86: push    ecx; Size
0x777B87: call    FormHeapAlloc
0x777B8C: mov     ecx, [edi+4]
0x777B8F: add     ecx, ecx
0x777B91: add     ecx, ecx
0x777B93: push    ecx
0x777B94: push    ebx
0x777B95: push    eax
0x777B96: mov     [edi+8], eax
0x777B99: call    __memset
0x777B9E: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777BA4: lea     ebp, [esi+1Ch]
0x777BA7: xor     ecx, ecx
0x777BA9: mov     eax, 25h ; '%'
0x777BAE: mov     [ebp+4], eax
0x777BB1: mov     edx, 4
0x777BB6: mul     edx
0x777BB8: seto    cl
0x777BBB: mov     dword ptr [ebp+0], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777BC2: mov     [ebp+0Ch], ebx
0x777BC5: neg     ecx
0x777BC7: or      ecx, eax
0x777BC9: push    ecx; Size
0x777BCA: call    FormHeapAlloc
0x777BCF: mov     ecx, [ebp+4]
0x777BD2: add     ecx, ecx
0x777BD4: add     ecx, ecx
0x777BD6: push    ecx
0x777BD7: push    ebx
0x777BD8: push    eax
0x777BD9: mov     [ebp+8], eax
0x777BDC: call    __memset
0x777BE1: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777BE8: lea     ebx, [esi+2Ch]
0x777BEB: xor     ecx, ecx
0x777BED: mov     eax, 25h ; '%'
0x777BF2: mov     [ebx+4], eax
0x777BF5: mov     edx, 4
0x777BFA: mul     edx
0x777BFC: seto    cl
0x777BFF: mov     dword ptr [ebx], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777C05: mov     dword ptr [ebx+0Ch], 0
0x777C0C: neg     ecx
0x777C0E: or      ecx, eax
0x777C10: push    ecx; Size
0x777C11: call    FormHeapAlloc
0x777C16: mov     ecx, [ebx+4]
0x777C19: add     ecx, ecx
0x777C1B: add     ecx, ecx
0x777C1D: push    ecx
0x777C1E: push    0
0x777C20: push    eax
0x777C21: mov     [ebx+8], eax
0x777C24: call    __memset
0x777C29: add     esp, 30h
0x777C2C: xor     ecx, ecx
0x777C2E: mov     dword ptr [ebx], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777C34: mov     [esi+40h], ecx
0x777C37: mov     [esi+44h], ecx
0x777C3A: lea     eax, [esi+80h]
0x777C40: mov     [esi+48h], ecx
0x777C43: mov     [esi+4Ch], ecx
0x777C46: push    eax; lpCriticalSection
0x777C47: mov     [eax+78h], ecx
0x777C4A: mov     [eax+7Ch], ecx
0x777C4D: call    dword ptr ds:0A28064h
0x777C53: mov     eax, [esp+10h+arg_0]
0x777C57: mov     [esi+8], eax
0x777C5A: mov     edx, [eax]
0x777C5C: push    eax
0x777C5D: mov     eax, [edx+4]
0x777C60: call    eax
0x777C62: mov     ecx, edi
0x777C64: call    NiTMap_Clear
0x777C69: mov     ecx, ebp
0x777C6B: call    NiTMap_Clear
0x777C70: mov     ecx, ebx
0x777C72: call    NiTMap_Clear
0x777C77: pop     edi
0x777C78: mov     dword ptr [esi+3Ch], 0
0x777C7F: mov     eax, esi
0x777C81: pop     esi
0x777C82: pop     ebp
0x777C83: pop     ebx
0x777C84: retn    4
