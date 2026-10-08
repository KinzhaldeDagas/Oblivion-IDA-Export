0x7D53F0: push    0FFFFFFFFh
0x7D53F2: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiAVObject@@@@@@UAE@XZ_SEH
0x7D53F7: mov     eax, large fs:0
0x7D53FD: push    eax
0x7D53FE: push    ecx
0x7D53FF: push    esi
0x7D5400: mov     eax, ds:0B30AACh
0x7D5405: xor     eax, esp
0x7D5407: push    eax
0x7D5408: lea     eax, [esp+18h+var_C]
0x7D540C: mov     large fs:0, eax
0x7D5412: mov     esi, ecx
0x7D5414: mov     [esp+18h+var_10], esi
0x7D5418: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D541E: mov     [esp+18h+var_4], 0
0x7D5426: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7D542B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D5431: mov     ecx, [esp+18h+var_C]
0x7D5435: mov     large fs:0, ecx
0x7D543C: pop     ecx
0x7D543D: pop     esi
0x7D543E: add     esp, 10h
0x7D5441: retn
0x7D1F80: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D1F86: retn
0x9CEB80: mov     ecx, [ebp-10h]
0x9CEB83: jmp     loc_7D1F80
0x9CEB88: mov     edx, [esp+arg_4]
0x9CEB8C: lea     eax, [edx-8]
0x9CEB8F: mov     ecx, [edx-0Ch]
0x9CEB92: xor     ecx, eax
0x9CEB94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CEB99: mov     eax, offset stru_AF7A20
0x9CEB9E: jmp     ___CxxFrameHandler3
