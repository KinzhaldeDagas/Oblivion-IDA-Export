0x7787E0: push    ebx
0x7787E1: push    ebp
0x7787E2: push    esi
0x7787E3: push    edi
0x7787E4: mov     esi, ecx
0x7787E6: xor     ebx, ebx
0x7787E8: push    offset NiRefObject_objcount; lpAddend
0x7787ED: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7787F3: mov     [esi+4], ebx
0x7787F6: call    dword ptr ds:0A28078h
0x7787FC: mov     dword ptr [esi], offset ??_7NiDX9IndexBufferManager@@6B@; const NiDX9IndexBufferManager::`vftable'
0x778802: lea     edi, [esi+1Ch]
0x778805: xor     ecx, ecx
0x778807: mov     eax, 25h ; '%'
0x77880C: mov     [edi+4], eax
0x77880F: mov     edx, 4
0x778814: mul     edx
0x778816: seto    cl
0x778819: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x77881F: mov     [edi+0Ch], ebx
0x778822: neg     ecx
0x778824: or      ecx, eax
0x778826: push    ecx; Size
0x778827: call    FormHeapAlloc
0x77882C: mov     ecx, [edi+4]
0x77882F: add     ecx, ecx
0x778831: add     ecx, ecx
0x778833: push    ecx
0x778834: push    ebx
0x778835: push    eax
0x778836: mov     [edi+8], eax
0x778839: call    __memset
0x77883E: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778844: lea     ebp, [esi+2Ch]
0x778847: xor     ecx, ecx
0x778849: mov     eax, 25h ; '%'
0x77884E: mov     [ebp+4], eax
0x778851: mov     edx, 4
0x778856: mul     edx
0x778858: seto    cl
0x77885B: mov     dword ptr [ebp+0], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778862: mov     [ebp+0Ch], ebx
0x778865: neg     ecx
0x778867: or      ecx, eax
0x778869: push    ecx; Size
0x77886A: call    FormHeapAlloc
0x77886F: mov     ecx, [ebp+4]
0x778872: add     ecx, ecx
0x778874: add     ecx, ecx
0x778876: push    ecx
0x778877: push    ebx
0x778878: push    eax
0x778879: mov     [ebp+8], eax
0x77887C: call    __memset
0x778881: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x778888: lea     ebx, [esi+3Ch]
0x77888B: xor     ecx, ecx
0x77888D: mov     eax, 25h ; '%'
0x778892: mov     [ebx+4], eax
0x778895: mov     edx, 4
0x77889A: mul     edx
0x77889C: seto    cl
0x77889F: mov     dword ptr [ebx], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x7788A5: mov     dword ptr [ebx+0Ch], 0
0x7788AC: neg     ecx
0x7788AE: or      ecx, eax
0x7788B0: push    ecx; Size
0x7788B1: call    FormHeapAlloc
0x7788B6: mov     ecx, [ebx+4]
0x7788B9: add     ecx, ecx
0x7788BB: add     ecx, ecx
0x7788BD: push    ecx
0x7788BE: push    0
0x7788C0: push    eax
0x7788C1: mov     [ebx+8], eax
0x7788C4: call    __memset
0x7788C9: mov     eax, [esp+40h+arg_0]
0x7788CD: mov     dword ptr [ebx], offset ??_7?$NiTPointerMap@IPAVNiDX9IBInfo@NiDX9IndexBufferManager@@@@6B@; const NiTPointerMap<uint,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'
0x7788D3: mov     [esi+8], eax
0x7788D6: mov     edx, [eax]
0x7788D8: add     esp, 30h
0x7788DB: push    eax
0x7788DC: mov     eax, [edx+4]
0x7788DF: call    eax
0x7788E1: xor     eax, eax
0x7788E3: mov     ecx, edi
0x7788E5: mov     [esi+0Ch], eax
0x7788E8: mov     [esi+10h], eax
0x7788EB: mov     [esi+14h], eax
0x7788EE: mov     [esi+18h], eax
0x7788F1: call    NiTMap_Clear
0x7788F6: mov     ecx, ebp
0x7788F8: call    NiTMap_Clear
0x7788FD: mov     ecx, ebx
0x7788FF: call    NiTMap_Clear
0x778904: pop     edi
0x778905: mov     eax, esi
0x778907: pop     esi
0x778908: pop     ebp
0x778909: pop     ebx
0x77890A: retn    4
