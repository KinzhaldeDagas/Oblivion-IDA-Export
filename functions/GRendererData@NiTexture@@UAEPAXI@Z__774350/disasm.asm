0x774350: test    byte ptr [esp+arg_0], 1
0x774355: push    esi
0x774356: mov     esi, ecx
0x774358: mov     dword ptr [esi], offset ??_7RendererData@NiTexture@@6B@; const NiTexture::RendererData::`vftable'
0x77435E: jz      short loc_774369
0x774360: push    esi
0x774361: call    FormHeapFree
0x774366: add     esp, 4
0x774369: mov     eax, esi
0x77436B: pop     esi
0x77436C: retn    4
