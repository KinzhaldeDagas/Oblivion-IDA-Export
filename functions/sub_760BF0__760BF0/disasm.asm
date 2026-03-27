0x760BF0: mov     eax, [esp+a3]
0x760BF4: push    esi
0x760BF5: mov     esi, ecx
0x760BF7: mov     ecx, [esp+4+a2]
0x760BFB: push    eax; a3
0x760BFC: push    ecx; a2
0x760BFD: mov     ecx, esi; this
0x760BFF: call    NiDX9TextureData__NiDX9TextureData
0x760C04: xor     eax, eax
0x760C06: mov     [esi+64h], al
0x760C09: mov     [esi+65h], al
0x760C0C: mov     [esi+68h], eax
0x760C0F: mov     dword ptr [esi], offset ??_7NiDX9SourceTextureData@@6B@; const NiDX9SourceTextureData::`vftable'
0x760C15: mov     [esi+6Ch], eax
0x760C18: mov     [esi+70h], eax
0x760C1B: mov     [esi+74h], eax
0x760C1E: mov     [esi+78h], eax
0x760C21: mov     [esi+60h], eax
0x760C24: mov     eax, esi
0x760C26: pop     esi
0x760C27: retn    8
