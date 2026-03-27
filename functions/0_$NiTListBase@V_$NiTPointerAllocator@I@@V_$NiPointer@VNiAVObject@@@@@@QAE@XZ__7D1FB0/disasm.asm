0x7D1FB0: test    [esp+arg_0], 1
0x7D1FB5: push    esi
0x7D1FB6: mov     esi, ecx
0x7D1FB8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D1FBE: jz      short loc_7D1FC9
0x7D1FC0: push    esi
0x7D1FC1: call    FormHeapFree
0x7D1FC6: add     esp, 4
0x7D1FC9: mov     eax, esi
0x7D1FCB: pop     esi
0x7D1FCC: retn    4
