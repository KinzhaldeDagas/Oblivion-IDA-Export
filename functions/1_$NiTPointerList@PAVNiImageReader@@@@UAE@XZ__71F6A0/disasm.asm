0x71F6A0: push    0FFFFFFFFh
0x71F6A2: push    offset ??1?$NiTPointerList@PAVNiImageReader@@@@UAE@XZ_SEH
0x71F6A7: mov     eax, large fs:0
0x71F6AD: push    eax
0x71F6AE: push    ecx
0x71F6AF: push    esi
0x71F6B0: mov     eax, ds:0B30AACh
0x71F6B5: xor     eax, esp
0x71F6B7: push    eax
0x71F6B8: lea     eax, [esp+18h+var_C]
0x71F6BC: mov     large fs:0, eax
0x71F6C2: mov     esi, ecx
0x71F6C4: mov     [esp+18h+var_10], esi
0x71F6C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71F6CE: mov     [esp+18h+var_4], 0
0x71F6D6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x71F6DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71F6E1: mov     ecx, [esp+18h+var_C]
0x71F6E5: mov     large fs:0, ecx
0x71F6EC: pop     ecx
0x71F6ED: pop     esi
0x71F6EE: add     esp, 10h
0x71F6F1: retn
0x71E430: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71E436: retn
0x9CA0C0: mov     ecx, [ebp-10h]
0x9CA0C3: jmp     loc_71E430
0x9CA0C8: mov     edx, [esp+arg_4]
0x9CA0CC: lea     eax, [edx-8]
0x9CA0CF: mov     ecx, [edx-0Ch]
0x9CA0D2: xor     ecx, eax
0x9CA0D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA0D9: mov     eax, offset stru_AF286C
0x9CA0DE: jmp     ___CxxFrameHandler3
