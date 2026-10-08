0x5C11E0: push    0FFFFFFFFh
0x5C11E2: push    offset ??1?$NiTPointerList@PAVTESForm@@@@UAE@XZ_SEH
0x5C11E7: mov     eax, large fs:0
0x5C11ED: push    eax
0x5C11EE: push    ecx
0x5C11EF: push    esi
0x5C11F0: mov     eax, ds:0B30AACh
0x5C11F5: xor     eax, esp
0x5C11F7: push    eax
0x5C11F8: lea     eax, [esp+18h+var_C]
0x5C11FC: mov     large fs:0, eax
0x5C1202: mov     esi, ecx
0x5C1204: mov     [esp+18h+var_10], esi
0x5C1208: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVTESForm@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,TESForm *>::`vftable'
0x5C120E: mov     [esp+18h+var_4], 0
0x5C1216: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5C121B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVTESForm@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,TESForm *>::`vftable'
0x5C1221: mov     ecx, [esp+18h+var_C]
0x5C1225: mov     large fs:0, ecx
0x5C122C: pop     ecx
0x5C122D: pop     esi
0x5C122E: add     esp, 10h
0x5C1231: retn
0x5C0CB0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVTESForm@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,TESForm *>::`vftable'
0x5C0CB6: retn
0x9C0EF0: mov     ecx, [ebp-10h]
0x9C0EF3: jmp     loc_5C0CB0
0x9C0EF8: mov     edx, [esp+arg_4]
0x9C0EFC: lea     eax, [edx-8]
0x9C0EFF: mov     ecx, [edx-0Ch]
0x9C0F02: xor     ecx, eax
0x9C0F04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0F09: mov     eax, offset stru_AEA024
0x9C0F0E: jmp     ___CxxFrameHandler3
