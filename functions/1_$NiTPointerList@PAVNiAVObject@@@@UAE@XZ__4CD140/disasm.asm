0x4CD140: push    0FFFFFFFFh
0x4CD142: push    offset ??1?$NiTPointerList@PAVNiAVObject@@@@UAE@XZ_SEH
0x4CD147: mov     eax, large fs:0
0x4CD14D: push    eax
0x4CD14E: push    ecx
0x4CD14F: push    esi
0x4CD150: mov     eax, ds:0B30AACh
0x4CD155: xor     eax, esp
0x4CD157: push    eax
0x4CD158: lea     eax, [esp+18h+var_C]
0x4CD15C: mov     large fs:0, eax
0x4CD162: mov     esi, ecx
0x4CD164: mov     [esp+18h+var_10], esi
0x4CD168: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>::`vftable'
0x4CD16E: mov     [esp+18h+var_4], 0
0x4CD176: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x4CD17B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiAVObject *>::`vftable'
0x4CD181: mov     ecx, [esp+18h+var_C]
0x4CD185: mov     large fs:0, ecx
0x4CD18C: pop     ecx
0x4CD18D: pop     esi
0x4CD18E: add     esp, 10h
0x4CD191: retn
0x4CA150: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiAVObject *>::`vftable'
0x4CA156: retn
0x9B5230: mov     ecx, [ebp-10h]
0x9B5233: jmp     loc_4CA150
0x9B5238: mov     edx, [esp+arg_4]
0x9B523C: lea     eax, [edx-8]
0x9B523F: mov     ecx, [edx-0Ch]
0x9B5242: xor     ecx, eax
0x9B5244: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5249: mov     eax, offset stru_AE03EC
0x9B524E: jmp     ___CxxFrameHandler3
