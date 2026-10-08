0x764770: push    ebx; DX9 compatible-surface selector: convert the render-target pixel format, query device-format capabilities, choose a compatible depth/stencil D3DFORMAT, and return its NiSurfaceData.
0x764771: mov     ebx, [esp+4+pixelFormat]
0x764775: test    ebx, ebx
0x764777: push    esi
0x764778: mov     esi, ecx
0x76477A: jnz     short loc_764783
0x76477C: pop     esi
0x76477D: xor     eax, eax
0x76477F: pop     ebx
0x764780: retn    0Ch
0x764783: mov     ecx, [esi+878h]
0x764789: mov     eax, [ecx]
0x76478B: mov     edx, [eax+80h]
0x764791: push    edi
0x764792: push    0
0x764794: call    edx
0x764796: push    eax
0x764797: push    offset stru_B4265C
0x76479C: call    sub_497DD0
0x7647A1: push    ebx; pixelFormat
0x7647A2: mov     edi, eax
0x7647A4: call    NiDX9Renderer_ConvertPixelFormatToD3DFormat; Converts an Oblivion/Gamebryo NiPixelFormat into D3DFORMAT. Honors an explicit format at +0x0C; otherwise maps channel masks, bit depth, compressed DXT1/3/5, float, luminance, palette, and depth/stencil layouts. Returns D3DFMT_UNKNOWN for unsupported layouts.
0x7647A9: mov     ecx, [esp+18h+desiredStencilBits]
0x7647AD: mov     edx, [esp+18h+desiredDepthBits]
0x7647B1: add     esp, 0Ch
0x7647B4: push    ecx
0x7647B5: mov     ecx, [esi+5D0h]
0x7647BB: push    edx
0x7647BC: push    eax
0x7647BD: mov     eax, [edi+1Ch]
0x7647C0: push    eax
0x7647C1: call    NiDX9DeviceDesc_SelectCompatibleDepthStencilFormat; Select a compatible depth/stencil format from cached DX9 device capabilities. For a surface request above 16 depth bits, normalize the selection target to 24 depth bits and 8 stencil bits.
0x7647C6: test    eax, eax
0x7647C8: pop     edi
0x7647C9: jz      short loc_76477C
0x7647CB: push    eax; a1
0x7647CC: call    CreateSurfaceData
0x7647D1: add     esp, 4
0x7647D4: pop     esi
0x7647D5: pop     ebx
0x7647D6: retn    0Ch
