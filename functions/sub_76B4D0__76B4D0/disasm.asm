0x76B4D0: push    esi
0x76B4D1: mov     esi, ecx
0x76B4D3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x76B4D9: call    NiTMap_Clear
0x76B4DE: mov     ecx, esi
0x76B4E0: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x76B4E6: call    NiTMap_Clear
0x76B4EB: mov     eax, [esi+8]
0x76B4EE: push    eax
0x76B4EF: call    FormHeapFree
0x76B4F4: add     esp, 4
0x76B4F7: test    [esp+4+arg_0], 1
0x76B4FC: jz      short loc_76B507
0x76B4FE: push    esi
0x76B4FF: call    FormHeapFree
0x76B504: add     esp, 4
0x76B507: mov     eax, esi
0x76B509: pop     esi
0x76B50A: retn    4
