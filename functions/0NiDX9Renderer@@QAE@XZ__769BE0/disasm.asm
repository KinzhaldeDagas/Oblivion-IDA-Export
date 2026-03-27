0x769BE0: push    ebp
0x769BE1: push    esi
0x769BE2: push    edi
0x769BE3: mov     esi, ecx
0x769BE5: call    ??0NiRenderer@@QAE@XZ; NiRenderer::NiRenderer(void)
0x769BEA: mov     ebp, 25h ; '%'
0x769BEF: xor     ecx, ecx
0x769BF1: xor     edi, edi
0x769BF3: mov     eax, ebp
0x769BF5: mov     edx, 4
0x769BFA: mul     edx
0x769BFC: seto    cl
0x769BFF: mov     dword ptr [esi], offset ??_7NiDX9Renderer@@6B@; const NiDX9Renderer::`vftable'
0x769C05: mov     dword ptr [esi+604h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x769C0F: mov     [esi+608h], ebp
0x769C15: mov     [esi+610h], edi
0x769C1B: neg     ecx
0x769C1D: or      ecx, eax
0x769C1F: push    ecx; Size
0x769C20: call    FormHeapAlloc
0x769C25: mov     ecx, [esi+608h]
0x769C2B: add     ecx, ecx
0x769C2D: add     ecx, ecx
0x769C2F: push    ecx
0x769C30: push    edi
0x769C31: push    eax
0x769C32: mov     [esi+60Ch], eax
0x769C38: call    __memset
0x769C3D: mov     dword ptr [esi+604h], offset ??_7?$NiTPointerMap@PAVNiVBBlock@@PAVPrePackObject@NiDX9Renderer@@@@6B@; const NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'
0x769C47: mov     [esi+624h], edi
0x769C4D: xor     eax, eax
0x769C4F: mov     [esi+864h], eax
0x769C55: mov     [esi+868h], eax
0x769C5B: mov     [esi+86Ch], eax
0x769C61: mov     [esi+870h], eax
0x769C67: xor     ecx, ecx
0x769C69: mov     eax, ebp
0x769C6B: mov     edx, 4
0x769C70: mul     edx
0x769C72: seto    cl
0x769C75: mov     dword ptr [esi+884h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x769C7F: mov     [esi+888h], ebp
0x769C85: mov     [esi+890h], edi
0x769C8B: neg     ecx
0x769C8D: or      ecx, eax
0x769C8F: push    ecx; Size
0x769C90: call    FormHeapAlloc
0x769C95: mov     ecx, [esi+888h]
0x769C9B: add     ecx, ecx
0x769C9D: add     ecx, ecx
0x769C9F: push    ecx
0x769CA0: push    edi
0x769CA1: push    eax
0x769CA2: mov     [esi+88Ch], eax
0x769CA8: call    __memset
0x769CAD: xor     ecx, ecx
0x769CAF: mov     eax, ebp
0x769CB1: mov     edx, 4
0x769CB6: mul     edx
0x769CB8: seto    cl
0x769CBB: mov     dword ptr [esi+884h], offset ??_7?$NiTPointerMap@PAUHWND__@@V?$NiPointer@VNiRenderTargetGroup@@@@@@6B@; const NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'
0x769CC5: mov     [esi+89Ch], edi
0x769CCB: mov     dword ptr [esi+8C0h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x769CD5: mov     [esi+8C4h], ebp
0x769CDB: mov     [esi+8CCh], edi
0x769CE1: neg     ecx
0x769CE3: or      ecx, eax
0x769CE5: push    ecx; Size
0x769CE6: call    FormHeapAlloc
0x769CEB: mov     ecx, [esi+8C4h]
0x769CF1: add     ecx, ecx
0x769CF3: add     ecx, ecx
0x769CF5: push    ecx
0x769CF6: push    edi
0x769CF7: push    eax
0x769CF8: mov     [esi+8C8h], eax
0x769CFE: call    __memset
0x769D03: mov     dword ptr [esi+8C0h], offset ??_7?$NiTPointerMap@PAVNiRenderedTexture@@PAVNiDX9RenderedTextureData@@@@6B@; const NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'
0x769D0D: mov     dword ptr [esi+8D0h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x769D17: mov     [esi+8D4h], ebp
0x769D1D: mov     [esi+8DCh], edi
0x769D23: xor     ecx, ecx
0x769D25: mov     eax, ebp
0x769D27: mov     edx, 4
0x769D2C: mul     edx
0x769D2E: seto    cl
0x769D31: neg     ecx
0x769D33: or      ecx, eax
0x769D35: push    ecx; Size
0x769D36: call    FormHeapAlloc
0x769D3B: mov     ecx, [esi+8D4h]
0x769D41: add     ecx, ecx
0x769D43: add     ecx, ecx
0x769D45: push    ecx
0x769D46: push    edi
0x769D47: push    eax
0x769D48: mov     [esi+8D8h], eax
0x769D4E: call    __memset
0x769D53: xor     ecx, ecx
0x769D55: add     esp, 40h
0x769D58: mov     eax, ebp
0x769D5A: mov     edx, 4
0x769D5F: mul     edx
0x769D61: seto    cl
0x769D64: mov     dword ptr [esi+8D0h], offset ??_7?$NiTPointerMap@PAVNiRenderedCubeMap@@PAVNiDX9RenderedCubeMapData@@@@6B@; const NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'
0x769D6E: mov     dword ptr [esi+8E0h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x769D78: mov     [esi+8E4h], ebp
0x769D7E: mov     [esi+8ECh], edi
0x769D84: neg     ecx
0x769D86: or      ecx, eax
0x769D88: push    ecx; Size
0x769D89: call    FormHeapAlloc
0x769D8E: mov     ecx, [esi+8E4h]
0x769D94: add     ecx, ecx
0x769D96: add     ecx, ecx
0x769D98: push    ecx
0x769D99: push    edi
0x769D9A: push    eax
0x769D9B: mov     [esi+8E8h], eax
0x769DA1: call    __memset
0x769DA6: mov     dword ptr [esi+8E0h], offset ??_7?$NiTPointerMap@PAVNiDynamicTexture@@PAVNiDX9DynamicTextureData@@@@6B@; const NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'
0x769DB0: mov     [esi+8F0h], edi
0x769DB6: mov     [esi+900h], edi
0x769DBC: mov     [esi+8F8h], edi
0x769DC2: mov     [esi+8FCh], edi
0x769DC8: mov     dword ptr [esi+8F4h], offset ??_7?$NiTPointerList@V?$NiPointer@VNiDX92DBufferData@@@@@@6B@; const NiTPointerList<NiPointer<NiDX92DBufferData>>::`vftable'
0x769DD2: mov     [esi+910h], edi
0x769DD8: mov     [esi+908h], edi
0x769DDE: mov     [esi+90Ch], edi
0x769DE4: mov     dword ptr [esi+904h], offset ??_7?$NiTPointerList@PAVNiD3DShaderInterface@@@@6B@; const NiTPointerList<NiD3DShaderInterface *>::`vftable'
0x769DEE: mov     [esi+914h], edi
0x769DF4: mov     [esi+918h], edi
0x769DFA: mov     [esi+91Ch], edi
0x769E00: mov     [esi+920h], edi
0x769E06: mov     [esi+924h], edi
0x769E0C: mov     [esi+928h], edi
0x769E12: mov     [esi+92Ch], edi
0x769E18: mov     [esi+930h], edi
0x769E1E: mov     [esi+934h], edi
0x769E24: mov     [esi+938h], edi
0x769E2A: mov     [esi+0A94h], edi
0x769E30: mov     dword ptr [esi+0A98h], offset ??_7?$NiTArray@P6A_N_NPAX@Z@@6B@; const NiTArray<bool (*)(bool,void *)>::`vftable'
0x769E3A: mov     [esi+0AA0h], di
0x769E41: mov     [esi+0AA2h], di
0x769E48: mov     [esi+0AA4h], di
0x769E4F: mov     [esi+0A9Ch], edi
0x769E55: mov     eax, 1
0x769E5A: mov     [esi+0AA6h], ax
0x769E61: mov     [esi+0AB0h], di
0x769E68: mov     [esi+0AB6h], ax
0x769E6F: mov     [esi+0AB2h], di
0x769E76: mov     [esi+0AB4h], di
0x769E7D: mov     [esi+0AACh], edi
0x769E83: mov     ecx, offset ??_7?$NiTArray@PAX@@6B@; const NiTArray<void *>::`vftable'
0x769E88: mov     [esi+0AA8h], ecx
0x769E8E: add     esp, 10h
0x769E91: mov     dword ptr [esi+0AB8h], offset ??_7?$NiTArray@P6A_NPAX@Z@@6B@; const NiTArray<bool (*)(void *)>::`vftable'
0x769E9B: mov     [esi+0AC0h], di
0x769EA2: mov     [esi+0AC6h], ax
0x769EA9: mov     [esi+0AC2h], di
0x769EB0: mov     [esi+0AC4h], di
0x769EB7: mov     [esi+0ABCh], edi
0x769EBD: mov     [esi+0AC8h], ecx
0x769EC3: mov     ecx, esi
0x769EC5: mov     [esi+0AD0h], di
0x769ECC: mov     [esi+0AD6h], ax
0x769ED3: mov     [esi+0AD2h], di
0x769EDA: mov     [esi+0AD4h], di
0x769EE1: mov     [esi+0ACCh], edi
0x769EE7: call    sub_7641A0
0x769EEC: pop     edi
0x769EED: mov     eax, esi
0x769EEF: pop     esi
0x769EF0: pop     ebp
0x769EF1: retn
