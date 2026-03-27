0x7616A0: mov     eax, [esp+a3]
0x7616A4: push    esi
0x7616A5: mov     esi, ecx
0x7616A7: mov     ecx, [esp+4+a2]
0x7616AB: push    eax; a3
0x7616AC: push    ecx; a2
0x7616AD: mov     ecx, esi; this
0x7616AF: call    NiDX9TextureData__NiDX9TextureData
0x7616B4: mov     dword ptr [esi], offset ??_7NiDX9RenderedTextureData@@6B@; const NiDX9RenderedTextureData::`vftable'
0x7616BA: mov     dword ptr [esi+60h], 0
0x7616C1: mov     eax, esi
0x7616C3: pop     esi
0x7616C4: retn    8
