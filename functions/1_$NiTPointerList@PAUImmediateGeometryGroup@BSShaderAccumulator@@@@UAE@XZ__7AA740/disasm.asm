0x7AA740: push    0FFFFFFFFh
0x7AA742: push    offset ??1?$NiTPointerList@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@UAE@XZ_SEH
0x7AA747: mov     eax, large fs:0
0x7AA74D: push    eax
0x7AA74E: push    ecx
0x7AA74F: push    esi
0x7AA750: mov     eax, ds:0B30AACh
0x7AA755: xor     eax, esp
0x7AA757: push    eax
0x7AA758: lea     eax, [esp+18h+var_C]
0x7AA75C: mov     large fs:0, eax
0x7AA762: mov     esi, ecx
0x7AA764: mov     [esp+18h+var_10], esi
0x7AA768: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7AA76E: mov     [esp+18h+var_4], 0
0x7AA776: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7AA77B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7AA781: mov     ecx, [esp+18h+var_C]
0x7AA785: mov     large fs:0, ecx
0x7AA78C: pop     ecx
0x7AA78D: pop     esi
0x7AA78E: add     esp, 10h
0x7AA791: retn
0x7A9B20: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7A9B26: retn
0x9CD100: mov     ecx, [ebp-10h]
0x9CD103: jmp     loc_7A9B20
0x9CD108: mov     edx, [esp+arg_4]
0x9CD10C: lea     eax, [edx-8]
0x9CD10F: mov     ecx, [edx-0Ch]
0x9CD112: xor     ecx, eax
0x9CD114: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD119: mov     eax, offset stru_AF64D0
0x9CD11E: jmp     ___CxxFrameHandler3
