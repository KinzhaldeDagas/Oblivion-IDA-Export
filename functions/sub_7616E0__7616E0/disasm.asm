0x7616E0: push    esi
0x7616E1: mov     esi, ecx
0x7616E3: mov     eax, [esi+60h]
0x7616E6: mov     dword ptr [esi], offset ??_7NiDX9RenderedTextureData@@6B@; const NiDX9RenderedTextureData::`vftable'
0x7616EC: sub     ds:0B42064h, eax
0x7616F2: mov     ecx, [esi+60h]
0x7616F5: mov     eax, ecx
0x7616F7: and     eax, 0FFFFF000h
0x7616FC: xor     edx, edx
0x7616FE: cmp     eax, ecx
0x761700: jz      short loc_76170B
0x761702: sub     eax, ecx
0x761704: add     eax, 1000h
0x761709: mov     edx, eax
0x76170B: sub     ds:0B42068h, edx
0x761711: mov     ecx, [esi+8]
0x761714: mov     edx, [ecx]
0x761716: mov     eax, [esi+4]
0x761719: mov     edx, [edx+180h]
0x76171F: push    eax
0x761720: call    edx
0x761722: mov     ecx, esi; this
0x761724: pop     esi
0x761725: jmp     NiDX9TextureData__Release
