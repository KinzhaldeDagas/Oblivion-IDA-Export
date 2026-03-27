0x7C1650: push    0FFFFFFFFh
0x7C1652: push    offset ??1?$NiTPointerList@V?$NiPointer@VBSRenderedTexture@@@@@@UAE@XZ_SEH
0x7C1657: mov     eax, large fs:0
0x7C165D: push    eax
0x7C165E: push    ecx
0x7C165F: push    esi
0x7C1660: mov     eax, ds:0B30AACh
0x7C1665: xor     eax, esp
0x7C1667: push    eax
0x7C1668: lea     eax, [esp+18h+var_C]
0x7C166C: mov     large fs:0, eax
0x7C1672: mov     esi, ecx
0x7C1674: mov     [esp+18h+var_10], esi
0x7C1678: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VBSRenderedTexture@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<BSRenderedTexture>>::`vftable'
0x7C167E: mov     [esp+18h+var_4], 0
0x7C1686: call    NiTPointerList__FreeAllNodes
0x7C168B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VBSRenderedTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<BSRenderedTexture>>::`vftable'
0x7C1691: mov     ecx, [esp+18h+var_C]
0x7C1695: mov     large fs:0, ecx
0x7C169C: pop     ecx
0x7C169D: pop     esi
0x7C169E: add     esp, 10h
0x7C16A1: retn
