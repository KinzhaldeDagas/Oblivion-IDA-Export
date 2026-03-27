0x768AF0: push    esi
0x768AF1: mov     esi, ecx
0x768AF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x768AF9: call    NiTMap_Clear
0x768AFE: mov     eax, [esi+8]
0x768B01: push    eax
0x768B02: call    FormHeapFree
0x768B07: add     esp, 4
0x768B0A: test    [esp+4+arg_0], 1
0x768B0F: jz      short loc_768B1A
0x768B11: push    esi
0x768B12: call    FormHeapFree
0x768B17: add     esp, 4
0x768B1A: mov     eax, esi
0x768B1C: pop     esi
0x768B1D: retn    4
