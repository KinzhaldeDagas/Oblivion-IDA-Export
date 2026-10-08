0x7AA7A0: push    0FFFFFFFFh
0x7AA7A2: push    offset ??1?$NiTPointerList@PAVShadowVolumeRPList@BSShaderAccumulator@@@@UAE@XZ_SEH
0x7AA7A7: mov     eax, large fs:0
0x7AA7AD: push    eax
0x7AA7AE: push    ecx
0x7AA7AF: push    esi
0x7AA7B0: mov     eax, ds:0B30AACh
0x7AA7B5: xor     eax, esp
0x7AA7B7: push    eax
0x7AA7B8: lea     eax, [esp+18h+var_C]
0x7AA7BC: mov     large fs:0, eax
0x7AA7C2: mov     esi, ecx
0x7AA7C4: mov     [esp+18h+var_10], esi
0x7AA7C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AA7CE: mov     [esp+18h+var_4], 0
0x7AA7D6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7AA7DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AA7E1: mov     ecx, [esp+18h+var_C]
0x7AA7E5: mov     large fs:0, ecx
0x7AA7EC: pop     ecx
0x7AA7ED: pop     esi
0x7AA7EE: add     esp, 10h
0x7AA7F1: retn
0x7A9B30: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7A9B36: retn
0x9CD130: mov     ecx, [ebp-10h]
0x9CD133: jmp     loc_7A9B30
0x9CD138: mov     edx, [esp+arg_4]
0x9CD13C: lea     eax, [edx-8]
0x9CD13F: mov     ecx, [edx-0Ch]
0x9CD142: xor     ecx, eax
0x9CD144: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD149: mov     eax, offset stru_AF64FC
0x9CD14E: jmp     ___CxxFrameHandler3
