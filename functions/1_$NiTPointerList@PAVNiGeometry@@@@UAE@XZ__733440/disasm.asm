0x733440: push    0FFFFFFFFh
0x733442: push    offset ??1?$NiTPointerList@PAVNiGeometry@@@@UAE@XZ_SEH
0x733447: mov     eax, large fs:0
0x73344D: push    eax
0x73344E: push    ecx
0x73344F: push    esi
0x733450: mov     eax, ds:0B30AACh
0x733455: xor     eax, esp
0x733457: push    eax
0x733458: lea     eax, [esp+18h+var_C]
0x73345C: mov     large fs:0, eax
0x733462: mov     esi, ecx
0x733464: mov     [esp+18h+var_10], esi
0x733468: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x73346E: mov     [esp+18h+var_4], 0
0x733476: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x73347B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x733481: mov     ecx, [esp+18h+var_C]
0x733485: mov     large fs:0, ecx
0x73348C: pop     ecx
0x73348D: pop     esi
0x73348E: add     esp, 10h
0x733491: retn
0x7332B0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7332B6: retn
0x9CA920: mov     ecx, [ebp-10h]
0x9CA923: jmp     loc_7332B0
0x9CA928: mov     edx, [esp+arg_4]
0x9CA92C: lea     eax, [edx-8]
0x9CA92F: mov     ecx, [edx-0Ch]
0x9CA932: xor     ecx, eax
0x9CA934: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA939: mov     eax, offset stru_AF2FAC
0x9CA93E: jmp     ___CxxFrameHandler3
