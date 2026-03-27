0x6F9AB0: push    esi
0x6F9AB1: mov     esi, ecx
0x6F9AB3: xor     ecx, ecx
0x6F9AB5: mov     dword ptr [esi], offset ??_7BSNodeReferences@@6B@; const BSNodeReferences::`vftable'
0x6F9ABB: xor     eax, eax
0x6F9ABD: cmp     [esi+12h], cx
0x6F9AC1: jbe     short loc_6F9AD7
0x6F9AC3: push    edi
0x6F9AC4: mov     edi, [esi+0Ch]
0x6F9AC7: movzx   edx, ax
0x6F9ACA: add     eax, 1
0x6F9ACD: mov     [edi+edx*4], ecx
0x6F9AD0: cmp     ax, [esi+12h]
0x6F9AD4: jb      short loc_6F9AC4
0x6F9AD6: pop     edi
0x6F9AD7: mov     [esi+12h], cx
0x6F9ADB: mov     [esi+14h], cx
0x6F9ADF: mov     eax, [esi+0Ch]
0x6F9AE2: push    eax
0x6F9AE3: mov     dword ptr [esi+8], offset ??_7?$NiTArray@PAVNiAVObject@@@@6B@; const NiTArray<NiAVObject *>::`vftable'
0x6F9AEA: call    FormHeapFree
0x6F9AEF: add     esp, 4
0x6F9AF2: mov     ecx, esi
0x6F9AF4: pop     esi
0x6F9AF5: jmp     NiRefObject_destr
