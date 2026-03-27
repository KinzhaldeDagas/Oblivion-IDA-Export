0x7B22A0: test    [esp+arg_0], 1
0x7B22A5: push    esi
0x7B22A6: mov     esi, ecx
0x7B22A8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVDistantLODGroup@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DistantLODGroup *>::`vftable'
0x7B22AE: jz      short loc_7B22B9
0x7B22B0: push    esi
0x7B22B1: call    FormHeapFree
0x7B22B6: add     esp, 4
0x7B22B9: mov     eax, esi
0x7B22BB: pop     esi
0x7B22BC: retn    4
