0x761A30: push    esi
0x761A31: mov     esi, ecx
0x761A33: mov     eax, [esi+60h]
0x761A36: mov     dword ptr [esi], offset ??_7NiDX9RenderedTextureData@@6B@; const NiDX9RenderedTextureData::`vftable'
0x761A3C: sub     ds:0B42064h, eax
0x761A42: mov     ecx, [esi+60h]
0x761A45: mov     eax, ecx
0x761A47: and     eax, 0FFFFF000h
0x761A4C: xor     edx, edx
0x761A4E: cmp     eax, ecx
0x761A50: jz      short loc_761A5B
0x761A52: sub     eax, ecx
0x761A54: add     eax, 1000h
0x761A59: mov     edx, eax
0x761A5B: sub     ds:0B42068h, edx
0x761A61: mov     ecx, [esi+8]
0x761A64: mov     edx, [ecx]
0x761A66: mov     eax, [esi+4]
0x761A69: mov     edx, [edx+180h]
0x761A6F: push    eax
0x761A70: call    edx
0x761A72: mov     ecx, esi; this
0x761A74: call    NiDX9TextureData__Release
0x761A79: test    [esp+4+arg_0], 1
0x761A7E: jz      short loc_761A89
0x761A80: push    esi
0x761A81: call    FormHeapFree
0x761A86: add     esp, 4
0x761A89: mov     eax, esi
0x761A8B: pop     esi
0x761A8C: retn    4
