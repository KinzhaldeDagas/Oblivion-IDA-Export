0x588A40: test    [esp+arg_0], 1
0x588A45: push    esi
0x588A46: mov     esi, ecx
0x588A48: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@M@@M@@6B@; const NiTListBase<DFALL<float>,float>::`vftable'
0x588A4E: jz      short loc_588A59
0x588A50: push    esi
0x588A51: call    FormHeapFree
0x588A56: add     esp, 4
0x588A59: mov     eax, esi
0x588A5B: pop     esi
0x588A5C: retn    4
