0x50EBD0: push    0FFFFFFFFh
0x50EBD2: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiSourceTexture@@@@@@UAE@XZ_SEH
0x50EBD7: mov     eax, large fs:0
0x50EBDD: push    eax
0x50EBDE: push    ecx
0x50EBDF: push    esi
0x50EBE0: mov     eax, ds:0B30AACh
0x50EBE5: xor     eax, esp
0x50EBE7: push    eax
0x50EBE8: lea     eax, [esp+18h+var_C]
0x50EBEC: mov     large fs:0, eax
0x50EBF2: mov     esi, ecx
0x50EBF4: mov     [esp+18h+var_10], esi
0x50EBF8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiSourceTexture@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiSourceTexture>>::`vftable'
0x50EBFE: mov     [esp+18h+var_4], 0
0x50EC06: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x50EC0B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiSourceTexture@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiSourceTexture>>::`vftable'
0x50EC11: mov     ecx, [esp+18h+var_C]
0x50EC15: mov     large fs:0, ecx
0x50EC1C: pop     ecx
0x50EC1D: pop     esi
0x50EC1E: add     esp, 10h
0x50EC21: retn
0x9B6E60: mov     ecx, [ebp-10h]
0x9B6E63: jmp     sub_506ED0
0x9B6E68: mov     edx, [esp+arg_4]
0x9B6E6C: lea     eax, [edx-8]
0x9B6E6F: mov     ecx, [edx-0Ch]
0x9B6E72: xor     ecx, eax
0x9B6E74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6E79: mov     eax, offset stru_AE1B78
0x9B6E7E: jmp     ___CxxFrameHandler3
