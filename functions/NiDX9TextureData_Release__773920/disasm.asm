0x773920: push    esi
0x773921: mov     esi, ecx
0x773923: mov     eax, [esi+50h]
0x773926: test    eax, eax
0x773928: mov     dword ptr [esi], offset ??_7NiDX9TextureData@@6B@; const NiDX9TextureData::`vftable'
0x77392E: jz      short loc_773956
0x773930: mov     ecx, [esi+8]
0x773933: mov     ecx, [ecx+8ACh]
0x773939: mov     edx, [ecx]
0x77393B: push    eax
0x77393C: mov     eax, [edx+0E8h]
0x773942: call    eax
0x773944: mov     eax, [esi+50h]
0x773947: mov     ecx, [eax]
0x773949: mov     edx, [ecx+8]
0x77394C: push    eax
0x77394D: call    edx
0x77394F: mov     dword ptr [esi+50h], 0
0x773956: mov     dword ptr [esi], offset ??_7RendererData@NiTexture@@6B@; const NiTexture::RendererData::`vftable'
0x77395C: pop     esi
0x77395D: retn
