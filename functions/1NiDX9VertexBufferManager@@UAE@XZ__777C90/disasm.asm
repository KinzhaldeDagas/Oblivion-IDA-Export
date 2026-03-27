0x777C90: sub     esp, 10h
0x777C93: push    ebx
0x777C94: push    ebp
0x777C95: mov     ebp, ecx
0x777C97: push    esi
0x777C98: push    edi
0x777C99: mov     [esp+20h+var_4], ebp
0x777C9D: mov     dword ptr [ebp+0], offset ??_7NiDX9VertexBufferManager@@6B@; const NiDX9VertexBufferManager::`vftable'
0x777CA4: mov     [esp+20h+var_C], 0
0x777CAC: lea     esp, [esp+0]
0x777CB0: mov     eax, [esp+20h+var_C]
0x777CB4: sub     eax, 0
0x777CB7: jz      short loc_777CD5
0x777CB9: sub     eax, 1
0x777CBC: jz      short loc_777CCC
0x777CBE: sub     eax, 1
0x777CC1: jnz     short loc_777CDC
0x777CC3: lea     esi, [ebp+2Ch]
0x777CC6: mov     [esp+20h+var_10], esi
0x777CCA: jmp     short loc_777CE0
0x777CCC: lea     eax, [ebp+1Ch]
0x777CCF: mov     [esp+20h+var_10], eax
0x777CD3: jmp     short loc_777CDC
0x777CD5: lea     ecx, [ebp+0Ch]
0x777CD8: mov     [esp+20h+var_10], ecx
0x777CDC: mov     esi, [esp+20h+var_10]
0x777CE0: mov     edx, [esi+4]
0x777CE3: xor     eax, eax
0x777CE5: test    edx, edx
0x777CE7: jbe     short loc_777CFF
0x777CE9: mov     edi, [esi+8]
0x777CEC: mov     ecx, edi
0x777CEE: mov     edi, edi
0x777CF0: cmp     dword ptr [ecx], 0
0x777CF3: jnz     short loc_777D21
0x777CF5: add     eax, 1
0x777CF8: add     ecx, 4
0x777CFB: cmp     eax, edx
0x777CFD: jb      short loc_777CF0
0x777CFF: xor     eax, eax
0x777D01: test    eax, eax
0x777D03: mov     ebx, eax
0x777D05: jz      loc_777DBC
0x777D0B: jmp     short loc_777D10
0x777D0D: align 10h
0x777D10: mov     eax, [ebx]
0x777D12: test    eax, eax
0x777D14: mov     edx, [ebx+8]
0x777D17: mov     [esp+20h+var_8], edx
0x777D1B: jz      short loc_777D26
0x777D1D: mov     ebx, eax
0x777D1F: jmp     short loc_777D5D
0x777D21: mov     eax, [edi+eax*4]
0x777D24: jmp     short loc_777D01
0x777D26: mov     ecx, [ebx+4]
0x777D29: mov     eax, [esi]
0x777D2B: mov     edx, [eax+4]
0x777D2E: push    ecx
0x777D2F: mov     ecx, esi
0x777D31: call    edx
0x777D33: mov     edx, [esi+4]
0x777D36: add     eax, 1
0x777D39: cmp     eax, edx
0x777D3B: jnb     short loc_777D5B
0x777D3D: mov     ecx, [esi+8]
0x777D40: lea     ecx, [ecx+eax*4]
0x777D43: mov     esi, [ecx]
0x777D45: test    esi, esi
0x777D47: jnz     loc_777EA5
0x777D4D: add     eax, 1
0x777D50: add     ecx, 4
0x777D53: cmp     eax, edx
0x777D55: jb      short loc_777D43
0x777D57: mov     esi, [esp+20h+var_10]
0x777D5B: xor     ebx, ebx
0x777D5D: mov     edi, [esp+20h+var_8]
0x777D61: test    edi, edi
0x777D63: jz      short loc_777DB4
0x777D65: add     edi, 8
0x777D68: mov     ebp, 5
0x777D6D: lea     ecx, [ecx+0]
0x777D70: mov     esi, [edi]
0x777D72: test    esi, esi
0x777D74: jz      short loc_777D97
0x777D76: cmp     dword ptr [esi+20h], 0
0x777D7A: jz      short loc_777D87
0x777D7C: mov     eax, [esi+20h]
0x777D7F: mov     edx, [eax]
0x777D81: push    eax
0x777D82: mov     eax, [edx+8]
0x777D85: call    eax
0x777D87: mov     ecx, esi
0x777D89: call    sub_77D1D0
0x777D8E: push    esi
0x777D8F: call    FormHeapFree
0x777D94: add     esp, 4
0x777D97: add     edi, 4
0x777D9A: sub     ebp, 1
0x777D9D: jnz     short loc_777D70
0x777D9F: mov     ecx, [esp+20h+var_8]
0x777DA3: push    ecx
0x777DA4: call    FormHeapFree
0x777DA9: mov     esi, [esp+24h+var_10]
0x777DAD: mov     ebp, [esp+24h+var_4]
0x777DB1: add     esp, 4
0x777DB4: test    ebx, ebx
0x777DB6: jnz     loc_777D10
0x777DBC: mov     eax, [esp+20h+var_C]
0x777DC0: add     eax, 1
0x777DC3: cmp     eax, 3
0x777DC6: mov     [esp+20h+var_C], eax
0x777DCA: jb      loc_777CB0
0x777DD0: lea     esi, [ebp+0Ch]
0x777DD3: mov     ecx, esi
0x777DD5: call    NiTMap_Clear
0x777DDA: lea     edi, [ebp+1Ch]
0x777DDD: mov     ecx, edi
0x777DDF: call    NiTMap_Clear
0x777DE4: lea     ebx, [ebp+2Ch]
0x777DE7: mov     ecx, ebx
0x777DE9: call    NiTMap_Clear
0x777DEE: mov     eax, [ebp+8]
0x777DF1: mov     edx, [eax]
0x777DF3: push    eax
0x777DF4: mov     eax, [edx+8]
0x777DF7: call    eax
0x777DF9: mov     ecx, [ebp+40h]
0x777DFC: push    ecx
0x777DFD: mov     dword ptr [ebp+8], 0
0x777E04: call    FormHeapFree
0x777E09: add     esp, 4
0x777E0C: lea     edx, [ebp+80h]
0x777E12: push    edx; lpCriticalSection
0x777E13: call    dword ptr ds:0A28068h
0x777E19: mov     ecx, ebx
0x777E1B: mov     dword ptr [ebx], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E21: call    NiTMap_Clear
0x777E26: mov     ecx, ebx
0x777E28: mov     dword ptr [ebx], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E2E: call    NiTMap_Clear
0x777E33: mov     eax, [ebx+8]
0x777E36: push    eax
0x777E37: call    FormHeapFree
0x777E3C: add     esp, 4
0x777E3F: mov     ecx, edi
0x777E41: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E47: call    NiTMap_Clear
0x777E4C: mov     ecx, edi
0x777E4E: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E54: call    NiTMap_Clear
0x777E59: mov     ecx, [edi+8]
0x777E5C: push    ecx
0x777E5D: call    FormHeapFree
0x777E62: add     esp, 4
0x777E65: mov     ecx, esi
0x777E67: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E6D: call    NiTMap_Clear
0x777E72: mov     ecx, esi
0x777E74: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9VBInfo@NiDX9VertexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'
0x777E7A: call    NiTMap_Clear
0x777E7F: mov     edx, [esi+8]
0x777E82: push    edx
0x777E83: call    FormHeapFree
0x777E88: add     esp, 4
0x777E8B: push    offset NiRefObject_objcount; lpAddend
0x777E90: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x777E97: call    dword ptr ds:0A2807Ch
0x777E9D: pop     edi
0x777E9E: pop     esi
0x777E9F: pop     ebp
0x777EA0: pop     ebx
0x777EA1: add     esp, 10h
0x777EA4: retn
0x777EA5: mov     ebx, esi
0x777EA7: mov     esi, [esp+20h+var_10]
0x777EAB: jmp     loc_777D5D
