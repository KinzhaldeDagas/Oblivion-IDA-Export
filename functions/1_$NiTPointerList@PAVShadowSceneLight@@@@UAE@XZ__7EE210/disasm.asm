0x7EE210: push    0FFFFFFFFh
0x7EE212: push    offset ??1?$NiTPointerList@PAVShadowSceneLight@@@@UAE@XZ_SEH
0x7EE217: mov     eax, large fs:0
0x7EE21D: push    eax
0x7EE21E: push    ecx
0x7EE21F: push    esi
0x7EE220: mov     eax, ds:0B30AACh
0x7EE225: xor     eax, esp
0x7EE227: push    eax
0x7EE228: lea     eax, [esp+18h+var_C]
0x7EE22C: mov     large fs:0, eax
0x7EE232: mov     esi, ecx
0x7EE234: mov     [esp+18h+var_10], esi
0x7EE238: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7EE23E: mov     [esp+18h+var_4], 0
0x7EE246: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7EE24B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7EE251: mov     ecx, [esp+18h+var_C]
0x7EE255: mov     large fs:0, ecx
0x7EE25C: pop     ecx
0x7EE25D: pop     esi
0x7EE25E: add     esp, 10h
0x7EE261: retn
0x7ECC00: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowSceneLight@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ShadowSceneLight *>::`vftable'
0x7ECC06: retn
0x9CFB50: mov     ecx, [ebp-10h]
0x9CFB53: jmp     loc_7ECC00
0x9CFB58: mov     edx, [esp+arg_4]
0x9CFB5C: lea     eax, [edx-8]
0x9CFB5F: mov     ecx, [edx-0Ch]
0x9CFB62: xor     ecx, eax
0x9CFB64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFB69: mov     eax, offset stru_AF86B4
0x9CFB6E: jmp     ___CxxFrameHandler3
