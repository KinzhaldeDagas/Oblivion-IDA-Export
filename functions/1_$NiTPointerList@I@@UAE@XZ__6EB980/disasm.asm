0x6EB980: push    0FFFFFFFFh
0x6EB982: push    offset ??1?$NiTPointerList@I@@UAE@XZ_SEH
0x6EB987: mov     eax, large fs:0
0x6EB98D: push    eax
0x6EB98E: push    ecx
0x6EB98F: push    esi
0x6EB990: mov     eax, ds:0B30AACh
0x6EB995: xor     eax, esp
0x6EB997: push    eax
0x6EB998: lea     eax, [esp+18h+var_C]
0x6EB99C: mov     large fs:0, eax
0x6EB9A2: mov     esi, ecx
0x6EB9A4: mov     [esp+18h+var_10], esi
0x6EB9A8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x6EB9AE: mov     [esp+18h+var_4], 0
0x6EB9B6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x6EB9BB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x6EB9C1: mov     ecx, [esp+18h+var_C]
0x6EB9C5: mov     large fs:0, ecx
0x6EB9CC: pop     ecx
0x6EB9CD: pop     esi
0x6EB9CE: add     esp, 10h
0x6EB9D1: retn
0x6EB950: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@I@@6B@; const NiTListBase<NiTPointerAllocator<uint>,uint>::`vftable'
0x6EB956: retn
0x9C8230: mov     ecx, [ebp-10h]
0x9C8233: jmp     loc_6EB950
0x9C8238: mov     edx, [esp+arg_4]
0x9C823C: lea     eax, [edx-8]
0x9C823F: mov     ecx, [edx-0Ch]
0x9C8242: xor     ecx, eax
0x9C8244: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8249: mov     eax, offset stru_AF04F4
0x9C824E: jmp     ___CxxFrameHandler3
