0x7C15F0: push    0FFFFFFFFh
0x7C15F2: push    offset ??1?$NiTPointerList@PAURenderedTextureData@BSTextureManager@@@@UAE@XZ_SEH
0x7C15F7: mov     eax, large fs:0
0x7C15FD: push    eax
0x7C15FE: push    ecx
0x7C15FF: push    esi
0x7C1600: mov     eax, ds:0B30AACh
0x7C1605: xor     eax, esp
0x7C1607: push    eax
0x7C1608: lea     eax, [esp+18h+var_C]
0x7C160C: mov     large fs:0, eax
0x7C1612: mov     esi, ecx
0x7C1614: mov     [esp+18h+var_10], esi
0x7C1618: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAURenderedTextureData@BSTextureManager@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSTextureManager::RenderedTextureData *>::`vftable'
0x7C161E: mov     [esp+18h+var_4], 0
0x7C1626: call    NiTPointerList__FreeAllNodes
0x7C162B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAURenderedTextureData@BSTextureManager@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSTextureManager::RenderedTextureData *>::`vftable'
0x7C1631: mov     ecx, [esp+18h+var_C]
0x7C1635: mov     large fs:0, ecx
0x7C163C: pop     ecx
0x7C163D: pop     esi
0x7C163E: add     esp, 10h
0x7C1641: retn
