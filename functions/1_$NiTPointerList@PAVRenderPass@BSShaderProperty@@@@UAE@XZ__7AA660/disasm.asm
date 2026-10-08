0x7AA660: push    0FFFFFFFFh
0x7AA662: push    offset ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ_SEH
0x7AA667: mov     eax, large fs:0
0x7AA66D: push    eax
0x7AA66E: push    ecx
0x7AA66F: push    esi
0x7AA670: mov     eax, ds:0B30AACh
0x7AA675: xor     eax, esp
0x7AA677: push    eax
0x7AA678: lea     eax, [esp+18h+var_C]
0x7AA67C: mov     large fs:0, eax
0x7AA682: mov     esi, ecx
0x7AA684: mov     [esp+18h+var_10], esi
0x7AA688: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AA68E: mov     [esp+18h+var_4], 0
0x7AA696: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7AA69B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AA6A1: mov     ecx, [esp+18h+var_C]
0x7AA6A5: mov     large fs:0, ecx
0x7AA6AC: pop     ecx
0x7AA6AD: pop     esi
0x7AA6AE: add     esp, 10h
0x7AA6B1: retn
0x7A9AF0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7A9AF6: retn
0x9CD0A0: mov     ecx, [ebp-10h]
0x9CD0A3: jmp     loc_7A9AF0
0x9CD0A8: mov     edx, [esp+arg_4]
0x9CD0AC: lea     eax, [edx-8]
0x9CD0AF: mov     ecx, [edx-0Ch]
0x9CD0B2: xor     ecx, eax
0x9CD0B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD0B9: mov     eax, offset stru_AF6478
0x9CD0BE: jmp     ___CxxFrameHandler3
