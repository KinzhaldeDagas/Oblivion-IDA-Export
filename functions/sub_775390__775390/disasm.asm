0x775390: push    esi
0x775391: mov     esi, ecx
0x775393: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775399: call    NiTMap_Clear
0x77539E: mov     eax, [esi+8]
0x7753A1: push    eax
0x7753A2: call    FormHeapFree
0x7753A7: add     esp, 4
0x7753AA: test    [esp+4+arg_0], 1
0x7753AF: jz      short loc_7753BA
0x7753B1: push    esi
0x7753B2: call    FormHeapFree
0x7753B7: add     esp, 4
0x7753BA: mov     eax, esi
0x7753BC: pop     esi
0x7753BD: retn    4
