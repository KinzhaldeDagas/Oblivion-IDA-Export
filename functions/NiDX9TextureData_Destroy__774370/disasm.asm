0x774370: push    esi
0x774371: mov     esi, ecx
0x774373: mov     eax, [esi+50h]
0x774376: test    eax, eax
0x774378: mov     dword ptr [esi], offset ??_7NiDX9TextureData@@6B@; const NiDX9TextureData::`vftable'
0x77437E: jz      short loc_7743A6
0x774380: mov     ecx, [esi+8]
0x774383: mov     ecx, [ecx+8ACh]
0x774389: mov     edx, [ecx]
0x77438B: push    eax
0x77438C: mov     eax, [edx+0E8h]
0x774392: call    eax
0x774394: mov     eax, [esi+50h]
0x774397: mov     ecx, [eax]
0x774399: mov     edx, [ecx+8]
0x77439C: push    eax
0x77439D: call    edx
0x77439F: mov     dword ptr [esi+50h], 0
0x7743A6: test    [esp+4+arg_0], 1
0x7743AB: mov     dword ptr [esi], offset ??_7RendererData@NiTexture@@6B@; const NiTexture::RendererData::`vftable'
0x7743B1: jz      short loc_7743BC
0x7743B3: push    esi
0x7743B4: call    FormHeapFree
0x7743B9: add     esp, 4
0x7743BC: mov     eax, esi
0x7743BE: pop     esi
0x7743BF: retn    4
