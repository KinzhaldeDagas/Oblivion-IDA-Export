0x707C10: push    0FFFFFFFFh
0x707C12: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiProperty@@@@@@UAE@XZ_SEH
0x707C17: mov     eax, large fs:0
0x707C1D: push    eax
0x707C1E: push    ecx
0x707C1F: push    esi
0x707C20: mov     eax, ds:0B30AACh
0x707C25: xor     eax, esp
0x707C27: push    eax
0x707C28: lea     eax, [esp+18h+var_C]
0x707C2C: mov     large fs:0, eax
0x707C32: mov     esi, ecx
0x707C34: mov     [esp+18h+var_10], esi
0x707C38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x707C3E: mov     [esp+18h+var_4], 0
0x707C46: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x707C4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x707C51: mov     ecx, [esp+18h+var_C]
0x707C55: mov     large fs:0, ecx
0x707C5C: pop     ecx
0x707C5D: pop     esi
0x707C5E: add     esp, 10h
0x707C61: retn
0x707440: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x707446: retn
0x9C96F0: mov     ecx, [ebp-10h]
0x9C96F3: jmp     loc_707440
0x9C96F8: mov     edx, [esp+arg_4]
0x9C96FC: lea     eax, [edx-8]
0x9C96FF: mov     ecx, [edx-0Ch]
0x9C9702: xor     ecx, eax
0x9C9704: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9709: mov     eax, offset stru_AF1F8C
0x9C970E: jmp     ___CxxFrameHandler3
