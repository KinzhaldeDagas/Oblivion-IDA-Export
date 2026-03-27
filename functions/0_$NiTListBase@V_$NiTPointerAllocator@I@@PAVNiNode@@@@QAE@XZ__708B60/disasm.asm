0x708B60: test    [esp+arg_0], 1
0x708B65: push    esi
0x708B66: mov     esi, ecx
0x708B68: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708B6E: jz      short loc_708B79
0x708B70: push    esi
0x708B71: call    FormHeapFree
0x708B76: add     esp, 4
0x708B79: mov     eax, esi
0x708B7B: pop     esi
0x708B7C: retn    4
