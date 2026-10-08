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
0x7C1686: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C168B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VBSRenderedTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<BSRenderedTexture>>::`vftable'
0x7C1691: mov     ecx, [esp+18h+var_C]
0x7C1695: mov     large fs:0, ecx
0x7C169C: pop     ecx
0x7C169D: pop     esi
0x7C169E: add     esp, 10h
0x7C16A1: retn
0x7C1310: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VBSRenderedTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<BSRenderedTexture>>::`vftable'
0x7C1316: retn
0x9CE170: mov     ecx, [ebp-10h]
0x9CE173: jmp     loc_7C1310
0x9CE178: mov     edx, [esp+arg_4]
0x9CE17C: lea     eax, [edx-8]
0x9CE17F: mov     ecx, [edx-0Ch]
0x9CE182: xor     ecx, eax
0x9CE184: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE189: mov     eax, offset stru_AF71B8
0x9CE18E: jmp     ___CxxFrameHandler3
