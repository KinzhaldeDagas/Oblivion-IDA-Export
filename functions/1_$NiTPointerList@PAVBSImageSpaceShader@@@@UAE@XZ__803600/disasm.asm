0x803600: push    0FFFFFFFFh
0x803602: push    offset ??1?$NiTPointerList@PAVBSImageSpaceShader@@@@UAE@XZ_SEH
0x803607: mov     eax, large fs:0
0x80360D: push    eax
0x80360E: push    ecx
0x80360F: push    esi
0x803610: mov     eax, ds:0B30AACh
0x803615: xor     eax, esp
0x803617: push    eax
0x803618: lea     eax, [esp+18h+var_C]
0x80361C: mov     large fs:0, eax
0x803622: mov     esi, ecx
0x803624: mov     [esp+18h+var_10], esi
0x803628: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVBSImageSpaceShader@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSImageSpaceShader *>::`vftable'
0x80362E: mov     [esp+18h+var_4], 0
0x803636: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x80363B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSImageSpaceShader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSImageSpaceShader *>::`vftable'
0x803641: mov     ecx, [esp+18h+var_C]
0x803645: mov     large fs:0, ecx
0x80364C: pop     ecx
0x80364D: pop     esi
0x80364E: add     esp, 10h
0x803651: retn
0x8033A0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSImageSpaceShader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSImageSpaceShader *>::`vftable'
0x8033A6: retn
0x9D0900: mov     ecx, [ebp-10h]
0x9D0903: jmp     loc_8033A0
0x9D0908: mov     edx, [esp+arg_4]
0x9D090C: lea     eax, [edx-8]
0x9D090F: mov     ecx, [edx-0Ch]
0x9D0912: xor     ecx, eax
0x9D0914: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0919: mov     eax, offset stru_AF91F4
0x9D091E: jmp     ___CxxFrameHandler3
