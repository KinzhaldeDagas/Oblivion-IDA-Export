0x76B490: push    esi
0x76B491: mov     esi, ecx
0x76B493: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x76B499: call    NiTMap_Clear
0x76B49E: mov     ecx, esi
0x76B4A0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x76B4A6: call    NiTMap_Clear
0x76B4AB: mov     eax, [esi+8]
0x76B4AE: push    eax
0x76B4AF: call    FormHeapFree
0x76B4B4: add     esp, 4
0x76B4B7: test    [esp+4+arg_0], 1
0x76B4BC: jz      short loc_76B4C7
0x76B4BE: push    esi
0x76B4BF: call    FormHeapFree
0x76B4C4: add     esp, 4
0x76B4C7: mov     eax, esi
0x76B4C9: pop     esi
0x76B4CA: retn    4
