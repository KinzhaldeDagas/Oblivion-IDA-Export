0x70AE70: push    0FFFFFFFFh
0x70AE72: push    offset ??1?$NiTPointerList@PAVNiDynamicEffect@@@@UAE@XZ_SEH
0x70AE77: mov     eax, large fs:0
0x70AE7D: push    eax
0x70AE7E: push    ecx
0x70AE7F: push    esi
0x70AE80: mov     eax, ds:0B30AACh
0x70AE85: xor     eax, esp
0x70AE87: push    eax
0x70AE88: lea     eax, [esp+18h+var_C]
0x70AE8C: mov     large fs:0, eax
0x70AE92: mov     esi, ecx
0x70AE94: mov     [esp+18h+var_10], esi
0x70AE98: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x70AE9E: mov     [esp+18h+var_4], 0
0x70AEA6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x70AEAB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x70AEB1: mov     ecx, [esp+18h+var_C]
0x70AEB5: mov     large fs:0, ecx
0x70AEBC: pop     ecx
0x70AEBD: pop     esi
0x70AEBE: add     esp, 10h
0x70AEC1: retn
0x709F10: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x709F16: retn
0x9C9900: mov     ecx, [ebp-10h]
0x9C9903: jmp     loc_709F10
0x9C9908: mov     edx, [esp+arg_4]
0x9C990C: lea     eax, [edx-8]
0x9C990F: mov     ecx, [edx-0Ch]
0x9C9912: xor     ecx, eax
0x9C9914: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9919: mov     eax, offset stru_AF2170
0x9C991E: jmp     ___CxxFrameHandler3
