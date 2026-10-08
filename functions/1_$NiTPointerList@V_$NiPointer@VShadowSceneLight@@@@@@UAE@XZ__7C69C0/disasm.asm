0x7C69C0: push    0FFFFFFFFh
0x7C69C2: push    offset ??1?$NiTPointerList@V?$NiPointer@VShadowSceneLight@@@@@@UAE@XZ_SEH
0x7C69C7: mov     eax, large fs:0
0x7C69CD: push    eax
0x7C69CE: push    ecx
0x7C69CF: push    esi
0x7C69D0: mov     eax, ds:0B30AACh
0x7C69D5: xor     eax, esp
0x7C69D7: push    eax
0x7C69D8: lea     eax, [esp+18h+var_C]
0x7C69DC: mov     large fs:0, eax
0x7C69E2: mov     esi, ecx
0x7C69E4: mov     [esp+18h+var_10], esi
0x7C69E8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<ShadowSceneLight>>::`vftable'
0x7C69EE: mov     [esp+18h+var_4], 0
0x7C69F6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C69FB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<ShadowSceneLight>>::`vftable'
0x7C6A01: mov     ecx, [esp+18h+var_C]
0x7C6A05: mov     large fs:0, ecx
0x7C6A0C: pop     ecx
0x7C6A0D: pop     esi
0x7C6A0E: add     esp, 10h
0x7C6A11: retn
0x7C59B0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VShadowSceneLight@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<ShadowSceneLight>>::`vftable'
0x7C59B6: retn
0x9CE6D0: mov     ecx, [ebp-10h]
0x9CE6D3: jmp     loc_7C59B0
0x9CE6D8: mov     edx, [esp+arg_4]
0x9CE6DC: lea     eax, [edx-8]
0x9CE6DF: mov     ecx, [edx-0Ch]
0x9CE6E2: xor     ecx, eax
0x9CE6E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE6E9: mov     eax, offset stru_AF7670
0x9CE6EE: jmp     ___CxxFrameHandler3
