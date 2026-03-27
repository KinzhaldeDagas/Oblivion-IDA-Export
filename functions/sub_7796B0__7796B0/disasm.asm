0x7796B0: push    esi
0x7796B1: mov     esi, ecx
0x7796B3: mov     ecx, [esi+8]
0x7796B6: mov     edx, [esi+4]
0x7796B9: mov     dword ptr [esi], offset ??_7NiDX9DynamicTextureData@@6B@; const NiDX9DynamicTextureData::`vftable'
0x7796BF: mov     eax, [ecx]
0x7796C1: mov     eax, [eax+184h]
0x7796C7: push    edx
0x7796C8: call    eax
0x7796CA: mov     ecx, esi; this
0x7796CC: call    NiDX9TextureData__Release
0x7796D1: test    [esp+4+arg_0], 1
0x7796D6: jz      short loc_7796E1
0x7796D8: push    esi
0x7796D9: call    FormHeapFree
0x7796DE: add     esp, 4
0x7796E1: mov     eax, esi
0x7796E3: pop     esi
0x7796E4: retn    4
