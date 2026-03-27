0x7743D0: push    esi
0x7743D1: mov     esi, ecx
0x7743D3: mov     eax, [esi+60h]
0x7743D6: mov     dword ptr [esi], offset ??_7NiDX9SourceCubeMapData@@6B@; const NiDX9SourceCubeMapData::`vftable'
0x7743DC: sub     ds:0B4283Ch, eax
0x7743E2: mov     ecx, [esi+60h]
0x7743E5: mov     eax, ecx
0x7743E7: and     eax, 0FFFFF000h
0x7743EC: xor     edx, edx
0x7743EE: cmp     eax, ecx
0x7743F0: jz      short loc_7743FB
0x7743F2: sub     eax, ecx
0x7743F4: add     eax, 1000h
0x7743F9: mov     edx, eax
0x7743FB: sub     ds:0B42840h, edx
0x774401: mov     ecx, esi; this
0x774403: call    ??1NiDX9SourceTextureData@@UAE@XZ; NiDX9SourceTextureData::~NiDX9SourceTextureData(void)
0x774408: test    [esp+4+arg_0], 1
0x77440D: jz      short loc_774418
0x77440F: push    esi
0x774410: call    FormHeapFree
0x774415: add     esp, 4
0x774418: mov     eax, esi
0x77441A: pop     esi
0x77441B: retn    4
