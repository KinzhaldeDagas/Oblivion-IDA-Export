0x708D10: push    0FFFFFFFFh
0x708D12: push    offset ??1?$NiTPointerList@PAVNiNode@@@@UAE@XZ_SEH
0x708D17: mov     eax, large fs:0
0x708D1D: push    eax
0x708D1E: push    ecx
0x708D1F: push    esi
0x708D20: mov     eax, ds:0B30AACh
0x708D25: xor     eax, esp
0x708D27: push    eax
0x708D28: lea     eax, [esp+18h+var_C]
0x708D2C: mov     large fs:0, eax
0x708D32: mov     esi, ecx
0x708D34: mov     [esp+18h+var_10], esi
0x708D38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708D3E: mov     [esp+18h+var_4], 0
0x708D46: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x708D4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708D51: mov     ecx, [esp+18h+var_C]
0x708D55: mov     large fs:0, ecx
0x708D5C: pop     ecx
0x708D5D: pop     esi
0x708D5E: add     esp, 10h
0x708D61: retn
0x708B50: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708B56: retn
0x9C97D0: mov     ecx, [ebp-10h]
0x9C97D3: jmp     loc_708B50
0x9C97D8: mov     edx, [esp+arg_4]
0x9C97DC: lea     eax, [edx-8]
0x9C97DF: mov     ecx, [edx-0Ch]
0x9C97E2: xor     ecx, eax
0x9C97E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C97E9: mov     eax, offset stru_AF2064
0x9C97EE: jmp     ___CxxFrameHandler3
