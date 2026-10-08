0x6B9660: push    0FFFFFFFFh
0x6B9662: push    offset ??1?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@UAE@XZ_SEH
0x6B9667: mov     eax, large fs:0
0x6B966D: push    eax
0x6B966E: push    ecx
0x6B966F: push    esi
0x6B9670: mov     eax, ds:0B30AACh
0x6B9675: xor     eax, esp
0x6B9677: push    eax
0x6B9678: lea     eax, [esp+18h+var_C]
0x6B967C: mov     large fs:0, eax
0x6B9682: mov     esi, ecx
0x6B9684: mov     [esp+18h+var_10], esi
0x6B9688: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B968E: mov     [esp+18h+var_4], 0
0x6B9696: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x6B969B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B96A1: mov     ecx, [esp+18h+var_C]
0x6B96A5: mov     large fs:0, ecx
0x6B96AC: pop     ecx
0x6B96AD: pop     esi
0x6B96AE: add     esp, 10h
0x6B96B1: retn
0x6B95E0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B95E6: retn
0x9C7020: mov     ecx, [ebp-10h]
0x9C7023: jmp     loc_6B95E0
0x9C7028: mov     edx, [esp+arg_4]
0x9C702C: lea     eax, [edx-8]
0x9C702F: mov     ecx, [edx-0Ch]
0x9C7032: xor     ecx, eax
0x9C7034: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7039: mov     eax, offset stru_AEF4A4
0x9C703E: jmp     ___CxxFrameHandler3
