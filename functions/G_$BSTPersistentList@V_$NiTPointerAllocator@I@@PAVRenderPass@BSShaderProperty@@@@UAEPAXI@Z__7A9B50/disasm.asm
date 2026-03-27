0x7A9B50: test    [esp+arg_0], 1
0x7A9B55: push    esi
0x7A9B56: mov     esi, ecx
0x7A9B58: mov     dword ptr [esi], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7A9B5E: jz      short loc_7A9B69
0x7A9B60: push    esi
0x7A9B61: call    FormHeapFree
0x7A9B66: add     esp, 4
0x7A9B69: mov     eax, esi
0x7A9B6B: pop     esi
0x7A9B6C: retn    4
